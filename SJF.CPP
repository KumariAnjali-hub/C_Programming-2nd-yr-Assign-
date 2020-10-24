// C++ program to implement Shortest Remaining
// Time First
//#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
//#include<stdbool.h>
//#include<iostream>
//using namespace std;

struct Process {
	int pid; // Process ID
	int bt; // Burst Time
	int art; // Arrival Time
};

// Function to find the waiting time for all
// processes
void findWaitingTime(Process proc[], int n,int wt[])
{
	int rt[10];
	 int check;
	// Copy the burst time into rt[]
	for (int i = 0; i < n; i++)
		rt[i] = proc[i].bt;

	int complete = 0, t = 0, minm = ;
	int shortest = 0, finish_time;
	check = 0;

	// Process until all processes gets
	// completed
	while (complete != n) {

		// Find process with minimum
		// remaining time among the
		// processes that arrives till the
		// current time`
		for (int j = 0; j < n; j++) {
			if ((proc[j].art <= t) &&
			(rt[j] < minm) && rt[j] > 0) {
				minm = rt[j];
				shortest = j;
				check = 1;
			}
		}

		if (check == 0) {
			t++;
			continue;
		}

		// Reduce remaining time by one
		rt[shortest]--;

		// Update minimum
		minm = rt[shortest];
		if (minm == 0)
			minm = ;

		// If a process gets completely
		// executed
		if (rt[shortest] == 0) {

			// Increment complete
			complete++;
			check = 0;

			// Find finish time of current
			// process
			finish_time = t + 1;

			// Calculate waiting time
			wt[shortest] = finish_time -
						proc[shortest].bt -
						proc[shortest].art;

			if (wt[shortest] < 0)
				wt[shortest] = 0;
		}
		// Increment time
		t++;
	}
}

// Function to calculate turn around time
void findTurnAroundTime(Process proc[], int n,
						int wt[], int tat[])
{
	// calculating turnaround time by adding
	// bt[i] + wt[i]
	for (int i = 0; i < n; i++)
		tat[i] = proc[i].bt + wt[i];
}

// Function to calculate average time
void findavgTime(Process proc[], int n)
{
	int wt[10], tat[10], total_wt = 0,total_tat = 0;

	// Function to find waiting time of all
	// processes
	findWaitingTime(proc, n, wt);

	// Function to find turn around time for
	// all processes
	findTurnAroundTime(proc, n, wt, tat);

	// Display processes along with all
	// details 
	printf( "Processes \t\tBurst time \t\tWaiting time \t\tTurn around time\n");

	// Calculate total waiting time and
	// total turnaround time
	for (int i = 0; i < n; i++) {
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i]; 
		printf( "" "\t proc[i].pid \t\t proc[i].bt \t\t wt[i]\t\t  tat[i]\n\n");
	}

	printf("\nAverage waiting time = (float)total_wt / (float)n");
	printf("\nAverage turn around time = (float)total_tat / (float)n");
}

// Driver code
int main()
{
	Process proc[] = { { 1, 6, 1 }, { 2, 8, 1 },
					{ 3, 7, 2 }, { 4, 3, 3 } };
	int n = sizeof(proc) / sizeof(proc[0]);

	findavgTime(proc, n);
	return 0;
}
