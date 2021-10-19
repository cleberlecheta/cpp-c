#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * https://www.cyberciti.biz/faq/howto-compile-and-run-c-cplusplus-code-in-linux/
*/
int main() { //C prograns return an int value to the system

	// cout << "Meu primeiro código c++" << endl; //endl quebra a linha ou pode-se usar \n
	cout << "Meu primeiro código\n C++"; //cout - print text to screen

	system("read -p 'Press Enter to continue...' var");
	return 0;
}
