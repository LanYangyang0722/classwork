#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<math.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
 
 
 
 
void caidan ();//�˵�����
void caidanchoice ();//�˵�ѡ����
void tianjia() ;//����Ӻ���
void chaxun();//��ѯ�Ӻ���
void xiugai();//�޸��Ӻ���
void shanchu();//ɾ���Ӻ���
void paixu();//�����Ӻ���
void shuchu();//����ļ�����
void duqu();
 
 
 
int zhigongchachong (char *s);
int zhigongcount = 0;
 
 
void caidan () //�˵��Ӻ��� 
{
	system("cls");
	printf("********************************************************\n");
	printf("*                   ְ����Ϣ����ϵͳ                   *\n");
    printf("********************************************************\n");	
	printf("*                   1.���Ա��                         *\n");
	printf("*                   2.��ѯԱ����Ϣ                     *\n");
	printf("*                   3.�޸�Ա����Ϣ                     *\n");
	printf("*                   4.����Ա����Ϣ                     *\n");
	printf("*                   5.ɾ��Ա����Ϣ                     *\n");
	printf("*                   6.����Ա����Ϣ�ļ�                 *\n");
	printf("*                   0.�˳�ϵͳ                         *\n");
	printf("********************************************************\n");
	printf("*                                                      *");	
	printf("\n********************************************************\n");
	printf("��ѡ���ܣ�");
	caidanchoice();
}
void caidanchoice ()
{
        int choice;
		scanf("%d", &choice);	
		switch (choice)
				{
					case 1 :
						system("cls");
						printf("���Ա��\n");	
						tianjia();		
						break;
					case 2 :
						system("cls");
						printf("��ѯԱ��\n");	
						chaxun();			
						break;
					case 3 :
						system("cls");
						printf("�޸�Ա��\n");	
						xiugai ();		
						break;
					case 4 :
						system("cls");
						printf("����Ա��\n");
						paixu();
						break;
					case 5 :
						system("cls");
						printf("ɾ��Ա��\n");
						shanchu();				
						break;
					case 6 :
						system("cls");
						printf("���Ա���ļ�\n");
						shuchu();
						break;
					case 0 :
						system("cls");
						printf("������˳�ϵͳ\n");
			            printf("3...\n");
						sleep(1);
						printf("2...\n");
						sleep(1);
						printf("1...\n");
						exit(0);
						break;	
					case 7 :
						system("cls");
						printf("����Ա���ļ�\n");
						duqu();
						break;						
											
					default :
						system("cls");
						printf("\n\n\n\t��ʾ��û�����ѡ������ص����˵�����ѡ��!\n\n\n\n");
						sleep(1);
						printf("2...\n");
						sleep(1);
						printf("1...\n");
						caidan();
						break;
				}		
}
 
 
 
 
 
 
struct zhigong
{
	char zhigonghao[20]; //ְ����
	char xingming[15] ; // ����
	char xingbie[8] ; // �Ա�
	char nianling[20] ; // ����
	char xueli[20];//ѧ��
	char gongzi[20] ; // ����
	char bumen[20];//����
	char dianhua[16] ; // �绰
};
//�洢Ա������
struct zhigong zhigonglist [200];
//��¼Ա������
 
 
 
        int zhigongchachong (char *s) 
		{
		    int res = -1,chong;
		    for( chong = 0; chong < zhigongcount ; chong++) 
			{
		        if(strcmp(s, zhigonglist [chong]. zhigonghao )==0) { //����û������ 
		            res = chong;
		            break;
		        }
		    }
		    return res;
		}
 
 
 
 
