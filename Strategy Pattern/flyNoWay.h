//
// Created by Sherif on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_FLYNOWAY_H
#define STRATEGY_PATTERN_FLYNOWAY_H

#include "flyBehavior.h"

class flyNoWay : public flyBehavior{
public:
    void fly() const override;
};


#endif //STRATEGY_PATTERN_FLYNOWAY_H
