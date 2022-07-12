// A simple C program to introduce
// a linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

// Program to create a simple linked
// list with 3 nodes
int main()
{
	Node* head=NULL;
	Node* second=NULL;
	Node* third=NULL;
	Node* fourth=NULL;


	// allocate 3 nodes in the heap
	head = (Node*)malloc(sizeof(Node));
	second = (Node*)malloc(sizeof(Node));
	third = (Node*)malloc(sizeof(Node));
	fourth = (Node*)malloc(sizeof(Node));

	/* Three blocks have been allocated dynamically.
	We have pointers to these three blocks as head,
	second and third	
	head		 second		 third
		|			 |			 |
		|			 |			 |
	+---+-----+	 +----+----+	 +----+----+
	| # | # |	 | # | # |	 | # | # |
	+---+-----+	 +----+----+	 +----+----+
	
# represents any random value.
Data is random because we haven’t assigned
anything yet */
	if(head==NULL)
	{
		free(head);
	return 1;
	} 
	head->data = 1; // assign data in first node
	head->next = second;// Link first node withq
	// the second node

	/* data has been assigned to the data part of the first
	block (block pointed by the head). And next
	pointer of first block points to second.
	So they both are linked.

	head		 second		 third
		|			 |			 |
		|			 |			 |
	+---+---+	 +----+----+	 +-----+----+
	| 1 | o----->| # | # |	 | # | # |
	+---+---+	 +----+----+	 +-----+----+	
*/

	// assign data to second node
	second->data = 2;

	// Link second node with the third node
	second->next = third;

	/* data has been assigned to the data part of the second
	block (block pointed by second). And next
	pointer of the second block points to the third
	block. So all three blocks are linked.
	
	head		 second		 third
		|			 |			 |
		|			 |			 |
	+---+---+	 +---+---+	 +----+----+
	| 1 | o----->| 2 | o-----> | # | # |
	+---+---+	 +---+---+	 +----+----+	 */

	third->data = 3; // assign data to third node
	third->next = fourth;
	fourth->data = 4;
	fourth->next = NULL;
	/* data has been assigned to data part of third
	block (block pointed by third). And next pointer
	of the third block is made NULL to indicate
	that the linked list is terminated here.

	We have the linked list ready.

		head	
			|
			|
		+---+---+	 +---+---+	 +----+------+
		| 1 | o----->| 2 | o-----> | 3 | NULL |
		+---+---+	 +---+---+	 +----+------+	
	
	
	Note that only head is sufficient to represent
	the whole list. We can traverse the complete
	list by following next pointers. */
for (Node*tmp = head; tmp !=NULL; tmp = tmp->next)
{
	printf("$%i\n",tmp->data);
}
	return 0;
}
