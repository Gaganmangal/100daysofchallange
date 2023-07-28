
void findComplement(int num)
{
    if (num == 0)
    {
        std::cout << 1;
    }
    int m = num;
    int mask = 0;
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~num) & mask;
    std::cout << ans;
}

int main()
{

    findComplement(5);

    return 0;
}