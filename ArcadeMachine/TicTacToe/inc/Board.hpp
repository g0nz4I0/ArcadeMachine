#pragma once
#include "ArcadeMachine/inc/Board.hpp"


	class TFigure : public BaseFigure {
	public:
		char X		{ 'X' };
		char O		{ 'O' };
		char empty	{ ' ' };
	};


	class TicTacToeBoard : public Board<3>
	{
	public:
		TicTacToeBoard() = default;
		void RenderBoard()override;
		void RenderFigure(BaseFigure f)override;
	};

