#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
	string str;
    getline(cin, str);
	int h1, h2, m1, m2;
	int h, m;
	
	h1 = str[0] - '0';
	h2 = str[1] - '0';
	m1 = str[3] - '0';
	m2 = str[4] - '0';	
	
	h = h1*10 + h2;
	m = m1*10 + m2;
	
	vector<int> num;
	num.push_back(h1);	//这是里小括号
	num.push_back(h2);
	num.push_back(m1);
	num.push_back(m2);
	
	vector<int> num2;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) {
			int tmp = num[i] * 10 + num[j];		// 一个num[j]
			if (tmp <= 60)
				num2.push_back(tmp);
		}
	sort (num2.begin(), num2.end());	//	你先保存一下 给我看下个题目
	
	
	for (int i = 0; i < num2.size(); i++) {
		if (num2[i] > m && num2[i] <= 60) {
			cout << h << ":" << num2[i] << endl;
			return 0;
		}
	}
	for (int i = 0; i < num2.size(); i++) {
		if (num2[i] > h && num2[i] <= 24) {
			cout << num2[i] << ":" << num2[0] << endl;
			return 0;
		}
	}
	cout << num2[0] << ":" << num2[0] << endl;	//是L 不是 1
	return 0;
}