// Упражнение 13. Напишете програма, която изчислява броя на секундите в една
// година.

#include <stdio.h>

int main(){
   
   int year = 1, seconds = 0;
    seconds = year*365*24*60*60;
    printf("%d year = %d seconds\n",year,seconds);

    return 0;
}