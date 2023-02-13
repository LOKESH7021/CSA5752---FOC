#include<stdio.h>
#include<string.h>
int match(char user1[100], char user2[100]) {
    int n, m, i, j, c = 0, t = 0;
    n = strlen(user1);
    m = strlen(user2);
    for (i = 0; i <= n - m; i++) {
        t++;
        for (j = 0; j < m; j++) {
            if (user1[i + j] == user2[j])
                c++;
        }
        if (c == m)
            return t;
        c = 0;
    }
    return -1;
}
int main()
{
	int status;
	char user1[20],user2[20];
	int flag = 0;
	printf("enter the username:");
	gets(user1);
	printf("reenter username:");
	gets(user2);
	status = match(user1,user2);
	if(status == -1)
	printf("username is invalid");
	else
	printf("username is valid");
	
}
