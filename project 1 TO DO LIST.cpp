#include <iostream>
#include <windows.h>
using namespace std;
void print_tasks(string tasks[],int task_count)
{
    cout<<"Tasks to do:"<<endl;
    cout<<"-----------------------"<<endl;
    for(int i=0;i<task_count;i++)
    {
       cout<<"Task"<<i<<":"<<tasks[i]<<endl; 
    }
    cout<<"-----------------------"<<endl;
}

int main()
{
    system("color 2");
    string tasks[10]={""};
    int task_count=0;
    int option=-1;
    while(option!=0)
    {
        cout<<" To do list "<<endl;
        cout<<"1: To add new task"<<endl;
        cout<<"2: To view tasks"<<endl;
        cout<<"3: Delete task"<<endl;
        cout<<"0: Terminate a program"<<endl;
        cin>>option;
        switch(option)
        {
            case 1:
            {
                if(task_count>9)
                {
                    cout<<" Task list is full";
                }
                else
                {
                    cout<<"ENTER A NEW TASK:";
                    cin.ignore();
                    getline(cin,tasks[task_count]);
                    task_count++;
                }
                break;
            }
            case 2:
            {
                system("cls");
                print_tasks(tasks,task_count);
                break;
            }
            case 3:
            {
                int del_task=0;
                cout<<"ENTER A TASK TO DELETE";
                cin>>del_task;
                if(del_task<0||del_task>9)
                {
                    cout<<"enter invalid task number"<<endl;
                    break;
                }
                for(int i=del_task;i<task_count;i++)
                {
                    tasks[i]=tasks[i+1];
                }
                task_count--;
                break;
            }
            case 0:
            {
                cout<<"terminating the progrram--";
                break;
            }
            default:
            {
                cout<<"entered value is invalid"<<endl;
            }
        }
    }

}