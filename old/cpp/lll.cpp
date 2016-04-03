
#include <bits/stdc++.h>

using namespace std;

int get_all(char ***ppptr_data,int &count){

    int i=0;
    int size=0;
    size = 1024;
    *ppptr_data=(char **)malloc(size * sizeof(char *));
    count = 128;
    for(i=0;i<size;i++)
        (*ppptr_data[i]=(char *)malloc((count) * sizeof(char) +1));
    return size;
}

int main()
{
    char **pptr_test=NULL;
    int count =0;
    int size =get_all(&pptr_test,count);
    cout << size << endl;
    return 0;
}

