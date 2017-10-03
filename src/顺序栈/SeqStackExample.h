/*
 * SeqStackExample.h
 *
 *  Created on: 2017年10月3日
 *      Author: jingdongqi
 */
#include "顺序栈/SeqStack.h"
#ifndef SEQSTACKEXAMPLE_H_
#define SEQSTACKEXAMPLE_H_

/*******栈应用举例********************************/
/**
 * 圆括号匹配检验
 */
int Expr();

/**
 * 字符串回文判断  ababbaba
 */
int symmetry(char str[]);

/**
 * 数进制转换
 * N=（N/d）*d+N%d;
 *
 * 将一个非负的十进制N转换为任意的d进制数
 */
void conversion(int N, int d);

/**
 * 阶乘的递归函数
 */
long int fact(int n);




#endif /* SEQSTACKEXAMPLE_H_ */
