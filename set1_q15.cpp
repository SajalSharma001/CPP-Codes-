#include <iostream>
#include <vector>
using namespace std;

void removeDup(vector<int> vec) {
    vector<int> result;
    result.push_back(vec[0]);
    for (int x : vec) {
        int count = 0;
        for (int j = 0; j < result.size(); j++) {
            if (x == result[j]) {
                count++;
            }
        }
        if (count == 0) {
            result.push_back(x);
        }
    }

    for (int x : result) {
        cout << x << endl;
    }
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 1, 2, 1, 5, 3, 10};
    removeDup(vec);

    return 0;
}