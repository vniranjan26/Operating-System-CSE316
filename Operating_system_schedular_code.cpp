#include<stdio.h> 
#include<iostream>
#include <iostream> 
#include<stdlib.h>
	int size,arival_time[100],bust_time[100],completion_time[100],waiting_time[100],trunaround_time[100],remanning_bt[100],total_time_quantam=0,read_queue[100];
	double avg_trunaround_time=0,avg_waiting_time=0;
    int current_time,Remening_proc=size,indicator,time_quantam_i1,time_quantam_i2,time_quantam_itration,remmaning_process;
int main() 
{
	using namespace std;
    cout<<"Enter the number of process :";
    cin>>size;
    cout<<"\n\nEnter the arrival time and burst time of the processes\n";
    for(int process_no=0;process_no<size;process_no++)
    {
    	cout<<"\nProcess P"<<process_no+1<<"\n";
		cout<<"\tArrival time = "; 
		cin>>arival_time[process_no];
		cout<<"\tBurst time = "; 
		cin>>bust_time[process_no]; 
		remanning_bt[process_no]=bust_time[process_no];
		total_time_quantam+=bust_time[process_no];
	}
	system("CLS");
	cout<<"The details of time quantum are as follows:\n";
	cout<<"\nThe time quantum for first Itration is 3.\n";
	cout<<"The time quantum for first Itration is 6.\n"; 
	cout<<"After second itration the Shortest job will assign CPU.\n\n";
	time_quantam_i1=3;
	time_quantam_i2=6;
	time_quantam_itration=1;
	current_time=0;
	remmaning_process=size;
	
	
	for(int Process_no=0;Process_no<remmaning_process;Process_no++)
	{
		int min =remanning_bt[0];
		int i = 0,j=0;
	for (i; i < size; i++)
    {
        if (min > remanning_bt[Process_no] && current_time>arival_time[Process_no])
			{
				min = remanning_bt[Process_no];
			}
  	}
    	
   
    	
	}
	
	
	cout<<"\nProcess\t\tArival time\tBurst time\tComplection time\tTurnaround Time\t\twaiting time";
    for(int i=0;i<size;i++)
    {
        "\nP%d\t\t\t%d\t\t\t%d\t\t\t%d",
        cout<<"\nP"<<i+1<<"\t\t"<<arival_time[i]<<"\t\t"<<bust_time[i]<<"\t\t"<<completion_time[i]<<"\t\t\t"<<trunaround_time[i]<<"\t\t\t"<<waiting_time[i];
    }
    for(int k=0;k<size;k++)
    {
    	avg_waiting_time+=waiting_time[k];
    	avg_trunaround_time+=trunaround_time[k];
	}

}
