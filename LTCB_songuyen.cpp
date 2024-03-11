#include <iostream>
using namespace std;

int main() {
	int s1, s2, s3, lonnhat, nhonhat;
	cout << "so thu 1"; cin >> s1;
	cout << "so thu 2"; cin >> s2;
	cout << "so thu 3"; cin >> s3;
	
	lonnhat = nhonhat = s1;
	
	if (nhonhat > s2) {
		nhonhat = s2;
	}
	if (lonnhat < s2) {
		lonnhat = s2;
	}
	if (nhonhat > s3) {
		nhonhat = s3;
	}
	if (lonnhat < s3) {
		lonnhat = s3;
	}
	cout << "so nho nhat la:" << nhonhat << endl;
	cout << "so lon nhat la:" << lonnhat << endl;
}
