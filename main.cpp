#include <iostream>
using namespace std;

int main() {

    int a[10][10],b[10][10],Sub = 0;
    int n,m;

    cout <<"Enter your (n x m) matrix : ";
    cin >> n >> m;
    cout <<"\nEnter your first matrix of elements : "<< endl;

    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m ; ++j) {
            cin >> a[i][j];
        }
    }

    cout <<"\nEnyer your second matrix of elements : "<< endl;

    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m ; ++j) {
            cin >> b[i][j];
        }
    }

    cout <<"\nYour matrix Substraction : \n"<< endl;

    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m ; ++j) {
       
            cout<<" "<<a[i][j] <<" - "<<b[i][j]<<" ";
        }
        cout <<"\n";
    }

    cout<<"\nFinal result : \n"<<endl;

    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m; ++j) {
            Sub = a[i][j] - b[i][j];
            cout<<" "<<Sub<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}
