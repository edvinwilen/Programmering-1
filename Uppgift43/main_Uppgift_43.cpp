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


cout<<"Gissa p� ett nummer mellan 1-100"<<endl;
cin>>z;

for(int i = 4; i > 0;i--){


if(z < y){
	
	
cout<<z<<" �r f�r l�gt"<<endl;	
	
}

if(z > y){
		
cout<<z<<" �r f�r h�gt"<<endl;	
	
}


if(z == y){
	
cout<<z<<". Du gissade r�tt. ";

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

	
cout<<"du har "<<i<<" f�rs�k kvar"<<endl;
cin>>z;

}
cout<<"Gamer Over"<<endl<<"r�tt svar var: "<<y<<endl;

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
