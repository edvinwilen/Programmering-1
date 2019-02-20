#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	
	
	int A,svar1,svar2,svar3,svar4,svar5;
	
	cout << " Mata in dina arbetstimmar denna månad" ;
	cin >> A;
	
	
	if (A <= 160) {
		
	svar1 = A * 100;
		
	cout << "Din lön är " << svar1; 
		
	}else{
		
		
	svar2= A * 160;
	svar3= A - 160;
	svar4= svar3 * 150;
	svar5 = svar2- svar4; 
	
	cout <<" Din lön per månad är " <<svar5;
	
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
