#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int tal, slut, hopp;
	
	
	cout<<"Skriv in ett tal mellan 10 och 20"<<endl;
	cin>> tal;
	
	cout<<"Skriv in hur stort hopp det ska ta"<<endl;
	cin>> hopp;
	
	cout<<"Skriv ditt avslutande tal"<<endl; 
	cin>> slut;
	
	slut = slut + hopp;

	while (tal > slut){
		
		tal = tal - hopp;
		cout<< endl << tal;

	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
