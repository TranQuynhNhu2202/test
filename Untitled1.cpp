#include <bits/stdc++.h>
#include <iostream>
#define MAX 100
using namespace std;

void nhapds(int a[], int &n)
// & tham chiếu giữ lại giá trị 
{
	cout<<" Nhap n =";
	cin >> n;
	for (int i=0; i <n; i++)
	{
		cout <<" nhap a["<<i<<"] =";
		cin >>a[i];
	}
}
void xuatds( const int a[], const  int n)
// khai báo const bên trong hàm không được phếp thay đổi
{
	for (int i=0; i<n; i++)
	   cout <<a[i]<<"\t";
    cout << end;
}
int main()
{
	int a[MAX];
	int n;
	nhapds(a,n);
	xuatds(a,n);
	return 0;
}