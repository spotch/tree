#include "node.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "i_node_mock.h"

class NodeTest : public ::testing::Test
{
protected:
	virtual void SetUp()
	{
	}

	virtual void TearDown()
	{
	}
};

TEST_F(NodeTest, NodeInitiallyHasNoParent)
{
	Node testObject;
	EXPECT_EQ((INode*)0, testObject.GetParent());
}

TEST_F(NodeTest, PushedNodeReferencesCallingParent)
{
	Node pushedNode;
	Node callingParent;

	callingParent.Push(&pushedNode);

	EXPECT_EQ(&callingParent, pushedNode.GetParent());
}
