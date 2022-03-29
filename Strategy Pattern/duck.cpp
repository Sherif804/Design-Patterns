//
// Created by Sherif on 3/25/2022.
//

#include "duck.h"
#include "quackBehavior.h"
#include "flyBehavior.h"
#include <bits/stdc++.h>

using namespace std;

duck::duck(unique_ptr<flyBehavior> flyBehav, unique_ptr<quackBehavior> quackBehav) :
    flyBehav(move(flyBehav)), quackBehav(move(quackBehav)){ }

void duck::performQuack() const {
    quackBehav->quack();
}

void duck::performFly() const {
    flyBehav->fly();
}
void duck::swim() const {
    cout << "All ducks float, even decoys!" << endl;
}