import matplotlib.pyplot as plt
import numpy as np

def getList(s, ty):
    return list(map(ty, s.split()))

def task1():
    s = "100 0.000049 0.000043,400 0.000766 0.000688,700 0.002387 0.002240,1000 0.005170 0.004530,2000 0.022040 0.017440,4000 0.128548 0.078387,5000 0.251250 0.113250"
    s = s.split(",")
    L = [getList(t,float) for t in s]
    print(L)

    N = [t[0] for t in L]
    Alg1 = [t[1] for t in L]
    Alg2 = [t[2] for t in L]
    rate = [1 - t[2]/t[1] for t in L]

    width = 0.8 / 3
    x = list(range(len(N)))

    plt.bar(x, Alg1, tick_label=N, width=width, label="common algorithm")
    plt.bar([t+width for t in x], Alg2, tick_label=N, width=width, label="improved algorithm")
    plt.xlabel("problem size")
    plt.ylabel("time in seconds")
    plt.legend()
    plt.show()

    plt.bar(x, rate, tick_label=N, width=width)
    plt.show()

    miss_tot = 873476005
    miss_pct1 = getList("0.04 0.47 1.46 4.80 9.34 7.95 8.20", float)
    miss_pct2 = getList("0.05 0.39 0.40 0.41 0.42 0.40 0.43", float)
    load_tot = 65952188807
    load_pct1 = getList("0.20 1.98 1.98 1.97 1.97 1.89 1.97", float)
    load_pct2 = getList("0.20 1.98 1.98 1.97 1.97 1.89 1.97", float)
    hit_rate1 = [miss_tot*miss_pct1[i]/load_tot/load_pct1[i] for i in range(7)]
    hit_rate2 = [miss_tot*miss_pct2[i]/load_tot/load_pct2[i] for i in range(7)]
    # plt.bar(x, rate, tick_label=N, width=width, label="improvement rate")
    plt.bar([t + width for t in x], hit_rate1, tick_label=N, width=width, label="common algorithm")
    plt.bar([t + 2*width for t in x], hit_rate2, tick_label=N, width=width, label="improved algorithm")
    plt.xlabel("problem size")
    plt.ylabel("cache-missing rate")
    plt.legend()
    plt.show()

    print([int(miss_tot*miss_pct1[i]/100) for i in range(7)])
    print([int(load_tot*load_pct1[i]/100) for i in range(7)])
    print([int(miss_tot*miss_pct2[i]/100) for i in range(7)])
    print([int(load_tot*load_pct2[i]/100) for i in range(7)])

    N = [t[0] for t in L]
    Alg1 = [t[1] / t[0] / t[0] for t in L]
    Alg2 = [t[2] / t[0] / t[0] for t in L]
    plt.bar(x, Alg1, tick_label=N, width=width, label="common algorithm")
    plt.bar([t+width for t in x], Alg2, tick_label=N, width=width, label="improved algorithm")
    plt.xlabel("problem size")
    plt.ylabel("time in seconds")
    plt.legend()
    plt.show()