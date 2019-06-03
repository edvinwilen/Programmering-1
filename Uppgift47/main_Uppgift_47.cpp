#include <iostream>
using namespace std;

struct boll{
	
int radien;
string fargen;
int vikten;	

};

int main(int argc, char** argv) {

int radie,vikt;
string farg;


cout<<"skriv in en radie, färg och vikt av en boll"<<endl;
cin>>radie;
cin>>farg;
cin>>vikt;
cout<<endl;

boll boll1 = {radie ,farg, vikt};

boll boll2 = {radie,farg,vikt};

boll2.radien = radie * 2;
boll2.vikten = vikt + 8;

cout<<"Boll 1:"<<endl;
cout<<"radie: "<<boll1.radien<<endl;
cout<<"färg: "<<boll1.fargen<<endl;
cout<<"vikt: "<<boll1.vikten<<endl;

cout<<"Boll 2:"<<endl;
cout<<"radie: "<<boll2.radien<<endl;
cout<<"färg: "<<boll2.fargen<<endl;
cout<<"vikt: "<<boll2.vikten<<endl;

	return 0;
}
