#pragma once

class TrumpCard
{
public:
	TrumpCard();
	void GetTrumpCard();
	const char* suitconversion(int suit);
	bool CheckStockCard(int number, int suit);

private:
	int Card[13][4];
	bool TrashCard[13][4];

};


