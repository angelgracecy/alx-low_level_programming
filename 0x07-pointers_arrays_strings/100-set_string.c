#include <stdio.h>

void set_string(char **s, char *to);

int main(void)
{
char *str1 = "hello";
char *str2 = "world";
char *str3;
set_string(&str3, str1); /* set str3 to point to "hello" */
printf("%s\n", str3); /* prints "hello" */

set_string(&str3, str2); /* set str3 to point to "world" */
printf("%s\n", str3); /* prints "world" */

return (0);
}

void set_string(char **s, char *to)
{
*s = to;
}
