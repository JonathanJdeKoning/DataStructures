#include <stdio.h>
#include <stdlib.h>

int top = -1;
struct item {
    int val;
    int prio;
};
 
int peek(struct item* pq)
{
    int best = -1;
    int idx = -1;
 
    for (int i = 0; i <= top; i++) {
        if (best == pq[i].prio && idx > -1 && pq[idx].val < pq[i].val) {
            best = pq[i].prio;
            idx = i;
        }
        else if (best < pq[i].prio) {
            best = pq[i].prio;
            idx = i;
        }
    }
 
    return idx;
}
 
void dequeue(struct item* pq)
{
    int idx = peek(pq);
    for (int i = idx; i < top; i++) {
        pq[i] = pq[i + 1];
    }
    top--;
}


int main() {
    int size;
    int i;
    printf("Assignment 3, Jonathan de Koning - bzw879 (Summer 2024)\n");
    printf("--- P-Queue: 5 = Highest, 0 = Lowest ---\n");
    
    printf("Enter P-Queue Length = ");
    scanf("%d", &size);

    struct item pq[size];

    for (i=0; i<size; i++) {

        printf("Enter element %d: ",i+1);
        scanf("%d",&pq[i].val);
        printf("Enter priority of element %d: ",i+1);
        scanf("%d",&pq[i].prio);
    }

    top = size-1;

    printf("----Priority Queue Full------\n");
    printf("Priority Queue Before Dequeue :\n");

    for(i=0; i<size; i++) {
        printf("(Element: %d, Priority: %d)\n", pq[i].val, pq[i].prio);
    }


    while(1) {
        int operation;
        printf("--------------------------------------\n");
        printf("Dequeue (1 for yes, 0 for exit): ");
        scanf("%d", &operation);

        if (operation==0)
            break;

        dequeue(pq);
        size--;
        if (size==0){
            printf("---Priority Queue Empty------\n");
            break;
        }
        for(i=0; i<size; i++) 
            printf("(Element: %d, Priority: %d)\n", pq[i].val, pq[i].prio);
    }
}
