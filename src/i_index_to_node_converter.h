#ifndef I_INDEX_TO_NODE_CONVERTER_
#define I_INDEX_TO_NODE_CONVERTER_

class INode;

class IIndexToNodeConverter
{
public:
	virtual ~IIndexToNodeConverter() { }

	virtual void ConvertIndexesToNodes(int numberOfIndexes, int* childIndexes, int* parentIndexes, INode* nodes) = 0;

private:

};

#endif // I_INDEX_TO_NODE_CONVERTER_
