#pragma once
#include "CSWoman.h"

class Node
{
public:
	Node* next_;
	const CSWoman woman_;

	Node(Node* next, const CSWoman& woman);
	~Node();
};

class llist
{
private:
	Node * m_head;
	Node * temp_node;
	Node * node;

public:
	llist();
	~llist();
	void reverse();
	void clearList();
	void printList();
	void add(const CSWoman* const woman);
};



