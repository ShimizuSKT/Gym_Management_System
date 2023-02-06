void stadiumadd(){
    printf("输入1还原现有所有场馆，输入2以新建场馆：\n");
    printf("Enter 1 to reset all stadium status, enter 2 to add a new stadium.\n");
    int temp223 = 0, num;
    char temp23;
    scanf("%d", &temp223);
    freopen("list.txt","r",stdin);
    if(temp223 == 1){
        scanf("%d", &num);
        freopen("list.txt","w",stdout);
        printf("%d\n", num);
        rep(i, 1, num){
            printf("000\n");
        }
    }
    else if(temp223 == 2){
        scanf("%d", &num);
        num++;
        freopen("temp.txt","w",stdout);
        printf("%d\n", num);
        int cnt;
        rep(i, 1, num - 1){
            while(scanf("%c", &temp23) != EOF){
                if(temp23 != '\n'){
                    cnt++;
                    printf("%c", temp23);
                }
                if(cnt == 3){
                    printf("\n");
                    cnt = 0;
                }
            }
        }
        printf("000\n");
        freopen("temp.txt","r",stdin);
        freopen("list.txt","w",stdout);
        while(scanf("%c", &temp23) != EOF){
            printf("%c", temp23);
        }
    }
    freopen("CON","r",stdin);
    freopen("CON","w",stdout);
    system("cls");
    printf("程序即将关闭\nProgram closing.\n");
    //exit(0);
}