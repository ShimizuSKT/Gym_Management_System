#include "include.c" //所有函数的include内容都写在这个文件里
// 声明变量最好写全拼或者写注释注明变量含义
int logincount, functionselect, loginjudge; // logincount记录登陆尝试次数
char username[64], password[64], chartemp, judge;

int main()
{
    SetConsoleOutputCP(65001);
    welcome(); // 欢迎界面，并清屏
    while (1)
    {
        while (1) // 身份查验，偷懒没做成模块，主要是做成模块不好直接结束程序
        {
            if (loginjudge == 1)
                break;
            logincount++;
            printf("请输入您的帐号\n");
            printf("Please enter your account to login\n");
            printf("账号(Account):");
            scanf("%s", username);
            printf("\n请输入您的密码\n");
            printf("Please enter your password\n");
            printf("密码(Password):");
            int i = 0;
            while ((chartemp = getch()) != '\r')
            {
                password[i] = chartemp;
                i++;
                printf("%c", '*');
            }
            printf("\n确认中，请稍后\n");
            printf("Checking your profile, please wait.\n");
            rep(i, 1, 6)
            {
                Sleep(80);
                printf(". ");
            }
            printf("\n");
            if (accountcheck(username, password) == 1)
            {
                loginjudge = 1;
                break;
            }
            else if (accountcheck(username, password) == 0)
            {
                system("cls");
                printf("密码错误，请重试\n");
                printf("Invalid password, please try again.\n");
                Sleep(1600);
                system("cls");
            }
            else if (accountcheck(username, password) == -1)
            {
                system("cls");
                printf("用户不存在，您是否要进行账户注册？(Y/N)\n");
                printf("Account not found, do you want to sign up?(Y/N)");
                getchar();
                scanf("%c", &judge);
                if (judge == 'Y')
                {
                    Sleep(500);
                    increase(username, password);
                    break;
                }
            }
            if (logincount == 5)
            {
                system("cls");
                printf("您的尝试错误次数已超过五次,系统即将关闭\n");
                printf("You have failed for five times, system closing.\n");
                Sleep(3000);
                system("cls");
                return 0;
            }
        }
        // 接下来是身份确认部分，设计一个函数确认身份
        // 接下来是功能选择界面
        functionprint();
        getchar();
        scanf("%d", &functionselect);
        system("cls");
        switch (functionselect) // 接下来是各功能模块函数
        {
        case 0:
            announcement();
            getchar();
            break;
        case 1:
            statuscheck();
            getchar();
            break;
        case 2:
            statuschange(username);
            getchar();
            break;
        case 3:
            stadiumadd();
            break;
        case 4:
            statistics();
            break;
        case 5:
            logread();
            getchar();
            break;
        case 6:
            announcementmanage();
            break;
        case 1145141919:
            debug();
            break;
        default:
            printf("不存在此功能\nFunction not exist.\n");
            getchar();
            break;
        }
        // logwrite(username);
        system("cls");
        // 设计选择模块时若输入1145141919就进入debug模式
        end();
    }
    return 0;
}