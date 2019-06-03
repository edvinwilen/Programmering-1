#include <iostream>
#include <cmath>
using namespace std;
int calc(float y, float z, string input){

float x;
	
if(input == "hypotenusan"){
	
x= (y * y) + (z * z);
			
x = sqrt(x);
	
return x;			
}	
if(input == "kateten"){
	
z = z * z;
y = y * y;

z = z - y;

x = sqrt(z);
return x;		
}		
}
int main(int argc, char** argv) {
	
float y,z;
cout<<"Ska hypotenusan eller kateten räknas ut? "<<endl;
string input;
cin>>input;	

cout<<"Skriv in A sidan först och sedan B och C; "<<endl;	
cin>>y;	
cin>>z;	
calc(y,z,input);
cout<<calc(y,z,input);	
return 0;
}
