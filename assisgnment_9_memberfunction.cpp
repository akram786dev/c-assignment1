/*define a class complex to repersent a complex number with instance varibales a and
b to store real and imaginary parts. also define following member functions 
1. void setData(int , int )
2. void showdata()
3. complex add(complex)
4. complex subtract(complex)
5. complex multiply(complex)
*/
#include<iostream>
using namespace std;
class complex
{
    private:
    float a, b;
    public:
    void setData(float x, float y){
        a = x;
        b = y;
    }
    void showData(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
    complex add(complex m){
        complex temp;
        temp.a = a + m.a;
        temp.b = b + m.b;
        return temp;
    }
    complex subtract(complex m){
        complex temp;
        temp.a = a - m.a;
        temp.b = b - m.b;
        return temp;
    }
    complex multiply(complex m){
        complex temp,mutiply;
        //= (ac - bd) + (ad + bc)i
        temp.a = (a * m.a) - (b * m.b) ;
        temp.b = (a * m.b) + (b * m.a);
        mutiply.a = temp.a;
        mutiply.b = temp.b;
        return mutiply;
    }
};
int main(){
    complex i , j ,c;
    i.setData(2,3);
    j.setData(4,5);
    cout<<"showing data \n";
    i.showData();
    j.showData();
    cout<<"addition \n";
    c = i.add(j);
    c.showData();
    cout<<"subtraction \n";
    c = i.subtract(j);
    c.showData();
    cout<<"multiplication \n";
    c = i.multiply(j);
    c.showData();
    return 0;
}

/*define a class time to represent a time with instant member variables 
h,m and s to store hour , minute and second . define following member fumctions
1. void settime(int , int, int)
2. void showtime()
3. void normalize()
4. time add(time)
5. bool is_greather(time)*/
#include<iostream>
using namespace std;
class time
{
    private:
    int h, m , s;
    public:
    void settime(int x, int y , int z){
        h = x;
        m = y;
        s = z;
    }
    void showtime(){
        cout<<h<<":"<<m<<":"<<s;
    }
    void normalization(){
        int temp = 0;
        if(s>=60){
            temp = s / 60;
            s %= 60;
        }
        m += temp;
        if(m >= 60){
            temp = m / 60;
            m %= 60;
        }
        h += temp;
    }
    time add(time x){
        time temp;
        temp.h = h + x.h;
        temp.m = m + x.m;
        temp.s = s + x.s;
        return temp;
    }
    bool is_greater(time x){
        if(h > x.h){
            return true;
        }
        if(h == x.h&& m > x.m){
            return true;
        }
        if(h == x.h && m == x.m && s > x.s){
            return true;
        }
        else 
        return false;
    }
};
int main(){
    time t1, t2,t3;
    t1.settime(12,70,70);
    t2.settime(6,7,80);
    cout<<"output for time 1:\n";
    t1.showtime();
    cout<<endl;
    cout<<"output for time 2:\n";
    t2.showtime();
    cout<<endl;
    cout<<"normalization for time 1:\n";
    t1.normalization();
    t1.showtime();
    cout<<endl;
    cout<<"normalization for time 2:\n";
    t2.normalization();
    t2.showtime();
    cout<<endl;
    cout<<"result of addition of time 1 and time 2\n";
    t3 = t1.add(t2);
    t3.normalization();
    t3.showtime();
    cout<<endl;
    cout<<"result of comparision whether time 1 or time 2 is greater\n";
    if(t1.is_greater(t2)){
        cout<<"\ntime 1 is greater";
    }else
    cout<<"\ntime 1 is not greather";
    return 0;
}
/*define a class TestResult with properties roll_no, right , wrong, net_score.
also define class properties right_weightage, wrong_weightage. provide methode
to set and get all the properties*/
#include<iostream>
using namespace std;
class TestResult
{
    private:
    int rall_no, right, wrong, net_score;
    static int right_weightage;
    static int wrong_weightage;
    /*or aise v likh sakte hai both are correct
    static int right_weightage,wrong_weightage;*/
    public:
    void setdata(int rall, int correct, int wrongs){
        rall_no = rall;
        right = correct;
        wrong = wrongs;
    }
    //below code is staic can be written (void static setweighted(int , int ))
    static void setweighted(int correct_weightage, int false_weightage){
        right_weightage = correct_weightage;
        wrong_weightage = false_weightage;
    }
    void net_totalscore(){
        net_score = (right_weightage * right) - (wrong * wrong_weightage);
    }
    void show_data()
    {
        cout<<"rall_no: "<<rall_no<<endl;
        cout<<"right answer: "<<right<<endl;
        cout<<"wrong answer: "<<wrong<<endl;
        cout<<"net_score: "<<net_score<<endl;
    }
};
int TestResult :: right_weightage ; //static m v alwats have zero so no need to give 0
int TestResult :: wrong_weightage ; //no problume but for good practice can write 0
int main(){
    TestResult a, b;

    TestResult :: setweighted(2,1);
   
    a.setdata(1,40,10);
    b.setdata(2,30,5);

    a.net_totalscore();
    b.net_totalscore();

    cout<<"student 1\n";
    a.show_data();

    cout<<"student 2\n";
    b.show_data();
    return 0;
}
via chatgpt
#include<iostream>
using namespace std;

class TestResult
{
private:
    int roll_no, right, wrong, net_score;

