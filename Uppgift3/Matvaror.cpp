#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float tal1,tal2,tal3,tal4,summa1,summa2,summa3,summa4;
	
	cout <<" Antalet kilo produkt 1 väger: ";
	cin >> tal1;
	cout <<" Antalet kilo produkt 2 väger: ";
	cin >> tal2;
	
	summa1 = tal1 * tal2; 
	
	summa2 = summa1 * 1.12;
	
	cout <<" Antalet i kilopris på produkt 1: ";
	cin >> tal3;
	cout <<" Antalet i kilopris på produkt 2: ";
	cin >> tal4;
	
	summa3 = tal3 + tal4; 
	
	summa4 = summa3 * 1.12;
	
	cout << "Total: " << summa3 <<"Kr"<< endl;
	cout << "Total Inkl. moms: " << summa4 <<"Kr"<< endl;
	
	cout << "Moms: 1.12%";
	
	
	
	
	
	
	
	
	
	
	return 0;
}
