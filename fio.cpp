#include "fio.h"

//==========================================================================

void Fio::enterDate(char *str) {
    SetConsoleCP(1251);
    //cin >> str;
    SetConsoleCP(866);

    strcpy(str, "Алексей\0");
    cout << "Алексей" << endl;
}

void Fio::printDate(const char *str, WORD color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    cout << str;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

//==========================================================================

Fio::Fio() {
    printDate("\n   Fio constructor", 10);

    init();
    
    strcpy(mLastName, "-");
    strcpy(mFirstName, "-");
    strcpy(mPatronymic, "-");
    
}

Fio::Fio(const Fio *fio) {
    printDate("\n   Fio constructor", 9);
    
    init();
    
    strcpy(mLastName, fio->mLastName);
    strcpy(mFirstName, fio->mFirstName);
    strcpy(mPatronymic, fio->mPatronymic);
    
}

Fio::Fio(const char *lastName, const char *firstName, const char *patronymic) {
    printDate("\n   Fio constructor", 14);
    
    init();
    
    strcpy(mLastName, lastName);
    strcpy(mFirstName, firstName);
    strcpy(mPatronymic, patronymic);
    
}

Fio::~Fio() {
    printDate("\n   Fio destructor", 12);

    delete mLastName;
    delete mFirstName;
    delete mPatronymic;
}

//==========================================================================

void Fio::input() {
    cout << "  Фамилия:  ";
    enterDate(mLastName);
  
    cout << "  Имя:      ";
    enterDate(mFirstName);

    cout << "  Отчество: ";
    enterDate(mPatronymic);
}

void Fio::output() {
    cout << "\n  Фамилия:  " << mLastName 
         << "\n  Имя:      " << mFirstName 
         << "\n  Отчество: " << mPatronymic 
         << endl;
}

void Fio::init() {
    mLastName = new char[255];
    mFirstName = new char[255];
    mPatronymic = new char[255];
}
