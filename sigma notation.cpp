#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int const MAX_SIZE=100;
double standardDeviation(double n, double arr[MAX_SIZE]) {
	double std=0 ,  mean = 0;
	for (int i = 0; i < n; i++) {
		mean += arr[i];
	}
	mean /= n;
	for (int i = 0; i < n; i++) {
		std += pow(((arr[i] - mean) ),2);
	}
	std /= n;
	return sqrt(std);

}
double correlation(double n, double x[], double y[]) {
	double sumx =0, sumy =0, sumx2 =0, sumy2 =0, sumxy = 0,r=0;
	for (int i = 0; i < n; i++) {
		sumx += x[i];
		sumx2 += pow(x[i], 2);
		sumy += y[i];
		sumy2 += pow(y[i], 2);
		sumxy += x[i] * y[i];
	}
	r = (n * sumxy - sumx * sumy) / (sqrt((n * sumx2 - pow(sumx, 2)) * (n * sumy2 - pow(sumy, 2))));

	return r;
}

int main()
{
	/*double arr[MAX_SIZE];
	double n;
	cin >> n;
	for (int i=0;i<n;i++) {
		cin >> arr[i];
	}
	cout << standardDeviation(n, arr);*/

	double n;
	double x[MAX_SIZE], y[MAX_SIZE];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	cout << "=============================\n";
	for (int i = 0; i < n; i++) {
		cin >> y[i];
	}

	cout <<"correlation is "<< correlation(n, x, y);

	return 0;
}