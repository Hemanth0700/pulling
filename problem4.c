#include <stdio.h>

#define MAX_VISITORS 100

//Create a user defined variable

void addVisitor(VisitorTracker *tracker, int age)
{
   //write code here....
}

void displayStatistics(const VisitorTracker *tracker)
{
    //write code here to display the statistics of average....
}

int main(void)
{
    VisitorTracker tracker = {{0}, 0, 0};

    int sampleAges[] = {18, 25, 32, 40, 21};
    int n = sizeof(sampleAges) / sizeof(sampleAges[0]);

    for (int i = 0; i < n; i++)
        addVisitor(&tracker, sampleAges[i]);

    printf("Visitor ages: ");
    for (int i = 0; i < tracker.count; i++)
        printf("%d ", tracker.ages[i]);

    displayStatistics(&tracker);

    return 0;
}
