#include "Headers/Stringyst.h"

#include <iostream>

using namespace std;

int main()
{
	string toExplode = "a.z.e.r.t.y.u.i.o.p";
	vector<string>
		rExploded = vExplode(".", toExplode),
		exploded = vExplode(".", toExplode, true);
	
	cout
		<< "Trim test:" << endl
		<< trim("bad bad bad success not good", " badnotgood") << endl << endl
		<< "Explode test:" << endl;
	for(string e : exploded)
		cout << e << ";";
	cout << endl;
	for(string e : rExploded)
		cout << e << ";";
	return 0;
}
