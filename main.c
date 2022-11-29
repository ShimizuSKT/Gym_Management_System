#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

#define rep(k, l, j) for (int k = l; k <= j; k++)

int logincount;//logincount记录登陆尝试次数

int main()
{
    SetConsoleOutputCP(65001);
    while (1)
    {
        printf("欢迎使用中国矿业大学(北京)体育场馆预约系统\n");
        printf("Welcome to China University of Mining and Technology (Beijing) Stadium Reservation System");
        Sleep(3000);
        system("cls");
        //欢迎界面，并清屏
        while (1)
        {
            logincount++;
            printf("请输入您的帐号\n");
            printf("Please enter your account to login\n");
            printf("账号(Account):");

            printf("\n请输入您的密码\n");
            printf("Please enter your password\n");
            printf("密码(Password):");
            printf("\n确认中，请稍后\n");
            printf("Checking your profile, please wait.\n");
            rep(i, 1, 6){
                Sleep(800);
                printf(". ");
            }printf("\n");
            if(logincount == 5){
                printf("您的尝试错误次数以超过五次,系统即将关闭\n");
                printf("You have failed for five times, system closing.\n");
                Sleep(3000);
                system("cls");
                return 0;
            }
            printf("\n");
        }
        //接下来是身份确认部分，设计一个函数确认身份
        system("cls");
        //接下来是功能选择界面
        system("cls");
        //接下来是各功能模块函数
        system("cls");
        //设计选择模块时若输入1145141919810就进入debug模式
        system("cls");
        printf("感谢您的使用,系统正返回首页\n");
        printf("Thank you for using the system, now back to homepage.\n");
        Sleep(3000);
        system("cls");
    }
    return 0;
}