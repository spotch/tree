#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "tree_node.h"

#include "tree_node_mock.h"

class TreeNodeTest : public ::testing::Test
{
protected:
	virtual void SetUp()
	{
	}

	virtual void TearDown()
	{
	}
};

TEST_F(TreeNodeTest, TreeNodeConstructsWithNoChildren)
{
	TreeNode testObject(5);
	EXPECT_EQ(testObject.GetNumberOfChildren(), 0);
}

TEST_F(TreeNodeTest, AddingChildrenIncreasesNumberOfChildren)
{
	TreeNode testObject(5);
	EXPECT_EQ(testObject.GetNumberOfChildren(), 0);
	testObject.AddChild(0);
	EXPECT_EQ(testObject.GetNumberOfChildren(), 1);
}

