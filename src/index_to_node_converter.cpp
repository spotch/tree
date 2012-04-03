#include "index_to_node_converter.h"

#include "i_node.h"

void IndexToNodeConverter::ConvertIndexesToNodes(int numberOfIndexes, int* indexes, INode* nodes[])
{
	for (int i(0); i < numberOfIndexes; ++i)
	{
		nodes[i]->SetIndex(indexes[i]);
	}
}
