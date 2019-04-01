#include <iostream>

using namespace std; 

int main(int argc, char** argv) {
	
int forsta,andra,tredje,fjerde,femte,skette,sjunde,ottonde,nionde,tionde;
	
cout <<"Skriv in värde 1: "<< endl;
cin  >> forsta;
cout <<"Skriv in värde 2: "<< endl;
cin  >> andra;
cout <<"Skriv in värde 3: "<< endl;
cin  >> tredje;	
cout <<"Skriv in värde 4: "<< endl;
cin  >> fjerde;	
cout <<"Skriv in värde 5: "<< endl;
cin  >> femte;	
cout <<"Skriv in värde 6: "<< endl;
cin  >> skette;	
cout <<"Skriv in värde 7: "<< endl;
cin  >> sjunde;	
cout <<"Skriv in värde 8: "<< endl;
cin  >> ottonde;	
cout <<"Skriv in värde 9: "<< endl;
cin  >> nionde;	
cout <<"Skriv in värde 10: "<< endl;
cin  >> tionde;	
	
int array[10] = {forsta,andra,tredje,fjerde,femte,skette,sjunde,ottonde,nionde,tionde};
	
	
for(int i = 0; i < 10 ; i++) {
	
	cout << array[i] <<endl;
	
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
