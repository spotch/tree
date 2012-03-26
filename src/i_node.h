#ifndef I_NODE_H_
#define I_NODE_H_

class INode
{
public:
	virtual ~INode() { }

	virtual void Push(INode* pNode) = 0;
//	virtual INode* Remove(INode* pNode) = 0;

	virtual void SetParent(INode* pParent) = 0;
	virtual INode* GetParent() = 0;
};

#endif // I_NODE_H_
