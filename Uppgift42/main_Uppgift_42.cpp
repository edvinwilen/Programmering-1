#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(int argc, char** argv) {

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
	
cout<<"Du gissade r�tt";
		
return 0;	
}

	
cout<<"du har "<<i<<" f�rs�k kvar"<<endl;
cin>>z;

}


cout<<"Gamer Over"<<endl<<"r�tt svar var: "<<y;

	return 0;
}
