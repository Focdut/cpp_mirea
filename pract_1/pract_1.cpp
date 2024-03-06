#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> table;

    for (int i = 0; i < 10; ++i) {
        int input_user;
        cout << "table[" << i << "] = ";
        cin >> input_user;
        table.push_back(input_user);
    }

    int max_table = distance(table.begin(), max_element(table.begin(), table.end()));
    int min_table = distance(table.begin(), min_element(table.begin(), table.end()));

    cout << "table: ";
    for (int num : table) {
        cout << num << " ";
    }
    cout << endl;

    swap(table[max_table], table[min_table]);

    cout << "table: ";
    for (int num : table) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}