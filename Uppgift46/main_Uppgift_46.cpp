#include <iostream>

using namespace std;

int matte(int q, int f){
	
for( q = q; q > 0;q--){
	
f = f + q;	

}	
	
cout<<f;	
	
}
int main(int argc, char** argv) {

int x,y;	
	
cout<<"skriv in ett heltal"<<endl;
cin>>x;
	
matte(x,y);
	
	return 0;
}
