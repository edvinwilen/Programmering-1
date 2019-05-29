#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

string x;

cout <<" Skriv in ett ord; "<<endl;
cin>> x;

for (int i = 0; i < x.length(); i++){
	
if ( x [i] == 'Z'){
	
	x [i] = 'a';
}	
}
	
cout << x;	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
