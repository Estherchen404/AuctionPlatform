//
//  Interface.cpp
//  AuctionPlatform
//
//  Created by 陈雨欣 on 2022/9/19.
//

#include "Interface.h"


void Interface::MainMenu()
{
    //文件进入
    while (1) {
    cout << "==============================================" << endl;
    cout << " 1.管理员登录  2.用户注册  3.用户登录  4.退出程序" << endl;
    cout << "==============================================" << endl;
    cout << endl << "输入操作：";
    
    bool flag = true;
    char *temp = new char[20];
    cin >> temp;
    //std::getline(cin,temp);
    while (flag) {
        if(MystrCmp(temp, "1") == 0)
        {
            Admin admin;
            if(AdminLogin(admin))
                AdminMenu(admin);
            break;
        }
        else if(MystrCmp(temp, "2") == 0)
        {
            Usr::UsrRegis();
            ClearScreen();
            break;
        }
        else if(MystrCmp(temp, "3") == 0)
        {
            Usr usr;
            if(UsrLogin(usr))
                UsrMenu(usr);
            break;
        }
        else if(MystrCmp(temp, "4") == 0)
        {
            ;
        }
        else{
            SytaxError();
        }
        cin >> temp;
    }
        
    }
}
bool Interface::AdminLogin(Admin& admin)
{
    while(1){
        char name[11], password[21];
        cout << "请输入管理员姓名：";
        cin >> name;
        cout  << "请输入密码：";
        cin >> password;
        int flag = admin.verify(name, password);
        if (flag == 0) {
            cout << endl << "******登录成功*******"<<endl;
            ClearScreen();
            return true;;
        }
        else
        {
            cout << "输入有误！\n";
            ClearScreen();
            return false;
            
        }
    }
}
void Interface::AdminMenu(Admin& admin){
    while (1) {
        cout << "==========================================================================" << endl;
        cout << " 1.查看所有商品 2.搜索商品 3.下架商品 4.查看所有订单 5.查看所有用户 6.封禁用户 7.注销 " << endl;
        cout << "==========================================================================" << endl;
        cout << endl << "输入操作：";
        
        char *temp = new char[20];
        cin >> temp;
        while (1) {
            if(MystrCmp(temp, "1") == 0)
            {
                
                break;
            }
            else if(MystrCmp(temp, "2") == 0)
            {
                break;
            }
            else if(MystrCmp(temp, "3") == 0)
            {
                break;
            }
            else if(MystrCmp(temp, "4") == 0)
            {
                break;
            }
            else if(MystrCmp(temp, "5") == 0)
            {
                Usr::PrintUsr();
                break;
            }
            else if(MystrCmp(temp, "6") == 0)
            {
                break;
            }
            else if(MystrCmp(temp, "7") == 0)
            {
                break;
            }
            else{
                SytaxError();
            }
            cin >> temp;
        }
        
    }
}

bool Interface::UsrLogin(Usr& usr)
{
    while(1){
        char name[11], password[21];
        cout << "请输入用户名：";
        cin >> name;
        cout  << "请输入密码：";
        cin >> password;
        int flag = usr.verify(name, password);
        if (flag == 0) {
            cout << endl << "******登录成功*******"<<endl;
            ClearScreen();
            
            return true;;
        }
        else if(flag > 3){
            cout << "您已错误三次，账户已被冻结！"<<endl;
            return false;;
        }
        else if(flag == -1)
        {
            cout << "您已封禁，无法登录！"<<endl;
            return false;;
        }
        else
        {
            cout << "输入有误！\n";
            cout<< "您已错误"<<flag<<"次，错误三次之后，账户将被冻结！"<<endl;
        }
    }
}

void Interface::UsrMenu(Usr& usr){
    while (1) {
        cout << "=========================================================" << endl;
        cout << " 1.我是买家 2.我是卖家 3.个人信息管理 4.注销登录 " << endl;
        cout << "=========================================================" << endl;
        cout << endl << "输入操作：";
        
        char *temp = new char[20];
        cin >> temp;
        while (1) {
            if(MystrCmp(temp, "1") == 0)
            {
                BuyerMenu(usr);
                break;
            }
            else if(MystrCmp(temp, "2") == 0)
            {
                SellerMenu(usr);
                break;
            }
            else if(MystrCmp(temp, "3") == 0)
            {
                
                break;
            }
            else if(MystrCmp(temp, "4") == 0)
            {
                ;
            }
            else{
                SytaxError();
            }
            cin >> temp;
        }
        
    }
}

void Interface::SellerMenu(Usr& usr){
    while (1) {
        cout << "=============================================================================" << endl;
        cout << " 1.发布商品 2.查看发布商品 3.修改商品信息 4.下架商品 5.查看历史订单 6.返回用户主界面 " << endl;
        cout << "=============================================================================" << endl;
        cout << endl << "输入操作：";
        
        char *temp = new char[20];
        cin >> temp;
        while (1) {
            if(MystrCmp(temp, "1") == 0)
            {
                BuyerMenu(usr);
                break;
            }
            else if(MystrCmp(temp, "2") == 0)
            {
                
                ;
            }
            else if(MystrCmp(temp, "3") == 0)
            {
                break;
            }
            else if(MystrCmp(temp, "4") == 0)
            {
                break;
            }
            else if(MystrCmp(temp, "5") == 0)
            {
                break;
            }
            else if(MystrCmp(temp, "6") == 0)
            {
                ClearScreen();
                return;
            }
            else{
                SytaxError();
            }
            cin >> temp;
        }
        
    }
}

void Interface::BuyerMenu(Usr& usr){
    while (1) {
        cout << "==============================================================================" << endl;
        cout << " 1.查看商品列表 2.购买商品 3.搜索商品 4.查看历史订单 5.查看商品详细信息 6.返回用户主界面 " << endl;
        cout << "==============================================================================" << endl;
        cout << endl << "输入操作：";
        
        char *temp = new char[20];
        cin >> temp;
        while (1) {
            if(MystrCmp(temp, "1") == 0)
            {
                break;
            }
            else if(MystrCmp(temp, "2") == 0)
            {
                
                break;
            }
            else if(MystrCmp(temp, "3") == 0)
            {
                break;
            }
            else if(MystrCmp(temp, "4") == 0)
            {
                break;
            }
            else if(MystrCmp(temp, "5") == 0)
            {
                break;
            }
            else if(MystrCmp(temp, "6") == 0)
            {
                ClearScreen();
                return;
            }
            else{
                SytaxError();
            }
            cin >> temp;
        }
        
    }
}


void SytaxError()
{
    cout<<endl<<"输入有误！\n";
    cout<<"请重新输入：";
}
void ClearScreen()
{
    sleep(2);
    system("clear");
}
