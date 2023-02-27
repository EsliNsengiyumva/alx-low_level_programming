#include "main.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
int l, i;
  char *begin_ptr, *end_ptr, ch;
 
 
  l = strlen(str);
 
  // Set the begin_ptr
  // initially to start of string
  begin_ptr = str;
   
  //Setting end_ptr initially to
  //the end of the string
  end_ptr = str + l - 1;
 
  // Swap the char from start and end
  //i index using begin_ptr and end_ptr
  for (i = 0; i < (l - 1) / 2; i++) {
 
    // swap character
    ch = *end_ptr;
    *end_ptr = *begin_ptr;
    *begin_ptr = ch;
 
    // update pointers positions
    begin_ptr++;
    end_ptr--;
  }
}
