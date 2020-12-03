/*
 * @Author: your name
 * @Date: 2020-12-03 11:24:57
 * @LastEditTime: 2020-12-03 11:25:05
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \code\cpp\base\basestrcut\set_jihe.cpp
 */
#include <iostream>
#include<set>
using namespace std;


int main()
{
    set<int> s;                //创建一个int类型的set

    s.insert(10);                //插入数据
    s.insert(30);
    s.insert(20);
    s.insert(40);

    //遍历数据，用迭代器遍历数据
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << endl;
    }
    //这里用到了set中的元素已经从小到大排好序的性质

    return 0;
}