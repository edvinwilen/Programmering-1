#include <iostream>

using namespace std; 

int main(int argc, char** argv) {
	
	int tal, a, svar;
	
	cout <<"Skriv in ett tal mellan 1-12"<<endl;
	cin >> tal;
	
	a = -1;
	
	
	while ( tal < 1 or tal > 12){
		cout <<"Nej, skriv ett tal mellan 1-12!"<<endl;
		cin >> tal;
	}
	
	while ( a < 12 ){
	a++;
	svar = tal * a;
	cout<<endl <<a <<" x " << tal <<" = " <<svar;
	}
	

	
	
	
	
	
	
	
	
	return 0;
}
