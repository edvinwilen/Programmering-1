
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

int tim, min, sec, a, b, c, d, e, f, min2, sec2, svar;

cout << "skriv din l�par tid p� ditt f�rsta lopp i tim, min, sec" << endl;
cin >> a >> b >> c;

cout << "skriv din l�par tid p� ditt andra lopp i tim, min, sec" << endl;
cin >> d >> e >> f;

tim = a + d;
min = b + e;
sec = c + f;


if( sec >= 60 ){
	
sec2 = sec % 60;
min++;
	
}else{
	sec2 = sec;
}

if( min >= 60 ) {

min2 = min % 60;
tim++;

} else {
	min2 = min;
}

cout << "Din tid �r "<< endl << tim <<" tim" << endl << min2 << " min" << endl << sec2 <<" sek";



	return 0;
}






