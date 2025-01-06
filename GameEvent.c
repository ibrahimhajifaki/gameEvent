#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct Queue {
    char *que[SIZE]; 
    int front, rear;
} q;

void init() {
    q.front = 0;
    q.rear = -1;
}


int enque(char *item) {
    if (q.rear == SIZE - 1) {  
        printf("Queue Overflow\n");
        return -1;
    }
    q.que[++q.rear] = item;
    return q.rear;
}


char *dequeue() {
    if (q.front > q.rear) {  
        printf("Queue Underflow\n");
        return NULL;
    }
    return q.que[q.front++];
}

int main() {
    init();  

    
    enque("Player one");
    enque("Player two");

    
    char *item = dequeue();
    if (item) printf("Dequeued: %s\n", item);

    item = dequeue();
    if (item) printf("Dequeued: %s\n", item);


    return 0;
}
