//
// Created by Sherif on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_MODELDUCK_H
#define STRATEGY_PATTERN_MODELDUCK_H

#include "duck.h"

class modelDuck : public duck{
public:
    modelDuck();
    void display() const override;
};


#endif //STRATEGY_PATTERN_MODELDUCK_H
