#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	bool is_increase = true;
	int tal;
	tal = 0;
	while (tal <= 8 and tal >= 0 ){	
	cout<<tal;
	if( tal == 7 ){	
	is_increase = false;
	}
	if(is_increase == false){
		tal--;
	} else {
	tal ++;
	}
	if(tal == -1){
	return 0; 
	}
	}
}
