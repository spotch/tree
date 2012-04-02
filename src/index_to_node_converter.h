#ifndef INDEX_TO_NODE_CONVERTER_
#define INDEX_TO_NODE_CONVERTER_

class INode;

class IndexToNodeConverter
{
public:
	~IndexToNodeConverter();

	void ConvertIndexesToNodes(int numberOfIndexes, int* childIndexes, int* parentIndexes, INode* nodes);

private:

};

#endif // INDEX_TO_NODE_CONVERTER_
