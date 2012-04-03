#ifndef INDEX_TO_NODE_CONVERTER_H_
#define INDEX_TO_NODE_CONVERTER_H_

class INode;

class IndexToNodeConverter
{
public:
	void ConvertIndexesToNodes(int numberOfIndexes, int* indexes, INode* nodes[]);
};

#endif // INDEX_TO_NODE_CONVERTER_H_
