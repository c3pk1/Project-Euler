def pow_r(x, n):
    """
    O(log n)
    """
    if n == 0:  # exit case
        return 1
    if n % 2 == 0:  # standard case ‡@ n is even
        return pow_r(x ** 2, n // 2)
    else:  # standard case ‡A n is odd
        return x * pow_r(x ** 2, (n - 1) // 2)

if __name__ == '__main__':
    mx = 0
    for i in range(1,100):
        for j in range(1,100):
            a = pow_r(i, j)
            cnt = 0
            while a:
                cnt = cnt + a%10
                a = a//10
            if mx < cnt:
                mx = cnt
                
    print(mx)