#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int top;
	
	Node *next;
};
Node *top = NULL;
// t?o m?t node
void *createNode(int x) 
{
	Node *p = new Node;
    p->top = x; 
    p->next = NULL;
    return  p;
}
void Push(int S[], int &top, int x)
{
	Node *p = new createNode(x)
}
int main(){
	
}