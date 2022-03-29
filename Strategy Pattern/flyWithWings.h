//
// Created by Shekoo on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_FLYWITHWINGS_H
#define STRATEGY_PATTERN_FLYWITHWINGS_H

#include "flyBehavior.h"

class flyWithWings : public flyBehavior{
public:
    void fly() const override;
};


#endif //STRATEGY_PATTERN_FLYWITHWINGS_H
