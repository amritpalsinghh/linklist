#include"header.h"
int main()
{
	printf("__Start: %s __\r\n",__func__);
	LL_STR * start;
	start = NULL;
	start=create();
	printf("__Ends : %s __\r\n",__func__);
	return 0;
}
LL_STR * create()
{
	printf("__Start: %s __\r\n",__func__);
	LL_STR * ob;
	ob= (LL_STR *)malloc(sizeof(LL_STR));
	ob->a=0;
	ob->next=NULL;
	printf("__Ends : %s __\r\n",__func__);
	return ob;
}
