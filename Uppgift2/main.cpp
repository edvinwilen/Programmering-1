#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	
	float tal1, tal2, tal3, summa1, summa2, summa3; 
	
	cout <<"Antal k�rda mil: ";
	cin >> tal1;
	cout <<"Antal liter bensin: ";
	cin >> tal2;
	
	summa1 = tal1 - tal2;
	
	cout << "skriv i liter din bensinsf�rbrukning ";
	
	cin >> tal3;
	
	summa2 = summa1/tal3;
	
	cout << "Din bil har g�tt " << summa1 <<"mil. " << endl <<"Din bil har anv�nt " <<tal3 << "liter i bensin." << endl <<"Din bil har anv�nt "<< summa2 <<"Liter per mil.";
	
	
	
	
	
	return 0;
}
