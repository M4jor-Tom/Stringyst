#include "Headers/Stringyst.h"

#include <iostream>

using namespace std;

int main()
{
	for (string piece : explode(";", "--1;2;3;4;5--"))
		cout << piece << endl;
	return 0;
}