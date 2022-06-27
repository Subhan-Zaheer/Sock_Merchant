#include<iostream>
#include<vector>

using namespace std;

int sockMerchant(int n, int ar[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (ar[i] == -1) {
            continue;
        }
        for (int j = i + 1; j < n; j++) {
            if (ar[j] == -1) {
                continue;
            }
            if (ar[i] == ar[j]) {
                ar[i] = -1;
                ar[j] = -1;
                continue;

            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (ar[i] == -1) {
            sum++;
        }
    }
    return sum / 2;
}


int main() {

    int ar[] = {1, 2, 1, 3, 1, 2};

    cout << sockMerchant(6, ar) << endl;
    return 0;
}