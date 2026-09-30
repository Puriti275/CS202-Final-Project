#pragma once

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class ChessBoard {
    public:

        ChessBoard();
        void display();
        void play();

    private:

        struct Piece {
            int value; // King = 10, Queen = 8, Rook = 5, Bishop & Knight = 3, Pawn = 1
            int color; // 1 for black, 0 for white
            char type; // 'K'=King, 'Q'=Queen, 'R'=Rook, 'B'=Bishop, 'N'=Knight, 'P'=Pawn
        };

        struct Cell {
            int row;
            int col;
            Piece* pieceOccupied;
        };

        vector<vector<Cell> > board;
        vector<Piece> pieces;
        void checkBoard();
        int stringToMove(string &move);
        void move(Cell &currentCell, int row, int col);
        void welcome();
};