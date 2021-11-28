#include "Map.h"


Map::Map() :
	mMap(10, std::vector<int> (10)), //�����
	mCell(10, std::vector<int>(10)) //������ ����� ������
{
	mMap[1][1] = 'S'; // ������ ������ ������ ��� ������
	mCell[1][1] = 1; // ��� ������
	//�������� ������ ��� ������� ������ ��������
	int mRandAppleI = rand() % 10;
	while (mMap[rand() % mRandAppleI][2] == 'S')
	{
		mRandAppleI = rand() % 10;
	}
	mMap[mRandAppleI][2] = '+';
	mX = 1;
	mY = 1;
	mSize= 0;
}



void Map::Play(char aMove, Graphic& graphic)	//���� ����
{
	//�� ������� �� ������ �� ������� �����
	if (((aMove == 'a' && (mY - 1 < 0 || mMap[mX][mY - 1] == 'S')) || 
			(aMove == 's' && (mX + 1 > 9 || mMap[mX + 1][mY] == 'S')) || 
			(aMove == 'd' && (mY + 1 > 9 || mMap[mX][mY + 1] == 'S')) ||
		    (aMove == 'w' && (mX - 1 < 0 || mMap[mX - 1][mY] == 'S'))))
	{
		// :(
		graphic.DrawText("Game Over. Your name's \"lox\" :(", 10, 10, sf::Color(255, 255, 255));
		while (true)
		{

		}
	}
	//������ �����
	if (aMove == 'a')
	{
		mY--;
	}
	if (aMove == 's')
	{
		mX++;
	}
	if (aMove == 'd')
	{
		mY++;
	}
	if (aMove == 'w')
	{
		mX--;
	}
	//����� �� ������ ������
	bool aEatApple = 0;
	if (mMap[mX][mY] == '+')
	{
		aEatApple = 1;
		//������ ������
		mSize++; // d++
	}
	//������ ������ �����
	mMap[mX][mY] = 'S';
	mCell[mX][mY] = 1;
	int mNext = 1; //�� ����� ������ ������ ��������� ���� ����
	//������� ������ � ������� (� ��� ������������ �����) � ������ ������, ���� ������ �� ����� ������
	int aI = mX, aJ = mY; //��� �� ���������
	for (int i = 0; i < mSize + 1; i++)
	{
		//���� ���������� ������ ������ (�� ����� ����� mNext)
		if (aI > 0 && mCell[aI - 1][aJ] == mNext)
		{
			mNext++; //��������� ������ �� 1 ������
			aI--; //������ ������� ������ �� ������� �� ���������
			mCell[aI][aJ]++; //����������� ����� ������ �� ������� �� ���������
			if (mCell[aI][aJ] > mSize) //�� �� ��������� ������ ������?
			{
				if (aEatApple == 0) // ���� ������ ����� ������, �� �� ������ ���������
				{
					mCell[aI][aJ] = 0;
					mMap[aI][aJ] = '0';
				}
				break;
			}
		}
		if (aJ > 0 && mCell[aI][aJ - 1] == mNext)
		{
			mNext++;
			aJ--;
			mCell[aI][aJ]++;
			if (mCell[aI][aJ] > mSize)
			{
				if (aEatApple == 0)
				{
					mCell[aI][aJ] = 0;
					mMap[aI][aJ] = '0';
				}
				break;
			}
			continue;
		}
		if (aI < 9 && mCell[aI + 1][aJ] == mNext)
		{
			mNext++;
			aI++;
			mCell[aI][aJ]++;
			if (mCell[aI][aJ] > mSize)
			{
				if (aEatApple == 0)
				{
					mCell[aI][aJ] = 0;
					mMap[aI][aJ] = '0';
				}
				break;
			}
			continue;
		}
		if (aJ < 9 && mCell[aI][aJ + 1] == mNext)
		{
			mNext++;
			aJ++;
			mCell[aI][aJ]++;
			if (mCell[aI][aJ] > mSize)
			{
				if (aEatApple == 0)
				{
					mCell[aI][aJ] = 0;
					mMap[aI][aJ] = '0';
				}
				break;
			}
		}
	}
	//������� ����� ������
	if (aEatApple) //��������� ������ ����� ������ �����, ����� ���� ���� ����������
	{
		int mRandI = rand() % 9, mRandJ = rand() % 9; // ��������� ����� ��� ������
		while (mMap[mRandI][mRandJ] == 'S') // ������ ������ ��������� � ������
		{
			mRandI = rand() % 10; // ������ ���������� ������
			mRandJ = rand() % 9;
		}
		mMap[mRandI][mRandJ] = '+'; // ������ ������
	}
	system("cls");
	graphic.DrawMap(mMap);//����� �����
}
