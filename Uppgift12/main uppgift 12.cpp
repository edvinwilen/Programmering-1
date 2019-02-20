#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int trys, a;
	
	cout <<" Skriv in pinkoden "; 
	cin >> a;
	trys = 0;
	
	while (a != 1123 and trys != 3 ) {
		
	trys++;
	
	cout<<"Försök igen ";
	cin >> a;
		
	}
	
	if(trys == 3){
	
		cout<<"Ditt kort är nu spärrat ";
		
	}
	
	if (a ==1123) {
		
		cout<<"Grattis, nu får du dina pengar ";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
