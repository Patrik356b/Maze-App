#include <windows.h>

#include <stdio.h>

#include <iostream>

#include <mmsystem.h>

#include <fstream>

using namespace std;

void Music(int C);

void GotoXY(int x, int y);

void Music(int C)
{
    int M; // FileID to stop
    char *inname = "MUSIC/music.txt";
    if(C != -1){
        ifstream infile(inname);
        infile >> C;
        infile.close();
    }
    if(C == 0){
        mciSendString("play MUSIC/PACK0/music0.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 1){
        mciSendString("play MUSIC/PACK0/music1.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 2){
        mciSendString("play MUSIC/PACK1/music3.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 3){
        mciSendString("play MUSIC/PACK1/music4.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 4){
        mciSendString("play MUSIC/PACK1/music5.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 5){
        mciSendString("play MUSIC/PACK2/music6.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 6){
        mciSendString("play MUSIC/PACK2/music7.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 7){
        mciSendString("play MUSIC/PACK2/music8.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 8){
        mciSendString("play MUSIC/PACK3/music9.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 9){
        mciSendString("play MUSIC/PACK3/music10.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 10){
        mciSendString("play MUSIC/PACK3/music11.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 11){
        mciSendString("play MUSIC/PACK4/music12.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 12){
        mciSendString("play MUSIC/PACK4/music13.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 13){
        mciSendString("play MUSIC/PACK4/music14.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 14){
        mciSendString("play MUSIC/PACK5/music15.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == 15){
        mciSendString("play MUSIC/PACK5/music16.mid",NULL,0,NULL);
        M = C;
        C++;
    }
    else if(C == -1){ // Doesn't Mute/Stop the music. What's Wrong With It ? >:(
        ifstream infile(inname);
        infile >> M;
        //M--;
        infile.close();
        if(M == 0) mciSendString("stop MUSIC/PACK0/music0.mid",NULL,0,NULL);
        else if(M == 1) mciSendString("stop MUSIC/PACK0/music1.mid",NULL,0,NULL);
        else if(M == 2) mciSendString("stop MUSIC/PACK1/music3.mid",NULL,0,NULL);
        else if(M == 3) mciSendString("stop MUSIC/PACK1/music4.mid",NULL,0,NULL);
        else if(M == 4) mciSendString("stop MUSIC/PACK1/music5.mid",NULL,0,NULL);
        else if(M == 5) mciSendString("stop MUSIC/PACK2/music6.mid",NULL,0,NULL);
        else if(M == 6) mciSendString("stop MUSIC/PACK2/music7.mid",NULL,0,NULL);
        else if(M == 7) mciSendString("stop MUSIC/PACK2/music8.mid",NULL,0,NULL);
        else if(M == 8) mciSendString("stop MUSIC/PACK3/music9.mid",NULL,0,NULL);
        else if(M == 9) mciSendString("stop MUSIC/PACK3/music10.mid",NULL,0,NULL);
        else if(M == 10) mciSendString("stop MUSIC/PACK3/music11.mid",NULL,0,NULL);
        else if(M == 11) mciSendString("stop MUSIC/PACK4/music12.mid",NULL,0,NULL);
        else if(M == 12) mciSendString("stop MUSIC/PACK4/music13.mid",NULL,0,NULL);
        else if(M == 13) mciSendString("stop MUSIC/PACK4/music14.mid",NULL,0,NULL);
        else if(M == 14) mciSendString("stop MUSIC/PACK5/music15.mid",NULL,0,NULL);
        else if(M == 15) mciSendString("stop MUSIC/PACK5/music16.mid",NULL,0,NULL);
        else{
            mciSendString("stop MUSIC/PACK0/music17.mid",NULL,0,NULL);
            M = 0;
        }
        C = 0;
    }
    else{
        mciSendString("play MUSIC/PACK5/music17.mid",NULL,0,NULL);
        C = 0;
    }
    if(C != -1)
    {
        ofstream infile(inname);
        infile << C;
        infile.close();
    }
    GotoXY(0,20);
    // cout << "C is " << C << "\tM is " << M; // Debug Info
}
