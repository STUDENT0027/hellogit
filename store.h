#include <iostream>
#include <string>
#ifndef STORE_H
#define STORE_H


using namespace std; 

class Store {
 private:
	string name;
	int items;
	double price;
 public: 
	 
	void set_values (string,int,double); 
	double calctotal();
	string getName();

};
#endif
