#include<iostream>
using namespace std;

int space[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int row;
int column;
char token = 'x';


void functionOne(){
    
     string n1;
    string n2;
    cout << " Enter the name of the first player: \n";
    getline(cin, n1);
    cout << "Enter the name of the Second player : \n";
    getline(cin, n2);
    cout<< n1 << " is player1 so he/she will play first \n ";
    cout<< n2 << " is player2 so he/she will play second \n ";
 
    cout << "   |      |   \n";
    cout << " " <<space[0][0]<< "  |  "<<space[0][1]<<"   |  "<<space[0][2]<<"   \n";
    cout << " ___|______|____\n";
    cout << "    |      |     \n";
    cout << " " <<space[1][0]<< "  |  "<<space[1][1]<<"   |  "<<space[1][2]<<"   \n";
    cout << " ___|______|_____ \n";
    cout << "    |      |      \n";
    cout << " " <<space[2][0]<< "  |  "<<space[2][1]<<"   |  "<<space[2][2]<<"   \n";
    cout << "    |      |      \n";
     
}

void functionTwo(){

int digit;

if(token == 'x'){
    cout<< n1 <<"please enter";
    cin>>digit;
}


if(tolen == '0'){
    cout<< n2 <<"please enter";
    cin>>digit;   
}

if(digit == 1){
    row = 0;
    column = 0;

}
if(digit == 2){
    row = 0;
    column = 1;

}
if(digit == 3){
    row = 0;
    column = 2;

}
if(digit == 4){
    row = 1;
    column =0;

}
if(digit == 5){
    row = 1;
    column = 1;

}
if(digit == 6){
    row = 1;
    column = 2;

}
if(digit == 7){
    row = 2;
    column = 0;

}
if(digit == 8){
    row = 2;
    column = 1;

}
if(digit == 9){
    row = 2;
    column = 2;

}
else{
    cout<<"invalid !!!"<<endl;
}


if(token == 'x' && space[row][column] != 'x' && space[row][column] !='0')
{
space[row][column] = 'x';
token = '0';
}
else if (token == '0' && space[row][column] != 'x' && space[row][column] !='0'){
    space[row][column] = '0';
    token = 'x'; 
}
else{
    cout << "There is no empty space! "<< endl;
    functionTwo();
}
}

