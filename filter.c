#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* string_filter(const char* text);
/*
int main()
{
  const char * string = "...Hello World!!!";
  printf("%s", string_filter(string));
}
*/
char * string_filter(const char* text)
{
  int len_t = strlen(text)+1; 
  char * copy = malloc(sizeof(char)*len_t);

  char * result = copy;

  while(*text != '\0')
  {
    if (!isspace(*text) && isalpha(*text))
    {
      *copy = *text;
      copy++;
    }
    text++;
  }
  return result;
}
