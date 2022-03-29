//
// Created by Sherif on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_DECOYDUCK_H
#define STRATEGY_PATTERN_DECOYDUCK_H

#include "duck.h"

class decoyDuck : public duck{
public:
    decoyDuck();
    void display() const override;
};


#endif //STRATEGY_PATTERN_DECOYDUCK_H
