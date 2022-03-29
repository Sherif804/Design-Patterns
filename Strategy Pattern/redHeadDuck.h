//
// Created by Shekoo on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_REDHEADDUCK_H
#define STRATEGY_PATTERN_REDHEADDUCK_H

#include "duck.h"

class redHeadDuck : public duck{
public:
    redHeadDuck();
    void display() const override;
};


#endif //STRATEGY_PATTERN_REDHEADDUCK_H
