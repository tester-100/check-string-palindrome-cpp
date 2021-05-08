/**/

#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string text, reverse = "";
	cout << "Enter the string : ";
	cin >> text;
	if (text.length() == 0) {
		cout << "[ String is empty ]" << endl;
		return 0;
	}
	for (int i = 0; i < text.length(); ++i) {
		reverse = reverse + text[text.length()-i-1];
	}
	if (reverse == text) {
		cout << "[ The string is a palindrome ]" << endl;
	} else {
		cout << "[ The string is not a palindrome ]" << endl;
	}
	return 0;
}
