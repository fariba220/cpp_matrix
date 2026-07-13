#include <iostream>

using namespace std;

int main()
{
   int choice ;
   int matris1 [2][2];
   int matris2 [2][2];
   int jam [2][2];
   int zarb [2][2];



    do
   {
    cout <<"\n**************** MENU ****************\n";
    cout << "choice :"<<endl;
    cout << "1.enter 1 for daryafte_matris avval:" << endl;
    cout << "2.enter 2 for daryafte_matris dovvom:" << endl;
    cout << "3.enter 3 for jame_2matris" << endl;
    cout << "4.enter 4 for zarbe_2matris" << endl;
    cout << "0.exit\n";

    cin >> choice;


    switch (choice)
    {
    case 1:
        cout << "enter matris1:"<<endl;
        for (int i=0;i<2;i++)
        {
        for (int j=0;j<2;j++)
        {
        cin>>matris1 [i][j];
        }
        }
        break;
    case 2:
        cout << "Enter matris2:"<<endl;
        for (int i=0;i<2;i++)
        {
        for (int j=0;j<2;j++)
        {
        cin>>matris2 [i][j];
        }
        }
        break;
    case 3:
        cout<<"jame_2matris:"<<endl;
        for (int i=0;i<2;i++)
        {
        for (int j=0;j<2;j++)
        {
        jam[i][j]=matris1[i][j]+matris2[i][j];
        cout<<jam[i][j]<<"  ";
        }
        cout<<endl;
        }
        break;
     case 4:
        cout<<"zarbe_2matris:"<<endl;
        for (int i=0;i<2;i++)
        {
        for (int j=0;j<2;j++)
        {
            zarb[i][j]=0;
            for(int k=0;k<2;k++)
            {
          zarb[i][j]+=matris1[i][k]*matris2[k][j];
            }
           cout<<zarb[i][j]<< "  ";
        }
          cout<<endl;
        }
        break;
      case 0:
            cout << "exit:"<<endl;
        break;
        defult:
            cout << "try again!..."<<endl;
    }
   }while(choice !=0);




    return 0;
}
