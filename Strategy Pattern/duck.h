//
// Created by Sherif on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_DUCK_H
#define STRATEGY_PATTERN_DUCK_H

#include "quackBehavior.h"
#include "flyBehavior.h"
#include <bits/stdc++.h>

using namespace std;

class duck {
public:
    unique_ptr<flyBehavior> flyBehav;
    unique_ptr<quackBehavior> quackBehav;

    duck(unique_ptr<flyBehavior> flyBehav, unique_ptr<quackBehavior> quackBehav);

    virtual ~duck() = default;

    void performQuack() const;

    void swim() const;

    virtual void display() const = 0;

    void performFly() const;
};


#endif //STRATEGY_PATTERN_DUCK_H
