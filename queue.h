#pragma once 

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "stdbool.h"
#include "string.h"

#define QUEUE_LEN 20
typedef struct {
    int data[QUEUE_LEN];
    uint8_t front;
    uint8_t rear;
}queue;

void Queue_init(queue* p);  //��ʼ��ѭ������
int Queue_Isfull(queue* p); //�ж϶����Ƿ�����
int Queue_Isempty(queue* p);  //�ж϶����Ƿ����
bool Queue_Enqueue(queue *p, int val);  //���
bool Queue_Dequeue(queue* p, int* val);   //����