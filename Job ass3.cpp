#include <bits/stdc++.h>
using namespace std;
struct Job
{
char id;
int dead;
int profit;
};
bool comparison(Job a, Job b)
{
return (a.profit > b.profit);
}
void printJobScheduling(Job arr[], int n)
{
sort(arr, arr + n, comparison);
int result[n];
bool slot[n];
for (int i = 0; i < n; i++)
slot[i] = false;
for (int i = 0; i < n; i++)
{
for (int j = min(n, arr[i].dead) - 1; j >= 0; j--)
{
// Free slot found
if (slot[j] == false)
{
result[j] = i;
slot[j] = true;
break;
}
}
}
cout << "The selected jobs are: " << endl;
cout << "Job_Id "

<< "Deadline "
<< "Profit" << endl;
// Print the result
for (int i = 0; i < n; i++)
{
if (slot[i])
{
cout << arr[result[i]].id << " " << arr[result[i]].dead << " " << arr[result[i]].profit << " " << endl;
}
}
cout << endl;
// calculate the profit
int ans_profit = 0;
for (int i = 0; i < n; i++)
{
if (slot[i])
{
ans_profit = ans_profit + arr[result[i]].profit;
}
}
cout << "The Maximum Profit is: " << ans_profit << endl;
}
int main()
{
int n;
cout << "Enter the size of the array: ";
cin >> n;
cout << "Enter the details as follows: Job_Id , Deadline, Profit" << endl;
struct Job arr[n];
for (int i = 0; i < n; i++)
{
cout << endl;
cout << "Enter the Job_Id: ";
cin >> arr[i].id;
cout << endl
<< "Enter the deadline: ";
cin >> arr[i].dead;
cout << endl
<< "Enter the Profit: ";
cin >> arr[i].profit;
}
cout << "Entered details are: " << endl;

cout << "Job_Id "
<< "Deadline "
<< "Profit" << endl;
for (int i = 0; i < n; i++)
{
cout << arr[i].id << " " << arr[i].dead << " " << arr[i].profit << " " << endl;
}
cout << endl;
cout << "Following is maximum profit sequence of jobs " << endl;
cout << endl;
printJobScheduling(arr, n);
cout << endl;
return 0;
}