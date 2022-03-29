//
// Created by Shekoo on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_FLYROCKETPOWERED_H
#define STRATEGY_PATTERN_FLYROCKETPOWERED_H

#include "flyBehavior.h"

class flyRocketPowered : public flyBehavior{
public:
    void fly() const override;
};


#endif //STRATEGY_PATTERN_FLYROCKETPOWERED_H
