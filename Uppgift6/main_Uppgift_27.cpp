#include <iostream>

using namespace std; 

int main(int argc, char** argv) {
	
bool start = true;

float a, b, svar1, svar2, svar3, svar4;
string matte;

cout << "Skriv in ";
cin >> matte;

cout << "Skriv första talet som du ska använda räknesättet på" << endl;
cin >> a;

cout << "Skriv andra talet som du ska använda räknesättet på";
cin >> b;


if(matte == 1 ){
	
svar1 = a + b;

cout << "svaret är " << svar1;

}
	
if( matte == 2 ){
	
svar2 = a - b;
	
cout << "svaret är " << svar2;	
	
} 
	
if( matte == 3 ){
	
svar3 = a * b;
	
cout << "svaret är " << svar3;	
	
} 
	
if( matte == 4 ) {

	
svar4 = a / b;	

cout << "svaret är " << svar4;
	
} 
	
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	

