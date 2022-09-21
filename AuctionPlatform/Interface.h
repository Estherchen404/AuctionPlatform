//
//  Interface.h
//  AuctionPlatform
//
//  Created by 陈雨欣 on 2022/9/19.
//

#ifndef Interface_h
#define Interface_h


#include "admin.h"
#include "user.h"

using namespace std;

class Interface
{
private:
    
    bool UsrLogin(Usr& usr);
    void UsrMenu(Usr& usr);
    bool AdminLogin(Admin& admin);
    void AdminMenu(Admin& admin);
    void BuyerMenu(Usr& usr);
    void SellerMenu(Usr& usr);
public:
    Interface(){}
    void MainMenu();
    ~Interface(){}
};
void SytaxError();
void ClearScreen();
#endif
/* Interface_hpp */
