#include <iostream>
#include <vector>
#include "Sort_.h"

using namespace std;

// 插入排序
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // 当前待插入的元素
        int j = i - 1; // 已排序部分的最后一个元素的下标

        // 将待插入元素与已排序部分逐个比较，找到合适的位置插入
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // 插入元素到合适位置
    }
}

// 冒泡排序
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//直接选择排序
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;//最小元素下标
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void _Sort_Test() {
    vector<int> arr = { 12, 11, 13, 5, 6 };

    // 插入排序
    insertionSort(arr);
    cout << "插入排序后的数组：";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // 冒泡排序
    vector<int> arr2 = { 12, 11, 13, 5, 6 };
    bubbleSort(arr2);
    cout << "冒泡排序后的数组：";
    for (int num : arr2) {
        cout << num << " ";
    }
    cout << endl;

    // 直接选择排序
    vector<int> arr3 = { 12, 11, 13, 5, 6 , 1, 56, 32, 6, 2, 79, 4, 66 };
    selectionSort(arr3);
    cout << "直接选择排序后的数组：";
    for (int num : arr3) {
        cout << num << " ";
    }
    cout << endl;
}
