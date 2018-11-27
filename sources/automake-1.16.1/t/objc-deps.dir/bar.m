/* The use of #import makes this valid Object C but invalid C. */
#import "baz.h"
int main (void)
{
    fprintf (stdout, "%s\n", MSG);
    return EXIT_SUCCESS;
}
