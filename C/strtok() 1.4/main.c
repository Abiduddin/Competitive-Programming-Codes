#include <stdio.h>
#include <string.h>

int main ()
{
 char str[] = "this, is the string - I want to parse";
char delim[] = " ,-";
char* token;

for (token = strtok(str, delim); token; token = strtok(NULL, delim))
{
    printf("token=%s\n", token);
}
}
