#include <iostream>
using namespace std;
int count_desc= 0, count_asc= 0;

void Desc_order(int array[], int n) {
    for (int i= 0;i<n- 1; i++) {
        for (int j= 0; j<n-i- 1;j++) {
            if (array[j] < array[j + 1]) {
                swap(array[j], array[j + 1]);
                count_desc++;
            }
        }
    }
}

void Asc_order(int array[], int n) {
    for (int i= 0;i<n- 1; i++) {
        for (int j= 0; j<n-i- 1;j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
                count_asc++;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int Arr_asc[n], Arr_desc[n];
    for (int i = 0; i < n; i++) {
        cin >> Arr_asc[i];
        Arr_desc[i] = Arr_asc[i];
    }
    Asc_order(Arr_asc, n);
    Desc_order(Arr_desc, n);

    cout << min(count_asc, count_desc);


    return 0;
}
