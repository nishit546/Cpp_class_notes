#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> m1;

    m1.emplace(1, "nishit");
    m1.emplace(2, "doshi");

    for (const auto& [key, value] : m1) {
        cout << "Key: " << key << " | Value: " << value << '\n';
    }
}
