//
// Created by Shekoo on 3/25/2022.
//

#include "decoyDuck.h"
#include "flyNoWay.h"
#include "muteQuack.h"
#include <bits/stdc++.h>

using namespace std;

decoyDuck::decoyDuck() : duck(make_unique<flyNoWay>(), make_unique<muteQuack>()) {}

void decoyDuck::display() const {
    cout << "I'm a decoy duck" << endl;
}

