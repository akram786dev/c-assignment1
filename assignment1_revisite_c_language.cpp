// // // /*write a program to cheak whether a given number is even or odd*/
// // // // #include<stdio.h>
// // // // int main() {
// // // //     int a  ;
// // // //     printf("Enter a number:");
// // // //     scanf("%d",&a);
// // // //     if(a%2==0){
// // // //         printf("even number");
// // // //     }else
// // // //     printf("odd number");
// // // //     return 0;
// // // // } 

// // // /*write a program to cheak whether factorial of a number*/
// // // #include<stdio.h>
// // // int main()
// // // {
// // //     int i, a, factorial = 1 ;
// // //     printf("Enter a number:");
// // //     scanf("%d",&a);
// // //     for(i = 1 ; i <= a; i++){
// // //          factorial *= i;
// // //     }
// // //     printf("factorial is:%d",factorial);
// // // }

// // /*write a program to swap values of two int variables*/
// // #include<stdio.h>
// // int main()
// // {
// //     int a , b, temp;
// //     printf("Enter two numbers:");
// //     scanf("%d%d",&a,&b);
// //     temp = a;
// //     a = b; 
// //     b = temp;
// //     printf("swaped value is:\na = %d\nb = %d",a,b);
// // }

// // /*write a function to calculate LCM of two numbers(TSRS)*/
// // #include<stdio.h>
// // int lcm(int , int );
// // int main()
// // {
// //     int a , b;
// //     printf("enter two number:");
// //     scanf("%d%d",&a,&b);
// //     printf("lcm is:%d",lcm(a,b));
// //     return 0;
// // }
// // int lcm(int a , int b){
// //     int i, max ;
// //     max = a > b ? a : b;
// //     for(max = 1; i < a*b; max++){
// //         if(max%a == 0&& max%b == 0){
// //             return max;
// //         }
// //     }
// // }
/*write a function to cheak whether a given number is a prime
number or nor*/
#include<stdio.h>
int prime(int a);
int main(){
    int a;
    printf("Enter a numbers:");
    scanf("%d",&a);
    int result = prime(a);
    if(result){
        printf("prime\n");
    }
    else
    printf("not prime\n");
    return 0 ;
}
int prime(int a){
    int i , count = 0;
    for(i = 1 ; i <= a ; i++){
        if(a%i == 0){
            count++;
        }
        if(count == 2 && i == a){
            return 1;
        }
    }
    return 0;
}
