#include<iostream>
#include"Chess.h"

using namespace std;

class Board{
    public:
    ///variable///
    Chess chessPos[8][9];//Record chess position
    int validStep[8][9];//Record chess valid step(after click the chess)



    ///function///
    ///init board///
    Board(){
    }
    ///destruct///
    ~Board(){
    }
    ///Rendering board///
    void render(){
    }
    ///Show valid step after click chess///
    void showValidStep(vector<int[3]> &vec){
    }

};
