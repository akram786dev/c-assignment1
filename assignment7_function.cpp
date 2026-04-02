// // // // // /*write a function to calculate hcf of two numbers*/
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int hcf(int a, int b);
// // // // // int main(){
// // // // //     int a, b;
// // // // //     cout<<"Enter two numbers:";
// // // // //     cin>>a>>b;
// // // // //     cout<<"hcf of two number is:"<<hcf(a,b);
// // // // //     return 0;
// // // // // }
// // // // // int hcf(int a,int b){
// // // // //     int minimum = a < b ? a : b;
// // // // //     for(int i = minimum; i >= 1; i--){
// // // // //         if(a%i == 0&& b%i == 0){
// // // // //             return i;
// // // // //         }
// // // // //     }
// // // // // }


// // // // /*volume of cuboid= length * breadth * height
// // // // volume of cone = 1/3*pi*r*r*h
// // // // volume of sphare= 4/3*pi*r*r*r
// // // // define a overload function to calculate volume of cuboid
// // // // , cone and sphare */
// // // // #include<iostream>
// // // // #include<iomanip>
// // // // using namespace std;
// // // // float volume(float length, float bredth, float height);
// // // // float volume(float radius, float height);
// // // // float volume(float radius);
// // // // int main(){
// // // //     float length = 4.3  , bredth = 3  , height = 8.0 , radius = 3.0;
// // // //     //cout<<"volume of cuboid "<<volume(length,bredth,height)<<endl;
// // // //     //cout<<"volume of cone "<<volume(radius, height)<<endl;
// // // //     cout<<"volume of sphare "<<fixed<<setprecision(2)<<volume(radius)<<endl;
// // // //     return 0;
// // // // }
// // // // float volume(float length,float breadth, float height){
// // // //     return length * breadth * height;
// // // // }
// // // // float volume(float r,float height){
// // // //     float const pi = 3.1416;
// // // //     return (pi * r * r * height) / 3;
// // // // }
// // // // float volume(float r){
// // // //     float const pi = 3.1416;
// // // //     return 4*(pi*r*r*r)/3;
// // // // }

// // // /*define a function to print a substring from startindex(inclusive)
// // // to endindex(exclusice). define function in such a way that if second
// // // argument if not provided string will print the last possible index*/
// // // /*एक function define कीजिए जो किसी string का substring print करे।
// // // startIndex (inclusive) → यहाँ से substring शुरू होगा (यह index शामिल होगा)।
// // // endIndex (exclusive) → यहाँ तक substring होगा लेकिन यह index शामिल नहीं होगा।
// // // Function को इस तरह define करें कि अगर दूसरा argument (endIndex) न दिया जाए, 
// // // तो string startIndex से लेकर string के आखिरी index तक print हो जाए।*/
// // // #include<iostream>
// // // using namespace std;
// // // void substring(char str[],int startindex, int endindex = -1 );
// // // int main(){
// // //     char str[6] = "akram";
// // //     int startindex;
// // //     cout<<"Enter startindex:";
// // //     cin>>startindex;
// // //     substring(str,startindex,3);
// // //     return 0;
// // // }
// // // void substring(char str[], int startindex, int endindex){
// // //     if(endindex == -1)
// // //         for(int i = startindex;str[i] ; i++){
// // //         cout<<str[i];
// // //     }
// // //     else
// // //     for(int i = startindex;i < endindex ; i++){
// // //         cout<<str[i];
// // //     }
// // // }
// //define a function two swap two array
// // #include<iostream>
// // using namespace std;
// // void swap(int a[] , int b[], int n);
// // int main()
// // {
// //     int i;
// //     int a[5]= {1,2,3,4,5}, b[5]={6,7,8,9,10};
// //     swap(a,b,5);
// //     cout<<"swaped a array:"<<endl;
// //     for(i = 0; i < 5; i++){
// //         cout<<a[i]<<" ";
// //     }
// //     cout<<endl<<"swaped b array:"<<endl;
// //     for(i = 0; i < 5; i++){
// //         cout<<b[i]<<" ";
// //     }
// //     return 0;
// // }
// // void swap(int a[] , int b[], int n ){
// //     int temp[5],i; 
// //     for(i = 0 ; i < n; i++){
// //         temp[i] = a[i];
// //     }
// //     for(i = 0 ; i < n; i++){
// //         a[i] = b[i];
// //     }
// //     for(i = 0 ; i < n; i++){
// //         b[i] = temp[i];
// //     }
// // }

// /*define a function to merge two sorted arrays of same size*/
// #include<iostream>
// using namespace std;

// int main(){
//     int arr1[5] = {3,4,5,2,1},arr2[5] = {1,2,3,4,5}, n = 5,merge[10];
//     for(int i = 0 ; i < 10; i++){
//         if(i < 5)
//         merge[i] = arr1[i];
//         else
//         merge[i] = arr2[i - 5];
//     }
//     for(int i = 0 ; i < 10 ; i++){
//         cout<<merge[i]<<" ";
//     }
//     return 0;
// }

/*define a function to merge two sorted arrays of same size*/
#include<iostream>
using namespace std;
void merge(int a[], int b[], int c[]);
int main(){
    
    int a[] = {1,2,3,4,5},b[] = {2,4,5,6,7}, n = 5,c[10];
    merge(a,b,c);
    return 0;
}
void merge(int a[], int b[], int c[]){
    int i , j, k;
    for(i = 0, j = 0, k = 0; i < 5&&j < 5; k++){
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
    }
    while(i < 5){
        c[k] = a[i];
        i++;
        k++;
    }
    while( j < 5){
        c[k] = b[j];
        j++;
        k++;
    }
    for(i = 0 ; i < 10 ; i++){
        cout<<c[i]<<" ";
    }
}