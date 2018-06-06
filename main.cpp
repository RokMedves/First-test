#include <iostream>
#include "complex.h"

#ifndef COMPLEXH
#error You do not have complex.h!!!
#endif



using namespace std;

int main(){
	
	//variable declarations
	double a, b;


	cout << "please enter two numbers to be formated into a complex number" << endl;
	cin >> a;
	cin >> b;
	cout << "making compex number " << endl << endl << endl;

	complexNumber z = complexNumber(a, b);
	z.print();

	return 0;
}
