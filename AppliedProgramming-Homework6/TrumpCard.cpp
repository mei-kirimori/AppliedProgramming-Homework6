#include"TrumpCard.h"
#include<iostream>
#include<cstdio>
#include<ctime>
using namespace std;

TrumpCard::TrumpCard()
{
	
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			TrashCard[i][j] = true;
		}
	}
}

const char* TrumpCard::suitconversion(int suit)
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


bool TrumpCard::CheckStockCard(int number, int suit)
{
	if (TrashCard[number][suit])
	{
		TrashCard[number][suit] = false;
		return true;
	}
	else
	{
		return false;
	}
}
	
	
	
	
	
void TrumpCard::GetTrumpCard()
{
	int number = rand() % 13;
	int suitIndex = rand() % 4;

	while (!CheckStockCard(number, suitIndex))
	{
		number = rand() % 13;
		suitIndex = rand() % 4;
	}
		
	cout << suitconversion(suitIndex) << "‚Ì" << number + 1 << endl;
}