#include<iostream>
using namespace std;

int main()
{
    int space[3][3]={{1, 2, 3}, {4, 5, 6},{7, 8, 9}};
    string n1;
    string n2;
    cout<<"enter name of 1st player: \n";
    getline(cin, n1);
    cout<<"enter name of 2nd player: \n";
    getline(cin, n2);

    cout<<"    |  |    ";
    cout<<""<<space[0][0]<<" | "<<space[0][1]<<" |  "<<space[0][2]<<" \n";
    cout<<" ___|__|___ ";
    cout<<"    |  |    ";
    cout<<""<<space[1][0]<<" | "<<space[1][1]<<" |  "<<space[1][2]<<" \n";
    cout<<" ___|__|____";
    cout<<"    |  |    ";
    cout<<""<<space[2][0]<<" | "<<space[2][1]<<" |  "<<space[2][2]<<" \n";
    cout<<"    |  |    ";
}