#include"include.c"//所有函数的include内容都写在这个文件里

#define rep(k, l, j) for (int k = l; k <= j; k++)

//声明变量最好写全屏或者写注释注明变量含义
int logincount, functionselect; // logincount记录登陆尝试次数
char username[64], password[64], chartemp;

int main()
{
    SetConsoleOutputCP(65001);
    while (1)
    {
        welcome();
        //欢迎界面，并清屏
        while (1)//身份查验，偷懒没做成模块，主要是做成模块不好直接结束程序
        {
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
            if(accountcheck(username, password) == 1){
                break;
            }
            else if(accountcheck(username, password) == 0){
                printf("密码错误，请重试\n");
            }
            else if(accountcheck(username, password) == -1){
                printf("用户不存在\n");
            }
            if (logincount == 5)
            {
                printf("您的尝试错误次数已超过五次,系统即将关闭\n");
                printf("You have failed for five times, system closing.\n");
                Sleep(3000);
                system("cls");
                return 0;
            }
            printf("\n");
        }
        //接下来是身份确认部分，设计一个函数确认身份
        functionprint();
        scanf("%d", &functionselect);
        //接下来是功能选择界面
        system("cls");
        //接下来是各功能模块函数
        system("cls");
        printf("小小的中国震撼\n");
        //设计选择模块时若输入1145141919810就进入debug模式
        end();
    }
    return 0;
}