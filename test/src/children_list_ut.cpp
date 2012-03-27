
#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "children_list.h"

#include "i_node_mock.h"

class ChildrenListTest : public ::testing::Test
{
public:
	void SetUp()
	{
	}

	void TearDown()
	{
	}
};


TEST_F(ChildrenListTest, ChildrenListInitializesWithNoChildren)
{
}

TEST_F(ChildrenListTest, NodesAddedToEmptyListAreFound)
{
	ChildrenList list;

	NodeMock child;

	list.Add(&child);

	EXPECT_EQ(&child, list.Find(&child));
}

TEST_F(ChildrenListTest, NodesNotAddedToListAreNotFound)
{
	ChildrenList list;

	NodeMock child;

	EXPECT_EQ((INode*)0, list.Find(&child));
}
