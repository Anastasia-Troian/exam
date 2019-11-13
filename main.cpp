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
	int ans1, ans2, ans3, ans4;
	if (num >= m1)
	{
		ans1 = num / m1;
		num %= m1;
		cout << ans1 << " to " << m1 << " cents.\n";
	}
	if (num >= m2)
	{
		ans2 = num / m2;
		num %= m2;
		cout << ans2 << " to " << m2 << " cents.\n";
	}
	if (num >= m3)
	{
		ans3 = num / m3;
		num %= m3;
		cout << ans3 << " to " << m3 << " cents.\n";
	}
	if (num >= m4)
	{
		ans4 = num / m4;
		num %= m4;
		cout << ans4 << " to " << m4 << " cents.\n";
	}
}