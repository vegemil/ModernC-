#pragma once
#include <iostream>

class Controller {
private:
    Contact contacts;
    Menu menu;
    Owner owner;

    void inputOwnerInfo();
    void printOwnerInfo();
    void editOwnerInfo();

    void addContact();
    void princContactList();
    void printContactDetail();
    void editContact();
    void copyContact();
    void removeContact();

    void runOwnerMenu();
    void runContactMenu();

public:
    void runMainMenu();
};
