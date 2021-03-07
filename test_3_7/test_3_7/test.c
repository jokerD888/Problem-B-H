#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//问题 B : 高程05 - 03：编写函数，求两个整数的最小值
//int min(int x, int y)
//{
//    return x < y ? x : y;
//
//}
//
//int main()
//
//{
//
//    int m, n, ret;
//
//    scanf("%d%d", &m, &n);
//
//    ret = min(m, n);
//
//    printf("%d", ret);
//
//    return 0;
//
//}

//问题 C : 高程05 - 04：编写函数，返回两个整数的最大公约数
//int Factor(int m, int n)
//{
//    /*int i = 0;
//    int ret = m < n ? m : n;
//    for (i = ret; i > 0; i--)
//    {
//        if (m % i == 0 && n % i == 0)
//            return i;
//    }*/
//    int ret=0;
//    while (n > 0)
//    {
//        ret = m % n;
//        m = n;
//        n = ret;
//    }
//    return m;
//}
//
//int main()
//{
//    int x, y, f;
//    scanf("%d%d", &x, &y);
//    f = Factor(x, y);
//    printf("%d", f);
//    return 0;
//}

//问题 D : 高程05 - 05：编写函数，返回两个整数的最小公倍数

//int LCM(int a, int b)
//{
//    int ret = 0;
//    int s = a * b;
//    while (b > 0)
//    {
//        ret = a % b;
//        a = b;
//        b = ret;
//    }
//    return s/a;
//}
//int main()
//{
//    int x, y;
//    scanf("%d%d", &x, &y);
//    int ret;
//    ret = LCM(x, y);
//    printf("%d", ret);
//    return 0;
//
//}


//问题 E : 高程06 - 01：编写函数，求一维数组的奇数和
#include <stdio.h>

int sum_odd(int a[], int n)
{
    int i = 0;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2)
        {
            sum += a[i];
        }
    }
    return sum;
}

//int main()
//{
//    int num[7];
//    int k, ret;
//    for (k = 0; k < 7; k++)
//    {
//        scanf("%d", &num[k]);
//    }
//    ret = sum_odd(num, 7);
//    printf("%d", ret);
//    return 0;
//}

//问题 F : 高程06 - 02：编写函数，将一维整型数组中的元素倒置

//void turn(int a[], int n)
//
//{
//    int tmp;
//    int left = 0;
//    int right = n - 1;
//    while(left < right)
//    {
//        tmp = a[left];
//        a[left] = a[right];
//        a[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//
//    int n;
//    int num[1000];
//    int k;
//    scanf("%d", &n);
//    for (k = 0; k < n; k++)
//    {
//        scanf("%d", &num[k]);
//    }
//    turn(num, n);
//    for (k = 0; k < n; k++)
//    {
//        printf("%d ", num[k]);
//    }
//    return 0;

//}

//问题 G : 高程06 - 03：编写函数，在数组中查找某个数是否存在
//int find(int a[], int n, int q)
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (a[i] == q)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    int j, num[5];
//
//    int x, ret;
//    for (j = 0; j < 5; j++)
//    {
//        scanf("%d", &num[j]);
//    }
//    scanf("%d", &x);
//    ret = find(num, 5, x);
//    printf("%d", ret);
//    return 0;
//}

//问题 H : 高程06 - 04：编写函数，对数组下标 m 和 n 之间的数按照升序排序
void list(int a[], int l, int m, int n)

{
    /*int tmp=0;
    int i = 0;
    for (i = m; i <= n; i++)
    {
        int j = 0;
        int k = 0;
        for (j = m; j <n-k; j++)
        {
            if (a[i] < a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }   
        }
        k++;
    }*/
    int tmp = 0;
    int i = 0;
    for (i = m; i <= n; i++)
    {
        int j = 0;
        int k = 0;
        for (j = m; j < n - k; j++)
        {
            if (a[j] > a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
        k++;
    }
}

int main()
{
    int k, num[10];
    int x, y;

    for (k = 0; k < 10; k++)
    {
        scanf("%d", &num[k]);
    }
    scanf("%d%d", &x, &y);

    list(num, 10, x, y);

    for (k = 0; k < 10; k++)
    {
        printf("%d ", num[k]);
    }
    return 0;

}



