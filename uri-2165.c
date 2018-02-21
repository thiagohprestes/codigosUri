#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
  char tweet[500];

  scanf("%[^\n\r]", tweet);

  (strlen(tweet) <= 140) ? puts("TWEET") : puts("MUTE");
	
  return 0;
}
