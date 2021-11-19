#ifndef GRAPHIC_H
#define GRAPHIC_H
#include <SFML/Graphics.hpp> 
#include <iostream>
#include <vector>
#include <string>

class Graphic
{
public:
	Graphic(sf::RenderWindow& aWindow);
	//написать текст
	void drawText(std::string aString, 
		std::int16_t x, std::int16_t y, sf::Color aColor);
	void setBackground(sf::Color);
	void drawMap(std::vector<std::string> aMap);
private:
	sf::RenderWindow& mWindow;
	sf::Font mFont; //создаем шрифт
	sf::Text mText;
};
#endif //GRAPHIC_H