//#include"TrumpCard.h"
//#include<iostream>
//#include<cstdio>
//#include<ctime>
//using namespace std;
//
//TrumpCard::TrumpCard()  //コンストラクタ、bool配列の初期化
//{
//	
//	for (int i = 0; i < 13; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			TrashCard[i][j] = true;
//		}
//	}
//}
//
//const char* TrumpCard::suitconversion(int suit)  //文字列のアドレスを返す、参照もとはこの関数
//{
//	switch (suit)
//	{
//	case 0: return "Spade";
//	case 1: return "Heart";
//	case 2: return "Diamond";
//	case 3: return "Club";
//	default: return "Unknown";
//	}
//}
//
//
//bool TrumpCard::CheckStockCard(int number, int suit)  //トラッシュカード配列の中の使われたカード部分をfalseに変える、すでにfalseならfalseを返す
//{
//	if (TrashCard[number][suit])
//	{
//		TrashCard[number][suit] = false;
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//	
//	
//	
//	
//	
//int TrumpCard::GetTrumpCard()  //while文でtrueなら処理終了、false(カードが被ったら)なら再度randしなおすloooooooooooooooooop文
//{
//	int number = rand() % 13;
//	int suitIndex = rand() % 4;
//
//	while (!CheckStockCard(number, suitIndex))
//	{
//		number = rand() % 13;
//		suitIndex = rand() % 4;
//	}
//		
//	cout << suitconversion(suitIndex) << "-";
//	return number + 1;
//}