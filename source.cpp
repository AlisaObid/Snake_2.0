#include <SFML/Graphics.hpp> 
#include <iostream>
#include <time.h>
#include <conio.h>
#include "Graphic.h"
#include "Map.h"
#include <chrono>
#include <future>

void timer() 
{
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_until(start + std::chrono::seconds(1));
}


int main()
{
	sf::RenderWindow window(sf::VideoMode(1025, 1025), "Alisa Studio Works!"); //��������� ���� sfml
	Graphic graphic(window); //��� ������ ������� ������ graphic
	Map map; //��� ������ ������� ������ map
	char mMove;
	auto old = std::chrono::high_resolution_clock::now();
	while (window.isOpen()) // ���� ���� �������
	{
		if (std::chrono::high_resolution_clock::now() > old + std::chrono::seconds(1)) //������ ���� ������� ����� ���������� �������� ������
		{
			map.Play(mMove, graphic); //������ �����
			old = std::chrono::high_resolution_clock::now();
		}

		window.clear(); //������� ���, ��� ���� �� ������
		graphic.SetBackground(sf::Color(15, 15, 15));
		sf::Event event; //���������� �������� ������������
		while (window.pollEvent(event)) //����� ���-�� ������
		{
			if (event.type == sf::Event::Closed) //��������� �� ������������ ����
				window.close(); // ������� ����
			if (event.type == sf::Event::KeyReleased) //������ ����� ������ ��� ������
			{
				mMove = event.key.code;
			}
		}
	}
}
//�������� ������� dplus � ����� smey � ������������ � ������� hod