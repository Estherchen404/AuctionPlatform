//
//  user.cpp
//  AuctionPlatform
//
//  Created by 陈雨欣 on 2022/9/21.
//

#include "user.h"
int Usr::usr_num = 0;
User Usr::UsrList[1000];
int Usr::verify(char * Uname, char *pswd)
{
    bool state = false;
    //if()
    for (int i = 0; i < usr_num; i++) {
        if(MystrCmp(Uname, UsrList[i].name) == 0 && MystrCmp(pswd, UsrList[i].password) == 0)
        {
            index = i;
            if(UsrList[i].state == INACTIVE)
                return -1;
            state = true;
            break;
        }
    }
    if(WrongTime < 3 && state)
    {
        WrongTime = 0;
    }
    else
        WrongTime++;
    return WrongTime;
}

void Usr::startup()
{
    ;
}

void Usr::PrintUsr() //查看所有用户
{
    cout << "*************************************************************************************" << endl;
    cout << "用户ID       用户名         联系方式              地址                     用户余额" << endl;
    for(int j = 0; j< usr_num; j++)
    {
        cout << UsrList[j].id << "       " << UsrList[j].name;
        for (int i = strlen(UsrList[j].name); i < 15; i++)
            cout << ' ';
        cout << UsrList[j].contact;
        for (int i = strlen(UsrList[j].contact); i < 18; i++)
            cout << ' ';
        cout << UsrList[j].address;
        for (int i = strlen(UsrList[j].address); i < 30; i++)
            cout << ' ';
        cout << fixed << setprecision(1) << UsrList[j].balance<<endl;
    }
    cout << "*************************************************************************************" << endl;

}

void Usr::UsrRegis()
{
    cout << "请输入您打算创建用户的名称：";
    char *name = new char[20];
    int i;
    while(cin >> name){
        for (i = 0; i < usr_num; i++) {
            if(MystrCmp(name, UsrList[i].name) == 0 && UsrList[i].state == ACTIVE)
                break;
        }
        if (i == usr_num)
            break;
        cout <<"请输入的用户名已存在，请重新输入：";
    }
    
    MystrCpy(name, UsrList[usr_num].name);
    cout << "请输入您的用户密码：";
    cin >>UsrList[usr_num].password;
    cout << "请输入您的用户地址：";
    cin >>UsrList[usr_num].address;
    cout << "请输入您的电话号码：";
    cin >>UsrList[usr_num].contact;
    UsrList[usr_num].balance = 0;
    UsrList[usr_num].state = ACTIVE;
    char* id = new char[5];
    id[0] = 'U';
    int x = usr_num;
    for(i = 3; i > 0; i--)
    {
        id[i] = x%10 + '0';
        x /= 10;
    }
    MystrCpy(id, UsrList[usr_num].id);
    usr_num++;
    cout<< "注册成功!"<<endl;
}
int MystrCmp(const char* s1, const char* s2) {
    while(*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
void MystrCpy(const char* s1, char* s2) {
    while(*s1)
    {
        *s2 = *s1;
        s1++;
        s2++;
    }
}
