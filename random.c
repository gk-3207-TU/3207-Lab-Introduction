#include <time.h>
#include <stdio.h>
#include <stdlib.h>

char* randchar()
{
    return rand() % 26 + 'A';//this generates a rand charcter A to Z each time it runs
}
