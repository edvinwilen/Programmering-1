
#include <iostream>



using namespace std;

int IncreaseFunction(int heltal){
	

heltal = heltal + 2;

return heltal;
	
}

int main(int argc, char** argv) {
	
int t;	
	

	
cout<<"skriv in ett tal ";
cin>>t;
	

cout<<IncreaseFunction(t);

		
	return 0;
}
