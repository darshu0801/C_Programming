#include <stdio.h>
int main ()
{
  FILE *dBks;
  int c, count = 0;
  dBks = fopen ("data.txt", "r");
  if (dBks == NULL)
    {
      printf ("File cannot be opened\n");
      return 0;
    }
  while (1)
    {
      c = fgetc (dBks);
      if (c == EOF)
	{
	  break;
	}
      ++count;
    }
  printf ("The number of characters present in the file is %d", count);
  fclose (dBks);
  return 0;
}
