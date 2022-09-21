//
//  user.h
//  AuctionPlatform
//
//  Created by 陈雨欣 on 2022/9/21.
//

#ifndef user_h
#define user_h

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <stdio.h>
#include <unistd.h>
#include <ctime>


using namespace std;

enum {
    INACTIVE,
    ACTIVE
};
class User
{
public:
    char id[7];
    char name[11];
    char password[21];
    char contact[21];
    char address[100];
    float balance;
    bool state;
};
class Usr
{
private:
    int WrongTime = 0;
    int index;
    static User UsrList[1000];
    static int usr_num;
public:
    
    int verify(char * Uname, char *pswd);
    static void UsrRegis();
    static void PrintUsr(); //查看所有用户
    static bool BanUsr();   //封禁用户
    static void startup(); //读用户文件
    static int SearchUsr(char *name); //返回用户列表的序号
};
int MystrCmp(const char* s1,const char* s2);
void MystrCpy(const char* s1, char* s2) ;

#endif /* user_hpp */
