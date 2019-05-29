#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(int argc, char** argv) {

bool omstart = true;
string input;

while(omstart == true){

int z,y;

int tiden = time(0);


srand(tiden);

	
y = rand()%100 + 1;


cout<<"Gissa på ett nummer mellan 1-100"<<endl;
cin>>z;

for(int i = 4; i > 0;i--){


if(z < y){
	
	
cout<<z<<" är för lågt"<<endl;	
	
}

if(z > y){
		
cout<<z<<" är för högt"<<endl;	
	
}


if(z == y){
	
cout<<z<<". Du gissade rätt. ";

cout<<"Vill du avsluta programmet. Skriv ja eller nej:"<<endl;
cin>>input;

if(input == "ja"){
	
omstart = false;	

}

if(input == "nej"){
	
omstart = true;	

}
		
return 0;	
}

	
cout<<"du har "<<i<<" försök kvar"<<endl;
cin>>z;

}
cout<<"Gamer Over"<<endl<<"rätt svar var: "<<y<<endl;

string input;

cout<<"Vill du avsluta programmet. Skriv ja eller nej:"<<endl;
cin>>input;

if(input == "ja"){
	
omstart = false;	

}

if(input == "nej"){
	
omstart = true;	

}

}
	return 0;

}
