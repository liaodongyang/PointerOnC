#include <stdio.h>

#define offset_of(TYPE, MEMBER)    ((size_t) &((TYPE *)0)-> MEMBER)

#define container_of(ptr, type, member)({ 			           \
		const typeof(((type *)0)->member) *__mptr = (ptr) ;		\
		(type *)((char *)__mptr - offset_of(type,member)); })

struct ast{
	int num;
	char ch;
	float f;
};

int main(){
	struct ast *ct_ast;
	struct ast astalready = {3, 'B', 2.3};
	char *chl = &astalready.ch;
	ct_ast = container_of(chl, struct ast, ch);
	printf("int is %d\n ", ct_ast->num);
	printf("ch is %c\n ", ct_ast->ch);
	printf("f is %f\n ", ct_ast->f);

	return 0;
}
