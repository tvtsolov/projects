#include <iostream>
#include <vector>
#include "TTT_vector.hpp"


  bool win_cond = false;
  std::vector<char> TTT = {'_', '_', '_', '_', '_', '_', '_', '_', '_'}; 
  int p1_move;
  int p2_move;
  int x;
  int y;


void start_game() {
    
    while (win_cond != true) {


        std::cout << "Player 1, your turn, select a square: \n";
        std::cin >> p1_move;

        x = p1_move - 1;

            while (TTT[x] != '_') {
            std::cout << "You can't do that, you little rascal! \nThere is already another entry in that square, chose a different square:\n";
            std::cin >> p1_move;
            x = p1_move - 1;
            }
            TTT[x] = 'x';
        
        display_table();
        check_win();

        std::cout << "Player 2, your turn, select a square: \n";
        std::cin >> p2_move;

        x = p2_move - 1;

            while (TTT[x] != '_') {
            std::cout << "You can't do that, you little rascal! \nThere is already another entry in that square, chose a different square:\n";
            std::cin >> p2_move;
            x = p2_move - 1;
            }
            TTT[x] = 'o';

        display_table();
        check_win();
       
    }

}

void check_win() {

            if (TTT[0] == TTT[1] && TTT[1] == TTT[2] && TTT[0] != '_') {

                win_cond = true;

            std::cout << "You won! Go celebrate or something! \n";

            }
            else if (TTT[3] == TTT[4] && TTT[4] == TTT[5] && TTT[3] != '_')
            {
                win_cond = true;
            }
            else if (TTT[6] == TTT[7] && TTT[7] == TTT[8] && TTT[6] != '_')
            {
                win_cond = true;
            }
            else if (TTT[0] == TTT[4] && TTT[4] == TTT[8] && TTT[0] != '_')
            {
                win_cond = true;
            }
            else if (TTT[0] == TTT[3] && TTT[3] == TTT[6] && TTT[0] != '_')
            {
                win_cond = true;
            }
            else if (TTT[1] == TTT[4] && TTT[4] == TTT[7] && TTT[1] != '_')
            {
                win_cond = true;
            }
            else if (TTT[2] == TTT[5] && TTT[5] == TTT[8] && TTT[2] != '_')
            {
                win_cond = true;

            }
            else if (TTT[2] == TTT[4] && TTT[4] == TTT[6] && TTT[2] != '_')
            {
                win_cond = true;

            } else { 
                win_cond = false;
                
            }

                if (win_cond == true) {

                    new_game();
                }

    }

void display_table() {

        std::cout << "|" << TTT[0] << "|" << TTT[1] << "|" << TTT[2] << "|\n";
        std::cout << "|" << TTT[3] << "|" << TTT[4] << "|" << TTT[5] << "|\n";
        std::cout << "|" << TTT[6] << "|" << TTT[7] << "|" << TTT[8] << "|\n";

    }

void new_game() {

    bool new_round = false;
    char ch;
    if(win_cond) {

        std::cout << "We have a winner!\n\nAnother round? y/n\n";
        std::cin >> ch;
            if (ch == 'y') {
                new_round = true;
            } else {
               new_round = false; 
            }

        if (new_round) {

            TTT[0] = '_';
            TTT[1] = '_'; 
            TTT[2] = '_';
            TTT[3] = '_';
            TTT[4] = '_';
            TTT[5] = '_';
            TTT[6] = '_';
            TTT[7] = '_';
            TTT[8] = '_';

            win_cond = false;
            start_game();
        }

            }


    }



