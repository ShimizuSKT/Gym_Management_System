void announcementmanage()
{
	SetConsoleOutputCP(936);
	int temp;
	char content[10000];
	printf("��ѡ������Ҫ�Ĳ���\n");
	printf("Please enter the function number which you want to use.\n");
	printf("1.��ӹ�������\n");
	printf("Add new announcement.\n");
	printf("2.���±༭����\n");
	printf("Clear all announcements.\n");
	scanf("%d",&temp);
	if(temp==1)
	{
		FILE *fp;
		fp = fopen("filen.txt","a");
		printf("����������Ҫ��ӵ�����\n");
		printf("Please enter the announcement.\n");
		getchar();
		gets(content);
		fprintf(fp,"\n");
		fputs(content,fp);
		printf("�����ѳɹ����!\n");
		printf("Announcement added.\n");
		fclose(fp);
	}
	else if(temp==2)
	{
		FILE *fp;
		fp = fopen("filen.txt","w");
		printf("�����ѳɹ���������������±༭������\n");
		printf("Announcement cleared, please enter the announcement you want to add.\n");
		getchar();
		gets(content);
		fputs(content,fp);
		printf("�����ѳɹ����!\n");
		printf("Announcement added.\n");
		fclose(fp);
	}
	else printf("��Ч����!\nInvalid operation.\n");
	SetConsoleOutputCP(65001);
	getchar();
	return ;
}