void tianjia()
{
	
	char tianjiaflag = 'y';
	while(tianjiaflag == 'y')
	{
		printf("������ְ���� ��");
		scanf("%s", zhigonglist [zhigongcount ] . zhigonghao);	
		
		
		        	int zhigongchachongR = zhigongchachong (zhigonglist [ zhigongcount] . zhigonghao);
		        	
			        if( zhigongchachongR >=0) 
					{ 
					system("cls");
			            printf("��Ӵ��󣬸�ְ�����Ѵ��ڣ�����󷵻����˵�\n");
			            			printf("3...\n");
									sleep(1);
									printf("2...\n");
									sleep(1);
									printf("1...\n");
								caidan();	 
			        }		
		
		printf("���������� ��");
		scanf("%s", zhigonglist [zhigongcount ] . xingming);			
		printf("�������Ա� ��");
		scanf("%s", zhigonglist [zhigongcount ] . xingbie);		
		printf("���������� ��");
		scanf("%s", zhigonglist [zhigongcount ] . nianling);		
		printf("������ѧ�� ��");
		scanf("%s", zhigonglist [zhigongcount ] . xueli);		
		printf("�����빤�� ��");
		scanf("%s", zhigonglist [zhigongcount ] . gongzi);	
		printf("�����벿�� ��");
		scanf("%s", zhigonglist [zhigongcount ] . bumen);	
		printf("������绰 ��");
		scanf("%s", zhigonglist [zhigongcount ] . dianhua);	
		zhigongcount ++;
		printf("\n�Ƿ����¼�룿(y/n):");
		getchar();
		scanf("%c", &tianjiaflag);		
	}					
			printf("\n*****************************\n");
			printf("¼�����,����󷵻����˵�\n");
			printf("3...\n");
			sleep(1);
			printf("2...\n");
			sleep(1);
			printf("1...\n");
			caidan ();
}
 
