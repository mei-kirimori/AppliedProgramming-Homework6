#include <iostream>
#include"TrumpCard.h"
#include "PlayerClass.h"
#include"Otherfunctions.h"
using namespace std;

int main()
{
	srand((unsigned int)time(nullptr));
	cout << "please enter your name" << endl;
	char name[32];
	cin >> name;
	Player player(name);
	cout << "Welcome to " << player.name << "!" << endl << "let's start Hight-and-Low Game!!" << endl;
	cout << "please enter the number of times you would like to play" << endl;
	int playvalue;
	cin >> playvalue;
	for (int i = 0;playvalue >i;++i)
	{
		cout << "=============================" << endl << "Game" << i + 1 << endl;
		Player enemy;
		cout << "your cards is" << endl;
		player.hit();
		cout << "enemy cards is" << endl;
		enemy.hit();
		judge(player, enemy);
	}
}
