
int a ;
int &b = a;

/////////////////////////////////////
void swap(int *p1,int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
swap(&i,&j);

////////////////////////////////////
void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
swap(i,j);

