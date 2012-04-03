#ifndef I_NODE_H_
#define I_NODE_H_

class INode
{
public:
	virtual ~INode() { }

	virtual void SetIndex(int index) = 0;
};

#endif // I_NODE_H_
