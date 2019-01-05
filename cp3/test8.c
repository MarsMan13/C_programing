#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
#include&lt;string.h&gt;

typedef struct node{
        char command[10];
            struct node* next;
}QUEUE_NODE;

typedef struct{
        QUEUE_NODE* front;
            int count;
                QUEUE_NODE* rear;
}QUEUE;

int CheckCommand(char* command);
void EnqueueCommand(QUEUE* pQueue, char* dataIn);
int DequeuePrint(QUEUE* pQueue, char* dataOut);

int main(){
        char command[10];
            QUEUE* pQueue;
                pQueue = (QUEUE*)malloc(sizeof(QUEUE));

                    pQueue-&gt;front = NULL;
                        pQueue-&gt;count = 0;
                            pQueue-&gt;rear = NULL;

                                int num=1;
                                    //char s[10];
                                    char pp[10];
                                        int cnt;
                                            int k;
                                                    
                                                while(1){
                                                            printf("&gt;&gt; ");
                                                                    scanf("%s", command);
                                                                            if(CheckCommand(command) == 1){
                                                                                            if(strcmp(command, "quit")==0 || strcmp(command, "q")==0)
                                                                                                                break;
                                                                                                        else if(strcmp(command, "history")==0 || strcmp(command, "h")==0)
                                                                                                                        {
                                                                                                                                            while(num!=0){
                                                                                                                                                                    num = DequeuePrint(pQueue, pp);
                                                                                                                                                                                        printf("%s\n", pp);
                                                                                                                                                                                                          //  for(k=0;k&lt;10;k++)
                                                                                                                                                                                                          //      pp[k] = '\0';
                                                                                                                                                                                                            printf("%d\n", pQueue-&gt;count);
                                                                                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                    else
                                                                                                                                        EnqueueCommand(pQueue, command);
                                                                                                                        //*dataOut = del-&gt;command[10];
                                                                                                                            }
                                                                                    else
                                                                                                    printf("[Invalid]\n");
                                                                                        }
                                                    return 0;

}

int CheckCommand(char* command){
        if(strcmp(command, "help")==0 || strcmp(command, "dir")==0 || strcmp(command, "mkdir")==0 || strcmp(command, "cd")==0 || strcmp(command, "history")==0 || strcmp(command, "h")==0 || strcmp(command, "quit")==0 || strcmp(command, "q")==0)
                    return 1;
            else
                        return 0;
}
void EnqueueCommand(QUEUE* pQueue, char* dataIn){

        QUEUE_NODE* pNew;
            pNew = (QUEUE_NODE*)malloc(sizeof(QUEUE_NODE));

                printf("[Valid] %s\n", dataIn);

                    pNew-&gt;command[10] = *dataIn;
                        pNew-&gt;next = NULL;

                            if(pQueue-&gt;count == 0)
                                        pQueue-&gt;front = pNew;
                                else
                                            pQueue-&gt;rear-&gt;next = pNew;

                                    (pQueue-&gt;count)++;

                                        pQueue-&gt;rear = pNew;

}
int DequeuePrint(QUEUE* pQueue, char* dataOut){

        QUEUE_NODE *del;

            del = pQueue-&gt;front;
                strcpy(dataOut, del-&gt;command);
                    pQueue-&gt;front = del-&gt;next;
                        free(del);

                            (pQueue-&gt;count)--;

                                if(pQueue-&gt;count==0)
                                            return 0;
                                    else
                                                return 1;
}

