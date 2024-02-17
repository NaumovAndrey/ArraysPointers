/*Вам даётся массив целых чисел и одно число — результат. Необходимо найти в массиве два числа, сумма которых будет давать результат, и вывести их на экран. Гарантируется, что только одна пара чисел в массиве даёт в сумме результат.
Пример:
a = {2, 7, 11, 15}. Результат = 9
2 + 7 = 9, так что надо вывести числа 2 и 7*/


#include "iostream"
#include <vector>
#include <unordered_map>

void findNumbers(std::vector<int>& nums, int target)
{
    std::unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (map.find(complement) != map.end())
        {
            std::cout << nums[i] << " " << complement << std::endl;
            return;
        }
        map[nums[i]] = i;
    }
}

void task2() {
    std::vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    findNumbers(nums, target);
}