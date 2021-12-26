#include <iostream>
using namespace std;

int main()
{
	int n, g, r, i, q;
	cin >> n >> g >> r;
	int* l = new int[n + 1];
	for (i = 0; i < n + 1; i++)
		cin >> l[i];
	cin >> q;
	int* t = new int[q];
	for (i = 0; i < q; i++)
		cin >> t[i];
	for (i = 0; i < q; i++)
	{
		for (int b = 0; b < n; b++)
		{
			t[i] = t[i] + l[b];
			if (t[i] % (g + r) >= g)
				t[i] = t[i] + g + r - t[i] % (g + r);
		}
		t[i] = t[i] + l[n];
	}
	for (i = 0; i < q; i++)
		cout << t[i] << " ";
	delete[]l;
	delete[]t;
	return 0;
}