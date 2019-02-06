#include <iostream>

	using namespace std;

int main(int argc, char** argv) {
	
	int tal1, tal2, summa; 
	
	cout <<"skriv dagens mätarställning: ";
	cin >> tal1;
	cout <<"Skriv förra årets mätarställning: ";
	cin >> tal2;
	
	summa = tal1 - tal2;
	
	cout <<"Din bil har gått " <<summa <<" mil";
	
	return 0;
}
