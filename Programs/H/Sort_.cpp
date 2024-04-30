#include <iostream>
#include <vector>
#include "Sort_.h"

using namespace std;

// ��������
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // ��ǰ�������Ԫ��
        int j = i - 1; // �����򲿷ֵ����һ��Ԫ�ص��±�

        // ��������Ԫ���������򲿷�����Ƚϣ��ҵ����ʵ�λ�ò���
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // ����Ԫ�ص�����λ��
    }
}

// ð������
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // ����Ԫ��
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//ֱ��ѡ������
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;//��СԪ���±�
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

    // ��������
    insertionSort(arr);
    cout << "�������������飺";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // ð������
    vector<int> arr2 = { 12, 11, 13, 5, 6 };
    bubbleSort(arr2);
    cout << "ð�����������飺";
    for (int num : arr2) {
        cout << num << " ";
    }
    cout << endl;

    // ֱ��ѡ������
    vector<int> arr3 = { 12, 11, 13, 5, 6 , 1, 56, 32, 6, 2, 79, 4, 66 };
    selectionSort(arr3);
    cout << "ֱ��ѡ�����������飺";
    for (int num : arr3) {
        cout << num << " ";
    }
    cout << endl;
}
