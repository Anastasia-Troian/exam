#include <iostream>

using namespace std;

void Cash(float& money, int m1, int m2, int m3, int m4);

int main()
{
	float money;
	int m1 = 25, m2 = 10, m3 = 5, m4 = 1;

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
void Cash(float& money, int m1, int m2, int m3, int m4)
{
	int num = money * 100;
	
}