#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int start, rad, tecken ;
	
	cout<<"Skriv in vart m�nstret ska b�rja: "<<endl;
	cin>>start;
	
	cout<<"Skriv hur m�nga rader m�nstre ska vara: "<<endl;
	cin>>rad;
	
	cout<<"Skriv hur m�nga tecknen som ska finnas p� varje rad: "<<endl;
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
