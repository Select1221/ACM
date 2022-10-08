#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    char a[100][100];

    scanf("%d %d", &n, &m);
    getchar();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%c", &a[i][j]);
        }
        getchar();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int count = 0;

            if (a[i][j] == '?')
            {
                if (i == 0 && j == 0) //左上
                {
                    if (a[i][j + 1] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j + 1] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j] == '*')
                    {
                        count++;
                    }
                }
                else if (i == n - 1 && j == 0) //左下
                {
                    if (a[i - 1][j] == '*')
                    {
                        count++;
                    }
                    if (a[i - 1][j + 1] == '*')
                    {
                        count++;
                    }
                    if (a[i][j + 1] == '*')
                    {
                        count++;
                    }
                }
                else if (i == 0 && j == m - 1) //右上
                {
                    if (a[i][j - 1] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j - 1] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j] == '*')
                    {
                        count++;
                    }
                }
                else if (i == n - 1 && j == m - 1) //右下
                {
                    if (a[i - 1][j] == '*')
                    {
                        count++;
                    }
                    if (a[i - 1][j - 1] == '*')
                    {
                        count++;
                    }
                    if (a[i][j - 1] == '*')
                    {
                        count++;
                    }
                }
                else if (i == 0 && j != 0 && j != m - 1) //第一行中间
                {
                    if (a[i][j - 1] == '*')
                    {
                        count++;
                    }
                    if (a[i][j + 1] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j - 1] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j + 1] == '*')
                    {
                        count++;
                    }
                }
                else if (i == n - 1 && j != 0 && j != m - 1) //最后一行中间
                {
                    if (a[i][j - 1] == '*')
                    {
                        count++;
                    }
                    if (a[i][j + 1] == '*')
                    {
                        count++;
                    }
                    if (a[i - 1][j - 1] == '*')
                    {
                        count++;
                    }
                    if (a[i - 1][j] == '*')
                    {
                        count++;
                    }
                    if (a[i - 1][j + 1] == '*')
                    {
                        count++;
                    }
                }
                else if (i != 0 && i != n - 1 && j == 0) //第一列中间
                {
                    if (a[i - 1][j] == '*')
                    {
                        count++;
                    }
                    if (a[i - 1][j + 1] == '*')
                    {
                        count++;
                    }
                    if (a[i][j + 1] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j + 1] == '*')
                    {
                        count++;
                    }
                }
                else if (i != 0 && i != n - 1 && j == m - 1) //最后一列中间
                {
                    if (a[i - 1][j] == '*')
                    {
                        count++;
                    }
                    if (a[i - 1][j - 1] == '*')
                    {
                        count++;
                    }
                    if (a[i][j - 1] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j - 1] == '*')
                    {
                        count++;
                    }
                }
                else
                {
                    if (a[i][j + 1] == '*')
                    {
                        count++;
                    }
                    if (a[i][j - 1] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j + 1] == '*')
                    {
                        count++;
                    }
                    if (a[i + 1][j - 1] == '*')
                    {
                        count++;
                    }
                    if (a[i - 1][j] == '*')
                    {
                        count++;
                    }
                    if (a[i - 1][j + 1] == '*')
                    {
                        count++;
                    }
                    if (a[i - 1][j - 1] == '*')
                    {
                        count++;
                    }
                }

                a[i][j] = count + '0';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}