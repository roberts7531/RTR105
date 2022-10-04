#include <stdio.h>
int main(){
    char number;
    printf("Ievadi ciparu: ");
    scanf("%c",&number);
    number = number-48;
    unsigned char result[4] = {'0','0','0','0'}; 
    char resultC=3; 
    while(number != 0){
        char newNum = number >> 1;
        result[resultC] = number%2+48;
        number = newNum;
        resultC--;
    }
    //printf("\n");
    for(char i=0;i<4;i++){
        printf("%c",result[i]);
    }
    printf("\n");
}