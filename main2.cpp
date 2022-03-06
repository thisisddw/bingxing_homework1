#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <algorithm>
 
const int N1 = 5005, N2 = 1 << 21;

int a[N1][N1], b[N1], p[N1], c[N2];

void task21(int n) 
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += c[i];
}
void task218(int n) 
{
	int sum = 0;
	for(int i = 0; i + 8 < n; i += 8)
		sum += c[i],
		sum += c[i + 1],
		sum += c[i + 2],
		sum += c[i + 3],
		sum += c[i + 4],
		sum += c[i + 5],
		sum += c[i + 6],
		sum += c[i + 7];
}
void task22(int n)
{
	int sum = 0, tmp[2] = {};
	int i;
	for(i = 0; i + 2 - 1 < n; i += 2)
		tmp[0] += c[i], tmp[1] += c[i + 1];
	for(i; i < n; i++)
		sum += c[i];
	sum += tmp[0] + tmp[1];
}
void task231(int n)
{
	while(n > 1)
	{
		int i;
		for(i = 0; i < n/2; i++)
			c[i] += c[n - i - 1];
		n /= 2;
	}
}
void task2316(int n)
{
	while(n > 1)
	{
		int i;
		for(i = 0; i + 16 < n/2; i += 16)
		{
			c[i] += c[n - i - 1];
			c[i + 1] += c[n - i - 1 - 1];
			c[i + 2] += c[n - i - 2 - 1];
			c[i + 3] += c[n - i - 3 - 1];
			c[i + 4] += c[n - i - 4 - 1];
			c[i + 5] += c[n - i - 5 - 1];
			c[i + 6] += c[n - i - 6 - 1];
			c[i + 7] += c[n - i - 7 - 1];
			c[i + 8] += c[n - i - 8 - 1];
			c[i + 9] += c[n - i - 9 - 1];
			c[i + 10] += c[n - i - 10 - 1];
			c[i + 11] += c[n - i - 11 - 1];
			c[i + 12] += c[n - i - 12 - 1];
			c[i + 13] += c[n - i - 13 - 1];
			c[i + 14] += c[n - i - 14 - 1];
			c[i + 15] += c[n - i - 15 - 1];
		}
		for(i; i < n/2; i++)
			c[i] += c[n - i - 1];
		n /= 2;
	}
}
void task244(int n)
{
	int i, sum = 0;
	for(i = 0; i + 4 < n; i += 4)
	{
		sum += (c[i] + c[i + 1]) + (c[i + 2] + c[i + 3]);
	}
	for(i; i < n; i++)
		sum += c[i];
}
void task248(int n)
{
	int i, sum = 0;
	for(i = 0; i + 8 < n; i += 8)
	{
		sum += ((c[i] + c[i + 1]) + 
		(c[i + 2] + c[i + 3])) + 
		((c[i + 4] + c[i + 5]) + 
		(c[i + 6] + c[i + 7]));
	}
	for(i; i < n; i++)
		sum += c[i];
}
void task2416(int n)
{
	int i, sum = 0;
	for(i = 0; i + 16 < n; i += 16)
	{
		sum += (((c[i] + c[i + 1]) + 
		(c[i + 2] + c[i + 3])) + 
		((c[i + 4] + c[i + 5]) + 
		(c[i + 6] + c[i + 7]))) + 
		(((c[i + 8] + c[i + 9]) + 
		(c[i + 10] + c[i + 11])) + 
		((c[i + 12] + c[i + 13]) + 
		(c[i + 14] + c[i + 15])));
	}
	for(i; i < n; i++)
		sum += c[i];
}
void task223(int n)
{
	int sum = 0, tmp[3] = {};
	int i;
	for(i = 0; i + 3 - 1 < n; i += 3)
		tmp[0] += c[i], tmp[1] += c[i + 1], tmp[2] += c[i + 2];
	for(i; i < n; i++)
		sum += c[i];
	sum += tmp[0] + tmp[1] + tmp[2];
}
void task224(int n)
{
	int sum = 0, tmp[4] = {};
	int i;
	for(i = 0; i + 4 - 1 < n; i += 4)
		tmp[0] += c[i], tmp[1] += c[i + 1], 
		tmp[2] += c[i + 2], tmp[3] += c[i + 3];
	for(i; i < n; i++)
		sum += c[i];
	sum += tmp[0] + tmp[1] + tmp[2] + tmp[3];
}
void task225(int n)
{
	int sum = 0, tmp[5] = {};
	int i;
	for(i = 0; i + 5 - 1 < n; i += 5)
		tmp[0] += c[i], tmp[1] += c[i + 1], 
		tmp[2] += c[i + 2], tmp[3] += c[i + 3],
		tmp[4] += c[i + 4];
	for(i; i < n; i++)
		sum += c[i];
	sum += tmp[0] + tmp[1] + tmp[2] + tmp[3] + tmp[4];
}
void task226(int n)
{
	int sum = 0, tmp[6] = {};
	int i;
	for(i = 0; i + 6 - 1 < n; i += 6)
		tmp[0] += c[i], tmp[1] += c[i + 1], 
		tmp[2] += c[i + 2], tmp[3] += c[i + 3],
		tmp[4] += c[i + 4], tmp[5] += c[i + 5];
	for(i; i < n; i++)
		sum += c[i];
	sum += tmp[0] + tmp[1] + tmp[2] + tmp[3] + tmp[4] + tmp[5];
}
void task228(int n)
{
	int sum = 0, tmp[8] = {};
	int i;
	for(i = 0; i + 8 - 1 < n; i += 8)
		tmp[0] += c[i], tmp[1] += c[i + 1], 
		tmp[2] += c[i + 2], tmp[3] += c[i + 3],
		tmp[4] += c[i + 4], tmp[5] += c[i + 5],
		tmp[6] += c[i + 6], tmp[7] += c[i + 7];
	for(i; i < n; i++)
		sum += c[i];
	sum += tmp[0] + tmp[1] + tmp[2] + 
		   tmp[3] + tmp[4] + tmp[5] + tmp[6] + tmp[7];
}

