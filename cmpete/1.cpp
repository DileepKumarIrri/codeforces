#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }

        std::sort(a.begin(), a.end());

        int maxCost = a[n - 1] - a[0];
        for (int i = 1; i < n - 1; ++i) {
            maxCost = std::max(maxCost, a[i] - a[i - 1]);
        }

        std::cout << maxCost << std::endl;
    }

    return 0;
}
