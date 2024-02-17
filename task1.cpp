#include "iostream"


std::pair<int, int> findMaxSubarray(const int* arr, int length) {
    int maxSum = arr[0];
    int currentSum = arr[0];
    int start = 0;
    int end = 0;
    int tempStart = 0;
    
    
    for (int i = 0; i < length; ++i) {
        if (currentSum + arr[i] < arr[i]) {
            currentSum = arr[i];
            tempStart = i;
        }
        else {
            currentSum += arr[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }
    }

    return std::make_pair(start, end);
}

void task1() {
    setlocale(LC_ALL, "RUS");

    int arr[] = { -2,1,-3,4,-1,2,1,-5,4 };
    int length = sizeof(arr) / sizeof(arr[0]);
    std::pair<int, int> result = findMaxSubarray(arr, length);

    std::cout << "Индексы: " << result.first << " и " << result.second << std::endl;
}