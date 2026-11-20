#include <iostream>
using namespace std;

bool prime(int nr) {
    for (int i = 2; i * i < nr; i++) {
        if (nr % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cout << "Enter number: ";
    cin >> n;
    if (prime(n)) {
        cout << n << " is prime" << endl;
    } else {
        cout << n << " is not prime" << endl;
    }
    cout << prime(n) << endl;
    return 0;
}
