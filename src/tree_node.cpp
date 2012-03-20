#include "tree_node.h"

TreeNode::TreeNode(int index):
	m_index(index)
{
}

TreeNode::~TreeNode()
{
}

void TreeNode::AddChild(TreeNode* pTreeNode)
{
	m_children.push_back(pTreeNode);
}

unsigned int TreeNode::GetNumberOfChildren() const
{
	return m_children.size();
}
