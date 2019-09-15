#pragma once
class TMenu
{
private:
	vector<string> tabItemsV;
	// string tabItems[MAX_LICZBA_ITEM_MENU];
    //	unsigned int liczbaItems;
public:
	void add(string item);
	unsigned int wybierz();
	TMenu();
	~TMenu();
};

