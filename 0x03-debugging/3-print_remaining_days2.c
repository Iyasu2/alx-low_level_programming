void print_remaining_days(int month, int day, int year)
{
	int days_in_feb = 28;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		days_in_feb = 29;
	}

	if (month == 2 && day > days_in_feb)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}

	else
	{
		int day_of_year = convert_day(month, day);

		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", 365 + (days_in_feb == 29) - day_of_year);
	}
}
