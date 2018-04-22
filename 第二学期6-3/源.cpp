#include<iostream>

using namespace std;

int main()
{
	int M(0), N(0),I(0);
	bool T = false;
	cin >> M >> N >> I;
	int **p = new int*[M];
	for (int i = 0; i < N; i++)
	{
		p[i] = new int[N];
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> p[i][j];
			if (p[i][j] == I)
				T = true;
		}
	}
	if (T)
		cout << "Yes";
	else
		cout << "No";
	for (int i = 0; i < N; i++)
	{
		delete[] p[i];
	}
	delete p;
	//system("pause");
	return 0;
}