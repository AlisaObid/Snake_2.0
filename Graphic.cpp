#include "Graphic.h"

Graphic::Graphic(sf::RenderWindow& aWindow) :
	mWindow(aWindow)
{
	mFont.loadFromFile("U:\\Evolution_v2\\font.ttf"); //���� �� ����� �� �������
	mText.setFont(mFont);
	mText.setCharacterSize(40);
}

//�������� �����
void Graphic::drawText(std::string aString,   
	std::int16_t x, std::int16_t y, sf::Color aColor)
{
	mText.setPosition(sf::Vector2f(x, y)); //��� ��������� �����
	mText.setFillColor(aColor);//��������� �����
	mText.setString(aString); //������� �����
	mWindow.draw(mText); //�������� ���
}

void Graphic::setBackground(sf::Color aColor)
{
	mWindow.clear(aColor);
}

void Graphic::drawMap(std::vector<std::string> aMap) //���������� �����
{
	for (int i = 0; i < aMap.size(); i++)
	{
		drawText(aMap[i], i * 10, 10, sf::Color(0, 0, 0));//����� �����
	}
}
