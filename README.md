



```c
	while (format[i])
    {
        if (format[i] != '%')
            ft_putchar(format[i]);
        else if (format[i] == '%')
        {
            if (format[i+1] == '%')
            {
                ft_putchar('%');
                i++;
            }
            else if (format[i+1])
            {
                ft_format(format[i+1], arg);
                i++;
            }
        }
        i++;
    }
```