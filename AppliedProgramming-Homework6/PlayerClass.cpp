#include <iostream>
#include <cstdlib>
#include <ctime>
#include "PlayerClass.h"
#include"Otherfunctions.h"
#include"TrumpCard.h"
using namespace std;

TrumpCard game;

Player::Player() //デフォルトコンストラクタ
{
	name = "enemy";
	toranpuRank = 0;
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
	toranpuRank = 0;
}
void Player::hit() //トランプランクにTrumpCardClassからカード引いてそれいれるあと一気にしょうなんばーまでよびだす
{
	toranpuRank= game.GetTrumpCard();
	showNumber();
}

int Player::getNumber() //今回の改造で使わなくなったが一様残しとく
{
	return toranpuRank;
}

void Player::showNumber()  //かくのめんどくなったから木曜の俺頑張れ
{
	cout << CardCharacterconversion(toranpuRank) << endl;
}