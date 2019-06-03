#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, char** argv) {

int x,y,z,g,f;	
	
int tiden = time(0);


srand(tiden);

x = rand()%6 + 1;

y = rand()%6 + 1;

z = rand()%6 + 1;

g = rand()%6 + 1;

f = rand()%6 + 1;


cout<<x<<" "<<y<<" "<<z<<" "<<g<<" "<<f;


	return 0;
}
