#include"header.h"
int main()
{
	printf("__Start: %s __\r\n",__func__);
<<<<<<< HEAD
	delet();
	printf("__Ends : %s __\r\n",__func__);
	return 0;
}
void delet()
{
	printf("__Start: %s __\r\n",__func__);
	printf("__Ends : %s __\r\n",__func__);
=======
	create();
	printf("__Ends : %s __\r\n",__func__);
	return 0;
}
void create()
{
	printf("__Start: %s __\r\n",__func__);
	printf("__Ends : %s __\r\n",__func__);	
>>>>>>> a_create_ll
}
