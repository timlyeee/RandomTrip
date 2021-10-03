//
// Created by washa on 2021/9/20.
//

#ifndef RANDTRIP_RANDOMTIME_H
#define RANDTRIP_RANDOMTIME_H
//rt = random trip
namespace rt{

class tripCalculator{
    public:
    tripCalculator getInstance(){
        static tripCalculator instance = tripCalculator();
        return tripCalculator;
    }

    private:
    tripCalculator(){
    }
    ~tripCalculator(){
    }
}
}

#endif //RANDTRIP_RANDOMTIME_H
