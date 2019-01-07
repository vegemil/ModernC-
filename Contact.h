#pragma once
#include <iostream>

class PersonalContact;

class Contact {
private:
    PersonalContact contactInfo[100];
    int numberOfContact;
public:
    // 생성자
    Contact();
    // 연락처 정보 입력
    void inputContact(char* name, char* phoneNumber = nullptr, char* email = nullptr, char* address = nullptr);
    // 연락처 전체 목록 조회
    void printConatactList();
    // 연락처 상세 조회 - 함수 오버로딩
    void printContact(int index);
    void printContact(char* inName);
    // 연락처 수정
    void editContactByIndex(int index, char* inName = nullptr, char* phoneNumber = nullptr, char* email = nullptr, char* address = nullptr);
    // 연락처 복사
    void copyContact(int index);
    // 연락처 제거
    void removeContactByIndex(int index);
};