void task11(int n)
{
	for(int i = 0; i < n; i++)
		p[i] = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			p[i] += b[j] * a[j][i];
}
void task12(int n)
{
	for(int i = 0; i < n; i++)
		p[i] = 0;
	for(int j = 0; j < n; j++)
		for(int i = 0; i < n; i++)
			p[i] += b[j] * a[j][i];
}

#include <sys/time.h>
double run(void (*f)(int), int arg, int times)
{
	struct timeval t1, t2;
  	gettimeofday(&t1, NULL);
	while(times--)
		f(arg);
	gettimeofday(&t2, NULL);
	double t = (t2.tv_sec-t1.tv_sec) * 1000000 + t2.tv_usec-t1.tv_usec;
	return t / 1000000;
}

const int tot = 100000000;
const int test_list1[7] = { 100,400,700,1000,2000,4000,5000 };
double r1[7][2];
const int test_list2[7] = { 1<<14,1<<15,1<<16,1<<17,1<<18,1<<19,1<<20 };
double r2[7][20];

void task310()
{
	int arg = test_list1[0];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				p[i] += b[j] * a[j][i];
	}
}
void task320()
{
	int arg = test_list1[0];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int j = 0; j < n; j++)
			for(int i = 0; i < n; i++)
				p[i] += b[j] * a[j][i];
	}	
}
void task311()
{
	int arg = test_list1[1];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				p[i] += b[j] * a[j][i];
	}
}
void task321()
{
	int arg = test_list1[1];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int j = 0; j < n; j++)
			for(int i = 0; i < n; i++)
				p[i] += b[j] * a[j][i];
	}		
}
void task312()
{
	int arg = test_list1[2];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				p[i] += b[j] * a[j][i];
	}
}
void task322()
{
	int arg = test_list1[2];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int j = 0; j < n; j++)
			for(int i = 0; i < n; i++)
				p[i] += b[j] * a[j][i];
	}	
}
void task313()
{
	int arg = test_list1[3];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				p[i] += b[j] * a[j][i];
	}
}
void task323()
{
	int arg = test_list1[3];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int j = 0; j < n; j++)
			for(int i = 0; i < n; i++)
				p[i] += b[j] * a[j][i];
	}	
}
void task314()
{
	int arg = test_list1[4];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				p[i] += b[j] * a[j][i];
	}
}
void task324()
{
	int arg = test_list1[4];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int j = 0; j < n; j++)
			for(int i = 0; i < n; i++)
				p[i] += b[j] * a[j][i];
	}	
}
void task315()
{
	int arg = test_list1[5];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				p[i] += b[j] * a[j][i];
	}
}
void task325()
{
	int arg = test_list1[5];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int j = 0; j < n; j++)
			for(int i = 0; i < n; i++)
				p[i] += b[j] * a[j][i];
	}	
}
void task316()
{
	int arg = test_list1[6];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				p[i] += b[j] * a[j][i];
	}
}
void task326()
{
	int arg = test_list1[6];
	int times = std::min(1000, tot / (arg*arg));
	int n = arg;
	while(times--)
	{
		for(int i = 0; i < n; i++)
			p[i] = 0;
		for(int j = 0; j < n; j++)
			for(int i = 0; i < n; i++)
				p[i] += b[j] * a[j][i];
	}		
}

