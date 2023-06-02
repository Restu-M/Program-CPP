#include <stdio.h>
#include <iostream>
#define C(a) ((a)*(a)*(a))
using namespace std;

int main() {
	int x,y;

	for (y=12; y>=-9; y--)
	{
		for (x=-14; x<15; x++)
		{
			system("color 0c");
			putchar(C(x*x+y*y-25)<25*x*x*y*y*y ? "*#*#"[(x+10)%4] : '-');
		}

		putchar('\n');
	}

	cin.get();
	return 0;
}