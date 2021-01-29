#include "Headers/Stringyst.h"

#include <iostream>

using namespace std;

int main()
{
	
	list<string> exploded = lExplode(".", "192.168.100.1");
	exploded.reverse();
	
	cout
		<< "Trim test:" << endl
		<< trim("bad bad bad success not good", " badnotgood") << endl << endl
		<< "Explode test:" << endl;
	for(string e : exploded)
		cout << e << ";";
	return 0;
}
