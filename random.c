
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



char randchar() {

    char alpha = (rand() % 26) + 65;

    return alpha;
}