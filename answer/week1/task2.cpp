#include <iostream>

// using namespace を使うことで以下の std を省略できる．
using namespace std;

int main()
{
	int a, b, c, d;
    cout << "a b c d: ";
	cin >> a >> b >> c >> d;
	cout << "判定：";

	if (((a + b + c + d) % 2) == 0) // 和が偶数
	{
		if (( (a * b * c * d) % 2) == 0) // 積が偶数
		{
			cout << "和も積も偶数\n";
		}
		else
		{
			cout << "和が偶数\n";
		}
	}
	else // 和が奇数の場合、積は必ず偶数になる
	{
		cout << "積が偶数\n";
	}
}