#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	
float a, b, svar1, matte, svar2, svar3, svar4;

cout << "1 = +"<< endl << "2 = -" << endl << "3 = *" << endl << "4 = /";
cin >> matte;

cout << "Skriv f�rsta talet som du ska anv�nda r�knes�ttet p�" << endl;
cin >> a;

cout << "Skriv andra talet som du ska anv�nda r�knes�ttet p�";
cin >> b;


if(matte == 1 ){
	
svar1 = a + b;

cout << "svaret �r " << svar1;

}
	
if( matte == 2 ){
	
svar2 = a - b;
	
cout << "svaret �r " << svar2;	
	
} 
	
if( matte == 3 ){
	
svar3 = a * b;
	
cout << "svaret �r " << svar3;	
	
} 
	
if( matte == 4 ) {

	
svar4 = a / b;	

cout << "svaret �r " << svar4;
	
} 
	
	
	return 0;
}

