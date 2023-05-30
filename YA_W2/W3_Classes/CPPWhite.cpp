#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


class SortedString {
public:
    void AddString(const std::string& s) {
        sorted.push_back(s);
    }
    std::vector<std::string> GetSortedString() {
        std::sort(sorted.begin(), sorted.end());
        return sorted;
    }
private:
    std::vector<std::string> sorted;
};

void PrintSortedStrings(SortedString& strings) {
    for (const std::string& s : strings.GetSortedString()) {
        std::cout << s << " ";
    }
    std::cout << "\n";
}

int main()
{
 
//classes
    std::vector<std::string> my_name = { "fire", "first", "second", "second", "third", "fire", "loop", "data", "camp"};
    SortedString my_class_n;
    for (auto& x : my_name) {
        my_class_n.AddString(x);
    }
    PrintSortedStrings(my_class_n);

    return 0;
}
