#pragma once
#include "SFML/Graphics.hpp"

#include <array>
#include <memory>
#include<type_traits>

	class BaseFigure{
	public:
		char c{' '};
	};

	template<std::size_t N>
	class Board {
	public:
		using GenericSquare = std::unique_ptr<sf::Shape>;
		using EmptySquare = std::unique_ptr<sf::RectangleShape>;


		Board() = default;
		virtual void RenderBoard() = 0;
		virtual void RenderFigure(BaseFigure f) = 0;
	protected:
		static constexpr std::size_t row{N};
		static constexpr std::size_t col{N};
		std::array<std::array<GenericSquare, row>, col> renderedBoard{};
		std::array<std::array<BaseFigure, row>, col> board{};
	};


	template<typename T,std::size_t N>
	concept isBoard = std::is_base_of_v<Board<N>, T>;

	template<typename T,std::size_t N>
		requires isBoard<T,N>
	auto CreateBoard() {
		return std::make_unique<T>();
	}