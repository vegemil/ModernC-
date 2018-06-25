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

void editOwnerInfo()
{
    int inputNum;
    
    std::cout << "1. 소유자 이름 수정" << std::endl;
    std::cout << "2. 소유자 전화번호 수정" << std::endl;
    std::cout << "3. 소유자 이메일 수정" << std::endl;
    std::cout << "4. 소유자 주소 수정" << std::endl;
    std::cout << "5. 소유자 트위터 계정 수정" << std::endl;
    std::cout << "6. 수정 없이 이전 메뉴로" << std::endl;

    std::cin>> inputNum;

    switch(inputNum)
    {
        case 1:
            std::cin >> owner.name;
            std::cout << "소유자의 이름이 수정되었습니다." << std::endl;
            break;
        case 2:
            std::cin >> owner.phoneNumber;
            std::cout << "소유자의 전화번호가 수정되었습니다." << std::endl;
            break;
        case 3:
            std::cin >> owner.email;
            std::cout << "소유자의 이메일이 수정되었습니다." << std::endl;
            break;
        case 4:
            std::cin >> owner.address;
            std::cout << "소유자의 주소가 수정되었습니다." << std::endl;
            break;
        case 5:
            std::cin >> owner.twitterAccount;
            std::cout << "소유자의 트위터 계정이 수정되었습니다." << std::endl;
            break;

        default:
            std::cout << "아무것도 수정되지 않았습니다." << std::endl;
            break;
    }
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

int removeContactByIndex(int index)
{
    if(index >= contactNumber || index < 0)
    {
        return 0;
    }

    int i;
    for(i = index + 1; i < contactNumber; ++i)
    {
        *(contacts + i - 1) = *(contacts + i);
    }

    contactNumber--;

    return 1;
}

void printContactInfoByIndex(int index)
{
    std::cout << index << "의 index를 가진 연락처 조회" << std::endl;
    std::cout << "연락처 이름 : " << contacts[index].name << std::endl;
    std::cout << "연락처 전화번호 : " << contacts[index].phoneNumber << std::endl;
    std::cout << "연락처 이메일 : " << contacts[index].email << std::endl;
    std::cout << "연락처 주소 : " << contacts[index].address << std::endl;
}

void runOwnerMenu()
{
    int menuNum;

    do {
        std::cout << "1. 소유자 정보 입력" << std::endl;
        std::cout << "2. 소유자 정보 조회" << std::endl;
        std::cout << "3. 소유자 정보 수정" << std::endl;
        std::cout << "4. 이전 화면" << std::endl;
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
                editOwnerInfo();
                break;
            case 4:
                std::cout << "이전 화면으로 돌아 갑니다." << std::endl;
                break;

            default:
                std::cout << "잘못 입력 했습니다. 다시 해주세요" << std::endl; 
                break;
        }
    } while(menuNum != 4);
}

void runContactMenu() 
{
    int menuNum;
    int result;
    int index;

    do {
        std::cout << "1. 연락처 추가 입력" << std::endl;
        std::cout << "2. 연락처 목록 조회" << std::endl;
        std::cout << "3. 연락처 삭제" << std::endl;
        std::cout << "4. 연락처 상세 조회" << std::endl;
        std::cout << "5. 이전 화면" << std::endl;
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
                std::cout << "삭제할 연락처" << std::endl;
                std::cin >> index;
                result = removeContactByIndex(index);
                if(result == 1)
                {
                    std::cout << "정상적으로 삭제되었습니다." << std::endl;
                }
                else
                {
                    std::cout << "정상적으로 삭제되지 않았습니다." << std::endl;
                }
            case 4:
                std::cout << "조회할 연락처 index" << std::endl;
                std::cin >> index;
                printContactInfoByIndex(index);
                break;
            
            case 5:
                std::cout << "이전 화면으로 돌아갑니다." << std::endl;
                break;

            default:
                std::cout << "잘못 입력 했습니다. 다시 해주세요" << std::endl; 
                break;
        }
    } while(menuNum != 5);
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
