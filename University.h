#pragma once
#include "Header.h"

class University {
public:
    University();
    University(const University* university);
    University(const char* LastName, const char* firstName = "-", const char* patronymic = "-");
    ~University();

    void input();
    void output();

    char* mCountry;
    char* mSity;
    char* mStreet;

protected:
    void init();

private:
    void enterDate(char*);
    void printDate(const char*, WORD);

};

