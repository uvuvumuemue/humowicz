#include "square.h"
#include <iostream>
using namespace std;
square::square(int a,int b) {
	this->a = a;
	this->b = b;
}
square::~square() {

}
void square::poles(int a,int b) {
	wynik = a * b;
	cout << "pole wynosi: " << wynik<<"cm^2";
}
void square::obwods(int a, int b) {
	wynik = a*2+b*2;
	cout << "\nobwod wynosi: " << wynik << "cm\n";
}