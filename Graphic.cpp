#include "Graphic.h"

Graphic::Graphic(sf::RenderWindow& aWindow) :
	mWindow(aWindow)
{
	mFont.loadFromFile("U:\\Evolution_v2\\font.ttf"); //путь до файла со шрифтом
	mText.setFont(mFont);
	mText.setCharacterSize(40);
}

//написать текст
void Graphic::drawText(std::string aString,   
	std::int16_t x, std::int16_t y, sf::Color aColor)
{
	mText.setPosition(sf::Vector2f(x, y)); //где поставить текст
	mText.setFillColor(aColor);//покрасили текст
	mText.setString(aString); //выводим текст
	mWindow.draw(mText); //показать его
}


void Graphic::setBackground(sf::Color aColor)
{
	mWindow.clear(aColor);
}


void Graphic::drawMap(std::vector<std::vector<int>> aMap) //нарисовать карту
{

	for (int i = 0; i < aMap.size(); i++)
	{
		for (int j = 0; j < aMap[i].size(); j++)
		{
			sf::RectangleShape rectangle;
			rectangle.setFillColor(sf::Color(30, 30, 30));
			rectangle.setSize(sf::Vector2f(70, 70));
			rectangle.setPosition(105 * i, 105 * j);
			mWindow.draw(rectangle);
		}
	}
}


void Graphic::drawApple(std::vector<std::vector<int>> aMap)
{
	int applei = rand() % 10, applej = rand() % 10;
	while (aMap[applei][applej] == 1)
	{
		applei = rand() % 10;
		applej = rand() % 10;
	}
	aMap[applei][applej] = 2;
}