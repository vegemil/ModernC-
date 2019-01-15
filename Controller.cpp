#include "Controller.h"

void Controller::inputOwnerInfo()
{
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];
	char twitterAccount[20];

	std::cout << "소유자 이름 : ";
	std::cin >> name;

	std::cout << "소유자 전화번호 : ";
	std::cin >> phoneNumber;

	std::cout << "소유자 이메일 : ";
	std::cin >> email;

	std::cout << "소유자 주소 : ";
	std::cin >> address;

	std::cout << "소유자 트위터 계정 : ";
	std::cin >> twitterAccount;

	std::cout << "입력이 완료되었습니다." << std::endl;

	owner.inputOwnerInfo(name, phoneNumber, email, address, twitterAccount);
}

void Controller::printOwnerInfo()
{
	owner.printOwnerInfo();
}

void Controller::editOwnerInfo()
{
	char editString[50];

	int inputNum;
	std::cout << "1. 소유자 이름 수정" << std::endl;
	std::cout << "2. 소유자 전화번호 수정" << std::endl;
	std::cout << "3. 소유자 이메일 수정" << std::endl;
	std::cout << "4. 소유자 주소 수정" << std::endl;
	std::cout << "5. 소유자 트위터 계정 수정" << std::endl;
	std::cout << "6. 수정 없이 이전 메뉴로" << std::endl;

	std::cin >> inputNum;

	switch (inputNum)
	{
	case 1:
		std::cout << "수정할 이름: ";
		std::cin >> editString;
		owner.editOwnerInfo(editString, nullptr, nullptr, nullptr, nullptr);
		std::cout << "소유자의 이름이 수정되었습니다." << std::endl;
		break;
	case 2:
		std::cout << "수정할 전화번호: ";
		std::cin >> editString;
		owner.editOwnerInfo(nullptr, editString, nullptr, nullptr, nullptr);
		std::cout << "소유자의 전화번호가 수정되었습니다." << std::endl;
		break;
	case 3:
		std::cout << "수정할 이메일: ";
		std::cin >> editString;
		owner.editOwnerInfo(nullptr, nullptr, editString, nullptr, nullptr);
		std::cout << "소유자의 이메일이 수정되었습니다." << std::endl;
		break;
	case 4:
		std::cout << "수정할 주소: ";
		std::cin >> editString;
		owner.editOwnerInfo(nullptr, nullptr, nullptr, editString, nullptr);
		std::cout << "소유자의 주소가 수정되었습니다." << std::endl;
		break;
	case 5:
		std::cout << "수정할 twitter 계정: ";
		std::cin >> editString;
		owner.editOwnerInfo(nullptr, nullptr, nullptr, nullptr, editString);
		std::cout << "소유자의 트위터 계정이 수정되었습니다." << std::endl;
		break;

	default:
		std::cout << "아무것도 수정되지 않았습니다." << std::endl;
	}
}

void Controller::addContact()
{
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];

	std::cout << "연락처 이름: ";
	std::cin >> name;
	std::cout << "연락처 전화번호: ";
	std::cin >> phoneNumber;
	std::cout << "연락처 이메일: ";
	std::cin >> email;
	std::cout << "연락처 주소: ";
	std::cin >> address;

	contacts.inputContact(name, phoneNumber, email, address);
}

void Controller::printContactList()
{
	contacts.printConatactList();
}

void Controller::printContactDetail()
{
	int inputNum;
	int index;
	char name[20];
	std::cout << "1. index로 연락처 조회" << std::endl;
	std::cout << "2. 이름로 연락처 조회" << std::endl;
	std::cin >> inputNum;

	switch (inputNum)
	{
	case 1:
		std::cout << "조회할 연락처 index: " << std::endl;
		std::cin >> index;
		contacts.printContact(index);
		break;
	case 2:
		std::cout << "조회할 연락처 이름: " << std::endl;
		std::cin >> name;
		contacts.printContact(name);
		break;
	default:
		std::cout << "잘못 입력했습니다. 이전 메뉴로 돌아갑니다." << std::endl;
		break;
	}
}

