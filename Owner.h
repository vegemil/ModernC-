#pragma once
#include <iostream>

class Owner{
private:
    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];
    char twitterAccount[20];

public:
    // 소유자 정보 입력
    void inputOwnerInfo(char* inName, char* inPhoneNumber = nullptr, char* inEmail = nullptr, char* inAddress = nullptr, char* inTwitterAccount = nullptr);
    // 소유자 정보 출력
    void printOwnerInfo();
    // 소유자 정보 수정
    void editOwnerInfo(char* inName, char* inPhoneNumber = nullptr, char* inEmail = nullptr, char* inAddress = nullptr, char* inTwitterAccount = nullptr);
};