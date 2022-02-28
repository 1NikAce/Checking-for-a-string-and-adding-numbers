#include <iostream> 
#include <cctype> 
#include <Windows.h>
#include < cstring >
using namespace std;
s
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "russia");
	char input[255];
	char input2[255];
	int count = 0;
	int count2 = 0;
	int value1 = 0;
	int value2 = 0;

	cin >> input >> input2;

	for (int i = 0; i < strlen(input); i++) {
		if (isdigit(input[i])) {
		} if (isdigit(input2[i])) {
		} else if (isalpha(input[i])) {
			count++;
		}
		else if (isalpha(input2[i])) {
			count2++;
		}
	}
	if (count == 0) {
		 value1 = atof(input);
	}

	if (count2 == 0) {
		value2 = atof(input2);
		cout << value1 + value2 << endl;
	}
	else {


		cout << input << input2 << endl;
	}
}