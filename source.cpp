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
	enum Direction { Up, Left, Down, Right };
	while (window.isOpen()) // ���� ���� �������
	{
		Direction dir;
		graphic.setBackground(sf::Color(2, 2, 2));
		sf::Event event; //���������� �������� ������������
		while (window.pollEvent(event)) //���-�� ����������
		{
			if (event.type == sf::Event::Closed) //��������� �� ������������ ����
				window.close(); // ������� ����
			if (event.type == sf::Event::KeyReleased && event.key.code == 'w') //������ ����� ������ ��� ������
			{
				dir = Direction::Up;
				cout << event.key.code;
			}

		}
		//smey z; //�������� ���������� ������ smey
		//z.Game(window); //����� ������� Game

		window.display();
	}
}
//�������� ������� dplus � ����� smey � ������������ � ������� hod