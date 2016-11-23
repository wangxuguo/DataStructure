#include <cwchar>

//
// Created by administrator on 16/11/23.
//
template <class T>
void delete2dArray(T ** &x, int numberOfRows)
{
    //删除二维数据x

    //删除行数组空间
    for (int i = 0; i <numberOfRows; i++)
        delete [] x[i];
    //删除行指针
    delete [] x;
    x = NULL;
}
