#include "countUniqLetters.h"

int lab::countUniqLetters(const char* string, size_t length)
{
  char* newstring = new char[length];
  int count = 0;
  for (int i = 0; i < length; i++)
  {
    if((string[i]>=64 && string[i]<=91)||(string[i]>=97 && string[i]<=122))
    {
      int a = 0;
      for(int j =0; j<length; j++)
      {
        if (string[i] == newstring[j])
        {
          a++;
        }
      }
      if (a==0)
      {
        newstring[count] = string[i];
        count++;
      }
    }
  }
  return count;
}