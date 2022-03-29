//
// Created by Shekoo on 3/25/2022.
//

#include "modelDuck.h"
#include "flyNoWay.h"
#include "Quack.h"

#include <bits/stdc++.h>

using namespace std;

modelDuck::modelDuck() : duck(make_unique<flyNoWay>(), make_unique<Quack>()) {}

void modelDuck::display() const {
    cout << "I'm a model duck" << endl;
}