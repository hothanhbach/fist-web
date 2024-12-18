int main(){	
	/*begin */
	int amstrong, num, cnt = 0, ketqua;
	
    printf("enter a whole number: ", &num);
	scanf("%d", &num);
	
	amstrong = num;
	// buoc 1:
	ketqua = num % 10;
	printf("%d\n", ketqua);
	cnt++;
	num = num /10;
	
	
	/*end */
	return 0;
}
	
