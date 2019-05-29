#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int calc(int x, int y){
int z;

int tiden;
	
tiden = time(0);

srand(tiden);

while(z > x or z < y){
	
z = (rand()%x) + y;
		
}

return z;

}

int main(int argc, char** argv) {
		
int x,y,z;

cout<<"skriv in det största heltalet:"<<endl;
cin>>x;
cout<<"skriv in det minsta heltalet:"<<endl;
cin>>y;	
	
calc(x,y);
cout <<calc(x,y);
	
	return 0;
}
