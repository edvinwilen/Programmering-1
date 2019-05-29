#include <iostream>

using namespace std;

int calculator(int a, char matte, int b, int c){
	

if(matte == '*'){
	
c = a * b;
	
}

if(matte =='/'){
	
c = a / b;	
	
}

if(matte =='+'){
	
c = a + b;	
	
}

if(matte =='-'){
	
c = a - b;	
	
}
	

	
	
cout<<c;
	
	
	
}

int main(int argc, char** argv) {

int a,b,c;
char matte;

cout<<"skriv en uträkning";
cin>>a;
cin>>matte;
cin>>b;

calculator(a,matte,b,c);


	return 0;
}
