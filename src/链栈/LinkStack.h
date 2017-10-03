/*
 * LinkStack.h
 *
 *  Created on: 2017年10月3日
 *      Author: jingdongqi
 */

#ifndef 链栈_LINKSTACK_H_
#define 链栈_LINKSTACK_H_
typedef int DataType;
typedef struct stacknode{
	DataType data;
	struct stacknode *next;
}StackNode;
typedef StackNode *LinkStack;
LinkStack top;

/**
 * 判定栈空
 */

int StackEmpty(LinkStack top);

/**
 * 进栈
 */

LinkStack Push(LinkStack top,DataType x);

/**
 * 退栈
 */
DataType  Pop(LinkStack top);
/**
 * 取栈顶元素
 */
DataType GetTop(LinkStack top);

#endif /* 链栈_LINKSTACK_H_ */
