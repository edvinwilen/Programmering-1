#include <iostream>

	using namespace std;

int main(int argc, char** argv) {
	
	int tal1, tal2, summa; 
	
	cout <<"skriv dagens m�tarst�llning: ";
	cin >> tal1;
	cout <<"Skriv f�rra �rets m�tarst�llning: ";
	cin >> tal2;
	
	summa = tal1 - tal2;
	
	cout <<"Din bil har g�tt " <<summa <<" mil";
	
	return 0;
}
