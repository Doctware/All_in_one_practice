#include <stdlib.h>
#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;

	name = user->name;
	email = user->email;
	age = user->age;

	return user;
}

int main(void)
{
	struct User *user;

	user = new_user("Doctware", "yusclever9@gmail.com", 27);
	if (user == NULL)
		return 1;

	printf("User %s Created!\n", user->name);
	printf("His email is: %s\n", user->email);
	printf("And he is %d yeas old\n", user->age);


	return 0;
}
