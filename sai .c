#include<stdio.h>

int main(){

int x,n;
do{

    printf("1: calculate x to the poewr of y without using the inbuilt function\n");
    printf("2: convert an input decimal number to a binary number or hexa decimal number or otal number based on user choice\n");
    printf("3: aea of a circle or square or rectangle or triangle based on user choice\n");
    printf("4: find the factorial of an entered number using recursion\n");
    scanf("%d ,x");
    switch(x){
    

case 4:







int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, fact(n));
return 0;
    
} int fact(int n) {
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}




