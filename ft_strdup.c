char	*ft_strdup(const char *s1)
{
	int	i;
	int	len;
	char	*str;

	len = 0;
	while (s[len])
		len ++;
	str = (char *)malloc(sizeof(const char) * (len + 1));
	if (!str)
		return (0);
	str[0] = '\0';
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
