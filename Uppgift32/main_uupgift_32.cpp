#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

string x;
bool m_found = false;
bool a_found = false;
bool t_found = false;

cout <<" Skriv in en mening; "<<endl;
cin>> x;

for (int i = 0; i < x.length(); i++){
	
if ( x [i] == 'M' or x [i] == 'm'){
 m_found = true;
}
if ( x [i] == 'A' or x [i] == 'a'){
 a_found = true;
}
if ( x [i] == 'T' or x [i] == 't'){
 t_found = true;
}	
}
if ( m_found==true and a_found==true and t_found==true){
	cout << "mat"<<endl;
}	
return 0;
}

