/* Let's make this file valid Objective C but invalid C. */
#import <stdlib.h>
@interface Who_Cares { } @end
#ifdef ERROR
#  error "macro ERROR is defined for foo.mm"
#else
#  if VALUE == 4
     int main (void) { exit (0); }
#  else
#    error "VALUE is != 4 in foo.mm"
#  endif
#endif
