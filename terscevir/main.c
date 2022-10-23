#include <stdio.h>
#include <stdlib.h>
int reverseofnumber(int num);
int main()
{

int num;
    printf("Enter the a Number=");
    scanf("%d",&num);

reverseofnumber(num);


    return 0;
}
int reverseofnumber(int num){
int rnum=0,i=0;
    while(i<num){
        rnum *= 10;
        rnum += num%10;
        num /= 10;
    }
    printf("Reverse of the number which entered by user is = %d",rnum);
return rnum;
}

