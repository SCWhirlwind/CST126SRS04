#include "stdafx.h"
#include <iostream>
#include "llist.h"


void llist::reverse()
{
	Node* prev{ nullptr };
	auto curr{ m_head };
	while (curr != nullptr)
	{
		const auto next = curr->next_;
		curr->next_ = prev;
		prev = curr;
		curr = next;
	}
	m_head = prev;
}

void llist::clearList()
{
	Node * next = m_head;
	Node * dNode = next;
	while (next != nullptr)
	{
		next = next->next_;
		delete dNode;
		dNode = next;
	}
}

void llist::printList()
{
	Node * next = m_head;
	while (next != nullptr)
	{
		next->woman_.print();
		next = next->next_;
	}
}

void llist::add(const CSWoman * const woman)
{
	if (m_head == nullptr) {
		m_head = new Node(nullptr, *woman);
		node = m_head;
		temp_node = m_head;
	}
	else {
		node = new Node(nullptr, *woman);
		temp_node->next_ = node;
		temp_node = node;
	}
}
Node::Node(Node * next, const CSWoman& woman)
	:next_{ next }, woman_{ woman } {}

Node::~Node() {}

llist::llist() :m_head{ nullptr } {}

llist::~llist() {};
