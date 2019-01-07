#pragma once
#include <iostream>

class PersonalContact{
private:
    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];
public:
    // 기본 생성자
    PersonalContact() {};
    // 복사 생성자
    PersonalContact(PersonalContact& personal);
    // 연락처 입력
    void inputContact(char* inName, char* inPhoneNumber = nullptr, char* inEmail = nullptr, char* inAddress = nullptr);
    // 연락처 조회
    void getContact(char* outName, char* outPhoneNumber = nullptr, char* outEmail = nullptr, char* outAddress = nullptr);
    // 연락처 수정
    void editContact(char* inName, char* inPhoneNumber = nullptr, char* inEmail = nullptr, char* inAddress = nullptr);
};