#include <cstdio>
#define MAX 10000000
using namespace std;

int p[MAX] = {0};
bool flag[MAX] = {false};

void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int partition(int* a, int n) {
    int i = -1;
    for (int j = 0; j < n; ++j) {
        if (a[j] < a[n-1]) {
            swap(a[++i], a[j]); 
        }
    }
    swap(a[++i], a[n-1]);
    return i;
}

int getMaxK(int *a, int n, int k) {
    int mid = partition(a, n);
    if (mid == n-k)
        return a[mid];
    else if (mid < n-k)
        return getMaxK(a+mid+1, n-mid-1, k);
    else 
        return getMaxK(a, mid, k-n+mid);
}

void quick_sort(int *a, int n) {
    int 
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int size = 0;
    while(n--) {
        int temp;
        scanf("%d", &temp);
        if (!flag[temp]) {
            p[size++] = temp;
            flag[temp] = true;
        }
    }
    quick_sort(a, size-1);
    if (k-1 >= 0 && k-1 < size) {
      printf("%d\n", a[k-1]);
    }
    return 0;
}