
#ifndef LIST_COMPONENT_H_
#define LIST_COMPONENT_H_

#include "i_list_component.h"

class ListComponent : public IListComponent
{
public:
	ListComponent();
	~ListComponent();

	INode* GetPrevious();
	INode* GetNext();

	void SetPrevious(INode* pNode);
	void SetNext(INode* pNode);

private:
	INode* m_pPrevious;
	INode* m_pNext;
};

#endif // LIST_COMPONENT_H_
