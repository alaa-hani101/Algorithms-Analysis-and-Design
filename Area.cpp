#include<iostream>
#include<algorithm>
using namespace std;
int Rhombs_Area(int d1, int d2) {
	return (d1 * d2) / 0.5;
}
int Trapezoid_Area(int a, int b, int h) {
	return 0.5 * (a + b) * h;
}
int main()
{
	cout << Rhombs_Area(2, 9)<<endl;
	cout << Trapezoid_Area(2, 4, 3);
		

	return 0;
}