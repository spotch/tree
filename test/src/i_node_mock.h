#ifndef NODE_MOCK_H_
#define NODE_MOCK_H_

#include "i_node.h"
#include "gmock/gmock.h"

class NodeMock : public INode
{
public:
	MOCK_METHOD1(Push, void(INode* pNode));

	MOCK_METHOD1(SetParent, void(INode* pParent));
	MOCK_METHOD0(GetParent, INode*());
};

#endif // NODE_MOCK_H_
