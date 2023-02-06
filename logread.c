void logread()
{
	system("cls");
	FILE *fp = fopen("log.txt", "r");
	char ch;
	while ((ch = fgetc(fp)) != EOF)
		printf("%c", ch);
	fclose(fp);
	getchar();
	return;
}