//
// Created by Shekoo on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_QUACK_H
#define STRATEGY_PATTERN_QUACK_H

#include "quackBehavior.h"


class Quack : public quackBehavior{
public:
    void quack() const override;
};


#endif //STRATEGY_PATTERN_QUACK_H
