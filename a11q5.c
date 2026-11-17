//Unique ID Generator Using static
#include <stdio.h>
void generate_id()
{
    static int id=1000;
    id++;
    printf("Generated ID = %d\n",id);
}
int main()
{
    generate_id();
    generate_id();
    generate_id();
    generate_id();
    return 0;
}
