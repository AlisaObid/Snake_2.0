#ifndef QUEUE_H
#define QUEUE_H
#include <SFML/Graphics.hpp> 
#include <iostream>
#include <vector>
#include <string>

class Map
{
public:
	Map();
	void drow(sf::RenderWindow& window);
	void hod(std::int16_t x, std::int16_t y);
	bool IF(char ch, int16_t x, int16_t y);
private:
	std::vector<std::string> a; //�����
	std::vector<std::vector<int>> b; //������ ����� ������
};

class smey
{
public:
	smey();
	void Dplus(); //��������� d
	int D();// �������� d
	void Game(sf::RenderWindow& window); //���� ����
private:
	int x = 1, y = 1, t = 0, d = 1;
	char ch = 'd';
};

class Graf
{
public:
	Graf();
	void draw(sf::RenderWindow& window, std::string f,   //�������� �����
		std::int16_t x, std::int16_t y,
		std::int16_t a, std::int16_t b, std::int16_t c);
	void setString(sf::RenderWindow& window,    //endl
		std::int16_t x, std::int16_t y);
private:
	std::int16_t x;
	std::int16_t y;
	std::int16_t a;
	std::int16_t b;
	std::int16_t c;
	sf::Text text;
};
#endif 