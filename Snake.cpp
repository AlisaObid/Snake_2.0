#include "Snake.h"


Snake::Snake()
{
	mX = 1;
	mY = 1;
	mTime = 0;
	mSize= 0;
}


void Snake::increaseSize() //Увеличить длину змея
{
	mSize++;
}


int Snake::size() //показать d
{
	return mSize;
}


void smey::Game(sf::RenderWindow& window)	//сама игра
{

	while (d < 100)
	{
		system("cls");
		Map z;
		Graf gr;
		z.drow(window);//вывод карты
		//змейка ходит
		t++; //время увеличивается
		//не прошло ли 0,5 секунды
		if (t >= 3)
		{
			//не выходит ли звейка за границы карты
			if (z.IF(ch, x, y))
			{
				// :(
				gr.draw(window, "Game Over. Your name's \"lox\" :(", 10, 10, 255, 0, 0);
				while (true)
				{

				}
			}
			//змейка ходит
			if (ch == 'a')
			{
				y--;
			}
			if (ch == 's')
			{
				x++;
			}
			if (ch == 'd')
			{
				y++;
			}
			if (ch == 'w')
			{
				x--;
			}

			t = 0;
		}
		//изменяем карту
	}
}