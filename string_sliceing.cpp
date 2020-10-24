#include <stdio.h>
#include <string.h>
 void slice_str(const char * str, char * buffer, size_t start, size_t end) 
 
 { size_t j = 0; for ( size_t i = start; i <= end; ++i ) 
 { buffer[j++] = str[i]; }
  buffer[j] = 0; } 
  int main(void) 
  { const char * str = "anjali";
   const size_t len = strlen(str);
    char buffer[len + 1];
    //printf ("%s",buffer);
   // for ( size_t start = 0; start < len; ++start ) 
    // {
   size_t  start=1;
   
  // for ( int i1 = len - 1; i1 >= (int) start; --i1 ) 
   { 
   slice_str(str, buffer, 1, 1);
  // char array[strlen (str)]
   
    printf("%s\n", buffer);
    } 
     // } 
      return 0;
       }