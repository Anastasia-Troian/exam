#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/**/

int main()
{
	int  height = 0;
	char constraction[4];
	cout << "Enter height: ";
	cin >> height;

	if (height < 1)
		while (true)
		{
			cout << "Enter height: ";
			cin >> height;
			if (!cin)
			{
				cin.clear();
				while (cin.get() != '\n')
					continue;
				continue;
			}
			break;
		}

	return 0;
}