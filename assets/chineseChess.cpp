#include "chineseChess.h"

using namespace std;

//Menu--------------------
void showMenu(){
	system("clear");
	cout << "1. Human to human" << endl;
	cout << "2. Human to AI" << endl;
	cout << "3. Train" << endl;
};
void gotoGame(){
	//goto game;
	cout<< "Still working on it" << endl;
};
void gotoBotSelection(){
	cout<< "Still working on it" << endl;
};
void gotoBotSelection2(){
	cout<< "Still working on it" << endl;
};
void Menu(){
	int choice=0;
	showMenu();
	while(choice != 1&&choice != 2&&choice != 3){
		cin >> choice;
		if (choice == 1)
			gotoGame();
		else if (choice == 2)
			gotoBotSelection();
		else if (choice == 3)
			gotoBotSelection2();
		else{
			showMenu();
			cout << "This choice doesn't exist, choose again!" << endl;
		}
	}
};
/*
//GAME--------------------
void game(){
	
	while(1){
		render();
	}
	
};
//board
void board::render(){
	for(int i=0;i<8){
		for(int j=0;j<9){
			//cout << Chess[i][j];
		}		
	}
};
void board::showValidStep(vector<int(3)>){};
//chess
vector<int[3]> Chess::valid(Chess[8][9]){};
void Chess::move(int, int, int){};

*/
//UI----------------------





