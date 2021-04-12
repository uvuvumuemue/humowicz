#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"
#include "trapeze.h"
#include"cube.h"
using namespace std;
int main()
{
	int h, a, b, c, d;
	int wybor=0;
	while (1) {
		if (wybor == 0) {
			cout << "1-trojkat\n";
			cout << "2-prostokat\n";
			cout << "3-kolo\n";
			cout << "4-trapez\n";
			cout << "5-szescian\n";
			cin >> wybor;
		}
		else if (wybor == 1) {
			cout << "podaj wysokosc: ";
			cin >> h;
			cout << "podaj 1 bok: ";
			cin >> a;
			cout << "podaj 2 bok: ";
			cin >> b;
			cout << "podaj 3 bok: ";
			cin >> c;
			triangle test(h, a, b, c);
			test.polet(h, a);
			test.obwodt(a, b, c);
			cout << "\nwybierz menu:";
			cin >> wybor;
		}
		else if (wybor == 2) {
			cout << "podaj wartosc boku 1: ";
			cin >> a;
			cout << "podaj wartosc boku 2: ";
			cin >> b;
			square test(a,b);
			test.poles(a,b);
			test.obwods(a,b);
			cout << "\nwybierz menu:";
			cin >> wybor;
		}
		else if (wybor == 3) {
			cout << "podaj wartosc promienia: ";
			cin >> a;
			circle test(a);
			test.obwodc(a);
			test.polec(a);
			cout << "\nwybierz menu:";
			cin >> wybor;
		}
		else if (wybor == 4) {
			cout << "1 podstwawe: ";
			cin >> a;
			cout << "2 podstawe: ";
			cin >> b;
			cout << "1 ramie: ";
			cin >> c;
			cout << "2 ramie: ";
			cin >> d;
			cout << "podaj wysokosc: ";
			cin >> h;
			trapeze test(a, b, c, d, h);
			test.obwodt(a,b,c,d);
			test.polet(a,b,h);
			cout << "\nwybierz menu:";
			cin >> wybor;
		}
		else if (wybor == 5) {
			cout << "podaj wartosc boku: ";
			cin >> a;
			cube test(a);
			test.objc(a);
			test.obwodc(a);
			cout << "\nwybierz menu:";
			cin >> wybor;
		}
	}
}