#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int *a;
};
int isEmpty(struct stack* ptr)
{
	if(ptr->top == -1){
		return 0;
	}
	else
	{
		return 1;
	}
}
int isEmpty(struct stack* ptr)
{
	if(ptr->top == ptr->size-1){
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	struct stack *s;
	s->size = 50;
	s->top = -1;
	s->a = (int *) malloc(s.size * sizeof(int));
	
	return 0;
}