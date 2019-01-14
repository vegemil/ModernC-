#include <string.h>

#include "Owner.h"

void Owner::inputOwnerInfo(char* inName, char* inPhoneNumber, char* inEmail, char* inAddress, char* inTwitterAccount)
{
    if(inName != nullptr)
    {
        strcpy_s(name, 20, inName);
    }

    if(inPhoneNumber != nullptr)
    {
        strcpy_s(phoneNumber, 13, inPhoneNumber);
    }

    if(inEmail != nullptr)
    {
        strcpy_s(email, 30, inEmail);
    }

    if(inAddress != nullptr)
    {
        strcpy_s(address, 50, inAddress);
    }

    if(inTwitterAccount != nullptr)
    {
        strcpy_s(twitterAccount, 20, inTwitterAccount);
    }
}

void Owner::printOwnerInfo()
{
    std::cout << "소유자 이름 : " << name << std::endl;
    std::cout << "소유자 전화번호 : " << phoneNumber << std::endl;
    std::cout << "소유자 이메일 : " << email << std::endl;
    std::cout << "소유자 주소 : " << address << std::endl;
    std::cout << "소유자 트위터 계정 : " << twitterAccount << std::endl;
}

void Owner::editOwnerInfo(char* inName, char* inPhoneNumber, char* inEmail, char* inAddress, char* inTwitterAccount) 
{
    if(inName != nullptr)
    {
        strcpy_s(name, 20, inName);
    }

    if(inPhoneNumber != nullptr)
    {
        strcpy_s(phoneNumber, 13, inPhoneNumber);
    }

    if(inEmail != nullptr)
    {
        strcpy_s(email, 30, inEmail);
    }

    if(inAddress != nullptr)
    {
        strcpy_s(address, 50, inAddress);
    }

    if(inTwitterAccount != nullptr)
    {
        strcpy_s(twitterAccount, 20, inTwitterAccount);
    }
}