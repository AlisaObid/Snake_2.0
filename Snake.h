#ifndef SNAKE_H
#define SNAKE_H
#include <SFML/Graphics.hpp> 
#include <iostream>
#include <vector>
#include <string>

#include "Graphic.h"
#include "Map.h"

class Snake
{
public:
	Snake();
	void increaseSize(); //увеличить d
	int getSize();// показать d
	void Play(Graphic& graphic); //сама игра
private:
};

#endif 