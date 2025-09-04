#include <string.h>
#include <strings.h>

void bcopy(const void *s1, void *s2, size_t n)
{
    memove(s2, s1, n);
}
