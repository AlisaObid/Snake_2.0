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
	while (window.isOpen()) // ���� ���� �������
	{
		window.clear(sf::Color(172, 242, 172)); //���� ����
		sf::Event event; //���������� �������� ������������
		//gr.draw(window, "������� ����� ������ ��� ������", 10, 10, 255, 255, 255);//����� ����� 
		while (window.pollEvent(event)) //���-�� ����������
		{
			if (event.type == sf::Event::Closed) //��������� �� ������������ ����
				window.close(); // ������� ����
			if (event.type == sf::Event::KeyReleased) //������ ����� ������ ��� ������
			{
				//break;
				cout << "+\n";
			}

		}
		smey z; //����� ������� ������ smey
		z.Game(window); //����� ������� Game
		window.display();
	}
}
//�������� ������� dplus � ����� smey � ������������ � ������� hod