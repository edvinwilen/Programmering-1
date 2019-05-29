#include <iostream>

using namespace std;


int Incresefunction(int heltal){
	
	heltal = heltal * 2;
	return heltal;
	
}

int main(int argc, char** argv) {
	int x;
	cout<<"Skriv in ett heltal;"<<endl;
	cin>> x;
	int svar;
	svar = Incresefunction(x); 
	
	
	cout<<svar;
	
	
	
	return 0;
}
