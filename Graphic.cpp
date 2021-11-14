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
	mWindow.clear();
}
