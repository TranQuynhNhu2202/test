#include <bits/stdc++.h>
using namespace std;

	int Stack[100];
	int top;
	int x;
	
//----------------------------------------
void Push(int S[], int &top, int x)
{
	if(top<99)
	{
	    top++;
		S[top]=x;	
	}
}
//----------------------------------------
void Pop(int S[], int &top)
{
	  if(top>-1 && top<=99)
	  {
	  	       x=S[top];
	  	       top--;
	  }
	  cout<<" "<<x;
}
//-----------------------------------------
void Input(int S[], int &top)
{
	  int x;
	  char ch;
	  do{
	  	 cout<<"x=";
	     cin>>x;
	     Push(S,top,x);
	     cout<<"do u want continue ?(y) or (n)?";
	     cin>>ch;
	   }while(ch=='y' or ch=='Y');
}
void Output(int S[], int top)
{
	  while(top>=0)
	  {
	  	Pop(S,top);
	  }
}
int main(){
	top=-1;
	Input(Stack,top);
	cout<<"nx vua tao:\n";
	Output(Stack, top);
	return 1;
}