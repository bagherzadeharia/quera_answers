#include <stdio.h>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> binomialCoeff(int n, int k)
{
    std::vector<std::vector<int>> matrix(n + 1, std::vector<int>(n + 1, 0));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= std::min(i, k); j++)
        {
            if (j == 0 || j == i)
                matrix[i][j] = 1;
            else
                matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j];
        }
    }
    return matrix;
}

void printPascal(int n)
{
    auto matrix = binomialCoeff(n, n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= std::min(i, n); j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    std::cin >> n;
    printPascal(n);
    return 0;
}
