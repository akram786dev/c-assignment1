// // // // /*define a c++ function to short an array of integers in ascending or decending order
// // // // on boolean type argument (true for ascending and false for decending )*/
// // // // #include<iostream>
// // // // using namespace std;
// // // // void ascendingdescending(int arr[] , int n ,bool sort = false){
// // // //     int i , j, temp;
// // // //     if(sort){ 
// // // //         for( i = 0 ; i < n -1  ; i++){
// // // //             for( j = 0; j < n-i-1 ; j++){
// // // //                 if(arr[j] > arr[j + 1]){
// // // //                     temp = arr[j];
// // // //                     arr[j] = arr[j + 1];
// // // //                     arr[j + 1] = temp;
// // // //                 }
// // // //             }
        
// // // //         }
// // // //     }else{
// // // //         for( i = 0 ; i < n -1  ; i++){
// // // //             for( j = 0; j < n-i - 1; j++){
// // // //                 if(arr[j] < arr[j + 1]){
// // // //                     temp = arr[j + 1];
// // // //                     arr[j + 1] = arr[j];
// // // //                     arr[j] = temp;
// // // //                 }
// // // //             }
        
// // // //         }
// // // //     }
// // // //     for( i = 0 ; i < n; i++){
// // // //         cout<<arr[i]<<endl;
// // // //     }
// // // // }
    
// // // // int main(){
// // // //     int arr[5] = {4,6,7,4,6};
// // // //     // cout<<"enter boolean no for ascendind decending: "<<endl;
// // // //     // cin>>a;
// // // //     ascendingdescending(arr,5);
// // // //     return 0;
// // // // }

// // // /*define a c++ function to short an array of strings in ascending or decending order
// // // on boolean type argument (true for ascending and false for decending )*/
// // // #include<iostream>
// // // #include<string>
// // // using namespace std;
// // // void sort(string str[], int size, bool order = true);
// // // int main(){
// // //     int size, i;
// // //     cout<<"enter how much string you want to add";
// // //     cin>>size;
// // //     cin.ignore();
// // //     string str[size];
// // //     cout<<"enter strings";
// // //     for(i = 0; i < size; i++){
// // //         cin>>str[i];
// // //     }
// // //     bool order ;
// // //     cout<<"enter 1 (for assending) and 0 ( for decending)";
// // //     cin>>order;
// // //     cin.ignore();
// // //     sort(str,size,order);
// // //     cout<<order<<endl;
// // //     cout<<"shorted string is:";
// // //     for(i = 0 ; i < size; i++){
// // //         cout<<str[i]<<endl;
// // //     }
// // //     return 0;
// // // }
// // // void sort(string str[], int size, bool order){
// // //     int i , j;
// // //     string temp;
// // //     if(order == true){
// // //         for(i = 0; i < size - 1; i++){
// // //             for(j = 0; j < size - i - 1; j++){
// // //                 if(str[j]> str[j + 1]){
// // //                     temp = str[j];
// // //                     str[j] = str[j + 1];
// // //                     str[j + 1] = temp;
// // //                 }
// // //             }
// // //         }
// // //     }else{
// // //         for(i = 0; i < size - 1; i++){
// // //             for(j = 0; j < size - i - 1; j++){
// // //                 if(str[j]< str[j + 1]){
// // //                     temp = str[j];
// // //                     str[j] = str[j + 1];
// // //                     str[j + 1] = temp;
// // //                 }
// // //             }
// // //         }
// // //     }
// // // }
// // /*define a function to rotate an array by n position in the 
// // d direction . implement position and direction using default 
// // arguments. argument d can be -1 or 1 denoting left or right 
// // direction . argument n should be the last argument with 
// // default value 1 */
// // #include<iostream>
// // using namespace std;
// // void rotate(int arr[], int size, int rotation = 1, int direction = 1);
// // int main(){
// //     int arr[5], i , def = -1, rotation;
// //     cout<<"enter 5 digit:";
// //     for(i = 0 ; i < 5; i++){
// //         cin>>arr[i];
// //     }
// //     cout<<"enter how much rotation you want to rotate:";
// //     cin>>rotation;
// //     rotate(arr,5,rotation);
// //     cout<<"rotated array is:";
// //     for(i = 0 ; i < 5; i++){
// //         cout<<arr[i]<<",";
// //     }
// //     return 0;
// // }
// // void rotate(int arr[],int size, int rotation, int direction){
// //     int i,j, temp;
// //     if(a == -1){
// //         for(j = 1; j <= rotation; j++){
// //         temp = arr[size-1];
// //         for(i = size - 1 ; i > 0; i--){
// //             arr[i] = arr[i - 1];
// //         }
// //         arr[0] = temp;
// //         }
// //     }
// //     else{
// //         for(j = 0; j < rotation; j++){
// //             temp = arr[0];
// //             for(i = 0 ; i < size; i++){
// //                 arr[i] = arr[i+1];
// //             }
// //             arr[size - 1] = temp;
// //         }
// //     }
// // }


// /*define a function to calculate lcm of three numbers*/
// #include<iostream>
// using namespace std;
// int lcm(int , int , int);
// int main(){
//     int num1, num2, num3;
//     cout<<"Enter three numbers:";
//     cin>>num1>>num2>>num3;
//     cout<<"lcm is:"<<lcm(num1,num2,num3);
//     return 0;
// }
// int lcm(int num1, int num2, int num3){
//     int i = 2, lcm = 1,count = 0;
//     while(1){
//         if(num1%i == 0){
//         num1/=i;
//         count++;
//         }if(num2%i == 0){
//         num2/=i;
//         count++;
//         }if(num3%i == 0){
//         num3/=i;
//         count++;
//         }
//         if(count >= 1){
//         lcm*=i;
//         count=0;
//         i=2;
//         }
//         if(num1==1&&num2==1&&num3==1){
//         return lcm;
//         }
//         else
//         i++;
//     }
// }

/*define a function to print all the  prime factior of a given number
[for example num = 36 prime factor is 2, 3]*/
#include<iostream>
using namespace std;
void primefactor(int a);
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    primefactor(a);
    return 0;
}
void primefactor(int n){
    int i = 2 , prime = 1;
    cout<<"prime factor of "<<n<<" is:";
    while(n > 1){
        if(n%i == 0){
            n = n/i;
            if(prime!= i){
                cout<<i<<",";
                prime = i;
            }
        }else
        i++;
    }
}