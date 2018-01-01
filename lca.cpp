#include <iostream>
using namespace std;

typedef struct element
{
	int data;
	struct element *left;
	struct element *right;
}node;

node* Lowest_common_ancestor(int v1, int v2)
{
	node *follow, *parent_v1 = root, *parent_v2 = root;
			
	while(parent_v1 != NULL)
	{
		follow = parent_v1;
		if(parent_v1->data < v1)
		{
			parent_v1 = parent_v1->right;
		}
		else
		{
			parent_v1 = parent_v1->left;
		}
				
		if(parent_v2->data < v2)
		{
			parent_v2 = parent_v2->left;
		}
		else
		{
			parent_v2 = parent_v2->right;
		}
				

		if(parent_v2!=parent_v1)
		{
			break;
		}

		return follow;
	}


}				

