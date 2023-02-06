#include <stdio.h>
#include <string.h>
#include <stdlib.h> //测试使用

int increase(char *new_username, char *new_password) // 这里是新输入的用户名和密码
{
    int temp11 = 0, temp12 = 0, temp13 = 0; // 临时变量，这不可能重复了吧
    char str1[200] = {0};                   // 用于核对用户名时的数据中转站
    FILE *fp;
    fp = fopen("date.txt", "a+");

    while (!feof(fp)) // 查重，用户名不能重复
    {
        fscanf(fp, "%s", str1);
        if (strcmp(str1, new_username) == 0)
        {
            temp11 = 1;
        }
    }
    temp12 = strlen(new_username) + 1;
    temp13 = strlen(new_password) + 1; // 把新用户名和密码的长度确定，这样的话方便控制读入文本的格式
    if (temp11 == 1)
    {
        printf("该用户名已被占用。\n");
        printf("Username unavailable.\n");
        return 0; // 这里的话就直接出去了，后面具体是重新输入还是什么再进一步完善
    }
    else
    {
        fprintf(fp, "\n");
        fputs(new_username, fp);
        fprintf(fp, "\t");
        fputs(new_password, fp);
    }
    printf("注册成功！\n");
    printf("Register success.\n");
    fclose(fp);
    return 0;
}
