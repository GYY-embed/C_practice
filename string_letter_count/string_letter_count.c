//题目描述：输入一个字符串，打印字符串中每一个字母出现的次数并依次打印
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i;
    printf("Inupt string : ");
    scanf("%s",str);
    for(i = 0; str[i] != '\0'; i++)
    {
        count[(int)str[i]]++;
        printf("OK\n");
    }
    for(i = 0; str[i] != '\0'; i++)
    {
        if(count[(int)str[i]] > 0)
        {
            printf("%c:%d\n",str[i],count[(int)str[i]]);
            count[(int)str[i]] = 0;
        }
    }
    return 0;
}