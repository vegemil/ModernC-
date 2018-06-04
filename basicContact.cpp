#include <iostream>

struct OwnerInfo {
    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];
    char twitterAccount[20];
};

struct ContactInfo{
    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];
};

OwnerInfo owner;
ContactInfo contacts[100];
int contactNumber = 0;

void inputOwnerInfo() 
{
    std::cout << "소유자 이름 : ";
    std::cin >> owner.name;

    std::cout << "소유자 전화번호 : ";
    std::cin >> owner.phoneNumber;

    std::cout << "소유자 이메일 : ";
    std::cin >> owner.email;

    std::cout << "소유자 주소 : ";
    std::cin >> owner.address;

    std::cout << "소유자 트위터 계정 : ";
    std::cin >> owner.twitterAccount;

    std::cout << "입력이 완료되었습니다." << std::endl;
}

void outputOwnerInfo()
{
    std::cout << "소유자 이름 : " << owner.name << std::endl;
    std::cout << "소유자 전화번호 : " << owner.phoneNumber << std::endl;
    std::cout << "소유자 이메일 : " << owner.email << std::endl;
    std::cout << "소유자 주소 : " << owner.address << std::endl;
    std::cout << "소유자 트위터 계정 : " << owner.twitterAccount << std::endl;
}

void addContact() 
{
    std::cout << "연락처 이름 : ";
    std::cin >> contacts[contactNumber].name;
    
    std::cout << "연락처 전화번호 : ";
    std::cin >> contacts[contactNumber].phoneNumber;

    std::cout << "연락처 이메일 : ";
    std::cin >> contacts[contactNumber].phoneNumber;

    std::cout << "연락처 주소 : ";
    std::cin >> contacts[contactNumber].phoneNumber;

    contactNumber++;
    std::cout << "입력이 완료 되었습니다." << std::endl;
}

void outputContactList() 
{
    int i;

    for(i = 0; i < contactNumber; ++i)
    {
        std::cout << i << " : " << contacts[i].name << std::endl;
    }
}

void runOwnerMenu()
{
    int menuNum;

    do {
        std::cout << "1. 소유자 정보 입력" << std::endl;
        std::cout << "2. 소유자 정보 조회" << std::endl;
        std::cout << "3. 이전 화면" << std::endl;
        std::cin >> menuNum;

        switch(menuNum)
        {
            case 1:
                inputOwnerInfo();
                break;
                
            case 2:
                outputOwnerInfo();
                break;
            
            case 3:
                std::cout << "이전 화면으로 돌아 갑니다." << std::endl;
                break;

            default:
                std::cout << "잘못 입력 했습니다. 다시 해주세요" << std::endl; 
                break;
        }
    } while(menuNum != 3);
}

void runContactMenu() 
{
    int menuNum;

    do {
        std::cout << "1. 연락처 추가 입력" << std::endl;
        std::cout << "2. 연락처 목록 조회" << std::endl;
        std::cout << "3. 이전 화면" << std::endl;
        std::cin >> menuNum;

        switch(menuNum)
        {
            case 1:
                addContact();
                break;
                
            case 2:
                outputContactList();
                break;
            
            case 3:
                std::cout << "이전 화면으로 돌아갑니다." << std::endl;
                break;

            default:
                std::cout << "잘못 입력 했습니다. 다시 해주세요" << std::endl; 
                break;
        }
    } while(menuNum != 3);
}

void runMainMenu()
{
    int menuNum;

    do {
        std::cout << "1. 소유자 관리 기능" << std::endl;
        std::cout << "2. 연락처 관리 기능" << std::endl;
        std::cout << "3. 프로그램 종료" << std::endl;
        std::cin >> menuNum;

        switch(menuNum)
        {
            case 1:
                runOwnerMenu();
                break;
                
            case 2:
                runContactMenu();
                break;
            
            case 3:
                std::cout << "프로그램을 종료 합니다." << std::endl;
                break;

            default:
                std::cout << "잘못 입력 했습니다. 다시 해주세요" << std::endl; 
                break;
        }
    } while(menuNum != 3);
}

int main()
{
    runMainMenu();
    return 0;
}