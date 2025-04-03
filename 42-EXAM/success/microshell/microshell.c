#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *s)
{
    int i = 0;
    while(s && s[i])
        i++;
    return (i);
}
void ft_error_exit(char *str, int is_exit)
{
    write(2, str, ft_strlen(str));

    if (is_exit)
        exit(is_exit);

}
int ft_cd(char **av, int i)
{
    if (!av[1] || av[2] || i > 2)
        return (ft_error_exit("error: cd: bad arguments\n", 0), 1);
    else if (chdir(av[1]) == -1)
    {
        ft_error_exit("error: cd: cannot change directory to ", 0);
        ft_error_exit(av[1], 0);
        ft_error_exit("\n", 0);
        return (1);
    }
    return (0);
}

int ft_excute(char **av, char **env, int i)
{
    int has_pipe = 0;
    int pid;
    int fd[2];
    int status = 0;
    if (av && av[i] && !strcmp(av[i], "|"))
        has_pipe = 1;
    if (!has_pipe && !strcmp(av[0], "cd"))
        return (ft_cd(av, i));
    if (has_pipe && pipe(fd) == -1)
        ft_error_exit( "error: fatal\n", 1);
    pid = fork();
    if (pid == -1)
         ft_error_exit( "error: fatal\n", 1);
    else if (pid == 0)
    {
        av[i] = 0;
        if (has_pipe && (close(fd[0]) == -1 || dup2(fd[1], 1) == -1  || close(fd[1]) == -1))
        {
            ft_error_exit( "error: fatal\n", 1);
        }
        execve(av[0], av, env);
        ft_error_exit("error: cannot execute ", 0);
        ft_error_exit(av[0], 0);
        ft_error_exit("\n", 1);
    }
    else
    {
        waitpid(pid, &status, 0);
        if (has_pipe && (close(fd[1]) == -1 || dup2(fd[0], 0) == -1 ||  close(fd[0]) == -1))
        {
            ft_error_exit( "error: fatal\n", 1);
        }
    }
    return (status);
    
}

int main(int ac , char **av , char **env)
{
    int status= 0;
    int i = 0;
    if (ac < 2)
        return (1);
    while (av[i] && av[++i])
    {
        av += i;
        i = 0;
        while (av[i] && strcmp(av[i], "|") && strcmp(av[i], ";"))
            i++;
        if (i)
            status = ft_excute(av, env, i);
    }
    return (status);
}