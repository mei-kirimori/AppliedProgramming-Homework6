#include <iostream>
#include "PlayerClass.h"
#include"Otherfunctions.h"
#include <cstdlib>
#include <ctime>
using namespace std;

bool TrashCard[13][4] = {};
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
	setTrump();
	for (int i = 0;playvalue >i;++i)
	{
		if (!CheckStock())
		{
			setTrump();
			cout << "=============================" << endl;
			cout << "reset the card" << endl;
		}
		
			cout << "=============================" << endl << "Game" << i + 1 << endl;
			Player enemy;
			cout << "your cards" << endl;
			player.hit(TrashCard);
			player.showCard();
			cout << "enemy cards" << endl;
			enemy.hit(TrashCard);
			enemy.showCard();
			judge(player, enemy);
	
	}
}
