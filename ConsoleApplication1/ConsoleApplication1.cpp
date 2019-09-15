// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TMenu.h"

// ================================================
void zadanieNr1Wskazniki() {
	int *wskI = new int;  // deklaracja wskaznika
	
	*wskI = 7;  // wpisanie 7 do komorki ktora jest wskazywana przes wskI
	
	cout << wskI << endl; // wydrukuje adres w pamieci gdzie jest 7
	cout << *wskI << endl; // wydrukuje 7
	delete wskI;

	int i = 1000;
	wskI = &i;  // wskaznik wskazuje na 1000

}

int main()
{

	TMenu mnu;
	mnu.add("1. Opcja1");
	mnu.add("2. Opcja2");
	unsigned int wyb = mnu.wybierz();
	switch (wyb){
	case 1:
		zadanieNr1Wskazniki();
		break;
	case 2:
		cout << "wybrana opcja nr 2\n";
		break;

	default:
		break;
	}
    return 0;

	// cwiczenie: wykorzystanie instancji mnu2 dla klasy TMenu 
	// ale uzywajac operatorow new.

	// TMenu *mnu2 = new TMenu()
	// lub
		 TMenu *mnu2 = new TMenu();
		 mnu2->add("1. Opcja1");
		 mnu2->add("2. Opcja2");
		// wyb = (*mnu2).wybierz();
		   wyb = mnu2 -> wybierz();

		 delete mnu2;

}

