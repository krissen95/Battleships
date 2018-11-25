#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <ctime>
//#include <cstdlib>
using namespace std;
#endif // FUNCTIONS_H

void makeEmptyBoard()
{
}

int randomRow()
{

}

int randomColoumn()
{

}

void writeLetters()
{

}
void printPlayerBoard()//Prints board with visible hits and misses of player
{

}

void makeBoard()//Board with random ships
{

    //Start of each round, new set of random cards are generated

    srand(time(nullptr));
    int variablename  = (rand()%7);



//Board array start content
    char board [6][6] = {
        {' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' '}
    };

    // Checks 2 digit input as board coordinates
    cout<<endl<<"Write cordinates in range a-f + 1-6,\nIn the form like ' a3 '"<<endl;
    char inputcord[2];
    cin>>inputcord;
    char iCord=inputcord[0];
    char jCord=inputcord[1];
    switch (iCord)
    {
    case 'a':
        switch(jCord)
        {
        case '1':
            board[0][0]='m';
            break;
        case '2':
            board[0][1]='m';
            break;
        case '3':
            board[0][2]='m';
            break;
        case '4':
            board[0][3]='m';
            break;
        case '5':
            board[0][4]='m';
            break;
        case '6':
            board[0][5]='m';
            break;
        }
        break;
    case 'b':
        switch(jCord)
        {
        case '1':
            board[1][0]='m';
            break;
        case '2':
            board[1][1]='m';
            break;
        case '3':
            board[1][2]='m';
            break;
        case '4':
            board[1][3]='m';
            break;
        case '5':
            board[1][4]='m';
            break;
        case '6':
            board[1][5]='m';
            break;
        }
        break;
    case 'c':
        switch(jCord)
        {
        case '1':
            board[2][0]='m';
            break;
        case '2':
            board[2][1]='m';
            break;
        case '3':
            board[2][2]='m';
            break;
        case '4':
            board[2][3]='m';
            break;
        case '5':
            board[2][4]='m';
            break;
        case '6':
            board[2][5]='m';
            break;
        }
        break;
    case 'd':
        switch(jCord)
        {
        case '1':
            board[3][0]='m';
            break;
        case '2':
            board[3][1]='m';
            break;
        case '3':
            board[3][2]='m';
            break;
        case '4':
            board[3][3]='m';
            break;
        case '5':
            board[3][4]='m';
            break;
        case '6':
            board[3][5]='m';
            break;
        }
        break;
    }

    //Print board + aesthetics
    cout<<"    1   2   3   4   5   6"<<endl;
    for(int i=0; i<6; i++)
    {
        cout<<endl<<"---------------------------"<<endl;
        switch (i)
        {
        case 0:
            cout<<"A";
            break;
        case 1:
            cout<<"B";
            break;
        case 2:
            cout<<"C";
            break;
        case 3:
            cout<<"D";
            break;
        case 4:
            cout<<"E";
            break;
        case 5:
            cout<<"F";
            break;
        }

        for(int j=0; j<6; j++)
        {
            cout<<" | "<<board[i][j];
        }
        cout<<" | ";
    }

}
