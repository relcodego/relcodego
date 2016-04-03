#include <iostream>
#define elemtype int
#define position Node *
using namespace std;

struct Node
{
    elemtype element;
    position next;
};

int isEmpty(struct Node *L){
    return L->next==NULL;
}


int main()
{
    struct Node *L= new struct Node;
    int i;
    i=isEmpty(L);
    cout << i<<endl;
    L->element = 2;
    struct Node *LL = new struct Node;
    LL->element = 3;
    LL->next=L->next;
    L->next=LL;
    i=isEmpty(L);
    cout << i<<endl;

    delete L;
    

    return 0;
}
