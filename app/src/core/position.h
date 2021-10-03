//
// Created by washa on 2021/9/20.
//

#ifndef RANDTRIP_POSITION_H
#define RANDTRIP_POSITION_H


namespace rt{
enum class Direction{
    West = 0;
    East;
    South;
    North;
}
class Position {
    public:
    uint32_t stage{0};
    Direction dir{0}
    Position(){
    }
    Position(&Position p){
        stage = p.stage;
        dir = p.dir;
    }
    static Position getRandomPosition();
    private:

};
}


#endif //RANDTRIP_POSITION_H
