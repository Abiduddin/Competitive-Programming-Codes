#include <stdio.h>


int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int k;
    long int a[510]={0,1,3,7,11,20,26,38,50,67,77,105,117,142,172,204,220,265,283,335,379,420,442,518,558,607,661,737,765,870,900,980,1052,1117,1199,1331,1367,1440,1526,1666,1706,1859,1901,2025,2169,2258,2304,2496,2580,2725,2839,2987,3039,3228,3362,3566,3694,3807,3865,4165,4225,4346,4556,4748,4908,5157,5223,5419,5575,5856,5926,6274,6346,6491,6741,6961,7157,7454,7532,7884,8100,8261,8343,8779,8991,9160,9358,9690,9778,10255,10489,10757,10969,11154,11392,11856,11952,12253,12595,13015,13115,13508,13610,14006,14486,14695,14801,15341,15449,15906,16160,16672,16784,17225,17515,17855,18263,18496,18806,19586,19806,20047,20329,20693,20993,21686,21812,22260,22556,23101,23231,23939,24287,24552,25146,25670,25806,26343,26481,27277,27601,27882,28264,29128,29496,29785,30303,30739,30887,31712,31862,32450,32990,33655,34049,34893,35049,35362,35728,36576,37000,37729,37891,38375,39155,39484,39650,40782,41094,41815,42421,42929,43101,43782,44452,45284,45692,46045,46223,47555,47735,48528,48950,49666,50138,50867,51373,51929,52793,53602,53792,54880,55072,55457,56387,57255,57451,58576,58774,59874,60338,60739,61277,62393,62917,63326,64064,65056,65624,67169,67379,68007,68499,68924,69474,70878,71454,71887,72393,73685,74289,75162,75384,76616,77756,78205,78431,79683,79911,80896,82030,82938,83170,84511,85113,85813,86361,87410,87648,89568,89808,90589,91399,92123,93075,94044,94722,95694,96270,97295,97545,99477,100169,100674,101904,102928,103184,104201,104891,106431,107367,107888,108150,109986,110666,111843,112461,113257,113525,115442,115712,117024,118376,118921,120011,121535,121811,122364,123366,125426,125706,126819,127101,127945,129325,130614,131380,133444,133988,135237,135911,136779,137071,138772,139530,140694,142098,142691,143517,145817,146621,147222,147924,149396,150180,151953,152259,154135,154851,156188,156498,158686,158998,159623,161765,162705,163021,164278,165156,167140,167884,169317,170215,172267,173567,174216,174974,176266,177146,179651,179981,180969,182169,182834,183696,186480,186816,187921,188707,190743,191683,193672,194554,195910,197590,198279,198625,200557,200905,203090,204764,206764,207116,208517,209431,210491,212279,212992,213350,216770,217454,218175,219517,221753,222693,224142,224508,226300,227632,229233,230227,232295,232667,234372,236122,237606,238654,241435,241813,244097,244981,245742,246124,248620,250692,251461,252859,254015,254403,257388,258482,260750,261662,262447,263465,266597,266993,267786,269792,272512,272912,274505,275627,276831,279099,280916,282042,284934,285342,287119,288073,289301,290409,292830,293900,296284,297252,299165,299583,303843,304263,305104,306634,308310,310030,311719,312865,314141,316337,318202,318632,322088,322520,324465,326595,327895,329123,330860,331298,334638,336990,339023,339465,341941,343089,343978,345016,347896,348344,351989,353239,354587,355639,356544,359014,362258,362714,363627,365841,368621,369081,372714,373176,375448,377728,378657,379123,382855,384115,386156,387250,389118,390430,392311,394241,397197,398925,399878,400356,404916,406260,407221,409663,411907,413159,415832,416318,418250,419386,422487,422977,425725,427113,429394,432868,435300,436636,438613,439111,442011,443175,444176,444678,449634,450938,453267,455165,456681,457189};


    while(scanf("%ld",&k))
    {
        if(k==0)
            break;
        else
        {

            printf("%ld\n",a[k-1]);
        }
    }
    return 0;
}
