#include "Header.h"

class Fio {
public:
    Fio();
    Fio(const Fio *fio);
    Fio(const char *LastName, const char *firstName = "-", const char *patronymic = "-");
    ~Fio();
    
    void input();
    void output();
    
    char *mLastName;
    char *mFirstName;
    char *mPatronymic;

protected:
    void init();

private:
    void enterDate(char*);
    void printDate(const char*, WORD);
};

