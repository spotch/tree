#ifndef TREE_NODE_MOCK_H_
#define TREE_NODE_MOCK_H_

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "tree_node.h"

class TreeNodeMock : public TreeNode
{
public:
	MOCK_METHOD1(AddChild, void(TreeNode*));
};

#endif // TREE_NODE_MOCK_H_
