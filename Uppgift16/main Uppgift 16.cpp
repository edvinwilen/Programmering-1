#include <iostream>

using namespace std; 

int main(int argc, char** argv) {
	
	int tal,hopp,stop;
	
	while( tal>20 or tal<10) {
	cout<<"Skriv ett tal mellan 10 och 20: ";
	cin>> tal;
	}
	
	cout<<"Skriv in hur stora hopp talen ska ta: ";
	cin>> hopp;
	
	cout<<"Skriv in de avslutande talet: ";
	cin>> stop;
	
	for(int i = tal; i> stop ;i = i - hopp){
		cout<< i << endl;
	}
	
	
	
	
	
	
	return 0;
}
