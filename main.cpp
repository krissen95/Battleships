#include <iostream>
#include "functions.h"
using namespace std;
/*Task 1:
Make a function void makeEmptyBoard() that makes an empty 2d array of M*N cells called board. The
board only contains blank cells (using the BLANK variable)*/

//Task 2:  int randomRow, int randomColoumn, void writeLetters
/*Make a function int randomRow() that returns an index to a random valid row in the board.
Make a function int randomColumn() that returns an index to a random valid column in the board.
Make a function void writeLetters() that writes the column letters for the bottom of the board as shown.
This will be used in task 4 and 5.
*/

/*Task 3:
Make a function void makeBoard(int numberOfShips) that puts the constant SHIP into random cells of the
board.*/

/*Task 4:
Make a function void printBoard() that prints the board with the ships visible to screen. This is the solution of
the game (like the top board example above).*/

/*Task 5:
Make a function void printPlayerBoard() that prints the board with marks for the hits and misses that the
player has (like the second board example above).*/

/*Task 6:
Make a function void shoot() that
asks the player what cell to shoot at
gets the players cell choice in the format column row (example B3) as in chess.
11/23/2018 2PRO101 - Compulsory assignment 4
https://inn.instructure.com/courses/4714/assignments/1356?module_item_id=8780 3/4
if there is a ship in this cell it gets marked with HIT
if the cell is empty, the cell gets market with MISS
if the cell is shot at before, nothing happens, and the player looses her shot
the variables numberOfHits and numberOfShots is updated*/

/*Task 7:
Make a function void play() that
initialize the necessary variables
gives the player an amount of shots
lets the player play until all ships are hit, or all shots are fired.
Then make the int main() function and put everything together, so the game is playable.*/

//8,9,10


int main()
{
    int  numberOfShips;
    makeBoard();







    cout<<endl<<endl;
    return 0;
}