void task1()
{
	for(int i = 0; i < 7; i++)
	{
		int arg = test_list1[i];
		int times = std::min(1000, tot / (arg*arg));
		r1[i][0] = run(task11, arg, times) / times;
		r1[i][1] = run(task12, arg, times) / times;
	}
}
void task2()
{
	for(int i = 0; i < 7; i++)
	{
		int arg = test_list2[i];
		int times = std::min(1000, tot / arg);
		r2[i][0] = run(task21, arg, times) / times;
		r2[i][1] = run(task22, arg, times) / times;
		r2[i][2] = run(task223, arg, times) / times;
		r2[i][3] = run(task224, arg, times) / times;
		r2[i][4] = run(task225, arg, times) / times;
		r2[i][5] = run(task226, arg, times) / times;
		r2[i][6] = run(task228, arg, times) / times;
		r2[i][7] = run(task231, arg, times) / times;
		r2[i][8] = run(task2316, arg, times) / times;
		r2[i][9] = run(task244, arg, times) / times;
		r2[i][10] = run(task248, arg, times) / times;
		r2[i][11] = run(task2416, arg, times) / times;
	}
}
void task3()
{
	task310(); task320();
	task311(); task321();
	task312(); task322();
	task313(); task323();
	task314(); task324();
	task315(); task325();
	task316(); task326();
}

void generate()
{
	srand(2011421);
	for(int i = 0; i < N1; i++)
		for(int j = 0; j < N1; j++)
			a[i][j] = rand() % 100;
	for(int i = 0; i < N2; i++)
		c[i] = rand() * 100000 + rand();
}

void print()
{
	printf("task1:\n");
	printf("n    alg1     alg2\n");
	for(int i = 0; i < 7; i++)
		printf("%d %lf %lf\n", test_list1[i], r1[i][0], r1[i][1]);
	printf("task2:\n");
	printf("n    alg1     alg2     alg23     alg24     alg25     alg26");
	printf("     alg28    alg31    alg316   alg44    alg48    alg416\n");
	for(int i = 0; i < 7; i++)
		printf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n", test_list2[i],
		 r2[i][0], r2[i][1], r2[i][2], r2[i][3], r2[i][4], r2[i][5], 
		 r2[i][6], r2[i][7], r2[i][8], r2[i][9], r2[i][10], r2[i][11]);
}

int main()
{
	generate();
	
	task1();
	task2();
	task3();
	
	print();
	
	return 0;
}
