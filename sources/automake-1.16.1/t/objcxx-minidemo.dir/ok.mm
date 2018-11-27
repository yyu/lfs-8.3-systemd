/* The use of #import makes this valid Object C++ but invalid C++. */
#import <iostream>
#import <config.h>
int main (void)
{
    std::cout << "Success (" << PACKAGE_STRING << ")\n";
    return 0;
}
