#include"header.h"
int main()
{
	printf("__Start: %s __\r\n",__func__);
	delet();
	printf("__Ends : %s __\r\n",__func__);
	return 0;
}
void delet()
{
	printf("__Start: %s __\r\n",__func__);
	printf("__Ends : %s __\r\n",__func__);
}
