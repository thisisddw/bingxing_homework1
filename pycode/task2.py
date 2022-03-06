import matplotlib.pyplot as plt
import numpy as np

def getList(s, ty):
    return list(map(ty, s.split()))

def task2():
    s = "32768 0.000097 0.000063 0.000049 0.000046 0.000043 0.000042 0.000040 0.000121 0.000088 0.000042 0.000036 0.000033,65536 0.000194 0.000127 0.000098 0.000091 0.000086 0.000084 0.000079 0.000242 0.000176 0.000084 0.000073 0.000066,131072 0.000388 0.000253 0.000195 0.000183 0.000172 0.000167 0.000158 0.000484 0.000353 0.000168 0.000145 0.000133,262144 0.000781 0.000507 0.000391 0.000366 0.000345 0.000336 0.000319 0.000982 0.000705 0.000336 0.000291 0.000273,524288 0.001566 0.001016 0.000784 0.000734 0.000692 0.000676 0.000642 0.001978 0.001427 0.000679 0.000589 0.000549,1048576 0.003134 0.002061 0.001605 0.001500 0.001428 0.001384 0.001311 0.004042 0.002851 0.001421 0.001247 0.001161"
    s = s.split(",")
    L = [getList(t,float) for t in s]
    print(L)

    N = [t[0] for t in L]
    Alg1 = [t[1] for t in L]
    Alg2 = [t[2] for t in L]
    Alg23 = [t[3] for t in L]
    Alg24 = [t[4] for t in L]
    Alg25 = [t[5] for t in L]
    Alg26 = [t[6] for t in L]
    Alg28 = [t[7] for t in L]
    Alg31 = [t[8] for t in L]
    Alg316 = [t[9] for t in L]
    Alg44 = [t[10] for t in L]
    Alg48 = [t[11] for t in L]
    Alg416 = [t[12] for t in L]

    rate1 = [0 for t in L]
    rate2 = [1-t[2]/t[1] for t in L]
    rate3 = [1-t[3]/t[1] for t in L]
    rate4 = [1-t[4]/t[1] for t in L]
    rate5 = [1-t[5]/t[1] for t in L]
    rate6 = [1-t[6]/t[1] for t in L]
    rate8 = [1-t[7]/t[1] for t in L]
    rate44 = [1-t[10]/t[1] for t in L]
    rate48 = [1-t[11]/t[1] for t in L]
    rate416 = [1-t[12]/t[1] for t in L]

    width = 0.8 / 3
    x = list(range(len(N)))

    width = 0.8 / 5
    plt.bar(x, Alg1, tick_label=N, width=width, label="common algorithm")
    plt.bar([t+1*width for t in x], Alg28, tick_label=N, width=width, label="8 accumulator")
    plt.bar([t+2*width for t in x], Alg44, tick_label=N, width=width, label="reassociation with unrolling factor 4")
    plt.bar([t+3*width for t in x], Alg48, tick_label=N, width=width, label="reassociation with unrolling factor 8")
    plt.bar([t+4*width for t in x], Alg416, tick_label=N, width=width, label="reassociation with unrolling factor 16")
    plt.xlabel("problem size")
    plt.ylabel("time in seconds")
    plt.legend()
    plt.show()

    x = [1,4,8,16]
    num = len(N)
    y = []
    for i in range(num):
        y.append([])
        y[i].append(rate1[i])
        y[i].append(rate44[i])
        y[i].append(rate48[i])
        y[i].append(rate416[i])

    for i in range(num):
        plt.plot(x,y[i],label="problem size="+str(int(N[i])))
    plt.xlabel("unrolling factor")
    plt.ylabel("improvement rate")
    plt.legend()
    plt.show()

if False:
    width = 0.8 / 3
    plt.bar(x, Alg1, tick_label=N, width=width, label="common algorithm")
    plt.bar([t+width for t in x], Alg31, tick_label=N, width=width, label="recursive algorithm")
    plt.bar([t+2*width for t in x], Alg316, tick_label=N, width=width, label="recursive algorithm with unrolling")
    plt.xlabel("problem size")
    plt.ylabel("time in seconds")
    plt.legend()
    plt.show()

    width = 0.8 / 5
    plt.bar(x, Alg1, tick_label=N, width=width, label="common algorithm")
    plt.bar([t+width for t in x], Alg2, tick_label=N, width=width, label="2 accumulator")
    plt.bar([t+2*width for t in x], Alg23, tick_label=N, width=width, label="3 accumulator")
    plt.bar([t+3*width for t in x], Alg24, tick_label=N, width=width, label="4 accumulator")
    plt.bar([t+4*width for t in x], Alg28, tick_label=N, width=width, label="8 accumulator")
    plt.xlabel("problem size")
    plt.ylabel("time in seconds")
    plt.legend()
    plt.show()

    # plt.bar(x, rate1, tick_label=N, width=width, label="common algorithm")
    plt.bar([t for t in x], rate2, tick_label=N, width=width, label="2 accumulator")
    plt.bar([t+width for t in x], rate3, tick_label=N, width=width, label="3 accumulator")
    plt.bar([t+2*width for t in x], rate4, tick_label=N, width=width, label="4 accumulator")
    plt.bar([t+3*width for t in x], rate8, tick_label=N, width=width, label="8 accumulator")
    plt.xlabel("problem size")
    plt.ylabel("improvement rate")
    plt.legend()
    plt.show()

    x = [1,2,3,4,5,6,8]
    num = len(N)
    y = []
    for i in range(num):
        y.append([])
        y[i].append(rate1[i])
        y[i].append(rate2[i])
        y[i].append(rate3[i])
        y[i].append(rate4[i])
        y[i].append(rate5[i])
        y[i].append(rate6[i])
        y[i].append(rate8[i])

    for i in range(num):
        plt.plot(x,y[i],label="problem size="+str(int(N[i])))
    plt.xlabel("number of accumulator")
    plt.ylabel("improvement rate")
    plt.legend()
    plt.show()