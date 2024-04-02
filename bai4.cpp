#include <iostream>
using namespace std;
// khởi tạo 1 danh sách
struct Node {
	int value;
	Node *next; // *link
	
};
void init(Node *&head)
{
	head = NULL;
	
}
Node *createNode(int x) // tao node mới
{
	// cấp phát bộ nhớ cho con trỏ p
    Node *p 	= new Node;
    p->value = x; //
    p->next = NULL;
    return  p;
    // tạo đâu đó 1 cái node phân làm 2 vingf 1 chứa số 10 còn lại nối null
}
// thêm 1 phần tử vào đầu danh sách
void addFirst(Node *&head, int x)
{
	Node *p = createNode(x); // gọi hàm trên để tạo ra 1 cái node
	p->next = head; // chỉnh đường liên kết của head
	head = p;
}
// xuat ra 
void output( Node *head)
{
	Node *p = head;
	while(p != NULL)
	{
		cout <<p-> value<<" \t";
		p = p->next;
	}
	
}
// thêm 1 node vào cuối liên kết
void addLast(Node *head, int x)
{
	Node *p = createNode(x);
	// xá định node cuối cùng (lát)
	Node *last = head;
	while(last-> next!= NULL)
	{
		last = last->next;	
	}
	
	
	// chèn vào cuối
	last->next=p;
}
int main()
{
	Node *head; 
	init(head);
	createNode(10);
	addFirst(head,10);
	addFirst(head, 15);
	addLast(head, 100);
	addFirst(head, 9);
	addLast(head,99);
	output(head);
	
	return 0;
}