void Controller::editContact()
{
	int index;
	std::cout << "수정할 연락처 index: ";
	std::cin >> index;

	char editString[50];
	int inputNum;
	std::cout << "1. 연락처 이름 수정" << std::endl;
	std::cout << "2. 연락처 전화번호 수정" << std::endl;
	std::cout << "3. 연락처 이메일 수정" << std::endl;
	std::cout << "4. 연락처 주소 수정" << std::endl;
	std::cout << "5. 수정 없이 이전 메뉴로" << std::endl;
	std::cin >> inputNum;

	switch (inputNum)
	{
	case 1:
		std::cout << "수정할 이름: ";
		std::cin >> editString;
		contacts.editContactByIndex(index, editString, nullptr, nullptr, nullptr);
		std::cout << "연락처 이름이 수정되었습니다." << std::endl;
		break;
	case 2:
		std::cout << "수정할 전화번호: ";
		std::cin >> editString;
		contacts.editContactByIndex(index, nullptr, editString, nullptr, nullptr);
		std::cout << "연락처 전화번호가 수정되었습니다." << std::endl;
		break;
	case 3:
		std::cout << "수정할 이메일: ";
		std::cin >> editString;
		contacts.editContactByIndex(index, nullptr, nullptr, editString, nullptr);
		std::cout << "연락처 이메일이 수정되었습니다." << std::endl;
		break;
	case 4:
		std::cout << "수정할 주소: ";
		std::cin >> editString;
		contacts.editContactByIndex(index, nullptr, nullptr, nullptr, editString);
		std::cout << "연락처 주소rk 수정되었습니다." << std::endl;
		break;

	default:
		std::cout << "아무것도 수정되지 않았습니다." << std::endl;
		break;
	}
}

void Controller::copyContact()
{
	int index;
	std::cout << "복사할 연락처 index: " << std::endl;
	std::cin >> index;
	contacts.copyContact(index);
}

void Controller::removeContact()
{
	int index;
	std::cout << "삭제할 연락처 index: ";
	std::cin >> index;

	contacts.removeContactByIndex(index);
}

void Controller::runOwnerMenu()
{
	int menuNum;
	do {
		menu.setMenuSelection(1);
		menuNum = menu.execution();

		switch (menuNum)
		{
		case 1:
			inputOwnerInfo();
			break;
		case 2:
			printOwnerInfo();
			break;
		case 3:
			editOwnerInfo();
			break;
		case 4:
			std::cout << "이전 메뉴로 돌아갑니다." << std::endl;
			break;
		default:
			std::cout << "잘못 입력 했습니다. 다시 해주세요" << std::endl;
		}
	} while (menuNum != 4);
}

void Controller::runContactMenu()
{
	int menuNum;
	do {
		menu.setMenuSelection(2);
		menuNum = menu.execution();

		switch (menuNum)
		{
		case 1:
			addContact();
			break;
		case 2:
			printContactList();
			break;
		case 3:
			printContactDetail();
			break;
		case 4:
			editContact();
			break;
		case 5:
			copyContact();
			break;
		case 6:
			removeContact();
			break;
		case 7:
			std::cout << "이전 메뉴로 돌아갑니다." << std::endl;
			break;
		default:
			std::cout << "잘못 입력 했습니다. 다시 해주세요" << std::endl;
		}
	} while (menuNum != 7);
}

void Controller::runMainMenu()
{
	int menuNum;
	do {
		menu.setMenuSelection(0);
		menuNum = menu.execution();

		switch (menuNum)
		{
		case 1:
			runOwnerMenu();
			break;
		case 2:
			runContactMenu();
			break;
		case 3:
			std::cout << "프로그램을 종료합니다." << std::endl;
			break;
		default:
			std::cout << "잘못 입력 했습니다. 다시 해주세요" << std::endl;
		}
	} while (menuNum != 3);
}