/*
 * SeqQueue.h
 *
 *  Created on: 2017年10月3日
 *      Author: jingdongqi
 */

#include "SeqQueue.h"
#include <stdio.h>

/*****************队列的基本操作**************************************************/
/**
 * 置空对列
 */
void InitQueue(CirQueue *Q);

/**
 * 判断队空
 */

int QueueEmpty(CirQueue *Q);

/**
 * 判队满
 */
int QueueFull(CirQueue *Q);

/**
 * 入队列
 */
void EnQueue(CirQueue *Q , DataType x);

/**
 * 取队头元素
 */
DataType GetFront(CirQueue *Q);

/**
 * 出队列
 */

DataType DeQueue(CirQueue *Q);

#endif /* 顺序队列_SEQQUEUE_H_ */
