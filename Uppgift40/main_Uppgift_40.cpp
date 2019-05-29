#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(int argc, char** argv) {
int x,y,z;
cout<<"skriv in det största heltalet:"<<endl;
cin>>x;
cout<<"skriv in det minsta heltalet:"<<endl;
cin>>y;

int tiden = time(0);

srand(tiden);

while(z > x or z < y){
	
z = (rand()%x) + y;
		
}

cout<<z;

	return 0;
}
