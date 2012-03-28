#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "list_node.h"

class ListNodeTest : public ::testing::Test
{
protected:
	void SetUp()
	{
	}
	void TearDown()
	{
	}
};

TEST_F(ListNodeTest, InitializesWithNulls)
{
	ListNode node;
	EXPECT_EQ((IListNode*)0, node.GetPrevious());
	EXPECT_EQ((IListNode*)0, node.GetNext());
}
