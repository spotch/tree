#ifndef I_NODE_MOCK_H_
#define I_NODE_MOCK_H_

#include "i_node.h"
#include "gmock/gmock.h"

class INodeMock : public INode
{
public:
	MOCK_METHOD1(SetIndex, void(int));
};

#endif // I_NODE_MOCK_H_
