void announcementmanage()
{
	SetConsoleOutputCP(936);
	int temp;
	char content[10000];
	printf("请选择你需要的操作\n");
	printf("Please enter the function number which you want to use.\n");
	printf("1.添加公告内容\n");
	printf("Add new announcement.\n");
	printf("2.重新编辑公告\n");
	printf("Clear all announcements.\n");
	scanf("%d",&temp);
	if(temp==1)
	{
		FILE *fp;
		fp = fopen("filen.txt","a");
		printf("请输入你需要添加的内容\n");
		printf("Please enter the announcement.\n");
		getchar();
		gets(content);
		fprintf(fp,"\n");
		fputs(content,fp);
		printf("内容已成功添加!\n");
		printf("Announcement added.\n");
		fclose(fp);
	}
	else if(temp==2)
	{
		FILE *fp;
		fp = fopen("filen.txt","w");
		printf("公告已成功清除，请输入重新编辑的内容\n");
		printf("Announcement cleared, please enter the announcement you want to add.\n");
		getchar();
		gets(content);
		fputs(content,fp);
		printf("内容已成功添加!\n");
		printf("Announcement added.\n");
		fclose(fp);
	}
	else printf("无效操作!\nInvalid operation.\n");
	SetConsoleOutputCP(65001);
	getchar();
	return ;
}