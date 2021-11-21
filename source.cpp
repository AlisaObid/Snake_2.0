#include <SFML/Graphics.hpp> 
#include <iostream>
#include <time.h>
#include <conio.h>
#include "mr_smey.h"
using namespace std;



//----------------------
#include "Graphic.h"
#include "Map.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1025, 1025), "SFML Works!");
	Graphic graphic(window);
	enum Direction { Up, Left, Down, Right };
	Map map;
	while (window.isOpen()) // пока окно открыто
	{
		window.clear();
		Direction dir;
		graphic.setBackground(sf::Color(15, 15, 15));
		sf::Event event; //показывает действи€ пользовател€
		while (window.pollEvent(event)) //что-то происходит
		{
			if (event.type == sf::Event::Closed) //закрывает ли пользователь окно
				window.close(); // закрыть окно
			if (event.type == sf::Event::KeyReleased && event.key.code == 'w') //вводим любой символ дл€ начала
			{
				dir = Direction::Up;
				cout << event.key.code;
			}

		}
		//smey z; //создание экземпл€ра класса smey
		//z.Game(window); //вызов функции Game
		map.draw(graphic);
		window.display();
	}
}
//добавить функцию dplus в класс smey и использовать в функции hod