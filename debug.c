void debug()
{
    int fs;
    char pw[64], ac[64], ct, lc;
    while (1) //身份查验，偷懒没做成模块，主要是做成模块不好直接结束程序
    {
        lc++;
        printf("请输入您的帐号\n");
        printf("Please enter your account to login\n");
        printf("账号(Account):");
        scanf("%s", ac);
        printf("\n请输入您的密码\n");
        printf("Please enter your pw\n");
        printf("密码(pw):");
        int i = 0;
        while ((ct = getch()) != '\r')
        {
            pw[i] = ct;
            i++;
            printf("%c", '*');
        }
        printf("\n");
        if (accountcheck(ac, pw) == 1)
        {
            break;
        }
        else if (accountcheck(ac, pw) == 0)
        {
            printf("密码错误，请重试\n");
        }
        else if (accountcheck(ac, pw) == -1)
        {
            printf("用户不存在\n");
        }
        if (lc == 5)
        {
            printf("您的尝试错误次数已超过五次,系统即将关闭\n");
            printf("You have failed for five times, system closing.\n");
            Sleep(3000);
            system("cls");
            return ;
        }
        printf("\n");
    }
    system("cls");
    functionprint();
    scanf("%d", &fs);
    switch (fs)//接下来是各功能模块函数
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
            //statuschange(ac);
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
            printf("不存在此功能\nFunction not exist.");
            getchar();
            break;
        }
    getchar();
}