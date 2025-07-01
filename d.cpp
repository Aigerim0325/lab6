#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers;
    int n, value;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> value;
        numbers.push_back(value);
    }

    int target;
    cin >> target;

    int amount = count(numbers.begin(), numbers.end(), target);
    cout << "Count of " << target << ": " << amount << endl;

    int minVal = *min_element(numbers.begin(), numbers.end());
    int maxVal = *max_element(numbers.begin(), numbers.end());

    cout << "Min: " << minVal << "\n";
    cout << "Max: " << maxVal << "\n";

    return 0;
}
