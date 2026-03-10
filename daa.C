#include <stdio.h>
struct Job
{
    char id;
    int deadline;
    int profit;
};
void sortJobs(struct Job jobs[], int n)
{
    int i, j;
    struct Job temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(jobs[i].profit < jobs[j].profit)
            {
                temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }
}
void jobSequencing(struct Job jobs[], int n)
{
    int i, j, maxDeadline = 0;
    for(i = 0; i < n; i++)
        if(jobs[i].deadline > maxDeadline)
            maxDeadline = jobs[i].deadline;

    int slot[maxDeadline];
    char result[maxDeadline];
    for(i = 0; i < maxDeadline; i++)
        slot[i] = 0;

    int totalProfit = 0;

    for(i = 0; i < n; i++)
    {
        for(j = jobs[i].deadline - 1; j >= 0; j--)
        {
            if(slot[j] == 0)
            {
                slot[j] = 1;
                result[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }

    printf("Selected Jobs: ");
    for(i = 0; i < maxDeadline; i++)
        if(slot[i])
            printf("%c ", result[i]);

    printf("\nTotal Profit = %d", totalProfit);
}

int main()
{
    struct Job jobs[] =
    {
        {'A', 2, 100},
        {'B', 1, 50},
        {'C', 2, 75},
        {'D', 1, 80},
        {'E', 3, 90}
    };

    int n = sizeof(jobs) / sizeof(jobs[0]);

    sortJobs(jobs, n);
    jobSequencing(jobs, n);

    return 0;
}

