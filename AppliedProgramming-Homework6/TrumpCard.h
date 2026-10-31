#pragma once

class TrumpCard
{
public:
	TrumpCard();
	void GetTrumpCard();
	const char* suitconversion(int suit);
	bool CheckStockCard(int number, int suit);

private:
	bool TrashCard[13][4];

};


