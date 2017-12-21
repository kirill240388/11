#include<stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;
int main()
{int task;
cin >> task;
if (task == 1)
{
	int a, n, y;
	cin >> a;
	cin >> n;
	for (int i = 1; i <= n; i++)
		y = pow(a, i);
	cout << y << endl;
}
if(task==2)
{
	int r,o,c,s,kc;
	float p;
	cout << "vvedite kol-vo oblastei" << endl;
	cin >> o;
	int totalc = 0, totaloc=0;
	float totalp = 0, totalop=0;
	srand(time(NULL));
	for (int i = 1; i <= o; i++)
	{
		cout << "vvedite kol-vo raionov v " << i << " oblasti" << endl;
		cin >> r;
		totalp = 0;
		totalp = 0;
		srand(time(NULL));
		for (int j = 1; j <= r; j++)
		{
			//cout << "skolko chel zhivet v raione" << j << ":";
			//cin >> c;
			//cout << "vvedite ploshad rayona" << endl;
			//cin >> p;
			c = 1 + rand() % 8999;
			p = 1 + rand() % 8999;
			totalp += c;
			totalp += p;
		}
		cout << "vsego v raionezhivet" << totalc << endl;
		cout << "vsego ploshad" << totalp << endl;
		totaloc += totalc;
		totalop += totalp;
	}
	cout << "vsego vo vseh rayonah zhivet"<<totaloc << endl;
	cout << "vsego ploshad" << totalop << endl;

	if (task==4)



	system("pause");
	return 0;
}
}