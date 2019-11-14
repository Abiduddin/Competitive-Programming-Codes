#include <stdio.h>

struct dmy
{
    unsigned month:4;
    unsigned day:5;
    unsigned year:7;
}date;

int main()
{
    date.month=9;
    date.day=12;
    date.year=16;

    printf("\nSomebody's birth date is %d-%d-%d.",date.day,date.month,date.year);
    return 0;

}
/*
struct dmy
{
    int month;
    int day;
    int year;
}date;

এখানে date ভেরিয়েব্ললে মেমোরি মোট ৯৬ বিট বা ৬ বাইট। কিন্ত date এ এত মেমোরি ব্যবহার হবে না।
 day. month এর মান কখন ৩১ ও ১২ এর থেকে বড় হবে না। তাই day এর জন্য ৫ বিট , month এর
 জন্য ৪ বিট এর বেশি লাগবে না। শুধু  year এর জন্য খুব বেশি হলে ৭ বিট লাগবে। অথ্যাত ১৬ বিট এর]
 বেশি লাগবে না। তাই bit field ব্যবহার করা হয়। */
