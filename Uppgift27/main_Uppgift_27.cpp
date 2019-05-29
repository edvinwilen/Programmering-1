#include <iostream>

using namespace std; 

int main(int argc, char** argv) {
	
bool start = true;

float a, b, svar1, svar2, svar3, svar4,y,n;

string matte;

while(start==true) {
	
	

		char A; 
		cout <<"Skriv in vilket räknesätt du vill använde mellan Addition, Subtraktion, Multiplikation, Division; "<<endl;
		cin >> matte;
		
		cout << "Skriv första talet som du ska använda räknesättet på" << endl;
		cin >> a;
		
		cout << "Skriv andra talet som du ska använda räknesättet på" << endl;
		cin >> b;
		
		
		if(matte == "Addition" ){
			
		svar1 = a + b;
		
		cout << "svaret är " << svar1;
		
		}
			
		if( matte == "Subtraktion" ){
			
		svar2 = a - b;
			
		cout << "svaret är " << svar2;	
			
		} 
			
		if( matte == "Multiplikation" ){
			
		svar3 = a * b;
			
		cout << "svaret är " << svar3;	
			
		} 
			
		if( matte == "Division" ) {
		
			
		svar4 = a / b;	
		
		cout << "svaret är " << svar4;
			
		} 
		
		cout <<" Vill du köra om miniräknaren? "<<endl;
		cout <<" Skriv y eller n "<<endl;
		cin >> A;
		
		
		if( A == 'y' ){
		 start = true; 
		}else if ( A == 'n' ){
		 start = false;
		} 
	
}
	
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	

