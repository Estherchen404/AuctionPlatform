//
//  main.cpp
//  AuctionPlatform
//
//  Created by 陈雨欣 on 2022/9/19.
//

#include <iostream>
#include "Interface.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    Interface inter;
    
    Usr::startup();
    inter.MainMenu();

    return 0;
}
