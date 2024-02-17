/*��� ����� ������ ����� ����� � ���� ����� � ���������. ���������� ����� � ������� ��� �����, ����� ������� ����� ������ ���������, � ������� �� �� �����. �������������, ��� ������ ���� ���� ����� � ������� ��� � ����� ���������.
������:
a = {2, 7, 11, 15}. ��������� = 9
2 + 7 = 9, ��� ��� ���� ������� ����� 2 � 7*/


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