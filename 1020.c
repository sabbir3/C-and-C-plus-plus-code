#include <stdio.h>
#include <string.h>
int main()
{
    int t, i, n;
    char name[6];
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        scanf("%s", name);
        if(strcmp(name, "Alice")==0)
        {
            if(n%3==1)
                printf("Case %d: Bob\n", i);
            else
                printf("Case %d: Alice\n", i);
        }
        else
         {
            if(n%3==0)
                printf("Case %d: Alice\n", i);
            else
                printf("Case %d: Bob\n", i);
        }
    }
    return 0;
}
