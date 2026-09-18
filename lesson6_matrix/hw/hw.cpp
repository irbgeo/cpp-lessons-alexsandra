// 1. Найти все элементы больше N в матрице
    #include <iostream>

int main()
{
    int N_limit = 5;


    int matrix[3][3] = {
         {1, 6, 3},
         {8, 2, 9},
         {4, 5, 7}
    };


    std::cout << "Элементы больше " << N_limit << ":\n";


    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > N_limit) {
                std::cout << matrix[i][j] << " ";
            }
        }
    }

    std::cout << "\n";

    return 0;
}

// 2. Вычислить сумму всех элементов
 #include <iostream>

int main()
{
    int N_limit = 5;


    int matrix[3][3] = {
         {1, 6, 3},
         {8, 2, 9},
         {4, 5, 7}
    };


    int sum = 0;


    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > N_limit) {
                sum += matrix[i][j];
            }
        }
    }

    std::cout << "Сумма всех элементов матрицы: " << sum << "\n";

    return 0;
}

// 3. Посчитать нули в матрице
#include <iostream>

int main()
{
    int N_limit = 5;


    int matrix[3][3] = {
         {1, 0, 3},
         {8, 2, 9},
         {0, 5, 7}
    };


    int zero = 0;


    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > N_limit) {
                zero++;
            }
        }
    }

    std::cout << "Количество нулей в  матрицы: " << zero << "\n";

    return 0;
}


// 4. Циклический сдвиг всех элементов
#include <iostream>

int main()
{
    int N_limit = 5;


    int matrix[3][3] = {
         {1, 0, 3},
         {8, 2, 6},
         {9, 5, 7}
    };


    int last_element = matrix[2][2];


    for (int i = 2; i >= 2; i--) {

        for (int j = 2; j >= 0; j--) {
            if (j > 0) {

                matrix[i][j] = matrix[i][j - 1];
            }
            else if (i > 0) {

                matrix[i][j] = matrix[i - 1][2];
            }
        }
    }


    matrix[0][0] = last_element;


    std::cout << "Матрица после циклического сдвига:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
// 5. Найти столбец с минимальной суммой
#include <iostream>

int main()
{

    int matrix[3][3] = {
        {1, 0, 3},
        {8, 2, 6},
        {9, 5, 7}
    };


    int min_sum = matrix[0][0] + matrix[1][0] + matrix[2][0];
    int min_column = 0;


    for (int j = 0; j < 3; j++) {
        int current_sum = 0;

        for (int i = 0; i < 3; i++) {
            current_sum += matrix[i][j];
        }


        if (current_sum < min_sum) {
            min_sum = current_sum;
            min_column = j;
        }
    }


    std::cout << "Столбец с минимальной суммой: " << min_column + 1 << "\n";

    return 0;
}


// 2. Найти максимум в матрице
 #include <iostream>

int main()
{

    int matrix[3][3] = {
        {1, 0, 3},
        {8, 2, 6},
        {9, 5, 7}
    };


    int max = matrix[0][0];


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    
    std::cout << "Максимальный элемент в матрице: " << max << "\n";

    return 0;
}

// 3. Найти минимум в матрице
#include <iostream>

int main()
{

    int matrix[3][3] = {
        {1, 0, 3},
        {8, 2, 6},
        {9, 5, 7}
    };


    int min = matrix[0][0];


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    
    std::cout << "Максимальный элемент в матрице: " << min << "\n";

    return 0;
}