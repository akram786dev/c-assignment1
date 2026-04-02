/*define a class complex to repersent a complex number. declare instance member
variable to store real and imaginary part of a complex number, also define instance
number function to set values of complex number and print values of complex number*/
#include<iostream>
using namespace std;
class complexnumber
{
    private:
    int a,b;
    public:
    void setvalue(int x, int y){
        a = x;
        b = y;
    }
    void printvalue(){
        cout<<a<<" + "<<b<<"i";
    }
};
int main(){
    complexnumber b;
    int i , j ;
    cout<<"enter two numbers:";
    cin>>i>>j;
    b.setvalue(i,j);
    b.printvalue();
    return 0 ;
}

// // // /*define a class time  to repersent time (like 3 hr 45 min 20 sec).
// // // Declare appropriate number of instant member variables and also define
// // // instance member functions set value for time and display value of time 
// // // */
// // // #include<iostream>
// // // using namespace std;
// // // class time
// // // {
// // //     private:
// // //     int hour;
// // //     int min;
// // //     int sec;
// // //     public:
// // //     void setvalue(int h, int m, int s){
// // //         hour = (h >= 0 && h < 24) ? h : 0;
// // //         min  = (m >= 0 && m < 60) ? m : 0;
// // //         sec  = (s >= 0 && s < 60) ? s : 0;
// // //     }
// // //     void displayvalue(){
// // //         cout<<hour<<" hour "<<min<<" minute "<<sec<<" second ";
// // //         cout<<"or\n";
// // //         cout<<hour<<":"<<min<<":"<<sec<<":";
// // //     }
// // // };
// // // int main(){
// // //     time a;
// // //     a.setvalue(3,45,20);
// // //     a.displayvalue();
// // //     return 0;
// // // }

// // /*define a class Date to repersent Date (like d = 31, m = 12, y = 2022).
// // Declare appropriate number of instance member variables and also define
// // instance member fuction to set date and get time */
// // #include<iostream>
// // using namespace std;
// // class Date
// // {
// //     private:
// //     int day; 
// //     int month;
// //     int year;
// //     public:
// //     void setdate(int d, int m, int y){
// //         if(d > 0 && d < 32 && m > 0 && m < 13 && y > 0){
// //             day = d;
// //             month = m;
// //             year = y;
// //         }
// //         else
// //         {
// //             cout<<"enter valid date month or year?\n";
// //             day = month = year = 0;
// //         }
// //     }
// //     void getdate(){
// //         cout<<"day = "<<day<<", month = "<<month<<", year = "<<year;
// //     }
// // };
// // int main()
// // {
// //     Date a;
// //     a.setdate(17,03,2026);
// //     a.getdate();
// //     return 0;
// // }
// /*in question 3, define a methode to display date in the following pattern
// 1. 31-12-2022
// 2. 31-Dec-2022*/
// #include<iostream>
// #include<string.h>
// using namespace std;
// class Date
// {
//     private:
//     int day;
//     int month;
//     char strmonth[20];
//     int year;
//     public:
//     void setdate(int d, int m, int y){
//         day = d;
//         month = m;
//         year = y;
//         if(month == 1){
//             strcpy(strmonth,"jan");
//         }else if(month == 2){
//             strcpy(strmonth,"feb");
//         }else if(month == 3){
//             strcpy(strmonth,"mar");
//         }else if(month == 4){
//             strcpy(strmonth,"apr");
//         }else if(month == 5){
//             strcpy(strmonth,"may");
//         }else if(month == 6){
//             strcpy(strmonth,"jun");
//         }else if(month == 7){
//             strcpy(strmonth,"jul");
//         }else if(month == 8){
//             strcpy(strmonth,"aug");
//         }else if(month == 9){
//             strcpy(strmonth,"sep");
//         }else if(month == 10){
//             strcpy(strmonth,"oct");
//         }else if(month == 11){
//             strcpy(strmonth,"nov");
//         }else if(month == 12){
//             strcpy(strmonth,"dec");
//         }else
//         {
//             cout<<"enter valid date month or year?\n";
//             day = month = year = 0;
//         }
//     }
//     void getdate(){
//         cout<<day<<"-"<<month<<"-"<<year<<endl;
//         cout<<day<<"-"<<strmonth<<"-"<<year;
//     }
// };
// int main()
// {
//     Date a;
//     a.setdate(31,12,2022);
//     a.getdate();
//     return 0;
// }

/*define a class circle with radius as its property. provide setRadius()
and getRadius() methodes. also define methodes  to return area and 
circumfrence of circle
A=πr2 circle
C=2πr circumfrence*/
#include<iostream>
using namespace std;
class area
{
    private:
    float radius;
    public:
    void setradius(float r){
        radius = (r > 0) ? r : 0;
    }
    void getradius(){
        cout<<"radius:"<<radius<<endl;
    }
    float circle(){
        return 3.14*radius*radius;
    }
    float circumfrence(){
        return 2*3.14*radius;
    }
};
int main(){
    area a;
    a.setradius(2.5);
    a.getradius();
    cout<<"area of circle:"<<a.circle()<<endl;
    cout<<"area of circumfrence:"<<a.circumfrence()<<endl;
    return 0;
}