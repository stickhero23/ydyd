#include "main.h"
/**
 * @brief Create a file object
 * 
 * @param filename 
 * @param text_content 
 * @return int 
 */

int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t n_read;

    if (filename == NULL)
    {
        return (0);
    }

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
    {
        return (-1);
    }

    if (!text_content)
    {
        close(fd);
        return (1)
    }
    

}