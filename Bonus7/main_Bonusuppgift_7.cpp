#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int start, rad, tecken ;
	
	cout<<"Skriv in vart mönstret ska börja: "<<endl;
	cin>>start;
	
	cout<<"Skriv hur många rader mönstre ska vara: "<<endl;
	cin>>rad;
	
	cout<<"Skriv hur många tecknen som ska finnas på varje rad: "<<endl;
	cin>>tecken;
	
	for (int i = 0; i < rad; i++){
	
	cout<<endl;
	
	for (int j = 0; j < tecken; j++){
	
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
