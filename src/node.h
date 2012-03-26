#ifndef NODE_H_
#define NODE_H_

#include "i_node.h"

class Node : public INode
{
public:
	Node();
	~Node();

	void Push(INode* pNode);
	INode* Remove(INode* pNode);

	void SetParent(INode* pParent);
	INode* GetParent();

private:
	Node(const Node&);
	Node& operator=(const Node&);

	INode* m_pParent;
	INode* m_pHead;
};

#endif // NODE_H_
