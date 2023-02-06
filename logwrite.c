void logwrite(char username[]){
    freopen("log.txt","a",stdout);
    //time_t tt;
    //time(&tt);, ctime(&tt)
    printf("login_username:%s\n", username);
    //fclose(stdout);
    freopen("CON","a",stdout);
    return ;
}