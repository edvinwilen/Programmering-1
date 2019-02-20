#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	
	int user_input;
	
	
	cout << "Skriv ett nummer : ";
	cin >> user_input;


	if(user_input > 44 and user_input <64){
	
	cout << "Grattis du vann! Bra Jobbat! Ditt nummer var " << user_input << endl;	
	}else {
		cout << "Game over! Ditt nummer var " << user_input << endl;	
	}

	
	
	
	return 0;
}
