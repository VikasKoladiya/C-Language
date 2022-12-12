#include <stdio.h>
#include <stdio.h>
int main(){
    int n,ld,fd,value,length=1,count2=0,ans=0,v=1,count=0,digit;
    printf("Enter value of n : ");
    scanf("%d",&n);
    value=n;
    ld=n%10;
    while(n>9){
        n/=10;
        length++;
    }
    fd=n;
    // printf("%d\n",fd);
    // printf("%d\n",ld);
    // printf("%d\n",length);
    while(count<=length){
        count++;
        v=1;
        digit=value%10;
        value/=10;
        if (count==1)
        {   
            for (int i = 1; i < length; i++)
            {
                v*=10;
            }
            ans+=ld*v;
        }
        else if(count==length)
        {
            if (fd==0)
            {
                ans*=10;
            }
            else
            ans+=fd;
        }
        else
        {
            for (int i = 1; i < count; i++)
            {
                v*=10;
            }
            ans+=digit*v;
        }
    }
    printf("%d",ans);
}
// binary
/*int main(){
    int n,m,bin=0,i=1,k,p,o,length=0,s=1,ext=0,ans=0;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("Enter value of k (total extract) : ");
    scanf("%d",&k);
    printf("Enter value of p (start point) : ");
    scanf("%d",&p);

    m=n;
    while(m>0){
        bin+=(m%2)*i;
        m/=2;
        i*=10;
        length++;
    }
    o=bin;
    printf("binary : %d",bin);
    for (int i = 1; i < p; i++)
    {
        s*=10;
    }
    o/=s;
    int count=0;
    i=1;
    while (count<k)
    {
        count++;
        ext+=(o%10)*i;
        o/=10;
        i*=10;
    }
    // printf("\nExt : %d",ext);
    i=1;
    int digit;
    while (ext>0)
    {
        digit=ext%10;
        ext/=10;
        ans+=digit*i;
        i*=2;
    }
    printf("\nans : %d",ans);
    
}*/