#include <stdio.h>
#include <fcntl.h>

int main()
{
    int t_input=open("boot",O_RDONLY);
    if(t_input<0)
    {
        perror("Cannot open 'boot'");
        return -1;
    }
    unsigned char t_block[512];
    if(read(t_input,t_block,510)<0)
    {
        perror("Cannot read from 'boot'");
        return -1;
    }
    close(t_input);
    t_block[510]=0x55;
    t_block[511]=0xaa;
    int t_output=open("/dev/sdb",O_WRONLY);
    if(t_output<0)
    {
        perror("Cannot open '/dev/sdb'");
        return -1;
    }
    if(write(t_output,t_block,512)<0)
    {
        perror("Cannot write to '/dev/sdb'");
        return -1;
    }
    close(t_output);
}
