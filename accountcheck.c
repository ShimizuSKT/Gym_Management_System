#define rep(k, l, j) for (int k = l; k <= j; k++)
int accountcheck(char *username,char *password)
{
    FILE *fp;
    char str[200];
	/*
	*��ֻ����ʽ���ļ�
	*date.txt��ʽΪ ���û��� ���� ���м���һ�ո�����ѭ��
	*/
    if ((fp=fopen("date.txt","r"))==NULL)
    {
        printf("cannot open file\n");
        exit(1);
     }
	/*
	*�ж��˻��Ƿ����
	*/
	while(!feof(fp))
	{
		fscanf(fp,"%s",str);
		if(strcmp(str,username)==0)//  ����û���
		{
			fscanf(fp,"%s",str);
			if(strcmp(str,password)==0)
			{
				return 1;
			}else
			{
				fclose(fp);
				return 0;
			}

		}
	fscanf(fp,"%s",str);

	}
	fclose(fp);
    return -1;
}