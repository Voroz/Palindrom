#include <string>
#include <iostream>

using namespace std;

bool isPalindrome(const string& str){
	// Create new string from input string but with no spaces and no uppercase.
	string str1 = "";
	for (auto &letter : str){
		if (letter == ' '){
			continue;
		}
		str1 += tolower(letter);
	}

	// Create reversed string from str1
	string str2 = "";
	for (int i = str1.size() - 1; i >= 0; i--){
		str2 += str1[i];
	}

	return (str1 == str2);
}

int main(){
	cout << isPalindrome("Ni talar bra Latin") << endl;
	while (1){

	}


	return 0;
}