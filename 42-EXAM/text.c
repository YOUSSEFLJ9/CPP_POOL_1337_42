#include <unistd.h>
// #include <stdio.h>   
#include <stdlib.h>
#include <string.h>
// #include <sys/wait.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

void ft_error(char *msg, int exit_code)
{
    write(2, msg, ft_strlen(msg));
    if (exit_code)
        exit(exit_code);
}

int ft_cd(char **av, int i)
{
    (void)i;
    if (!av[1] || av[2])
        return (ft_error("error: cd: bad arguments\n", 0), 1);
    if (chdir(av[1]) == -1)
    {
        ft_error("error: cd: cannot change directory to ", 0);
        ft_error(av[1], 0);
        ft_error("\n", 0);
        return (1);
    }
    return (0);
}
int ft_excute(char **av, char **env, int i)
{
    int status;
    int fd[2];
    int has_pipe = 0;
    if (av[i] && !strcmp(av[i], "|"))
        has_pipe = 1;
    if (!has_pipe && av[0] && !strcmp(av[0], "cd"))
                return (ft_cd(av, i));
        if (has_pipe)
        {
                if (pipe(fd) == -1)
                        ft_error("error: fatal\n", 1);
        }
        int pid = fork();
        if (pid == -1)
                ft_error("error: fatal\n", 1);
        if (pid == 0)
        {
                av[i] = 0;
                if (has_pipe)
                {
                        close(fd[0]);
                        dup2(fd[1], 1);
                        close(fd[1]);
                }
                if (av[0] && !strcmp(av[0], "cd"))
                        return (ft_cd(av, i));
                execve(av[0], av, env);
                ft_error("error: cannot execute ", 0);
                ft_error(av[0], 0);
                ft_error("\n", 0);
                return (1);
        }
        else
        {
                waitpid(pid, &status, 0);
                if (has_pipe)
                {
                        close (fd[1]);
                        dup2(fd[0], 0);
                        close(fd[0]);
                }
        }
        return (status);

}
int main(int ac, char **av, char **env)
{
    int i = 0;
    int status;

    if (ac < 2)
        return (1);
    while (av[i] && av[++i])
    {
        av += i;
        i = 0;
        while (av[i] && strcmp(av[i], ";") && strcmp(av[i], "|"))
            i++;
        if (i) 
            status = ft_excute(av, env, i);
    }
    return (status);
}