#include"header.h"
int main()
{
	printf("__Start: %s __\r\n",__func__);
	LL_STR * start;
	start = NULL;
	start = create(start);
	print(start);
	start = create(start);
	print(start);
	delet();
	printf("__Ends : %s __\r\n",__func__);
	return 0;
}
void delet()
{
	printf("__Start: %s __\r\n",__func__);
	printf("__Ends : %s __\r\n",__func__);
}
LL_STR * create(LL_STR * ob_start)
{
	printf("__Start: %s __\r\n",__func__);
	LL_STR * ob;
	ob=NULL;
	if(ob_start==NULL)
	{
		ob= (LL_STR *)malloc(sizeof(LL_STR));
		ob->a=0;
		ob->next=NULL;
	}
	else
	{
		printf("Link List Already Created \n\r");
	}
	printf("__Ends : %s __\r\n",__func__);
	return ob;
	
}
void print(LL_STR * ob)
{
	printf("__Start: %s __\r\n",__func__);
	do
	{
		printf("a:%d \r\n",ob->a);
	}while(ob->next!=NULL);
	printf("__Ends : %s __\r\n",__func__);
}
