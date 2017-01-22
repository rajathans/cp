k2,k3,k5,k6 = map(int, raw_input().split())
n = k2 + k6
bg = n / 8
sm = (n-(bg*8))/5
bg = 256 * bg
sm = sm * 32
print bg+sm
