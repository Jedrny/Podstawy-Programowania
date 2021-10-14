#include <stdio.h> 

int main()
{   
    char c0 = 127;
    char c1 = 127;
    signed char c2 = 127;
    unsigned char c3 = 127;

   
    printf("%i, %i, %i, %i, \n", c0, c1, c2, c3); 

c0 += 1;
c1 += 1;
c2 += 1;
c3 += 1; 


    printf("%i, %i, %i, %i, \n", c0, c1, c2, c3); 

    return 0;
}