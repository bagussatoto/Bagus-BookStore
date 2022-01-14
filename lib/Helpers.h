void clear()
{
    if (OS_Windows)
    {
        system("cls");
    }
    else
    {
        system("clear");
    }
}