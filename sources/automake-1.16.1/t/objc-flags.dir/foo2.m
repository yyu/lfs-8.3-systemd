/* Let's make this file valid Objective C but invalid C. */
#import <stdlib.h>
@interface Who_Cares { } @end
#ifdef ERROR
#  error "macro ERROR is defined for foo.m"
#else
#  if VALUE == 2
     int main (void) { exit (0); }
#  else
#    error "VALUE is != 2 in foo.m"
#  endif
#endif
