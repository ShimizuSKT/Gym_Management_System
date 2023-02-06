#define rep(k, l, j) for (int k = l; k <= j; k++)
void statistics(){
    int num = 0;
    freopen("list.txt","r",stdin);
    scanf("%d", &num);
    freopen("statistics.txt","r",stdin);
    char temperate;
    int tot[num + 5];
    rep(i, 1, num) tot[i] = 0;
    while(scanf("%c", &temperate) != EOF){
        tot[temperate - '0']++;
    }
    freopen("CON","r",stdin);
    rep(i, 1, num){
        printf("第%d体育馆，预定总数：%d\n", i, tot[i]);
        printf("Stadium No.%d，Total Reservation Number：%d\n", i, tot[i]);
    }
    getchar();
    return ;
}