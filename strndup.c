#ifndef HAVE_STRNDUP

#include <stdlib.h>
#include <string.h>

char *strndup(const char *s, size_t n)
{
  char* newstr = (char*)malloc(n+1);
  if (newstr) 
  {
    strncpy(newstr, s, n);
    newstr[n] = '\0';
  }
  return newstr;
}

#endif /* HAVE_STRNDUP */
