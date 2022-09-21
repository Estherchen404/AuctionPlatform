//
//  admin.h
//  AuctionPlatform
//
//  Created by 陈雨欣 on 2022/9/20.
//

#ifndef admin_h
#define admin_h

#include <stdio.h>
#include "user.h"
class Admin{
private:
    int WrongTime = 0;
    char name[8] = "admin";
    char pwd[8] = "123456";
public:
    int verify(char * Aname, char *pswd);
    void PrintCom() const;
    void PrintUsr() const;

};
#endif /* admin_hpp */
