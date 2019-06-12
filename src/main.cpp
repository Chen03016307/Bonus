#include<cstdio>
using namespace std;

int main()
{
    char*gnuplotPath = "gnuplot.exe";
    FILE* gp = _popen(gnuplotPath,"w");
    fprintf(gp,"f(x) = a*x + b\n");
    fprintf(gp,"fit f(x) \"in.txt\" using 1:2 via a, b\n");
    fprintf(gp, "plot \"in.txt\", f(x)\n");
    fprintf(gp,"pause mouse\n");
    _pclose(gp);
}
