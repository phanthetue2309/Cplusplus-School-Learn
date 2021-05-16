#include<bits/stdc++.h>
using namespace std;
typedef struct DLL
{
	int data;
	int pos;
	struct DLL *next;
	struct DLL *prev;
} *node;
node cN()
{
	node tmp;
	tmp = node(malloc(sizeof(DLL)));
	tmp->data = 0;
	tmp->pos = 0;
	tmp->next = NULL;
	tmp->prev = NULL;
	return tmp;
}
void aN(node &head, node &tail, int v)
{
	node tmp = cN(), p;
	tmp->data = v;
	if (head == NULL) 
	{
		head = tail = tmp;
		head->pos = tail->pos = 1;
	}
	else
	{
		p = head;
		while (p->next != NULL) p = p->next;
		tmp->prev = p;
		tmp->pos = tail->pos;
		p->next = tmp;
		tail = tmp;
		tail->pos++;
	}
}
void pN(node head)
{
	node p = head;
	while (p != NULL) 
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << "\n";
}
void rpN(node tail)
{
	node p = tail;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->prev;
	}
	cout << "\n";
}
int size(node tail)
{
	return tail->pos;
}
int main()
{
	node head = NULL, tail = NULL;
	int n, x;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		aN(head, tail, x);
	}
	pN(head);
	rpN(tail);
	cout << size(tail);
	return 0;
}

