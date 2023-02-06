void statuscheck(){
    getchar();
    freopen("list.txt","r",stdin);
    int number = 0;
    char status[64][5];
    scanf("%d", &number);
    getchar();
    for(int i = 1; i <= number; i++){
        scanf("%c%c%c", &status[i][1], &status[i][2], &status[i][3]);
        getchar();
    }
    freopen("CON","r",stdin);
    rep(i, 1, number){
        printf("场馆%d三天状态(Stadium%d)：", i, i);
        rep(l, 1, 3){
            if(status[i][l] == '0') printf("可用(Available)     ");
            else printf("不可用(Unavailable) ");
        }
        printf("\n");
    }
    getchar();
    freopen("CON","r",stdin);
    return ;
}
