/* The use of #import makes this valid Object C but invalid C. */
#import <stdio.h>
#import <config.h>
int main (void)
{
    printf ("Success (%s)\n", PACKAGE_STRING);
    return 0;
}
