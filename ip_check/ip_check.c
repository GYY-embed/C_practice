//题目描述，输入一串IP地址，判断地址是否正确（四个段都是0-255之间）
//允许16进制或者10进制输入
#include <stdio.h>
#include <string.h>

int main()
{
    char str[25];
    int i,ten_or_hex = 0;
    int a,b,c,d;
    printf("Input ip addr : ");
    scanf("%s",str);
    for(i = 0; i < strlen(str); i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            ten_or_hex = 1;
            break;
        }
    }

    if(ten_or_hex == 0)
    {
        sscanf(str,"%d.%d.%d.%d",&a,&b,&c,&d);
    }
    else if(ten_or_hex == 1)
    {
        sscanf(str,"%x.%x.%x.%x",&a,&b,&c,&d);
    }
    printf("IP addr : %d.%d.%d.%d\n",a,b,c,d);
    if((a >= 0 && a <= 255) && (b >= 0 && b <= 255) && (c >= 0 && c <= 255) && (c >= 0 && c <= 255))
        printf("Right addr\n");
    else
        printf("Wrong addr\n");
    
    
}
