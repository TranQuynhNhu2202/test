#include <iostream>
#include <bits/stdc++.h>
#define MAX 100
using namespace std;
void nhapMang(int a[] , int &n)
{
	cout << " nhap n =";
	cin >> n;
	for (int i =0; i <n; i++)
	{
		cout << "nhap phan tu a["<<i<<"] =";
		cin >> a[i];
	}
}
void xuatds( const int a[],const  int n)
{
	for (int i =0; i <n; i++)
	    cout <<a[i]<<"\t";
	cout <<endl;
}

int main()
{
	int a[MAX];
	int n;
	nhapMang(a,n);
	xuatds(a,n);
	return 0;
}