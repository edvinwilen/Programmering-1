#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int A, B, C;
	
	cout << "Mata in tre heltal" << endl;
	cout << "Mata in första talet ";
	cin >>A;
	cout << "Mata in andra talet ";
	cin >>B;
	cout << "Mata in tredje talet ";
	cin >>C;
	
	if (A > B and A > C ) {
		
		cout <<"Det första talet är störst med värdet " << A;
	} 
	
	if (B > A and B > C) {
		
		cout <<"Det andra talet är störst med värdet " << B;
	} 
	
	if (C > A and C > B ) {
		
		cout <<"Det tredje talet är störst med värdet " << C;
	} 
	
	
	
	
	return 0;
}
