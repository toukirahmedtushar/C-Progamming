// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num, swappedNum;
//     int firstDigit, lastDigit, digits;

//     /* Input number from user */
//     printf("Enter any number: ");
//     scanf("%d", &num);

//     /* Find last digit */
//     lastDigit  = num % 10;

//     /* Find total number of digit - 1 */
//     digits     = (int)log10(num); 

//     /* Find first digit */
//     firstDigit = (int)(num / pow(10, digits)); 

//     swappedNum  = lastDigit;
//     swappedNum *= (int) pow(10, digits);
//     swappedNum += num % ((int) pow(10, digits));
//     swappedNum -= lastDigit;
//     swappedNum += firstDigit;

//     printf("Original number = %d", num);
//     printf("Number after swapping first and last digit: %d", swappedNum);

//     return 0;
// }

#include <stdio.h>
#include <math.h>
  
int main()
{
    int Number, FirstDigit, DigitsCount, LastDigit, a, b, SwapNum;
  
    printf("\n Please Enter any Number that you wish  : ");
    scanf("%d", & Number);   //12345
     
    DigitsCount = log10(Number);    //4
    FirstDigit = Number / round(pow(10, DigitsCount));  //  12345/10000=1
     
    LastDigit = Number % 10;   //  12345%10=5
     
    a = FirstDigit * round(pow(10, DigitsCount)); //  1*10000=10000
    b = Number % a;   //  12345%10000=2345
    Number = b / 10;  //   
     
    SwapNum = LastDigit * round(pow(10, DigitsCount)) + (Number * 10 + FirstDigit);
         
    printf(" \n The Number after Swapping First Digit and Last Digit =  %d", SwapNum);
    
    return 0;
    
}