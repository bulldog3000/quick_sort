#include <iostream>

void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (left < j) {
        quickSort(arr, left, j);
    }
    if (i < right) {
        quickSort(arr, i, right);
    }
}

int main() {
    int n;

    std::cout << "Введите количество чисел: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Введите числа:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    std::cout << "Отсортированный массив:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

