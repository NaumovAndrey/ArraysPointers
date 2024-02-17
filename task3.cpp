/*С клавиатуры вводятся числа. Когда пользователь вводит «-1», необходимо выводить на экран пятое по возрастанию число среди введённых. Когда пользователь вводит «-2», программа завершает работу.*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

void task3()
{
    std::vector<int> numbers;
    int input;

    while (true)
    {
        std::cin >> input;

        if (input == -1)
        {
            std::sort(numbers.begin(), numbers.end());
            std::unordered_set<int> unique_numbers(numbers.begin(), numbers.end());

            if (unique_numbers.size() < 5)
            {
                std::cout << "Недостаточно уникальных чисел для вывода требуемого числа." << std::endl;
                break;
            }

            int count = 0;
            int prev = numbers[0];
            for (int num : numbers)
            {
                if (num != prev)
                {
                    count++;
                }
                if (count == 4)
                {
                    std::cout << num << std::endl;
                    break;
                }
                prev = num;
            }
            break;
        } else if (input == -2)
        {
            break;
        } else
        {
            numbers.push_back(input);
        }
    }

}