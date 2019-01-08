#include "Contact.h"

Contact::Contact()
{
    numberOfContact = 0;
}

void Contact::inputContact(char* name, char* phoneNumber, char* email, char* address)
{
    contactInfo[numberOfContact].inputContact(name, phoneNumber, email, address);
    numberOfContact++;
}

void Contact::printConatactList()
{
    int i;
    char name[30];
    for(i = 0; i < numberOfContact; ++i)
    {
        contactInfo[i].getContact(name);
        std::cout << i << " : " << name << std::endl;
    }
}

void Contact::printContact(int index)
{
    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];

    contactInfo[index].getContact(name, phoneNumber, email, address);

    std::cout << index << "의 index를 가진 연락처 조회" << std::endl;
    std::cout << "연락처 이름: " << name << std::endl;
    std::cout << "연락처 전화번호: " << phoneNumber << std::endl;
    std::cout << "연락처 이메일: " << email << std::endl;
    std::cout << "연락처 주소: " << address << std::endl;
}

void Contact::printContact(char* inName)
{
    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];

    int i;

    std::cout << inName << "의 이름을 가진 연락처 조회" << std::endl;

    for(int i = 0; i < numberOfContact; ++i)
    {
        contactInfo[i].getContact(name, phoneNumber, email, address);
        if(strcmp(inName, name) == 0)
        {
            std::cout << "연락처 이름: " << name << std::endl;
            std::cout << "연락처 전화번호: " << phoneNumber << std::endl;
            std::cout << "연락처 이메일: " << email << std::endl;
            std::cout << "연락처 주소: " << address << std::endl;
        }
    }
}

void Contact::editContactByIndex(int index, char* name, char* phoneNumber, char* email, char* address)
{
    contactInfo[index].editContact(name, phoneNumber, email, address);
}

void Contact::copyContact(int index)
{
    contactInfo[numberOfContact] = PersonalContact(contactInfo[index]);
    numberOfContact++;
}

void Contact::removeContactByIndex(int index)
{
    if(index >= numberOfContact || index < 0)
    {
        std::cout << index << "는 삭제가 불가능한 index 입니다." << std::endl;
        return;
    }

    for(int i = index + 1; i < numberOfContact; ++i)
    {
        contactInfo[i - 1] = contactInfo[i];
    }

    numberOfContact--;
}