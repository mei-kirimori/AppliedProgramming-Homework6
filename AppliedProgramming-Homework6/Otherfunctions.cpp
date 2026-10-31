#include <iostream>
#include <cstdlib>
#include <ctime>
#include "PlayerClass.h"
#include"Otherfunctions.h"
#include"TrumpCard.h"
using namespace std;



void judge(Player& player, Player& enemy) 
{
	if (player.getNumber() > enemy.getNumber())
	{
		cout << "player win" << endl;
	}
	else if (player.getNumber() < enemy.getNumber())
	{
		cout << "enemy win" << endl;
	}
	else
	{
		cout << "draw" << endl;
	}
}

const char* CardCharacterconversion(int cardValue)
{
	switch (cardValue)
	{
	case 1:  return "A";
	case 2:  return "2";
	case 3:  return "3";
	case 4:  return "4";
	case 5:  return "5";
	case 6:  return "6";
	case 7:  return "7";
	case 8:  return "8";
	case 9:  return "9";
	case 10:  return "10";
	case 11: return "J";
	case 12: return "Q";
	case 13: return "K";
	default:return "wwwwwww";
	}
}

void setTrump()
{
	for (int i = 0; i < 13; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				TrashCard[i][j] = true;
			}
		}
}

const char* suitconversion(int suit)
{
	switch (suit)
	{
	case 0: return "Spade";
	case 1: return "Heart";
	case 2: return "Diamond";
	case 3: return "Club";
	default: return "Unknown";
	}
}

bool CheckStock()
{
	for (int i = 0; i < 13; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (TrashCard[i][j] == true)
			{
				return true;
			}
		}
	}
	return false;
}