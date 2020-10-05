unsigned parse_int(const char * p)
{
    unsigned result = 0;
    unsigned digit;
    while ((digit = *p++ - '0') < 10)
    {
        result = result * 10 + digit;
    }    
    return result;
}
