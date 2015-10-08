#include <windows.h>

#include <stdio.h>

#include <iostream>

#include <mmsystem.h>

#include <fstream>

using namespace std;

void MakeMaze();
void GotoXY(int x, int y);

void MakeMaze(){
    int R, E=2;
    // What changes E=0 into E=2293528 ?
    // And How/Why The Fuck is Save() called several times?
    
    HANDLE hStdout;
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    
    GotoXY(0,19);
    // cout << "R is " << R << "\tE is " << E; // Debug info
    
    SetConsoleTextAttribute(hStdout, E);
    GotoXY(0,4);
    printf("+");
    GotoXY(2,4);
    printf("+------------------------------------------------+\n|\n");
    printf("+------------------------------------------------+");
    GotoXY(51,5);
    printf("|");
    GotoXY(51,6);
    printf("|\n|\n|");
    GotoXY(51,7);
    printf("|\n|");
    GotoXY(2,8);
    printf("+-----------------+------------------------------+");
    GotoXY(0,9);
    printf("|\n|\n|\n|\n|\n|\n|\n+-----+-----------------+------------------------+");
    GotoXY(2,9);
    printf("|");
    GotoXY(2,10);
    printf("|");
    GotoXY(2,11);
    printf("|");
    GotoXY(2,12);
    printf("|");
    GotoXY(2,13);
    printf("|");
    GotoXY(2,14);
    printf("+");
    GotoXY(4,14);
    printf("+");
    GotoXY(4,13);
    printf("|");
    GotoXY(4,12);
    printf("|");
    GotoXY(4,11);
    printf("|");
    GotoXY(4,10);
    printf("+");
    GotoXY(6,10);
    printf("+-----------+");
    GotoXY(6,11);
    printf("|");
    GotoXY(6,12);
    printf("|");
    GotoXY(6,13);
    printf("|");
    GotoXY(6,14);
    printf("|");
    GotoXY(6,15);
    printf("|");
    GotoXY(20,9);
    printf("|");
    GotoXY(20,10);
    printf("|");
    GotoXY(20,11);
    printf("|");
    GotoXY(20,12);
    printf("|");
    GotoXY(8,12);
    printf("+-----------+");
    GotoXY(8,14);
    printf("+---------+");
    GotoXY(20,13);
    printf("|");
    GotoXY(20,14);
    printf("+");
    GotoXY(22,14);
    printf("+");
    GotoXY(22,13);
    printf("|");
    GotoXY(22,12);
    printf("|");
    GotoXY(22,11);
    printf("|");
    GotoXY(22,10);
    printf("+");
    GotoXY(24,15);
    printf("|");
    GotoXY(24,14);
    printf("|");
    GotoXY(24,13);
    printf("|");
    GotoXY(24,12);
    printf("|");
    GotoXY(24,11);
    printf("|");
    GotoXY(24,10);
    printf("+----------------------+");
    GotoXY(24,12);
    printf("|");
    GotoXY(26,12);
    printf("+--------------------+");
    GotoXY(49,13);
    printf("|");
    GotoXY(49,12);
    printf("|");
    GotoXY(49,11);
    printf("|");
    GotoXY(49,10);
    printf("+");
    GotoXY(26,14);
    printf("+----------------------+-+");
    GotoXY(51,9);
    printf("|");
    GotoXY(51,10);
    printf("|");
    GotoXY(51,11);
    printf("|");
    GotoXY(51,12);
    printf("|");
    GotoXY(51,13);
    printf("|");
    GotoXY(51,15);
    printf("|");
    GotoXY(51,16);
    printf("|");
    GotoXY(51,17);
    printf("|");
    GotoXY(0,18);
    printf("+--------------------------------------------------+");
    SetConsoleTextAttribute(hStdout, 15);
}
