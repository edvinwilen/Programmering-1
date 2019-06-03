#include <iostream>
using namespace std;
int main(int argc, char** argv) {

bool okar;

int array[10];

int y = 0;

cout<<"skriv in 10 tal"<<endl;

for(int j = 0; j < 10;j++){

cin>>array[j];

}

int f = -1;

for(int j = 1; j < 10;j++){
	
f++;

		
if(array[f] == array[j]){

y = y - 2;
	
}

if(array[f] < array[j]){
	
okar = true;	
	
}	
	
if(array[f] > array[j]){

okar = false;
	
}

if(okar == true){
	
y++;
	
	
}

if(okar == false){
	
y = y+2;
}
}

if(y == 9){
	
cout<<"Talen ökade";	
	
}


if(y > 1 and y < 18 and y != 9){
	
cout<<"Talen sänktes och ökade";
	
}
	

if(y == 18){
	
cout<<"Talen sänktes bara";	
	
}

if(y == 0){
	
cout<<"Alla talen var likadana";	
	
}
	return 0;
}
