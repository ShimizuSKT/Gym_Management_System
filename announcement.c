void announcement()
{
	system("cls");
	FILE *fp = fopen("filen.txt", "r");
	char ch;
	while ((ch = fgetc(fp)) != EOF)
		printf("%c", ch);
	fclose(fp);
	getchar();
	return;
}