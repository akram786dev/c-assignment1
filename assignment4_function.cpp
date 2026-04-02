// // // // /*define a c++ function to print all prime numbers beetween two given number*/
// // // // #include<iostream>
// // // // using namespace std;
// // // // void prime( int a, int b)
// // // // {
// // // //     int i , count = 0,j;
// // // //     for( j = a; j < b; j++){
// // // //         for(i = 1 ; i <= j ; i++){
// // // //             if(j%i == 0){
// // // //                 count++;
// // // //             }
// // // //             if(count == 2 && i == j){
// // // //                 cout<<j<<endl;
// // // //             }
// // // //         }
// // // //         count = 0;
// // // //     }
// // // // }
// // // // int main()
// // // // {
// // // //     int a , b;
// // // //     cout<<"enter two numbers:";
// // // //     cin>>a>>b;
// // // //     prime(a,b);
// // // //     return 0;
// // // // }
// // // #include<iostream>
// // // using namespace std;
// // // int maxvalue(int n)
// // // {
// // //     int maxDigit;
// // //     maxDigit=n%10;
// // //     n=n/10;
// // //     while(n)
// // //     {
// // //         if(maxDigit<n%10)
// // //             maxDigit=n%10;
// // //         n/=10;
// // //     }
// // //     return maxDigit;
// // // }
// // // int main()
// // // {
// // //     int a ;
// // //     cout<<"enter a number:";
// // //     cin>>a;
// // //     cout<<"highest"<<maxvalue(a);
// // //     return 0;
// // // }
// // #include<iostream>
// // using namespace std;
// // float power(float x,float y)
// // {
// //     if(y==0)
// //         return 1;
// //     if(y>0)
// //     {
// //         return power(x,y-1)*x;
// //     }
// //     else
// //     {
// //         return power(x,y+1)*(1/x);
// //     }
// // }
// // int main()
// // {
// //     float a , b;
// //     cout<<"enter two number:";
// //     cin>>a>>b;
// //     cout<<"power:"<<power(a,b);
// //     return 0;
// // }
// //define a c++ function to to cheak whether a given number is a term in a 
// // fibonecci series or not
// #include<iostream>
// using namespace std;
// int fibonacci(int x)
// {
//     int a = 0, b =1, i;
//     if(x == 0)
//     return 1;
//     for(i = 0; i <= x; i++){
//         if(i % 2 == 0)
//         a += b;
//         else
//         b += a;
//         if( x == b || x == a)
//         return 1;
//     }
//     return 0;
// }
// int main()
// {
//     int a ;
//     cout<<"enter a number:";
//     cin>>a;
//     if(fibonacci(a)){
//         cout<<a<<": in fibonacci series\n";
//     }
//     else
//     cout<<a<<": not in fibonecci series\n";
//     return 0;
// }