//
// Created by Shekoo on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_MALLARDDUCK_H
#define STRATEGY_PATTERN_MALLARDDUCK_H

#include "duck.h"

class mallardDuck : public duck{
public:
    mallardDuck();
    void display() const override;
};


#endif //STRATEGY_PATTERN_MALLARDDUCK_H
