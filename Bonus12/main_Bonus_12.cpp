#include <iostream>
using namespace std;
int main(int argc, char** argv) {
int ny, q;	
int array[7];
for(int j = 0; j < 7;j++){
cout<<"skriv ett nummer ";
cin>>array[j];
	}
cout<<"skriv ett nummer som ska byta ut ett annat nummer "<<endl;
cin>>ny;

cout<<"Skriv vilken position i arrayn som det nya nummeret ska vara "<<endl; 
cin>>q;
for(int f = 0; f < 7;f++){
if(f == q){
array[f] = ny;	

cout<<array[f]<<endl;
}

if(f != q){
cout<<array[f]<<endl;
}
}
	return 0;
}
