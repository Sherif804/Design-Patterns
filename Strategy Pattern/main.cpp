#include <bits/stdc++.h>

#include "mallardDuck.h"
#include "decoyDuck.h"
#include "squeak.h"
#include "flyRocketPowered.h"

using namespace std;

int main() {
    // mallarad duck
    mallardDuck mallard;
    mallard.display();
    mallard.swim();
    mallard.performFly();
    mallard.performQuack();

    cout << endl;

    decoyDuck decoy;
    decoy.display();
    decoy.swim();
    decoy.performFly();
    decoy.performQuack();

    cout << endl;

    decoy.quackBehav = make_unique<squeak>();
    decoy.flyBehav = make_unique<flyRocketPowered>();
    cout << "decoy duck after update!!" << endl;
    decoy.performFly();
    decoy.performQuack();

    return 0;
}
