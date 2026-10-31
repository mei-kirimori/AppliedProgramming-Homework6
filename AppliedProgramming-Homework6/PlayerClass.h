#pragma once
class Player
{
public:
	void hit();
	int getNumber();
	void showNumber();
	const char* name;
	Player();
	Player(const char* tmpname);
private:
	int toranpuRank;

};