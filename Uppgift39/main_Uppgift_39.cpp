#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, char** argv) {

int x,y;

int tiden = time(0);

srand(tiden);

x = rand() %10 + 1;
y = rand() %10 + 1;

if(x > y){
	
cout<<x<<endl<<y;
	
}else if(y > x){
	
	
cout<<y<<endl<<x;	
	
}else if(y = x){
	
cout<<x<<endl<<y;	
	
}

	return 0;
}
