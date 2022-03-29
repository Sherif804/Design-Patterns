//
// Created by Sherif on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_QUACKBEHAVIOR_H
#define STRATEGY_PATTERN_QUACKBEHAVIOR_H


class quackBehavior {
public:
    virtual void quack() const = 0; // function that all flying classes implements
    virtual ~quackBehavior() = default; // virtual destructor
};


#endif //STRATEGY_PATTERN_QUACKBEHAVIOR_H
