#include<iostream>
#include"knight.h"



using namespace std;

int main(){
    set_board(5,5);
    print_board();
    cout<<endl;
    bool solved = false;
    solve(1,4,solved);
    print_board();
    return 0;
}