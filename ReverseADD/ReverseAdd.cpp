//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int state[6] = {1,2,3,4,5,6};
//
//void Roll(string s)
//{
//	char command[50];
//	for (int i = 0; i < (int)s.size(); i++)
//	{
//		command[i] = s.at(i);
//		//cout << command[i] << endl;
//		int mid[6];
//		memcpy(mid, state, 6 * sizeof(int));
//		switch (s.at(i))
//		{
//		case 'L':
//			state[0] = mid[4];
//			state[1] = mid[5];
//			state[4] = mid[1];
//			state[5] = mid[0];
//			break;
//		case 'R':
//			state[0] = mid[5];
//			state[1] = mid[4];
//			state[4] = mid[0];
//			state[5] = mid[1];
//			break;
//		case 'F':
//			state[2] = mid[4];
//			state[3] = mid[5];
//			state[4] = mid[3];
//			state[5] = mid[2];
//			break;
//		case 'B':
//			state[2] = mid[5];
//			state[3] = mid[4];
//			state[4] = mid[2];
//			state[5] = mid[3];
//			break;
//		case 'A':
//			state[0] = mid[3];
//			state[1] = mid[2];
//			state[3] = mid[1];
//			state[2] = mid[0];
//			break;
//		case 'C':
//			state[0] = mid[2];
//			state[1] = mid[3];
//			state[3] = mid[0];
//			state[2] = mid[1];
//			break;
//		default	:
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	string Command;
//	getline(cin,Command);
//
//	Roll(Command);
//	for (int k : state)
//	{
//		cout << k;
//	}
//	cout << endl;
//	return 0;
//}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int reverseAdd(int32_t a, int32_t b)
{
	//翻转数字
	char temp[6];
	//string s1=to, s2;
	int a=1234;
	string s1 = to_string(a);
	string s2 = to_string(b);

	//sprintf(temp, "%d", a);//数字转字符串
	//s1 = temp;
	reverse(s1.begin(), s1.end());//翻转
	a = stoi(s1);
	//for (int i = 0; i < (int)s1.size(); i++)
	//{
	//	temp[i] = s1.at(i);
	//}
	//sscanf_s(temp, "%d", &a);//字符串转数字

	/*sprintf(temp, "%d", b);
	s2 = temp;*/
	reverse(s2.begin(), s2.end());
	b = stoi(s2);
	//for (int i = 0; i < (int)s2.size(); i++)
	//{
	//	temp[i] = s2.at(i);
	//}
	//sscanf_s(temp, "%d", &b);
	return a + b;
}

int main()	//VS2015s上能成功运行啊！！！！
{
	int32_t Number1, Number2;
	cin >> Number1 >> Number2;
	int32_t result = reverseAdd(Number1, Number2);
	cout << result << endl;
	return 0;
}
