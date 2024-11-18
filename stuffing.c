#include<stdio.h>
#include<string.h>

void bitstuffing(char input[],char stuffed[]){
    int count=0;
    int i,j;
    for(int i=0; input[i] !='\0';i++){
        stuffed[j++]=input[i];
        if(input[i]=='1'){
            count++;
            if(count==5){
                stuffed[j++]='0';
                count=0;
            }
        }else{
            count=0;
        }
    }
    stuffed[i]='\0';
}
int main(){
    char input[100],stuffed[150];
    printf("Enter the binary string:");
    scanf("%s",input);
    bitstuffing(input,stuffed);
    printf("stuffed data: %s \n",stuffed);
    return 0;
}