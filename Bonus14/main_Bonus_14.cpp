#include <iostream>
using namespace std;
int main(int argc, char** argv) {

int e;

bool cool = false;

string skriv;

cout<<"Skriv in en text: "<<endl;
getline(cin,skriv);


for(int i = 0;i<skriv.length();i++){
e = i;
if(skriv[i] == 'm' or skriv[i] =='M'){


for(int i = e;i<skriv.length();i++){
e = i;	
if(skriv[i] == 'a' or skriv[i] =='A'){


for(int i = e;i<skriv.length();i++){
	
if(skriv[i] == 't' or skriv[i] =='T'){

cout<<"mat";

return 0;
}
}		
}
}
}
}
}
