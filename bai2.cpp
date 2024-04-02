#include <bits/stdc++.h>
using namespace std;
int MAX=50;
//-------
void nhap(int a[], int &n) 
{
	cout <<"Nhap n = ";
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cout <<"Nhap a["<<i<<"] = ";
		cin>> a[i];
	}
}
//---------
void xuat(const int a[], const int n)
{
	for (int i=0; i<n;i++)
	{
		cout <<a[i]<<"\t";	
	}
	cout <<endl;
}
//----------
int timDau(const int a[],const int n,const int x)
{
	int vt=-1;
	for (int i=0; i<n; i++)
	{
		if(a[i]==x)
		{
			vt=i;
			break;
		}
	return vt;	
	}
}
int main() 
{
	int a[MAX];
	int n;
	int x;
	nhap(a,n);
	xuat(a,n);
	cout <<"Nhap x = ";
	cin>>x;
	int vt=timDau(a,n,x);
	if(vt==-1)
	{
		cout <<"Khong tim thay"<<endl;
	} else 
	{
		cout <<"Vi tri tim thay "<<vt<<endl;
	}
	return 0;
}