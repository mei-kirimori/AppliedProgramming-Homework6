#pragma once
void judge(Player& player, Player& enemy);
const char* CardCharacterconversion(int cardValue);
const char* suitconversion(int suit);
bool CheckStockCard(int number, int suit);
bool CheckStock();
extern bool TrashCard[13][4];
void setTrump();
