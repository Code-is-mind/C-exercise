#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
class Product 
{
	private :
		int code;
		char name[20];
		int qty;
		float price;
	public :
	
		void Input()
		{
			cout<<"Input Code="; cin>>code;
			cin.ignore();
			cout<<"Input Name="; cin.getline(name,20);
			cout<<"Input Qty=";; cin>>qty;
			cout<<"Input Price="; cin>>price;
		}
		void Output()
		{
			cout<<code<<"\t"<<name<<"\t"<<qty<<"\t"<<price<<endl;
		}
		int Getcode()
		{
			return code;
		}
		char* GetName()
		{
			return name;
		}
		
};
int main()
{
	Product pro;
	fstream file;
	int i,n,op,b=0;
	do
	{
		cout<<"1.Write\n2.Read\n3.search\n4.Update\n5.Delete\n6.Insert\n7.Sort\n";
		cout<<"Choose one option:"; cin>>op;
		switch(op)
		{
			case 1:
				{
					cout<<"Input N="; cin>>n;
					file.open("PRODUCT.txt",ios::app);
					for(i=0;i<n;i++)
					{
						pro.Input();
						file.write((char*)&pro,sizeof(pro));
					}
					file.close();
				}break;
			case 2:
				{
					file.open("PRODUCT.txt",ios::in);
					while(file.read((char*)&pro,sizeof(pro)))
					{
						pro.Output();
					}
					file.close();
				}break;
			case 3:
				{
					int scode;
					char search[20];
					cin.ignore();
					cout<<"Input Name of Product to search:"; cin.getline(search,20);
//					cout<<"Input code product to search:";
//					cin>>scode;	
					file.open("PRODUCT.txt",ios::in);
					while(file.read((char*)&pro,sizeof(pro)))
					{
						if(strcmp(search,pro.GetName())==0)
						{
							pro.Output();
							b=1;
							break;
						}
						
					}
					file.close();
				}break;
			case 4:
				{
					fstream temp;
					Product pro1;	
					char search[20];
                    cin.ignore();
                    cout<<"Input Name of Product to search for Update:";
                    cin.getline(search,20);
                    file.open("PRODUCT.txt",ios::in);
                    temp.open("Temp.txt",ios::out);
                    while(file.read((char*)&pro,sizeof(pro)))
                    {
                        if(strcmp(search,pro.GetName())==0)
                        {
                            pro1.Input();
                            temp.write((char*)&pro1,sizeof(pro1));
                            b=1;
                        }
                        else
                        {
                            temp.write((char*)&pro,sizeof(pro));
                        }
                        
					}
					file.close();
					temp.close();
					remove("PRODUCT.txt");
					rename("Temp.txt","PRODUCT.txt");
				}break;
			case 5:
				{
					fstream temp;
					Product pro1;	
					char search[20];
					cin.ignore();
					cout<<"Input Name of Product to search for Update:"; 
					cin.getline(search,20);	
					file.open("PRODUCT.txt",ios::in);
					temp.open("Temp.txt",ios::out);
					while(file.read((char*)&pro,sizeof(pro)))
					{
						if(strcmp(search,pro.GetName())==0)
						{
						
							b=1;
						}
						else
						{
							temp.write((char*)&pro,sizeof(pro));
						}
						
					}
					file.close();
					temp.close();
					remove("PRODUCT.txt");
					rename("Temp.txt","PRODUCT.txt");
				}break;
			case 6:
				{
					fstream temp;
					Product pro1;	
					char search[20];
					cin.ignore();
					cout<<"Input Name of Product to search for Update:"; 
					cin.getline(search,20);	
					file.open("PRODUCT.txt",ios::in);
					temp.open("Temp.txt",ios::out);
					while(file.read((char*)&pro,sizeof(pro)))
					{
						if(strcmp(search,pro.GetName())==0)
						{
							pro1.Input();
						
							temp.write((char*)&pro1,sizeof(pro1));
							temp.write((char*)&pro,sizeof(pro));
							b=1;
						}
						else
						{
							temp.write((char*)&pro,sizeof(pro));
						}
						
					}
					file.close();
					temp.close();
					remove("PRODUCT.txt");
					rename("Temp.txt","PRODUCT.txt");
				}break;
			case 7:
				{
					int i,j,count;
					fstream temp;
					Product t,sort,Arr[10];
					file.open("PRODUCT.txt",ios::in);
					temp.open("Temp.txt",ios::out);
					while(file.read((char*)&pro,sizeof(pro)))
					{
						Arr[count]=pro;
						count++;
					}
					for(i=0;i<count;i++)
					{
						for(j=i+1;j<count;j++)
						{
							if(Arr[i].Getcode()>Arr[j].Getcode())
							{
								t=Arr[i];
								Arr[i]=Arr[j];
								Arr[j]=t;
							}
						}
						sort=Arr[i];
						temp.write((char*)&sort,sizeof(sort));
					}
					
					file.close();
					temp.close();
					remove("PRODUCT.txt");
					rename("Temp.txt","PRODUCT.txt");
					
				}break;
		
		}
		printf("Press Enter to continue..!\n");
	}while(getch()==13);
}
