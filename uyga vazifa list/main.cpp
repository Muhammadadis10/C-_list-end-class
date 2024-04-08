#include <iostream>
#include <string>
#include <list>

using namespace std;

class Person {
private:
    string name;
    string surname;
    string birthDate;
    string address;
    string phoneNumber;

public:

    Person(string n, string s, string b, string a, string p) : name(n), surname(s), birthDate(b), address(a), phoneNumber(p) {}

    void printInfo() const {
        cout << "Ism: " << name << endl;
        cout << "Familiya: " << surname << endl;
        cout << "Tug'ilgan sana: " << birthDate << endl;
        cout << "Manzil: " << address << endl;
        cout << "Telefon raqami: " << phoneNumber << endl;
    }
};

int main() {

    string name, surname, birthDate, address, phoneNumber;

    cout << "Oquv markaz ro'yxatga olish dasturiga xush kelibsiz!" << endl;

    cout << "Ismingiz: ";
    getline(cin, name);

    cout << "Familiyangiz: ";
    getline(cin, surname);

    cout << "Tug'ilgan sanangiz (sana/oy/yil): ";
    getline(cin, birthDate);

    cout << "Manzilingiz: ";
    getline(cin, address);

    cout << "Telefon raqamingiz: ";
    getline(cin, phoneNumber);

    Person newPerson(name, surname, birthDate, address, phoneNumber);

    list<Person> receptionList;
    receptionList.push_back(newPerson);

    cout << "Royhatdagi odamlar: " << endl;
    for (const auto& person : receptionList) {
        person.printInfo();
    }

    return 0;
}
