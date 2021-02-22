#include <iostream>
#include "knight.h"
using namespace std;
int board[5][5];
int curr = 1;

void set_board(int x,int y){
    for(int i =0;i<5;i++){
        for(int j=0;j<5;j++){
            board[i][j]= 0;
        }
    }
}
void print_board(){
    for(int i =0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<board[i][j];
            cout<<":";
        }
        cout<<endl;
    }
}

void solve(int row,int col,bool &solved){
     int current = board[row][col];

    if(row<0 || row>4 || col >4 || col<0 || current>0 ){
        return;
    }

   
    // get all 25 
    if(curr == 25 ){
        solved = true;
        return;
    }
    // check for out of bound

    
    board[row][col] = curr; 
    curr++;
    print_board();
    cout<<endl;
    if(!solved) solve(row+2,col-1,solved);
    if(!solved) solve(row+2,col+1,solved);
    if(!solved) solve(row-2,col-1,solved);
    if(!solved) solve(row-2,col+1,solved);
    if(!solved) solve(row+1,col+2,solved);
    if(!solved) solve(row-1,col+2,solved);
    if(!solved) solve(row+1,col-2,solved);
    if(!solved) solve(row-1,col-2,solved);

    if(!solved){
        return;
    }

}

