
int _putchar(char c)
{
extern long write(int, const char *, unsigned long);
(void )write(1,&c,1);
return (0); 
}
