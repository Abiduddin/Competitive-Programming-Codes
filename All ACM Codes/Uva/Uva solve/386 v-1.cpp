#include <stdio.h>

int main()
{
    //freopen("aa1.txt","w",stdout);
    register int k;
    int a[230][4]={{6,3,4,5},{12,6,8,10},{18,2,12,16},{18,9,12,15},{19,3,10,18},{20,7,14,17},{24,12,16,20},{25,4,17,22},{27,3,18,24},{28,18,19,21},{29,11,15,27},{30,15,20,25},{36,4,24,32},{36,18,24,30},{38,6,20,36},{40,14,28,34},{41,2,17,40},{41,6,32,33},{42,21,28,35},{44,16,23,41},{45,5,30,40},{46,3,36,37},{46,27,30,37},{48,24,32,40},{50,8,34,44},{53,29,34,44},{54,6,36,48},{54,12,19,53},{54,27,36,45},{56,36,38,42},{57,9,30,54},{58,15,42,49},{58,22,30,54},{60,21,42,51},{60,30,40,50},{63,7,42,56},{66,33,44,55},{67,22,51,54},{69,36,38,61},{70,7,54,57},{71,14,23,70},{72,8,48,64},{72,34,39,65},{72,36,48,60},{75,12,51,66},{75,38,43,66},{76,12,40,72},{76,31,33,72},{78,39,52,65},{80,28,56,68},{81,9,54,72},{81,25,48,74},{82,4,34,80},{82,12,64,66},{82,19,60,69},{84,28,53,75},{84,42,56,70},{84,54,57,63},{85,50,61,64},{87,20,54,79},{87,26,55,78},{87,33,45,81},{87,38,48,79},{88,21,43,84},{88,25,31,86},{88,32,46,82},{89,17,40,86},{90,10,60,80},{90,25,38,87},{90,45,60,75},{90,58,59,69},{92,6,72,74},{92,54,60,74},{93,32,54,85},{95,15,50,90},{96,19,53,90},{96,48,64,80},{97,45,69,79},{99,11,66,88},{100,16,68,88},{100,35,70,85},{102,51,68,85},{103,12,31,102},{105,33,70,92},{106,58,68,88},{108,12,72,96},{108,13,51,104},{108,15,82,89},{108,24,38,106},{108,54,72,90},{110,29,75,96},{111,16,47,108},{112,72,76,84},{113,50,74,97},{114,18,60,108},{114,57,76,95},{115,3,34,114},{116,23,86,97},{116,30,84,98},{116,44,60,108},{117,13,78,104},{120,9,55,116},{120,42,84,102},{120,60,80,100},{121,49,84,102},{122,19,92,101},{123,6,51,120},{123,18,96,99},{123,44,51,118},{125,20,85,110},{126,14,84,112},{126,23,94,105},{126,63,84,105},{127,13,65,121},{129,38,57,124},{132,5,76,123},{132,48,69,123},{132,66,88,110},{133,21,70,126},{134,44,102,108},{134,86,95,97},{135,15,90,120},{137,44,73,128},{138,9,108,111},{138,69,92,115},{138,72,76,122},{138,81,90,111},{139,94,96,99},{140,14,108,114},{140,49,98,119},{140,90,95,105},{141,72,85,122},{142,28,46,140},{142,31,64,137},{144,16,96,128},{144,68,78,130},{144,72,96,120},{145,12,81,136},{145,55,75,135},{147,22,75,140},{150,24,102,132},{150,71,73,138},{150,75,100,125},{150,76,86,132},{151,46,47,148},{152,24,80,144},{152,62,66,144},{153,17,102,136},{156,65,87,142},{156,78,104,130},{159,3,121,131},{159,87,102,132},{160,56,112,136},{160,69,123,124},{162,18,108,144},{162,36,57,159},{162,50,96,148},{162,59,93,148},{162,81,108,135},{164,8,68,160},{164,24,128,132},{164,38,120,138},{164,69,99,146},{167,12,86,159},{168,56,106,150},{168,84,112,140},{168,108,114,126},{170,96,107,141},{170,100,122,128},{171,19,114,152},{171,27,90,162},{171,54,80,163},{171,107,108,136},{174,40,108,158},{174,45,126,147},{174,47,97,162},{174,52,110,156},{174,66,90,162},{174,76,96,158},{174,87,116,145},{175,28,119,154},{176,25,92,167},{176,42,86,168},{176,50,62,172},{176,64,92,164},{177,48,137,142},{178,34,80,172},{178,48,133,147},{179,17,57,177},{180,20,120,160},{180,50,76,174},{180,63,126,153},{180,90,120,150},{180,116,118,138},{181,108,109,150},{184,12,144,148},{184,108,120,148},{185,57,68,180},{185,68,113,166},{186,18,121,167},{186,64,108,170},{186,93,124,155},{187,58,131,160},{188,115,122,149},{189,21,46,188},{189,21,126,168},{190,30,100,180},{190,56,133,163},{191,39,146,156},{192,34,123,173},{192,38,106,180},{192,96,128,160},{193,25,68,190},{194,90,138,158},{196,126,133,147},{197,53,58,194},{198,22,132,176},{198,27,46,197},{198,73,135,170},{198,99,132,165},{199,6,127,180},{200,32,136,176},{200,70,140,170}};


    for(k=0;k<223;k++)
    printf("Cube = %d, Triple = (%d,%d,%d)\n",a[k][0],a[k][1],a[k][2],a[k][3]);



    return 0;
}
