https://github-wiki-see.page/m/mmerabet42/libft/wiki/ft_printf

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

cc ft_printf.c main.c ft_print_decimal.c ft_print_char.c ft_print_digit.c ft_print_string.c