#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int A, B, C;
	
	cout << "Mata in tre heltal" << endl;
	cout << "Mata in f�rsta talet ";
	cin >>A;
	cout << "Mata in andra talet ";
	cin >>B;
	cout << "Mata in tredje talet ";
	cin >>C;
	
	if (A > B and A > C ) {
		
		cout <<"Det f�rsta talet �r st�rst med v�rdet " << A;
	} 
	
	if (B > A and B > C) {
		
		cout <<"Det andra talet �r st�rst med v�rdet " << B;
	} 
	
	if (C > A and C > B ) {
		
		cout <<"Det tredje talet �r st�rst med v�rdet " << C;
	} 
	
	
	
	
	return 0;
}
