#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;

//check for end of game
bool isGameOver;

//height and width of space columns
const int spaceHeight = 48;
const int spaceWidth = 71;

//alien fighter class definition
class alienFighter {
    public:
        int shipX;
        int shipY;

    alienFighter() {}

    alienFighter(int x, int y) {
        shipX = x;
        shipY = y;
    }
};

//game initialization
void GameInit() {
        isGameOver = false;
        
        //fighter creation
        alienFighter fighters[5];
        fighters[0] = alienFighter(0, 12);
        fighters[1] = alienFighter(1, 12);
        fighters[2] = alienFighter(2, 12);
        fighters[3] = alienFighter(3, 12);
        fighters[4] = alienFighter(4, 12);
    }



void GameRender() //creating game board
{
    system("cls"); //clear the console

    //creating top of game board
    for(int i = 0; i < spaceWidth; i++)
        cout << "_";
    cout << endl;

    for(int i = 0; i < spaceHeight; i++) {
        for(int j = 0; j < spaceWidth + 1; j++) {
            if(j % 14 == 0) //vertical edges
                cout << "|";
            else if(j == spaceWidth) //edge of board bounce-down
                cout << endl;
            else if((i + 1) % 4 == 0) //horizontal edges
                cout << "_";
            else { //fighter positions and empty space
                for(int k = 0; k < 5; k++) {

                }
                cout << " ";
            }
        }
    }
    cout << endl;
}



//main function / game looping function
int main()
{
    GameInit();
    GameRender();
        return 0;
}