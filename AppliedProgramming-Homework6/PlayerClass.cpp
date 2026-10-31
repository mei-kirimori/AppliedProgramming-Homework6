#include <iostream>
#include <cstdlib>
#include <ctime>
#include "PlayerClass.h"
#include"Otherfunctions.h"
using namespace std;

Player::Player() //デフォルトコンストラクタ
{
	name = "enemy";
	TrumpCard = 0;
	Trumpsuit = 0;
}

Player::Player(const char* tmpname) //引数ありコンストラクタplayer専用
{
	if (tmpname != nullptr)
	{
		name = tmpname;
	}
	else
	{
		name = "unknown";
	}
	TrumpCard = 0;
	Trumpsuit = 0;
}
void Player::hit(bool card[][4]) //やっぱコメントめんどいから木曜がんばれ
{
	int number = rand() % 13;
	int suit = rand() % 4;

	while (!card[number][suit])
	{
		number = rand() % 13;
		suit = rand() % 4;
	}
	card[number][suit] = false; 
	TrumpCard = number + 1;
	Trumpsuit = suit;

}
int Player::getSuit()
{
	return Trumpsuit;
}

int Player::getNumber() 
{
	return TrumpCard;
}

void Player::showCard()
{
	cout << name << " s Card is " << suitconversion(Trumpsuit) << "-" << CardCharacterconversion(TrumpCard) << endl;
}