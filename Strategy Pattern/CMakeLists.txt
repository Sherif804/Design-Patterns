cmake_minimum_required(VERSION 3.21)
project(Strategy_Pattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(Strategy_Pattern main.cpp duck.cpp duck.h quackBehavior.cpp quackBehavior.h flyBehavior.cpp flyBehavior.h flyNoWay.cpp flyNoWay.h flyWithWings.cpp flyWithWings.h flyRocketPowered.cpp flyRocketPowered.h Quack.cpp Quack.h squeak.cpp squeak.h muteQuack.cpp muteQuack.h decoyDuck.cpp decoyDuck.h mallardDuck.cpp mallardDuck.h modelDuck.cpp modelDuck.h redHeadDuck.cpp redHeadDuck.h)