void chaxun()
{
	
	char wenzi[40];//��ѯ����
	int chaxunflag;//��ѯ��־λ��ѡ��ʲô��ѯ
	printf("0��ȫ�����\n");
	printf("1���� ְ���� ��ѯ\n");
	printf("2���� ���� ��ѯ\n");
	printf("3���� �Ա� ��ѯ\n");
	printf("4���� ���� ��ѯ\n");
	printf("5���� ѧ�� ��ѯ\n");
	printf("6���� ���� ��ѯ\n");
	printf("7���� ���� ��ѯ\n");
	printf("8���� �绰 ��ѯ\n");
	printf("������ѡ��");
	scanf("%d", &chaxunflag);	
		if 
		    (      chaxunflag == 1 
				|| chaxunflag == 2 
				|| chaxunflag == 3 
				|| chaxunflag == 4 
				|| chaxunflag == 5 
				|| chaxunflag == 6 
				|| chaxunflag == 7 
				|| chaxunflag == 8 
            ) 
			{
				printf("������ɸѡ������");
				scanf("%s", wenzi);
			}
    system("cls");
	printf("\n%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n","[���]" ,"ְ����","����","�Ա�","����","ѧ��","����","����","�绰" );	
	
	
		int i;
		for (i = 0; i <  zhigongcount ; i++) 	
		{
			if (     (chaxunflag == 0 && strcmp(zhigonglist[i].zhigonghao, "null") != 0  )
                     || (chaxunflag == 1 && strstr(zhigonglist [i].zhigonghao, wenzi) &&strcmp(zhigonglist[i].zhigonghao, "null") != 0)
			         || (chaxunflag == 2 && strstr(zhigonglist [i]. xingming, wenzi)&&strcmp(zhigonglist[i].xingming, "null") != 0) //
			         || (chaxunflag == 3 && strstr(zhigonglist [i]. xingbie, wenzi)&&strcmp(zhigonglist[i].xingbie, "null") != 0) 
			         || (chaxunflag == 4 && strstr(zhigonglist [i]. nianling, wenzi)&&strcmp(zhigonglist[i].nianling, "null") != 0) 
			         || (chaxunflag == 5 && strstr(zhigonglist [i]. xueli, wenzi)&&strcmp(zhigonglist[i].xueli, "null") != 0) //
			         || (chaxunflag == 6 && strstr(zhigonglist [i]. gongzi, wenzi)&&strcmp(zhigonglist[i].gongzi, "null") != 0) //����
			         || (chaxunflag == 7 && strstr(zhigonglist [i]. bumen, wenzi)&&strcmp(zhigonglist[i].bumen, "null") != 0) //����
			         || (chaxunflag == 8 && strstr(zhigonglist [i]. dianhua, wenzi)&&strcmp(zhigonglist[i].dianhua, "null") != 0) //��
			   )			
				printf("\n %-10d%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s ",
                       i,
				       zhigonglist[i].zhigonghao,
				       zhigonglist[i].xingming,
				       zhigonglist[i].xingbie,
				       zhigonglist[i].nianling,
				       zhigonglist[i].xueli,
				       zhigonglist[i].gongzi,
				       zhigonglist[i].bumen,
				       zhigonglist[i].dianhua);	
				   		
			
		}
		        char back;//�ж��Ƿ񷵻ز˵�
				printf("\n��ѯ��ϣ�����Yȷ�Ϸ������˵�:");
				getchar();
				scanf("%c", &back);	
				    if(back == 'y'||back == 'Y')
				    {		
				    caidan();
				    }		
				    else
					{
				    system("cls");
					printf("\n��Ľ�ûд�������˳����ˣ�������˳�����");	
								printf("3...\n");
								sleep(1);
								printf("2...\n");
								sleep(1);
								printf("1...\n");
								exit(0);	
					}
	
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
void xiugai ()
{
	int xiugaixuhao = 10086;
	printf("��������Ҫ�޸ĵ�Ա��[���]��");	    
	scanf("%d",&xiugaixuhao);	 
	if((xiugaixuhao >= 0 && xiugaixuhao <zhigongcount) && strcmp(zhigonglist[xiugaixuhao].zhigonghao, "null") != 0 ) 
	{
 
			        
 
		        	
			
			
			
			
			
			        printf("���������� ��");
			        scanf("%s",zhigonglist [ xiugaixuhao ] . xingming);
			
			        printf("�������Ա� ��");
			        scanf("%s",zhigonglist [ xiugaixuhao ] . xingbie);
			
			        printf("���������� ��");
			        scanf("%s",zhigonglist [ xiugaixuhao ] . nianling);
			
			        printf("������ѧ�� ��");
			        scanf("%s",zhigonglist [ xiugaixuhao ] . xueli);
			
			        printf("�����빤�� ��");
			        scanf("%s",zhigonglist [ xiugaixuhao ] . gongzi);
			
			        printf("�����벿�� ��");
			        scanf("%s",zhigonglist [ xiugaixuhao] . bumen);
			        
			        printf("������绰 ��");
			        scanf("%s",zhigonglist [ xiugaixuhao ] . dianhua);    
					printf("\n�޸�Ա����Ϣ���!");    
			
	}
	else
	{
		printf("\n��ѯ������[���]Ա��!");
		
	}
			        char xiugaiback;//�ж��Ƿ񷵻ز˵�
					printf("\n����Y�ӻس�ȷ�Ϸ������˵�:");
					getchar();
					scanf("%c", &xiugaiback);	
					    if(xiugaiback == 'y'||xiugaiback == 'Y')
					    {		
					    caidan();
					    }	
					    else
					    {
											    system("cls");
												printf("\n��Ľ�ûд�������˳����ˣ�������˳�����");	
															printf("3...\n");
															sleep(1);
															printf("2...\n");
															sleep(1);
															printf("1...\n");
															exit(0);
						}
	
}
 
 
void shanchu()
{	
	printf("������Ҫɾ����Ա��[���]��");
	int shanchunum;
	scanf("%d",&shanchunum);
		if(shanchunum >= zhigongcount||shanchunum <0 || strcmp(zhigonglist[shanchunum].zhigonghao, "null") == 0)
		{
		printf("\nûѯ������[���]Ա��!");	
			
		}
		else 		
		{
			strcpy(zhigonglist[shanchunum].zhigonghao, "null");
			strcpy(zhigonglist[shanchunum].xingming, "null");
			strcpy(zhigonglist[shanchunum].xingbie, "null");
			strcpy(zhigonglist[shanchunum].nianling, "null");
			strcpy(zhigonglist[shanchunum].xueli, "null");
			strcpy(zhigonglist[shanchunum].gongzi, "null");
			strcpy(zhigonglist[shanchunum].bumen, "null");
			strcpy(zhigonglist[shanchunum].dianhua, "null");			
					printf("\nɾ���ɹ���");														
		
		}
			        char shanchuback;//�ж��Ƿ񷵻ز˵�
					printf("\n����Y�ӻس�ȷ�Ϸ������˵�:");
					getchar();
					scanf("%c", &shanchuback);	
					    if(shanchuback == 'y'||shanchuback == 'Y')
					    {		
					    caidan();
					    }		
						else
						{
											    system("cls");
												printf("\n��Ľ�ûд�������˳����ˣ�������˳�����");	
															printf("3...\n");
															sleep(1);
															printf("2...\n");
															sleep(1);
															printf("1...\n");
															exit(0);
							
						}	
		
}
 
 
 
void paixu()
{
 int p1,p2,paixutiaojian,SJ;
 
 printf("1.��ְ��������\n");
 printf("2.����������\n");
 printf("3.���Ա�����\n");
 printf("4.����������\n");
 printf("5.��ѧ������\n");
 printf("6.����������\n");
 printf("7.����������\n");
 printf("8.���绰����\n");	
 printf("������ѡ��");	
 scanf("%d",&paixutiaojian);	
  printf("��ѡ��1.����2.����");
  scanf("%d",&SJ);
  
  if(SJ ==  1)
  {
  
	 for (p1 = zhigongcount-1;p1>0;p1--)	
	 {
	 	for( p2 = 0; p2 < p1; p2++)
	 	{
		if
			(0
			|| (paixutiaojian == 1 && strcmp(zhigonglist [p2]. zhigonghao , zhigonglist [p2+1]. zhigonghao)>0)
			|| (paixutiaojian == 2 && strcmp(zhigonglist [p2]. xingming , zhigonglist [p2+1]. xingming)>0)
			|| (paixutiaojian == 3 && strcmp(zhigonglist [p2]. xingbie , zhigonglist [p2+1]. xingbie)>0)
			|| (paixutiaojian == 4 && strcmp(zhigonglist [p2]. nianling , zhigonglist [p2+1]. nianling)>0)
			|| (paixutiaojian == 5 && strcmp(zhigonglist [p2]. xueli , zhigonglist [p2+1]. xueli)>0)
			|| (paixutiaojian == 6 && strcmp(zhigonglist [p2]. gongzi , zhigonglist [p2+1]. gongzi)>0)
			|| (paixutiaojian == 7 && strcmp(zhigonglist [p2]. bumen , zhigonglist [p2+1]. bumen)>0)
			|| (paixutiaojian == 8 && strcmp(zhigonglist [p2]. dianhua , zhigonglist [p2+1]. dianhua)>0)
			) 	
			
			{
				
				struct zhigong ZG = zhigonglist [p2];
				zhigonglist [p2] = zhigonglist [p2+1];
				zhigonglist [p2+1]= ZG;
			}
			
					 	
		}
	 }
	        int p3;
	        system("cls");
				printf("\n%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n","ְ����","����","�Ա�","����","ѧ��","����","����","�绰" );	
				
				
						for (p3 = 0; p3 <  zhigongcount ; p3++) 	
						{
				if(strcmp(zhigonglist[p3].zhigonghao, "null") != 0)
				{
								printf("\n %-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s ",
				                      
								       zhigonglist[p3].zhigonghao,
								       zhigonglist[p3].xingming,
								       zhigonglist[p3].xingbie,
								       zhigonglist[p3].nianling,
								       zhigonglist[p3].xueli,
								       zhigonglist[p3].gongzi,
								       zhigonglist[p3].bumen,
								       zhigonglist[p3].dianhua);	
				}
				
						}
	
	
	
  }else 
  
  
	
	  {
	  
		 for (p1 = zhigongcount-1;p1>0;p1--)	
		 {
		 	for( p2 = 0; p2 < p1; p2++)
		 	{
			if
				(0
				|| (paixutiaojian == 1 && strcmp(zhigonglist [p2]. zhigonghao , zhigonglist [p2+1]. zhigonghao)<0)
				|| (paixutiaojian == 2 && strcmp(zhigonglist [p2]. xingming , zhigonglist [p2+1]. xingming)<0)
				|| (paixutiaojian == 3 && strcmp(zhigonglist [p2]. xingbie , zhigonglist [p2+1]. xingbie)<0)
				|| (paixutiaojian == 4 && strcmp(zhigonglist [p2]. nianling , zhigonglist [p2+1]. nianling)<0)
				|| (paixutiaojian == 5 && strcmp(zhigonglist [p2]. xueli , zhigonglist [p2+1]. xueli)<0)
				|| (paixutiaojian == 6 && strcmp(zhigonglist [p2]. gongzi , zhigonglist [p2+1]. gongzi)<0)
				|| (paixutiaojian == 7 && strcmp(zhigonglist [p2]. bumen , zhigonglist [p2+1]. bumen)<0)
				|| (paixutiaojian == 8 && strcmp(zhigonglist [p2]. dianhua , zhigonglist [p2+1]. dianhua)<0)
				) 	
				
				{
					
					struct zhigong ZG = zhigonglist [p2];
					zhigonglist [p2] = zhigonglist [p2+1];
					zhigonglist [p2+1]= ZG;
				}
				
						 	
			}
		 }
		        int p3;
		        system("cls");
					printf("\n%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n","ְ����","����","�Ա�","����","ѧ��","����","����","�绰" );	
					
					
							for (p3 = 0; p3 <  zhigongcount ; p3++) 	
							{
					if(strcmp(zhigonglist[p3].zhigonghao, "null") != 0)
					{
									printf("\n %-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s ",
					                      
									       zhigonglist[p3].zhigonghao,
									       zhigonglist[p3].xingming,
									       zhigonglist[p3].xingbie,
									       zhigonglist[p3].nianling,
									       zhigonglist[p3].xueli,
									       zhigonglist[p3].gongzi,
									       zhigonglist[p3].bumen,
									       zhigonglist[p3].dianhua);	
					}
					
							}
		
		
		
	  }
	
	
	
	
	
	
	
	
	
	
	
	
	
			        char paixuback;//�ж��Ƿ񷵻ز˵�
					printf("\n�������!����Y�ӻس�ȷ�Ϸ������˵�:");
					getchar();
					scanf("%c", &paixuback);	
					    if(paixuback == 'y'||paixuback == 'Y')
					    {		
					    caidan();
					    }	
					    else
					    {
					    				    system("cls");
											printf("\n��Ľ�ûд�������˳����ˣ�������˳�����");	
														printf("3...\n");
														sleep(1);
														printf("2...\n");
														sleep(1);
														printf("1...\n");
														exit(0);
					    }
}
 
 
 
void shuchu()
{
	FILE *fp = NULL;
	int o;
	fp = fopen("ְ����Ϣ.txt", "w+");
	fprintf(fp, "ְ����          ����           �Ա�           ����           ѧ��           ����            ����           �绰");
	    for( o = 0; o< zhigongcount ; o++) {
	    	if(strcmp(zhigonglist[o].zhigonghao, "null") != 0)
			{
	        fprintf(fp, "\n\n%-15s%-15s%-15s%-15s%-15s%-15s%-15s%-15s",
	                					       zhigonglist[o].zhigonghao,
										       zhigonglist[o].xingming,
										       zhigonglist[o].xingbie,
										       zhigonglist[o].nianling,
										       zhigonglist[o].xueli,
										       zhigonglist[o].gongzi,
										       zhigonglist[o].bumen,
										       zhigonglist[o].dianhua);
	    	}
	    }
	
	fclose(fp);
	
			        char shuchuback;//�ж��Ƿ񷵻ز˵�
					printf("\n�ļ������ϣ����ںͱ�����ͬһĿ¼��Ѱ�ң�����Y�ӻس�ȷ�Ϸ������˵�:");
					getchar();
					scanf("%c", &shuchuback);	
					    if(shuchuback == 'y'||shuchuback == 'Y')
					    {		
					    caidan();
					    }		
						    else
						    {
						    				    system("cls");
												printf("\n��Ľ�ûд�������˳����ˣ�������˳�����");	
															printf("3...\n");
															sleep(1);
															printf("2...\n");
															sleep(1);
															printf("1...\n");
															exit(0);
						    }
	
}
 
void duqu() 
{
    FILE *fp = NULL;
    if (NULL == (fp = fopen("ְ����Ϣ.txt", "r"))) {
        return;
    }
 
for (int i = 0; i < 2; ++i) {
    char buffer[256];  // ����һ�в����� 256 ���ַ�
    if (fgets(buffer, sizeof(buffer), fp) == NULL) {
        // �����ļ��������е����
        fclose(fp);
        return;
    }
}
 
 
 
    int d = 0;
    while (fscanf(fp, "%15s%15s%15s%15s%15s%15s%15s%15s",
                  zhigonglist[d].zhigonghao,
                  zhigonglist[d].xingming,
                  zhigonglist[d].xingbie,
                  zhigonglist[d].nianling,
                  zhigonglist[d].xueli,
                  zhigonglist[d].gongzi,
                  zhigonglist[d].bumen,
                  zhigonglist[d].dianhua) != EOF) {
        d++;
    }
zhigongcount = d;
    fclose(fp);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
 			        char shuchuback;//�ж��Ƿ񷵻ز˵�
 					printf("********************************************************\n");
 					printf("*               ��ӭʹ��ְ����Ϣ����ϵͳ               *\n");
 					printf("********************************************************\n");
 					printf("****                 ����Y����ϵͳ                  ****\n");
 					printf("********************************************************\n");
 					printf("���룺");
 					getchar();
 					scanf("%c", &shuchuback);	
 					    if(shuchuback == 'y'||shuchuback == 'Y')
 					    {		
 					    caidan();
 					    }
 
    
    
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main ()
{	
   duqu() ;
   caidan();	
}
