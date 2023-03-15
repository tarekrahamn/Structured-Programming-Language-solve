#include<stdio.h>
struct triangle {
int id;
float h;
float b;
}m[10];
float maximum(int f[], int n){
int area;
int max =f[0];
int i;
    for(i=0;i<3;i++)
    {
        if(max<f[i])
        {
            max=f[i];
            
        }
    }

return max;
}
int main(){
    int arr[100];
    int i,j,n=3;
    for(i=0;i<n;i++){
        scanf("%d",&m[i].id);
         scanf("%d",&m[i].h);
          scanf("%d",&m[i].b);

           
        arr[i]= (m[i].b*m[i].h)/2;
     
    }
    
    float x= maximum(arr,3);
    printf("%f",x);
    return 0;
}