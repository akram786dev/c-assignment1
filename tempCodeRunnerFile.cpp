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