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
	void DrawText(std::string aString, 
		std::int16_t x, std::int16_t y, sf::Color aColor);
	void SetBackground(sf::Color);
	void DrawMap(std::vector<std::vector<int>> aMap);
private:
	sf::RenderWindow& mWindow;
	sf::Font mFont; //создаем шрифт
	sf::Text mText;
};
#endif //GRAPHIC_H