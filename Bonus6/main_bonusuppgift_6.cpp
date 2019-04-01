#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int start ;
	
	cout<<"Skriv in vart mönstret ska börja: "<<endl;
	cin>>start;
	
	for (int i = 0; i <= 6; i++){
	
	cout<<endl;
	
	for (int j = 0; j <= 10; j++){
	
	if (j == start and i < j ){
								
	cout<<"_";
							
	} else {
	cout<<"*"; 	
	}
	}
	start++;
	}
	
	
	
	
	
	
	return 0;
}
