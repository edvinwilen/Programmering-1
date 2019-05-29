#include <iostream>

using namespace std; 

int main(int argc, char** argv) {
	
char matte;
float tal1,tal2,summa;

cout<<" Skriv in en uträckning; "<<endl;
cin >> tal1;
cin >> matte;
cin >> tal2;	
	
if ( matte == '+' ){
	
summa = tal1 + tal2;
}

if( matte == '-'){
	
summa = tal1 - tal2;
}
	
if( matte == '*'){
	
summa = tal1 * tal2;
}

if( matte == '/'){
	
summa = tal1 / tal2; 
}
	
cout <<	summa << endl; 
	
	
	
	
	
	
	
	
	
	return 0;
}
