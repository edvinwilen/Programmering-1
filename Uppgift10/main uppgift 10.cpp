#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	
	
	int A,svar1,svar2,svar3,svar4,svar5;
	
	cout << " Mata in dina arbetstimmar denna m�nad" ;
	cin >> A;
	
	
	if (A <= 160) {
		
	svar1 = A * 100;
		
	cout << "Din l�n �r " << svar1; 
		
	}else{
		
		
	svar2= A * 160;
	svar3= A - 160;
	svar4= svar3 * 150;
	svar5 = svar2- svar4; 
	
	cout <<" Din l�n per m�nad �r " <<svar5;
	
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
