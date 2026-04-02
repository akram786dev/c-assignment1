// // // // //define a c++ funtion to swap data of two int variable of two int variables using call by reference
// // // // #include<iostream>
// // // // using namespace std;
// // // // void swap(int &a, int &b){
// // // //     int temp;
// // // //     temp = a;
// // // //     a = b;
// // // //     b = temp;
// // // // }
// // // // int main(){
// // // //     int x , y;
// // // //     int &a = x , &b =y;
// // // //     cout<<"enter two number:";
// // // //     cin>>x>>y;
// // // //     swap(x,y);
// // // //     cout<<"x = "<<x<<", y = "<<y;
// // // //     return 0;
// // // // }

// // // //this is another version of  1 question
// // // //define a c++ funtion to swap data of two int variable of two int variables using call by reference
// // // #include<iostream>
// // // using namespace std;
// // // void swap(int &a, int &b){
// // //     int temp;
// // //     temp = a;
// // //     a = b;
// // //     b = temp;
// // // }
// // // int main(){
// // //     int a , b;
// // //     cout<<"enter two number:";
// // //     cin>>a>>b;
// // //     swap(a,b);
// // //     cout<<"a = "<<a<<", b = "<<b;
// // //     return 0;
// // // }

// // /*write a c++ function using the default argument that is able
// // to add 2 or 3 numbers.*/
// // #include<iostream>
// // using namespace std;
// // int sum( int a , int b, int c = 0){
// //     return a + b + c ;
// // }
// // int main(){
// //     int a = 2 ,b = 3 ;
// //     cout<<"sum is: "<<sum(a,b); //i can send c variable also
// //     return 0;
// // }

// /*define overloaded function to calculate area of circle
// area of rectangle and area of tringle*/
// #include<iostream>
// using namespace std;
// float area(float r){
//     const float pi = 3.14;
//     return pi*(r*r);
// }
// float area(float length , float breadth){
//     return length * breadth;
// }
// float area(float base, float height, bool ){
//     return (base * height) / 2;
// }
// int main(){
//     //calculating area of circle
//     float radius = 2, length = 3, breadth = 2, base = 4,height = 3.2;
//     cout<<"Area of circle: "<<area(radius)<<endl;
//     cout<<"Area of rectangle: "<<area(length,breadth)<<endl;
//     cout<<"Area of triangle: "<<area(base,height,true)<<endl;
//     return 0;
// }
//write a function using overloading to find maximum of two numbers and both the 
//numbers can be interger or real
#include<iostream>
using namespace std;
int maximum(int a , int b){
    if(a>b){
        return a;
    }else
    return b;
}
float maximum(float a , float b){
    if(a>b){
        return a;
    }else
    return b;
}
int main(){
    //calculating area of circle
    int a=2, b = 4; float c = 2.5, d= 5.8;
    cout<<"interger is: "<<maximum(a,b)<<endl;
    cout<<"float is: "<<maximum(c,d)<<endl;
    return 0;
}