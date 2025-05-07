#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int temp1 = n * a;
    int temp2 = (n / m) * b + min((n % m) * a, b);

    cout << min(temp1, temp2) << endl;

    return 0;
}
