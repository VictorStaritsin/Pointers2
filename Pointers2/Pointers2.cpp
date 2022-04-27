/*
Задание 1. Даны два массива: А[M] и B[N] (M и N вводятся
с клавиатуры). Необходимо создать третий массив
минимально возможного размера, в котором нужно собрать
элементы массива A, которые не включаются в массив B,
без повторений.
*/

#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;



int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    int size1 = 10;
    int size2 = 10;
    cout << " Введите размер первого массива " << endl;
    cin >> size1;

    cout << " Введите размер второго массива " << endl;
    cin >> size2;

    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    for (int i = 0; i < size1; i++)
    {
        arr1[i] = rand() % 10;
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size2; i++)
    {
        arr2[i] = rand() % 10;
        cout << arr2[i] << " ";
    }
    cout << endl;
    // первый этап.Здесь мы просто СЧИТАЕМ, сколько элементов нужно поместить в третий массив
    int tmp = 0;
    // сколько элементов из первого массива?
    for (int i = 0; i < size1; i++)
    {
        bool inBoth = false;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j]) {
                inBoth = true;
                break;
            }
        }
        if (!inBoth)
            tmp++;
    }
    // сколько элеметов из второго массива?
    for (int i = 0; i < size2; i++)
    {
        bool inBoth = false;
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j]) {
                inBoth = true;
                break;
            }
        }
        if (!inBoth)
            tmp++;
    }
    int size3 = tmp;
    int* arr3 = new int[size3];
    tmp = 0;
    // второй этап. Те же самые циклы, но уже не считаем, а записываем  элементы в третий массив
    // помещаем в третий массив элементы из первого массива
    for (int i = 0; i < size1; i++)
    {
        bool inBoth = false;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j]) {
                inBoth = true;
                break;
            }
        }
        if (!inBoth)
            arr3[tmp++] = arr1[i];
    }
    // помещаем в третий массив элеметы из второго массива
    for (int i = 0; i < size2; i++)
    {
        bool inBoth = false;
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j]) {
                inBoth = true;
                break;
            }
        }
        if (!inBoth)
            arr3[tmp++] = arr2[i];
    }

    // выводим
    for (int i = 0; i < size3; i++)
        cout << arr3[i] << " ";

    cout << endl;

    system("pause");
    return 0;
}


///*
//Задание 2. Даны два массива: А[M] и B[N] (M и N вводятся
//с клавиатуры). Необходимо создать третий массив 
//минимально возможного размера, в котором нужно собрать
//элементы массивов A и B, которые не являются общими
//для них, без повторений.
//*/
//
//#include<iostream>
//#include<time.h>
//#include<stdlib.h>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    srand(time(NULL));
//
//    int size1 = 10;
//    int size2 = 10;
//    cout << " Введите размер первого массива " << endl;
//    cin >> size1;
//
//    cout << " Введите размер второго массива " << endl;
//    cin >> size2;
//
//    int* arr1 = new int[size1];
//    int* arr2 = new int[size2];
//    for (int i = 0; i < size1; i++)
//    {
//        arr1[i] = rand() % 10;
//        cout << arr1[i] << " ";
//    }
//    cout << endl;
//    for (int i = 0; i < size2; i++)
//    {
//        arr2[i] = rand() % 10;
//        cout << arr2[i] << " ";
//    }
//    cout << endl;
//
//    // первый этап.Здесь мы просто СЧИТАЕМ, сколько элементов нужно поместить в третий массив
//
//    int tmp = 0;
//    // сколько элементов из первого массива?
//    for (int i = 0; i < size1; i++)
//    {
//        bool inBoth = false;
//        for (int j = 0; j < size2; j++)
//        {
//            if (arr1[i] == arr2[j]) {
//                inBoth = true;
//                break;
//            }
//        }
//        if (!inBoth)
//            tmp++;
//    }
//
//    // сколько элеметов из второго массива?
//    for (int i = 0; i < size2; i++)
//    {
//        bool inBoth = false;
//        for (int j = 0; j < size1; j++)
//        {
//            if (arr2[i] == arr1[j]) {
//                inBoth = true;
//                break;
//            }
//        }
//        if (!inBoth)
//            tmp++;
//    }
//
//    int size3 = tmp;
//    int* arr3 = new int[size3];
//    tmp = 0;
//
//    // второй этап. Те же самые циклы, но уже не считаем, а записываем  элементы в третий массив
//
//    // помещаем в третий массив элементы из первого массива
//    for (int i = 0; i < size1; i++)
//    {
//        bool inBoth = false;
//        for (int j = 0; j < size2; j++)
//        {
//            if (arr1[i] == arr2[j]) {
//                inBoth = true;
//                break;
//            }
//        }
//        if (!inBoth)
//            arr3[tmp++] = arr1[i];
//    }
//
//    // помещаем в третий массив элеметы из второго массива
//    for (int i = 0; i < size2; i++)
//    {
//        bool inBoth = false;
//        for (int j = 0; j < size1; j++)
//        {
//            if (arr2[i] == arr1[j]) {
//                inBoth = true;
//                break;
//            }
//        }
//        if (!inBoth)
//            arr3[tmp++] = arr2[i];
//    }
//
//    // выводим
//    for (int i = 0; i < size3; i++)
//        cout << arr3[i] << " ";
//
//    cout << endl;
//
//    system("pause");
//    return 0;
//}