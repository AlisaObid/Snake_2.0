#ifndef MAP_H
#define MAP_H
#include <SFML/Graphics.hpp> 
#include <iostream>
#include <vector>
#include <string>
#include <SFML/Graphics/RectangleShape.hpp>
#include "Snake.h"
#include "Graphic.h"

class Map
{
public:
	Map();
	void draw(Graphic &graphic);
	void hod(std::int16_t x, std::int16_t y);
	bool IF(char ch, int16_t x, int16_t y);
private:
	///Snake mSnake;
	std::vector<std::vector<int>> a; //карта
	std::vector<std::vector<int>> b; //номера €чеек змейки
};

#endif 