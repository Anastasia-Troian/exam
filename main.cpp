#include <iostream>

using namespace std;

/**/

int main()
{
	float money;

	cout << "Enter money: ";
	cin >> money;

	if (money <= 0)
		while (true)
		{
			cout << "Enter money: ";
			cin >> money;
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