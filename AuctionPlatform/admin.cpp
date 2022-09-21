//
//  admin.cpp
//  AuctionPlatform
//
//  Created by 陈雨欣 on 2022/9/20.
//

#include "admin.h"
int Admin::verify(char * Aname, char *pswd)
{

    if(WrongTime < 3 && MystrCmp(name, Aname) == 0 && MystrCmp(pswd, pwd) == 0)
    {
        WrongTime = 0;
    }
    else
        WrongTime++;
    return WrongTime;
}


