#include "index_to_node_converter.h"

#include "i_node_mock.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

class IndexToNodeConverterTest : public ::testing::Test
{
protected:
	enum
	{
		NUMBER_OF_NODES = 5
	};

	INodeMock mockNodes[NUMBER_OF_NODES];
	INode* pNodes[NUMBER_OF_NODES];
	int indexes[NUMBER_OF_NODES];

	void SetUp()
	{
		for (int i(0); i < NUMBER_OF_NODES; ++i)
		{
			pNodes[i] = &mockNodes[i];
		}
	}

	void TearDown()
	{
	}
};

TEST_F(IndexToNodeConverterTest, IndexesAreSetOnNodes)
{
	for (int i(0); i < NUMBER_OF_NODES; ++i)
	{
		EXPECT_CALL(mockNodes[i], SetIndex(indexes[i]));
	}

	IndexToNodeConverter testObject;
	testObject.ConvertIndexesToNodes(NUMBER_OF_NODES, indexes, pNodes);
}
