
#include "ArcadeMachine/inc/WindowSettings.hpp"

#include "ArcadeMachine/inc/Board.hpp"
#include "TicTacToe/inc/Board.hpp"

int main()
{

    auto tttBoard = CreateBoard<TicTacToeBoard,3>();
    sf::RenderWindow window(sf::VideoMode(WindowSettings::resolution),WindowSettings::title);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
       //draw Shapes window.draw(shape);
        window.display();
    }

    return 0;
}