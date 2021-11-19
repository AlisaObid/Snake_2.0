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
	std::vector<std::string> a; //карта
	std::vector<std::vector<int>> b; //номера €чеек змейки
};

#endif 