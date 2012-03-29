#ifndef I_TREE_H_
#define I_TREE_H_

class ITreeNode;

class ITree
{
public:
	virtual ~ITree() { }

	virtual void PopulateTreeFromNodes(ITreeNode* pTreeNodes[]) = 0;

};

#endif // I_TREE_H_
