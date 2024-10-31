#include <iostream>
#include <vector>


int GetDigit(int number, int position){
      for (int i = 1; i <= position; ++i) {
        number /= 10;
    }
    return number % 10;
}


void RadixSort(std::vector<int> &array, int amount) {
    std::vector<std::vector<int> > buffer(10); // Один буфер для упрощения

    // Основной цикл по разрядам
    for (int j = 0; j < amount; ++j) {
        // Сброс буфера
        for (int k = 0; k < 10; ++k) {
            if(j==0) break;
            buffer[k].clear();
        }

        // Разделение по разрядам
        for (const int& num : array) {
            int digit = GetDigit(num, j);
            buffer[digit].push_back(num);
        }

        // Сборка отсортированных значений обратно в array
        array.clear(); // Очистка массива для накопления отсортированных значений
        for (const auto& innerVec : buffer) {
            for (const auto& num : innerVec) {
                array.push_back(num);
            }
        }
    }
}








int main() {
    int n = 0;
    int amountOF = 0;
    std::cin >> n;
    int max = 0;
    std::vector<int> array (n);

    for (int i = 0; i < n; ++i) {
        std::cin>>array[i];
        if (array[i]> max) max = array[i];
    }

    for(; max>0; ++amountOF) {
        max/=10;
    }

    RadixSort(array,amountOF);
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout<<amountOF;
}