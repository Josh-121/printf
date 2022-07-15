
#include <stdlib.h>
char *rev_string(char *s)

{
int begin, end, count = 0;
char *r = NULL;

while (s[count] != '\0')
      count++;

r=malloc(sizeof(char) *(count+1));

if (r == NULL)
      exit (1);

end = count - 1;

for (begin = 0; begin < count; begin++)
{
      r[begin] = s[end];
      end--;
}

r[begin] = '\0';

return(r);
}
