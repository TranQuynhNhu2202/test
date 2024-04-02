// ngăn xếp
#include <bits/stdc++.h>
int top;
using namespace std;
int Strack[100];

void Push(int S[], int &top, int x) // chỉ số đỉnh là top, thêm dấu tham chiếu 
{
	if(top <99)
	{
		top ++;
		S[top]= x;
	}
}
//------------
void Pop(int S[], int &top)
{
	int x;
	if( top >-1 && top <= 99)
	{
		x=S[top];
		top --;
		
	}
	cout <<"  "<< x;
}
//------------
// viết 1 hàm tạo ngăn xếp
void Input(int S[], int &top)
{
 int x;
	  char ch;
	 do{
	 	cout <<" x=";
	    cin >> x;
	    Push(S,top,x);
	    cout <<" \n tiep tuc khoong  [y]?";
	    cin >> ch;
	
	 } while( ch =='y');
	 
}
///-------------
// xuất ngăn xếp
void Output( int S[], int &top)
{
	while(top >=0)
	{
		Pop(S,top);
	}
}
void list(int S[], &top, int x)
{
	
}

 int main()
 {
 	top=-1; // nhăn xếp rỗng 
 	Input(Strack,top);
 	cout <<" ngan xep vua tao: \n";
 	Output(Strack,top);
 	cout <<"\n ngan xep vua tao: \n";
 	Push( Strack, top, 6);
 	Push(Strack, top, 7);
 	Output(Strack,top);
 	
 
 	return 1;
 	
 	
 }
 
