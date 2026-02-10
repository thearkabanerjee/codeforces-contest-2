#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool found = false;

    int root = 0;
    for (int i = 1; i * i <= N; i++)
        root = i;

    // First pass: smaller factors
    for (int i = 1; i <= root; i++) {
        if (N % i == 0) {
            if (i % 10 == 2 || i % 10 == 7) {
                cout << i << " ";
                found = true;
            }
        }
    }

    // Second pass: larger factors (reverse order)
    for (int i = root; i >= 1; i--) {
        if (N % i == 0) {
            int d = N / i;
            if (d != i && (d % 10 == 2 || d % 10 == 7)) {
                cout << d << " ";
                found = true;
            }
        }
    }

    if (!found)
        cout << -1;

    return 0;
}
