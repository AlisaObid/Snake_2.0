#ifndef SNAKE_H
#define SNAKE_H
#include <SFML/Graphics.hpp> 
#include <iostream>
#include <vector>
#include <string>

class Snake
{
public:
	Snake();
	void increaseSize(); //��������� d
	int size();// �������� d
	void Game(sf::RenderWindow& window); //���� ����
private:
	int mX, mY;
	int mTime;
	int mSize;
};

#endif 