#include "mr_smey.h"


smey::smey()
{
	x = 1, y = 1, t = 0, d = 1; // ����� ������ ������, ����� ����� ���������� ���� ������, ���� ����;
}


void smey::Dplus() //��������� ����� ����
{
	d++;
}


int smey::D() //�������� d
{
	return d;
}


void smey::Game(sf::RenderWindow& window)	//���� ����
{

	while (d < 100)
	{
		system("cls");
		Map z;
		Graf gr;
		z.drow(window);//����� �����
		//������ �����
		t++; //����� �������������
		//�� ������ �� 0,5 �������
		if (t >= 3)
		{
			//�� ������� �� ������ �� ������� �����
			if (z.IF(ch, x, y))
			{
				// :(
				gr.draw(window, "Game Over. Your name's \"lox\" :(", 10, 10, 255, 0, 0);
				while (true)
				{

				}
			}
			//������ �����
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
		//�������� �����
	}
}