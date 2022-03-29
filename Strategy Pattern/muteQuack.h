//
// Created by Sherif on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_MUTEQUACK_H
#define STRATEGY_PATTERN_MUTEQUACK_H

#include "quackBehavior.h"

class muteQuack : public quackBehavior{
public:
    void quack() const override;
};


#endif //STRATEGY_PATTERN_MUTEQUACK_H
