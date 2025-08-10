#include "queue.h"

int main()
{
    int value ;
    queue p;
    Queue_init(&p);
    for (int i = 0; i < QUEUE_LEN; i++)
    {
        Queue_Enqueue(&p, i);
        Queue_Dequeue(&p, &value);
        printf("%d   ", value);
    }
    return 0;
}