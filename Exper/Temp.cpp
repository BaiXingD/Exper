#include <iostream>

using namespace std;

class A {
	void test(float a) { cout << "1"; }
};
class B :public A {
	void test(int b) { cout << "2"; }
};

void prim(int m, int n)
{
	if (m >= n)
	{
		while (m%n) n++;
		m/=n;
		prim(m, n);
		cout << n << endl;
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	prim(a,b);
	return 0;
}