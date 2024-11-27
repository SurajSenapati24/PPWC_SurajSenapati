#include <stdio.h>
void copyDistinct(int in[],int insize,int out[],int *outsize){
    *outsize=0;
    int isdistinct=0;
    for(int i=0;i<insize;i++){
        isdistinct=1;
        for(int j=0;j<*outsize;j++){
            if(in[i]==out[j]){
                isdistinct=0;
                break;
            }
        }
        if(isdistinct){
            out[*outsize]=in[i];
            (*outsize)++;
        }
    }
}
int main(){
    int in[]={6,7,7,3,1,5,5};
    int in_size=sizeof(in)/sizeof(in[0]);
    int out[in_size];
    int outsize;
    copyDistinct(in,in_size,out,&outsize);
    for(int i=0;i<outsize;i++){
        printf("%d ",out[i]);
    }
    return 0;
}
