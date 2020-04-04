#include<stdio.h>
#include<stdlib.h>
typedef struct LL_STR{
	int a;
	struct LL_STR * next;
}LL_STR;
LL_STR * create(LL_STR * ob_start);
void delet();
void print(LL_STR * ob);
