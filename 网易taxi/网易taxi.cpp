#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int taxiNum;
	string temp1, temp2;
	int taxiPos[50][2];
	int officePos[2];
	int walkTime = 0, taxiTime = 0;

	cin >> taxiNum;
	cin.ignore();
	for (int i = 0; i<taxiNum; i++) {
		cin >> taxiPos[i][0];
	}

	for (int i = 0; i<taxiNum; i++) {
		cin >> taxiPos[i][1];
	}

	cin >> officePos[0] >> officePos[1];
	cin >> walkTime >> taxiTime;

	int result = (abs(officePos[0]) + abs(officePos[1]))*walkTime;

	for (int i = 0; i<taxiNum; i++)
	{
		int a = (abs(taxiPos[i][0] - officePos[0]) + abs(taxiPos[i][1] - officePos[1]))*taxiTime;
		int b = (abs(taxiPos[i][0]) + abs(taxiPos[i][1]))*walkTime;
		//cout << a << "  " << b << endl;
		if (result>(a + b)) {
			result = a + b;
		}
	}
	cout << result << endl;
}