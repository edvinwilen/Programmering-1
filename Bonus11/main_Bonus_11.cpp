#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
int array[5];
bool is_same = false;

for(int f = 0; f < 5; f++){
	
cout<<"skriv in 5 heltal "<<endl;
cin>>array[f];

}	

for(int f = 0; f < 5 ;f++){

		
for(int g = 0; g < 5 ;g++){
		    		
				
if( g != f){
						
						
if(array[f] == array[g] ){
						
							
cout<<" Nummer "<<f<<" och nummer "<<g<<" är samma ";	
						
is_same = true;
						
if(is_same == true){
	
return 0;
	
}
}
}	
}		
}	

if(is_same == false){
	
cout<<"inga nummer är samma";
}

	return 0;
}

