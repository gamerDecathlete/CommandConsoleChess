#ifndef KING_H
#define KING_H

#include "ChessPiece.h"


class King : public ChessPiece
{
    public:
        King(int x, int y, std::string side);
        virtual ~King();
        PieceType GetPieceType();
        std::vector<position_t> GetValidMoves();
    private:
        bool InBoundaries(int p);
};

#endif // KING_H
