#include <stdio.h>

int max(int a,int b,int c){
    if(a<b)
        a = b;
    if(a<c)
        a = c;
    return a;
}

static int sum(const int a[],int left,int right){
    int maxleftsum,maxrightsum;
    int maxleftbordersum,maxrightbordersum;
    int leftbordersum,rightbordersum;
    int center,i;

    if(left==right)
        if(a[left]>0)
            return a[left];
        else
            return 0;
    center = (left+right)/2;
    maxleftsum = sum( a,left,center);
    maxrightsum = sum(a,center+1,right);

    maxleftbordersum =0;
    leftbordersum =0;
    for(i=center;i>=left;i--){
        leftbordersum += a[i];
        if(leftbordersum>maxleftbordersum)
            maxleftbordersum = leftbordersum;
    }

    maxrightbordersum = 0;
    rightbordersum =0;
    for(i=center+1;i<=right;i++){
        rightbordersum += a[i];
        if(rightbordersum>maxrightbordersum)
            maxrightbordersum = rightbordersum;
    }

    return max(maxleftsum,maxrightsum,maxleftbordersum+maxrightbordersum);
}


int re(const int a[],int N){
    return sum(a,0,N-1);
}

int main(){
    int a[]={4,-3,5,-2,-1,2,6,-2};
    int result;
    result = re(a,8);
    printf("%d\n",result);
   return 0 ;
}
