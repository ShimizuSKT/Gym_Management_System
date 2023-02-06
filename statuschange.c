void statuschange(char username[]){
    printf("请输入您想要预定的场馆编号：\n");
    printf("Please enter the number of the stadium you want to reservate:\n");
    int re, date;
    scanf("%d", &re);
    printf("请输入您想要预定的日期（1代表今天，2代表明天，3代表后天）：\n");
    printf("Please enter the date of your reservation(1 is today, 2 for tomorrow, 3 for the day after tomorrow):\n");
    scanf("%d", &date);
    getchar();
    freopen("list.txt","r",stdin);
    int number = 0;
    char status[64][5];
    scanf("%d", &number);
    int gg = 0; char tt;
    rep(i, 1, number){
        gg = 0;
        while(gg < 3){
            scanf("%c", &tt);
            if(tt != '\n'){
                gg ++;
                status[i][gg] = tt;
            }
        }
    }
    freopen("CON","r",stdin);
    if(re > number){
        printf("场馆不存在，预定失败，程序即将关闭\n");
        printf("Stadium not exist.\n");
        getchar();
        system("cls");
        return ;
    }
    else if(status[re][date] == '0'){
        printf("场馆可用，预定成功，程序即将关闭\n");
        printf("Stadium available, reservation done.\n");
        status[re][date] = '1';
        freopen("mem.txt","a",stdout);
        printf("%s %d\n", username, re);
        freopen("CON","a",stdout);fclose(stdout);
        freopen("statistics.txt","a",stdout);
        printf("%d", re);
        freopen("CON","a",stdout);
    }
    else{
        printf("场馆不可用，预定失败，程序即将关闭\nStadium unavailable, reservation cancel.\n");
        getchar();
        system("cls");
        return ;
    }
    freopen("list.txt","w",stdout);
    printf("%d\n", number);
    rep(i, 1, number){
        rep(l, 1, 3){
            printf("%c", status[i][l]);
        }
        printf("\n");
    }
    freopen("CON","w",stdout);
    getchar();
    system("cls");
    exit(0);
}