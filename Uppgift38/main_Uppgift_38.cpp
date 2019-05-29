#include <iostream>
using namespace std;

int calculator(int f, int q){	
q = f * 1.8 + 32;	
}

int temp(int f, int q){
	
cout<<"skriv en temperatur i celcius"<<endl;
cin>>f;
	
cout<<calculator(f,q);	
	
}

int main(int argc, char** argv) {
	
int f,q;
	
temp(f,q);	

	return 0;
}
