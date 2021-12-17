// 6. Дефинирайте променливи със стойност -127, 255, 63 498, 4 294 967 292, -9 000
// 000 000 000 775 845.
// Изведете всяка променлива на екрана със printf()
// 7. Дефинирайте променливи със стойности 24 212, -1 357 674, 1 357 674, -1 357
// 674 000, 3 657 895 000.
// Изведете всяка променлива на екрана със printf()
// 9. Дефинирайте променливи със стойност
//  4.9876543, 7.123456789012345678890, 18 398 458 438 583 853.28, 18 398 458 438
// 583 853.39875937284928422.

#include <stdio.h>

int main(){

//Values from Exercise 6:
signed char iNumber1 = -127;
unsigned char cNumber2 = 255;
unsigned short sNumber3 = 63498;
unsigned int iNumber4 = 4294967292;
unsigned long long int iNumber5 = -9000000000000775845;
printf("%d\n %u\n %u\n %u\n %llu\n --- \n",iNumber1,cNumber2,sNumber3,iNumber4,iNumber5);


//Values from Exercise 7:
short int iNumber1_7 = 24212;
int iNumber2_7 = -1357674;
int iNumber3_7 = 1357674;
int iNumber4_7 = -1357674000;
unsigned int iNumber5_7 = 3657895000;
printf("%hd\n %d\n %d\n %d\n %u\n --- \n",iNumber1_7,iNumber2_7,iNumber3_7,iNumber4_7,iNumber5_7);


//Values from Exercise 9:
double dNumber1 = 4.9876543;
long double dNumber2 = 7.12345678901234567890;
long double dNumber3 = 18398458438583853.28;
long double dNumber4 = 18398458438583853.39875938284928422;
printf("%1.7f\n %1.21Lf\n %lf\n %lf\n",dNumber1,dNumber2,dNumber3,dNumber4);
 
    return 0;
}


