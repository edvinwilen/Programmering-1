#include <iostream>
using namespace std;

int a(int grader){
	
int c;

c = (grader *1.8) + 32;
	
return c;	
	
}
int e(int grader){
	
int c;

	
c = (grader /1.8) - 32;
	
return c;		
}
int formelVal(int grader, string svar){
	
int c;
	
if(svar == "C"){
	
a(grader);
	
c = a(grader);
	
return c;	
	
}

if(svar == "F"){

e(grader);		
	
c = e(grader);	
	
return c;
	
}
}
int main(int argc, char** argv) {

int grader;
string svar;

cout<<"vill du konvertera från Farenheit eller från Celcius? Skriv in stort F eller stort C; "<<endl;
cin>>svar;

cout<<"Hur många grader?"<<endl;
cin>>grader;


cout<<formelVal(grader,svar);

	return 0;
}
