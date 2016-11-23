#include <new>

//
// Created by administrator on 16/11/23.
//
template <class T>
bool make2dArray(T ** &x,int numberOfRows, int numberOfColumns)
{
    //创建一个二维数组
    try {
        //创建行指针
        x = new T * [numberOfRows];
        //为每一行分配空间
        for (int i = 0; i < numberOfRows ;i++)
            x[i] = new int[numberOfColumns];

        return true;
    }
    catch ( std::bad_alloc ) { return false;}
}
