#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(int argc, char** argv) {

bool matte = true;

while(matte == true){

int f = 1;
int e = 100;
int x = 1;
int y = 100;

int a,b,c;

int tiden = time(0);


srand(tiden);
	
c = rand()%100 + 1;
b = rand()%100 + 1;


cout<<"Gissa p� ett nummer mellan 1-100"<<endl;
cin>>a;

for(int i = 4; i > 0;i--){


if(a < c){
		
cout<<"Du gissade f�r l�gt"<<endl;	
f = a;	
	
}

if(a > c){
		
cout<<"Du gissade f�r h�gt"<<endl;		
e = a;
	
}

if(a == c){
	
cout<<"Du gissade r�tt";
		
return 0;	
}

cout<<y<<endl<<e<<endl<<f<<endl<<x;

if(f > x and y > e){
	
b = rand()%y + f;
cout<<b<<endl;
cout<<y<<" "<<f;	
	
}
if(f > x and e > y)	{
	
b = rand()%e + f;
cout<<b;
cout<<e<<" "<<f;	
}
if(x > f and y > e){
	
b = rand()%y + x;
cout<<b<<endl;	
cout<<y<<" "<<x;	
}
if(x > f and e > y){
	
b = rand()%e + x;	
cout<<b<<endl;	
cout<<e<<" "<<f;	
}
cout<<"AI:n gissade p� "<<b<<endl;


if(b < c){
	
	
cout<<"AI:n gissade f�r l�gt"<<endl;	
x = b;
	
}
if(b > c){
		
cout<<"AI:n gissade f�r h�gt"<<endl;	
y = b;
	
}

if(b == c){
	
cout<<"AI:n gissade r�tt";
		
return 0;	
}
	
cout<<"du har "<<i<<" f�rs�k kvar"<<endl;
cin>>a;

}

string input;

cout<<"Vill du avsluta programmet"<<endl;
cin>>input;

if(input == "ja"){
	
matte = false;	

}

if(input == "nej"){
	
matte = true;	
}
}
	return 0;

}
