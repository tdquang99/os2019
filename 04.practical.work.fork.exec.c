#include <unistd.h>
#include <stdio.h>
	int main() {
		printf("Main before fork()\n");
		int pid = fork();{
		if (pid == 0) 
			printf("I am child after fork(), run ps -ef\n");
			char *args[] = { "/bin/ps", "-ef", NULL};
			execvp("/bin/ps", args);
			printf("Finished running ps -ef\n");
`		}
		else {
		waitpid(pid, NULL, 0);
			printf("This is parent after fork, child is %d\n\tContinue to create another child\n", pid1);
   			pid2 = fork();
    			if(pid2 == 0){
     				printf("\tThis is the second child\n\tNow run \"free -h\"\n");
      				char* args[] = {"/usr/bin/free", "-h", NULL};
      				if(execvp("/usr/bin/free", args) < 0){
        				printf("Fail to execute \"free -h\"\n");
      				}
    			}
   			else {
      				printf("This is parent after 2 forks, second child is %d\nNothing to do more.\n", pid2);
      				waitpid(pid2, NULL, 0);
    			}
  		}
  		return 0;
	}
