//
// Created by Sherif on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_SQUEAK_H
#define STRATEGY_PATTERN_SQUEAK_H

#include "quackBehavior.h"

class squeak : public quackBehavior{
public:
    void quack() const override;
};


#endif //STRATEGY_PATTERN_SQUEAK_H
