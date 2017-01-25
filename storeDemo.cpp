#include "store.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {  
		Store item1;
		Store item2;
		Store item3;
		Store item4;

		int i;
		double p;
		string n;

		vector <Store> items;

		item1.set_values("bread",4,3.50);
		items.push_back(item1);
		item2.set_values("butter",5,6.61);
		items.push_back(item2);
		item3.set_values("biscuits",2,5.50);
		items.push_back(item3);
		item4.set_values("bananna",3,5.51);
		items.push_back(item4);

		cout << "Your total for item "<< items[0].getName() << " is: " << items[0].calctotal()<<endl;
		cout << "Your total for item "<< items[1].getName() << " is: " << items[1].calctotal()<<endl;
		cout << "Your total for item "<< items[2].getName() << " is: " << items[2].calctotal()<<endl;
		cout << "Your total for item "<< items[3].getName() << " is: " << items[3].calctotal()<<endl;


		return 0;
	}
