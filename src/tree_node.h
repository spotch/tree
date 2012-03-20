#ifndef TREE_NODE_H_
#define TREE_NODE_H_

#include <list>

class TreeNode
{
public:
	TreeNode(int index);
	~TreeNode();

	void AddChild(TreeNode* pTreeNode);
	unsigned int GetNumberOfChildren() const;

private:
	int m_index;
	std::list<TreeNode*> m_children;
};

#endif // TREE_NODE_H_
