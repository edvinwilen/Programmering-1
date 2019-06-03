#include <iostream>
using namespace std;
int whilemax (int t) {
int a;

cout << "skriv ett heltal " <<endl;

cin >> a;

while (a > t) {

cout << "skriv ett heltal " <<endl;

cin >> a;
}
}

int main(int argc, char** argv) {

int n = 34;

whilemax(n);
return 0;
}