    // Static member variables (class properties)
    static int right_weightage;
    static int wrong_weightage;

public:
    // Set values
    void setData(int rno, int r, int w)
    {
        roll_no = rno;
        right = r;
        wrong = w;
    }

    // Static function to set weightage
    static void setWeightage(int rw, int ww)
    {
        right_weightage = rw;
        wrong_weightage = ww;
    }

    // Calculate net score
    void calculateScore()
    {
        net_score = (right * right_weightage) - (wrong * wrong_weightage);
    }

    // Show result
    void showData()
    {
        cout << "Roll No: " << roll_no << endl;
        cout << "Right Answers: " << right << endl;
        cout << "Wrong Answers: " << wrong << endl;
        cout << "Net Score: " << net_score << endl;
    }
};

// Definition of static variables (VERY IMPORTANT)
int TestResult::right_weightage = 0;
int TestResult::wrong_weightage = 0;

int main()
{
    // Set common weightage for all students
    TestResult::setWeightage(2, 1);

    TestResult A, B;

    A.setData(1, 40, 10);
    B.setData(2, 30, 5);

    A.calculateScore();
    B.calculateScore();

    cout << "Student A:\n";
    A.showData();

    cout << "\nStudent B:\n";
    B.showData();

    return 0;
}


/*define a class matrix  to represent a 3*3 order matrix . provide appropriate a methodes and  
properties and properites to the class . also deefine folloewing methode in the clasd
1. matrix add(matrix);
2. matrix subtract(matrix);
3. matrix multiply(matrix);
4. matrix transpose();
5. bool is_singular()*/
#include<iostream>
using namespace std;
class matrix
{
    private:
    int A[3][3];
    int n  = 3;
    public:
    
    void input(){
        cout<<"enter 9 number for matrix:\n";
        int i, j;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                cin>>A[i][j];
            }
        }
    }

    void showdata(){
        int i , j;
        for(i = 0;i < n; i++){
            for(j = 0; j < n ; j++){
                cout<<A[i][j];
                cout<<" ";
            }
            cout<<endl;
        }
    }

    matrix add(matrix a){
        int i, j ;
        matrix temp;
        for( i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                temp.A[i][j] = A[i][j] + a.A[i][j];
            }
        }
        return temp;
    }

    matrix subtract(matrix a){
        int i, j ;
        matrix temp;
        for( i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                temp.A[i][j] = A[i][j] - a.A[i][j];
            }
        }
        return temp;
    }

    matrix multipluy(matrix a){
        int i, j, k , sum = 0;
        matrix temp;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                for(k = 0 ; k < n ; k++){
                    sum += A[i][k] * a.A[k][j];
                }
                temp.A[i][j] = sum;
                sum = 0;
            }
        }
        return temp;
    }

    matrix transpose(){
        int i , j ;
        matrix temp;
        for(i = 0; i < n; i++){
            for(j = 0; j < n ; j++){
                temp.A[j][i] = A[i][j];
            }
        }return temp;
    }
    
     bool is_singular()
        {
            int s;
            s=A[0][0]*(A[1][1]*A[2][2]-A[2][1]*A[1][2])-A[0][1]*(A[1][0]*A[2][2]-A[2][0]*A[1][2])+A[0][2]*(A[1][0]*A[2][1]-A[2][0]*A[1][1]);
            if(s==0)
                return true;
            else
                return false;
    }
};
int main(){
    matrix a,b,c,d,e;

    a.input();
    a.showdata();

    b.input();
    b.showdata();

    cout<<"addition:\n";
    c = a.add(b);
    c.showdata();

    cout<<"subtraction:\n";
    c = a.subtract(b);
    c.showdata();

    cout<<"mutiply:\n";
    d = a.multipluy(b);
    d.showdata();

    cout<<"transpose:\n";
    d = a.transpose();
    d.showdata();

    if(a.is_singular()){
        cout<<"singular";
    }
    else
    cout<<"not singular";
    return 0;
}