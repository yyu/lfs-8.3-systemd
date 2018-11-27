/* The use of #import makes this valid Object C++ but invalid C++. */
#import "baz.h++"
int main (void)
{
    std::cout << MSG << "\n";
    return 0;
}
