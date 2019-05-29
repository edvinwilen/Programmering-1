#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(int argc, char** argv) {

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
	
cout<<"Du gissade rätt";
		
return 0;	
}

	
cout<<"du har "<<i<<" försök kvar"<<endl;
cin>>z;

}


cout<<"Gamer Over"<<endl<<"rätt svar var: "<<y;

	return 0;
}
