#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int trys, a;
	
	cout <<" Skriv in pinkoden "; 
	cin >> a;
	trys = 0;
	
	while (a != 1123 and trys != 3 ) {
		
	trys++;
	
	cout<<"F�rs�k igen ";
	cin >> a;
		
	}
	
	if(trys == 3){
	
		cout<<"Ditt kort �r nu sp�rrat ";
		
	}
	
	if (a ==1123) {
		
		cout<<"Grattis, nu f�r du dina pengar ";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
