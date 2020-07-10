#include "University.h"

//==========================================================================

void University::enterDate(char* str) {
    SetConsoleCP(1251);
    //cin >> str;
    SetConsoleCP(866);

    strcpy(str, "Пенза\0");
    cout << "Пенза" << endl;
}

void University::printDate(const char* str, WORD color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    cout << str;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

//==========================================================================

University::University() {
    printDate("\n   University constructor", 10);

    init();

    strcpy(mCountry, "-");
    strcpy(mSity, "-");
    strcpy(mStreet, "-");

}

University::University(const University* university) {
    printDate("\n   University constructor", 9);

    init();

    strcpy(mCountry, university->mCountry);
    strcpy(mSity, university->mSity);
    strcpy(mStreet, university->mStreet);

}

University::University(const char* country, const char* sity, const char* street) {
    printDate("\n   University constructor", 14);

    init();

    strcpy(mCountry, country);
    strcpy(mSity, sity);
    strcpy(mStreet, street);

}

University::~University() {
    printDate("\n   University destructor", 12);

    delete mCountry;
    delete mSity;
    delete mStreet;
}

//==========================================================================

void University::input() {
    cout << "  Страна:  ";
    enterDate(mCountry);

    cout << "  Город:   ";
    enterDate(mSity);

    cout << "  Улица:   ";
    enterDate(mStreet);
}

void University::output() {
    cout << "\n  Страна:  " << mCountry
        << "\n  Город:   " << mSity
        << "\n  Улица:   " << mStreet
        << endl;
}

void University::init() {
    mCountry = new char[255];
    mSity = new char[255];
    mStreet = new char[255];
}
