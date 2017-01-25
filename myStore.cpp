#include "store.h"

void Store::set_values (string n,int i, double p) {  
	name=n; items = i;   price = p; } 

string Store::getName(){
	return name;}

double Store::calctotal(){
	double total;
	  total=items*price;
	  return total;
}
---main
#include "store.h"	 
#include <iostream>
#include <string>
#include <vector>
using namespace std; 
