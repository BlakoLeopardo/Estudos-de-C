/*  UnsigVars.c
    Mostra o modificador Unsigned
*/
#include <stdio.h>

int main()
{
unsigned j = 4294967000UL;
int i = j;

    printf("\nVariavel unsigned = %u", j);
    printf("\nVariavel int = %d\n", i);

return 0;
}