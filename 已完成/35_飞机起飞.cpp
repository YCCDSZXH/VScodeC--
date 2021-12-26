#include<iostream>
using namespace std;
int main()
{
	int n, s, h, m, time = -1;
	cin >> n >> s;
	int* t = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> h >> m;
		t[i] = 60 * h + m;
	}
	if (t[0] >= s + 2)
		time = 0;
	else for (int i = 0; i < n - 1; i++)
	{
		if (t[i + 1] - t[i] >= 2 * s + 3)
		{
			time = t[i] + s + 1;
			break;
		}
	}
	if (time == -1)
		cout << (t[n - 1] + 1 + s) / 60 << " " << (t[n - 1] + 1 + s) % 60;
	else
		cout << time / 60 << " " << time % 60;
	delete[]t;
	return 0;
}