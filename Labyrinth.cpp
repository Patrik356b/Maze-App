#include <windows.h>

#include <stdio.h>

#include <iostream>

#include <mmsystem.h>

#include <fstream>

using namespace std;

void GotoXY(int x, int y); // X and Y coords

void MoveMe(int C, int S); // S=0 if the EXE just started
                           // C is always 0 (zero) on program start
void MakeMaze();

void Music(int C); // C is used to handle music

int main()
{
    Music(0);
    HANDLE hStdout;
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdout, 15);
    GotoXY(0,0);
    cout<<"Use W,A,S,D and RETURN to Move";
    cout<<"\nPress Q to quit\n";
        
    MoveMe(0, 0);

    system("cls");
    cout << "\n\n\t\t\tClosing Down...\n\n\t";
    printf("This was created by:\n\tPatrik356b/Ryder17z\t\t");
    Sleep(6000); // wait 6 seconds
    return 0;
}

void MoveMe(int C, int S)
{
    HANDLE hStdout;
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // Maze Start Position
    int A=1; // X-coord
    int B=4; // Y-coord

    char direction; // Used to recive paths to use, example: sdddd = one move down, 4 moves to the right
    bool Move=true;
    
    while (Move==true)
    {
        GotoXY(4,21);
        SetConsoleTextAttribute(hStdout, 14);
        cout << "Enter A Path:\n";
        SetConsoleTextAttribute(hStdout, 10);
        MakeMaze();
        if(S == 0)
        {
            SetConsoleTextAttribute(hStdout, 7);
            GotoXY(A,B);
            cout<<"X";
            S++;
        }
        GotoXY(2,22);
        if(A == 1 && B == 17)
        {
            int W = 175; // Miliseconds to wait
            Music(-1);
            mciSendString("play MUSIC/PACK0/music2.mid",NULL,0,NULL);
            system("cls");
            GotoXY(0,0);
            SetConsoleTextAttribute(hStdout, 144);
            printf("-----------------------------\n");
            SetConsoleTextAttribute(hStdout, 145);
            printf("-----------------------------\n");
            SetConsoleTextAttribute(hStdout, 153);
            printf("-----------------------------\n");
            SetConsoleTextAttribute(hStdout, 145);
            printf("-----------------------------\n");
            SetConsoleTextAttribute(hStdout, 144);
            printf("-----------------------------");
            GotoXY(9,2);
            Sleep(W);
            printf("           !        ");
            GotoXY(9,5);
            Sleep(W);
            GotoXY(9,2);
            printf(" o         !        ");
            GotoXY(9,5);
            Sleep(W);
            GotoXY(9,2);
            printf(" o     e   !        ");
            GotoXY(9,2);
            Sleep(W);
            printf(" o   a e   !        ");
            GotoXY(9,5);
            Sleep(W);
            GotoXY(9,2);
            printf(" o   a e  t!        ");
            GotoXY(9,5);
            Sleep(W);
            GotoXY(9,2);
            printf(" ou  a e  t!        ");
            GotoXY(9,5);
            Sleep(W);
            GotoXY(9,2);
            printf(" ou  a e  t!        ");
            GotoXY(9,5);
            Sleep(W);
            GotoXY(9,2);
            printf(" ou  ade  t!        ");
            GotoXY(9,5);
            Sleep(W);
            GotoXY(9,2);
            printf(" ou Made It!        ");
            GotoXY(9,5);
            Sleep(W);
            GotoXY(9,2);
            printf("You Made It!        ");
            GotoXY(9,5);
            SetConsoleTextAttribute(hStdout, 15);
            Sleep(4500);
            Move=false;
        }
        else
        {
            cin>>direction;
            system("cls");
            MakeMaze();
            SetConsoleTextAttribute(hStdout, 15);
            GotoXY(0,0);
            cout<<"Use W,A,S,D and RETURN to Move";
            cout<<"\nPress Q to quit\n";
            GotoXY(1,4);
            switch(direction)
            {
                case 'D':
                case 'd':
                    A++;
                    if (A>50)
                    {
                        A=50;
                    }
                    GotoXY(A,B);
                    cout<<"X";
                break;
                case 'A':
                case 'a':
                    A--;
                    if (A<1)
                    {
                        A=1;
                    }
                    GotoXY(A,B);
                    cout<<"X";
                break;
                case 'S':
                case 's':
                    B++;
                    if (B>17)
                    {
                        B=17;
                    }            
                    GotoXY(A,B);
                    cout<<"X";
                break;
                case 'W':
                case 'w':
                    B--;
                    if (B<4)
                    {
                        B=4;
                    }
                    GotoXY(A,B);
                    cout<<"X";
                break;
                case 'Q':
                case 'q':
                    Move=false;
                break;
                default:
                    GotoXY(A,B);
                    cout<<"X";
                break;
            }
        }
    }
}

void GotoXY(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

