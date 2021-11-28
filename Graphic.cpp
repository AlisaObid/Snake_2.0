#include "Graphic.h"

Graphic::Graphic(sf::RenderWindow& aWindow) :
	mWindow(aWindow)
{
	mFont.loadFromFile("U:\\Evolution_v2\\font.ttf"); //���� �� ����� �� �������
	mText.setFont(mFont);
	mText.setCharacterSize(40);
}

//�������� �����
void Graphic::DrawText(std::string aString,   
	std::int16_t x, std::int16_t y, sf::Color aColor)
{
	mText.setPosition(sf::Vector2f(x, y)); //��� ��������� �����
	mText.setFillColor(aColor);//��������� �����
	mText.setString(aString); //������� �����
	mWindow.draw(mText); //�������� ���
}


void Graphic::SetBackground(sf::Color aColor)
{
	mWindow.clear(aColor);
}


void Graphic::DrawMap(std::vector<std::vector<int>> aMap) //���������� �����
{

	for (int i = 0; i < aMap.size(); i++)
	{
		for (int j = 0; j < aMap[i].size(); j++)
		{
			sf::RectangleShape rectangle;
			rectangle.setFillColor(sf::Color(30, 30, 30)); //���� ���������
			rectangle.setSize(sf::Vector2f(70, 70)); //������ ���������
			rectangle.setPosition(105 * i, 105 * j); //������� ���������
			mWindow.draw(rectangle); //������ �������
		}
	}
}

