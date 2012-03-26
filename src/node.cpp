#include "node.h"

Node::Node():
	m_pParent(0)
{
}

Node::~Node()
{
}

void Node::Push(INode* pNode)
{
	pNode->SetParent(this);
}

INode* Node::Remove(INode* pNode)
{
	return 0;
}

INode* Node::GetParent()
{
	return m_pParent;
}

void Node::SetParent(INode* pParent)
{
	m_pParent = pParent;
}
