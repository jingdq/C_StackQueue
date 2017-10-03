/*
 * LinkQueue.h
 *
 *  Created on: 2017年10月3日
 *      Author: jingdongqi
 */

#ifndef 链队列_LINKQUEUE_H_
#define 链队列_LINKQUEUE_H_
typedef int DataType;
typedef struct qnode {
	DataType data;
	struct qnode *next;
} QueueNode;
typedef struct {
	QueueNode *front;
	QueueNode *rear;
} LinkQueue;


/**
 * 构造空队列
 */
void InitQueue(LinkQueue *Q);

/**
 * 判队空
 */
int QueueEmpty(LinkQueue *Q);

/**
 * 入队列
 */
void EnQueue(LinkQueue *Q);

/**
 * 取出队头元素
 */
DataType GetFront(LinkQueue *Q);

/**
 * 出队列
 */
DataType DeQueue(LinkQueue *Q);



#endif /* 链队列_LINKQUEUE_H_ */
