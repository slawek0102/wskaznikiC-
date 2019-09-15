#include "stdafx.h"
#include "TMenu.h"


void TMenu::add(string item)
{
	// tabItemsV[liczbaItems++] = item;
	tabItemsV.push_back(item);
	// liczbaItems++;
}

unsigned int TMenu::wybierz()
{
	for (string txt : tabItemsV)
		cout << txt << endl;
		unsigned int opcja;
		
		do {
			cin >> opcja;
		} while (opcja > tabItemsV.size());
	
	return opcja;
}

TMenu::TMenu()
{
	
}


TMenu::~TMenu()
{
}
