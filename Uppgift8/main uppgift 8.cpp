#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	
float a, b, svar;	
	
cout << "skriv nuvrande �rtal ";
cin >> a;
cout << "skriv bilens �rsmodel ";
cin >> b;

svar = a - b;

if( svar < 5 ) {
	
cout << "du borde ha en helf�rs�kning p� din bil";

} 
if( svar > 5 and svar < 25) {
	
cout << "du borde ha en halvf�rskning p� din bil";
	
}

if( svar > 25) {
	
cout << "du borde ha en veternf�rs�kning p� din bil";
	
}
	
