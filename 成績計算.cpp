#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d, e, f, g, h, i, j;
		cout << "請輸入國文成績" << endl;
		cin >> a;
		cout << "請輸入英文成績" << endl;
		cin >> b;
		cout << "請輸入數學成績" << endl;
		cin >> c;
		cout << "請輸入地理成績" << endl;
		cin >> d;
		cout << "請輸入歷史成績" << endl;
		cin >> e;
		cout << "請輸入公民成績" << endl;
		cin >> f;
		cout << "請輸入地科成績" << endl;
		cin >> g;
		cout << "請輸入化學成績" << endl;
		cin >> h;
		cout << "請輸入物理成績" << endl;
		cin >> i;
		cout << "請輸入生物成績" << endl;
		cin >> j;
		cout << "你的總分是" << (a + b + c + d + e + f + g + h + i + j) << "分" << endl;
		cout << "你的總學分是" << (a * 4 + b * 4 + c * 4 + d * 2 + e * 2 + f * 2 + g * 2 + h * 2 + i * 2 + j * 2) << "分" << endl;
		cout << "你的學業平均是" << (a * 4 + b * 4 + c * 4 + d * 2 + e * 2 + f * 2 + g * 2 + h * 2 + i * 2 + j * 2) / 26 << "分" << endl;
}