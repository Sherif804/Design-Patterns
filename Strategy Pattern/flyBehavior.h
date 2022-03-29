//
// Created by Sherif on 3/25/2022.
//

#ifndef STRATEGY_PATTERN_FLYBEHAVIOR_H
#define STRATEGY_PATTERN_FLYBEHAVIOR_H


class flyBehavior {
public:
    virtual void fly() const = 0; // function that all flying classes implements
    virtual ~flyBehavior() = default; // virtual destructor
};


#endif //STRATEGY_PATTERN_FLYBEHAVIOR_H
