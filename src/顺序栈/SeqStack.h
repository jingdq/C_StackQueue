/*
 * SeqStack.h
 * 顺序栈
 *  Created on: 2017年10月3日
 *      Author: jingdongqi
 */

#ifndef 顺序栈_SEQSTACK_H_
#define 顺序栈_SEQSTACK_H_

#define StackSize 100 //根据实际使用情况定义栈的大小
typedef int DataType;
typedef struct{
	DataType data[StackSize];
	int top;//表示栈顶指针
}SeqStack;
SeqStack S;

/******顺序栈的基本操作***************/
/**
 * 置空栈
 */
void InitStack(SeqStack *s);

/**
 * 判空栈
 */
int StackEmpty(SeqStack *s);

/**
 * 判栈满
 */
int StackFull(SeqStack *s);

/**
 * 进栈
 */

int Push(SeqStack *s , DataType x);

/**
 * 退栈
 */
DataType Pop(SeqStack *s);

/**
 * 取栈顶元素,不改变栈顶指针
 */
DataType GetTop(SeqStack *s);







#endif /* 顺序栈_SEQSTACK_H_ */
