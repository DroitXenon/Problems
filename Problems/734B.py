k2, k3, k5, k6 = map(int,input().split())
min_256 = min(k2,min(k5,k6))
out = 0
if  min_256 > 0:
    k2 -= min_256
    k5 -= min_256
    k6 -= min_256
    out += min_256 * 256
min_32 = min(k2,k3)
if min_32 > 0:
    k2 -= min_32
    k3 -= min_32
    out += min_32 * 32
print(out)