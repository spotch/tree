#include "gtest/gtest.h"
#include "tree_node.h"

class TreeNodeTest : public ::testing::Test
{

};

TEST_F(TreeNodeTest, TreeNodeConstructsWithNoChildren)
{
	TreeNode t;
	EXPECT_EQ(t.GetNumberOfChildren(), 0);
}
