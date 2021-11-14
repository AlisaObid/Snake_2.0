#include <SFML/Graphics.hpp> 
#include <iostream>
#include <time.h>
#include <conio.h>
#include "mr_smey.h"
using namespace std;



//----------------------
#include "Graphic.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1100, 1100), "SFML Works!");
	Graphic graphic(window);
	while (window.isOpen()) // пока окно открыто
	{
		window.clear(sf::Color(172, 242, 172)); //цвет фона
		sf::Event event; //показывает действия пользователя
		//gr.draw(window, "Введите любой символ для начала", 10, 10, 255, 255, 255);//рисую текст 
		while (window.pollEvent(event)) //что-то происходит
		{
			if (event.type == sf::Event::Closed) //закрывает ли пользователь окно
				window.close(); // закрыть окно
			if (event.type == sf::Event::KeyReleased) //вводим любой символ для начала
			{
				//break;
				cout << "+\n";
			}

		}
		smey z; //вызов функций класса smey
		z.Game(window); //вызов функции Game
		window.display();
	}
}
//добавить функцию dplus в класс smey и использовать в функции hod