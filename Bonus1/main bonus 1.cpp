#include <iostream>
#include <math.h>



using namespace std;

int main(int argc, char** argv) {
	

	
	float tal, roten_ur, A, B, A2, B2, C2;
	roten_ur= sqrt(tal);
	
	cout << "Skriv l�ngden av kortsidan ";
	cin >> A;
	cout << "Skriv l�ngden av l�ngsidan ";
	cin >> B;
	
	A2 = A * A;
	B2 = B * B;
	
	C2 = B2 + A2;
	
	roten_ur = sqrt(C2);
	
	cout <<"Hypotenusan �r " << roten_ur;
	
		
	
	
	
	return 0;
}
