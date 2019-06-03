    
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, char** argv) {
		
int x,y,z,g,f,q;	

string svar;
	
	
srand(time(0));


x = rand()%6 + 1;
y = rand()%6 + 1;
z = rand()%6 + 1;
g = rand()%6 + 1;
f = rand()%6 + 1;
	
	
cout<<x<<" "<<y<<" "<<z<<" "<<g<<" "<<f<<endl;	
		

cout<<"vill du slå om ett nummer? svara ja eller nej;"<<endl;
cin>>svar;


if(svar == "ja"){
		
cout<<"vilket nummer? 1-5"<<endl;
cin>>q;	
	
} else if(svar == "nej"){
	
	
return 0;	
	
}



if(q == 1){
srand(time(0));	

x  = rand()%6 + 1; 	
	
} else if(q == 2){
srand(time(0));	

y = rand()%6 + 1;	
	
} else if(q == 3){
srand(time(0));	

z = rand()%6 + 1;	
	
} else if(q == 4){
srand(time(0));

g = rand()%6 + 1;
	
} else if(q == 5){
srand(time(0));	

f = rand()%6 + 1;	
		
}


cout<<x<<" "<<y<<" "<<z<<" "<<g<<" "<<f<<endl;


	return 0;
}
