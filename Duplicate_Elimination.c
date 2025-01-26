const int unique[20];
int main(void) {

	int user_input;

	// Prompt user to enter 20 numbers
	for (int i = 0; i <= 20; i++)
	{
		printf("Enter # %d: ", i);
		scanf("%d", &user_input);

		if (user_input < 10 || user_input > 100)
		{
			printf("The number entered is not in the valid range of 10 to 100\n");
			i--;
		}
		else
		{
			return 0;
		}
	}
}