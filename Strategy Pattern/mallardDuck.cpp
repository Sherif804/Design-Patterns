//
// Created by Shekoo on 3/25/2022.
//

#include "mallardDuck.h"
#include "flyWithWings.h"
#include "Quack.h"

#include <bits/stdc++.h>

using namespace std;

mallardDuck::mallardDuck() : duck(make_unique<flyWithWings>(), make_unique<Quack>()) {}

void mallardDuck::display() const {
    cout << "I am a real Mallard duck" << endl;
}