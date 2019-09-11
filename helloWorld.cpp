#include <iostream>
#include <string>
using namespace std;

int main(){
	string output = "Whats up?";
	string res;
	cout << output << "\n";
	getline(cin, res);
	cout << "Answer was : " << res;
	return 0;
}