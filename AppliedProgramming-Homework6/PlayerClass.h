#pragma once
class Player
{
public:
	void hit(bool card[][4]);
	int getNumber();
	int getSuit();
	void showCard();
	const char* name;
	Player();
	Player(const char* tmpname);
private:
	int TrumpCard;
	int Trumpsuit;
};