/* The use of #import makes this valid Object C++ but invalid C++. */
#import <cstdio>
int main (void)
{
    printf("Failure\n");
    return 1;
}
