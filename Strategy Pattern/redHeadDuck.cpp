//
// Created by Shekoo on 3/25/2022.
//

#include "redHeadDuck.h"
#include "flyWithWings.h"
#include "Quack.h"

#include <bits/stdc++.h>

using namespace std;

redHeadDuck::redHeadDuck() : duck(make_unique<flyWithWings>(), make_unique<Quack>()) {}

void redHeadDuck::display() const {
    cout << "I'm red head duck" << endl;
}
