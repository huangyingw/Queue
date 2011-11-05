// 队列.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include "queue.h"
int main()
{
	Queue<int> Q;
	InitQueue(&Q);
	for(int i=1;i<5;i++)
		EnQueue(&Q,i);
	return 0;
}
