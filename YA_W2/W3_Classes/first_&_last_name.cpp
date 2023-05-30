#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

class Person {
public:
    void ChangeFirstName(int year, const std::string& first_name) {
        ;
    }
    void ChangeLastName(int year, const std::string& last_name) { ; }
    std::string GetFullName(int year) {
        
    }
private:
    int changes = 0;
    std::string f_name;
    std::string l_name;
    std::map<int, std::string> full_person;
};


int main()
{
    Person person;
    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        std::cout << person.GetFullName(year) << "\n";
    }
    person.ChangeFirstName(1970, "Appolinaria");
    return 0;
}
