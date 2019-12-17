
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	char data;
	struct Node *next;
}Node;

void Initlist(Node* L)
{
	L->next = NULL;
}
void creatformhead(Node* L)
{
	char c;
	int flag = 1;
	while (flag)
	{
		printf("jjj\n");
		c = getchar();
		if (c != '$')
		{
			Node* s;
			s = (Node*)malloc(sizeof(Node));
			s->next = NULL;
			printf("rrr\n");
			s->data = c;
			s->next = L->next;
			L->next = s;
			printf("ssss\n");
		}
		else
		{
			flag = 0;
			printf("ssss\n");
		}

	}

}

int main(void){
	Node* Linklist= (Node*)malloc(sizeof(Node));
	Initlist(Linklist);
	creatformhead(Linklist);
	return 0;
}
