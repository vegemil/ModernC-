#include <stdio.h>
#include <string.h>
#include "PersonalContact.h"

PersonalContact::PersonalContact(PersonalContact& personal) 
{
    strcpy_s(name, 20, personal.name);
    strcpy_s(phoneNumber, 13, personal.phoneNumber);
    strcpy_s(email, 30, personal.email);
    strcpy_s(address, 50, personal.address);
}

PersonalContact::inputContact(char* inName, char* inPhoneNumber, char* inEmail, char* inAddress) 
{
    if(inName != nullptr)
    {
        strcpy_s(name, 20, inName);
    }

    if(inName != nullptr)
    {
        strcpy_s(phoneNumber, 20, inPhoneNumber);
    }

    if(inName != nullptr)
    {
        strcpy_s(email, 20, inEmail);
    }

    if(inName != nullptr)
    {
        strcpy_s(address, 20, inAddress);
    }
}

PersonalContact::getContact(char* outName, char* outPhoneNumber, char* outEmail, char* outAddress)
{
    if(outName != nullptr)
    {
        strcpy_s(outName, 20, name);
    }

    if(outPhoneNumber != nullptr)
    {
        strcpy_s(outPhoneNumber, 20, phoneNumber);
    }

    if(outEmail != nullptr)
    {
        strcpy_s(outEmail, 20, email);
    }

    if(outAddress != nullptr)
    {
        strcpy_s(outAddress, 20, address);
    }
}


