#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<math.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
 
 
 
 
void caidan ();//菜单函数
void caidanchoice ();//菜单选择函数
void tianjia() ;//添加子函数
void chaxun();//查询子函数
void xiugai();//修改子函数
void shanchu();//删除子函数
void paixu();//排序子函数
void shuchu();//输出文件函数
void duqu();
 
 
 
int zhigongchachong (char *s);
int zhigongcount = 0;
 
 
void caidan () //菜单子函数 
{
	system("cls");
	printf("********************************************************\n");
	printf("*                   职工信息管理系统                   *\n");
    printf("********************************************************\n");	
	printf("*                   1.添加员工                         *\n");
	printf("*                   2.查询员工信息                     *\n");
	printf("*                   3.修改员工信息                     *\n");
	printf("*                   4.排序员工信息                     *\n");
	printf("*                   5.删除员工信息                     *\n");
	printf("*                   6.保存员工信息文件                 *\n");
	printf("*                   0.退出系统                         *\n");
	printf("********************************************************\n");
	printf("*                                                      *");	
	printf("\n********************************************************\n");
	printf("请选择功能：");
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
						printf("添加员工\n");	
						tianjia();		
						break;
					case 2 :
						system("cls");
						printf("查询员工\n");	
						chaxun();			
						break;
					case 3 :
						system("cls");
						printf("修改员工\n");	
						xiugai ();		
						break;
					case 4 :
						system("cls");
						printf("排序员工\n");
						paixu();
						break;
					case 5 :
						system("cls");
						printf("删除员工\n");
						shanchu();				
						break;
					case 6 :
						system("cls");
						printf("输出员工文件\n");
						shuchu();
						break;
					case 0 :
						system("cls");
						printf("三秒后退出系统\n");
			            printf("3...\n");
						sleep(1);
						printf("2...\n");
						sleep(1);
						printf("1...\n");
						exit(0);
						break;	
					case 7 :
						system("cls");
						printf("输入员工文件\n");
						duqu();
						break;						
											
					default :
						system("cls");
						printf("\n\n\n\t提示：没有这个选项！两秒后回到主菜单重新选择!\n\n\n\n");
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
	char zhigonghao[20]; //职工号
	char xingming[15] ; // 姓名
	char xingbie[8] ; // 性别
	char nianling[20] ; // 年龄
	char xueli[20];//学历
	char gongzi[20] ; // 工资
	char bumen[20];//部门
	char dianhua[16] ; // 电话
};
//存储员工数据
struct zhigong zhigonglist [200];
//记录员工个数
 
 
 
        int zhigongchachong (char *s) 
		{
		    int res = -1,chong;
		    for( chong = 0; chong < zhigongcount ; chong++) 
			{
		        if(strcmp(s, zhigonglist [chong]. zhigonghao )==0) { //如果用户名相等 
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
		printf("请输入职工号 ：");
		scanf("%s", zhigonglist [zhigongcount ] . zhigonghao);	
		
		
		        	int zhigongchachongR = zhigongchachong (zhigonglist [ zhigongcount] . zhigonghao);
		        	
			        if( zhigongchachongR >=0) 
					{ 
					system("cls");
			            printf("添加错误，该职工号已存在！三秒后返回主菜单\n");
			            			printf("3...\n");
									sleep(1);
									printf("2...\n");
									sleep(1);
									printf("1...\n");
								caidan();	 
			        }		
		
		printf("请输入姓名 ：");
		scanf("%s", zhigonglist [zhigongcount ] . xingming);			
		printf("请输入性别 ：");
		scanf("%s", zhigonglist [zhigongcount ] . xingbie);		
		printf("请输入年龄 ：");
		scanf("%s", zhigonglist [zhigongcount ] . nianling);		
		printf("请输入学历 ：");
		scanf("%s", zhigonglist [zhigongcount ] . xueli);		
		printf("请输入工资 ：");
		scanf("%s", zhigonglist [zhigongcount ] . gongzi);	
		printf("请输入部门 ：");
		scanf("%s", zhigonglist [zhigongcount ] . bumen);	
		printf("请输入电话 ：");
		scanf("%s", zhigonglist [zhigongcount ] . dianhua);	
		zhigongcount ++;
		printf("\n是否继续录入？(y/n):");
		getchar();
		scanf("%c", &tianjiaflag);		
	}					
			printf("\n*****************************\n");
			printf("录入完成,三秒后返回主菜单\n");
			printf("3...\n");
			sleep(1);
			printf("2...\n");
			sleep(1);
			printf("1...\n");
			caidan ();
}
 
void chaxun()
{
	
	char wenzi[40];//查询条件
	int chaxunflag;//查询标志位，选择按什么查询
	printf("0：全部输出\n");
	printf("1：按 职工号 查询\n");
	printf("2：按 姓名 查询\n");
	printf("3：按 性别 查询\n");
	printf("4：按 年龄 查询\n");
	printf("5：按 学历 查询\n");
	printf("6：按 工资 查询\n");
	printf("7：按 部门 查询\n");
	printf("8：按 电话 查询\n");
	printf("请输入选择：");
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
				printf("请输入筛选条件：");
				scanf("%s", wenzi);
			}
    system("cls");
	printf("\n%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n","[序号]" ,"职工号","姓名","性别","年龄","学历","工资","部门","电话" );	
	
	
		int i;
		for (i = 0; i <  zhigongcount ; i++) 	
		{
			if (     (chaxunflag == 0 && strcmp(zhigonglist[i].zhigonghao, "null") != 0  )
                     || (chaxunflag == 1 && strstr(zhigonglist [i].zhigonghao, wenzi) &&strcmp(zhigonglist[i].zhigonghao, "null") != 0)
			         || (chaxunflag == 2 && strstr(zhigonglist [i]. xingming, wenzi)&&strcmp(zhigonglist[i].xingming, "null") != 0) //
			         || (chaxunflag == 3 && strstr(zhigonglist [i]. xingbie, wenzi)&&strcmp(zhigonglist[i].xingbie, "null") != 0) 
			         || (chaxunflag == 4 && strstr(zhigonglist [i]. nianling, wenzi)&&strcmp(zhigonglist[i].nianling, "null") != 0) 
			         || (chaxunflag == 5 && strstr(zhigonglist [i]. xueli, wenzi)&&strcmp(zhigonglist[i].xueli, "null") != 0) //
			         || (chaxunflag == 6 && strstr(zhigonglist [i]. gongzi, wenzi)&&strcmp(zhigonglist[i].gongzi, "null") != 0) //根据
			         || (chaxunflag == 7 && strstr(zhigonglist [i]. bumen, wenzi)&&strcmp(zhigonglist[i].bumen, "null") != 0) //根据
			         || (chaxunflag == 8 && strstr(zhigonglist [i]. dianhua, wenzi)&&strcmp(zhigonglist[i].dianhua, "null") != 0) //根
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
		        char back;//判断是否返回菜单
				printf("\n查询完毕，输入Y确认返回主菜单:");
				getchar();
				scanf("%c", &back);	
				    if(back == 'y'||back == 'Y')
				    {		
				    caidan();
				    }		
				    else
					{
				    system("cls");
					printf("\n别的健没写操作，退出算了，三秒后退出程序");	
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
	printf("请输入您要修改的员工[序号]：");	    
	scanf("%d",&xiugaixuhao);	 
	if((xiugaixuhao >= 0 && xiugaixuhao <zhigongcount) && strcmp(zhigonglist[xiugaixuhao].zhigonghao, "null") != 0 ) 
	{
 
			        
 
		        	
			
			
			
			
			
			        printf("请输入姓名 ：");
			        scanf("%s",zhigonglist [ xiugaixuhao ] . xingming);
			
			        printf("请输入性别 ：");
			        scanf("%s",zhigonglist [ xiugaixuhao ] . xingbie);
			
			        printf("请输入年龄 ：");
			        scanf("%s",zhigonglist [ xiugaixuhao ] . nianling);
			
			        printf("请输入学历 ：");
			        scanf("%s",zhigonglist [ xiugaixuhao ] . xueli);
			
			        printf("请输入工资 ：");
			        scanf("%s",zhigonglist [ xiugaixuhao ] . gongzi);
			
			        printf("请输入部门 ：");
			        scanf("%s",zhigonglist [ xiugaixuhao] . bumen);
			        
			        printf("请输入电话 ：");
			        scanf("%s",zhigonglist [ xiugaixuhao ] . dianhua);    
					printf("\n修改员工信息完成!");    
			
	}
	else
	{
		printf("\n查询不到该[序号]员工!");
		
	}
			        char xiugaiback;//判断是否返回菜单
					printf("\n输入Y加回车确认返回主菜单:");
					getchar();
					scanf("%c", &xiugaiback);	
					    if(xiugaiback == 'y'||xiugaiback == 'Y')
					    {		
					    caidan();
					    }	
					    else
					    {
											    system("cls");
												printf("\n别的健没写操作，退出算了，三秒后退出程序");	
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
	printf("请输入要删除的员工[序号]：");
	int shanchunum;
	scanf("%d",&shanchunum);
		if(shanchunum >= zhigongcount||shanchunum <0 || strcmp(zhigonglist[shanchunum].zhigonghao, "null") == 0)
		{
		printf("\n没询不到该[序号]员工!");	
			
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
					printf("\n删除成功！");														
		
		}
			        char shanchuback;//判断是否返回菜单
					printf("\n输入Y加回车确认返回主菜单:");
					getchar();
					scanf("%c", &shanchuback);	
					    if(shanchuback == 'y'||shanchuback == 'Y')
					    {		
					    caidan();
					    }		
						else
						{
											    system("cls");
												printf("\n别的健没写操作，退出算了，三秒后退出程序");	
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
 
 printf("1.按职工号排序\n");
 printf("2.按姓名排序\n");
 printf("3.按性别排序\n");
 printf("4.按年龄排序\n");
 printf("5.按学历排序\n");
 printf("6.按工资排序\n");
 printf("7.按部门排序\n");
 printf("8.按电话排序\n");	
 printf("请输入选择：");	
 scanf("%d",&paixutiaojian);	
  printf("请选择1.升序2.降序：");
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
				printf("\n%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n","职工号","姓名","性别","年龄","学历","工资","部门","电话" );	
				
				
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
					printf("\n%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n","职工号","姓名","性别","年龄","学历","工资","部门","电话" );	
					
					
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
	
	
	
	
	
	
	
	
	
	
	
	
	
			        char paixuback;//判断是否返回菜单
					printf("\n排序完毕!输入Y加回车确认返回主菜单:");
					getchar();
					scanf("%c", &paixuback);	
					    if(paixuback == 'y'||paixuback == 'Y')
					    {		
					    caidan();
					    }	
					    else
					    {
					    				    system("cls");
											printf("\n别的健没写操作，退出算了，三秒后退出程序");	
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
	fp = fopen("职工信息.txt", "w+");
	fprintf(fp, "职工号          姓名           性别           年龄           学历           工资            部门           电话");
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
	
			        char shuchuback;//判断是否返回菜单
					printf("\n文件输出完毕，请在和本程序同一目录下寻找，输入Y加回车确认返回主菜单:");
					getchar();
					scanf("%c", &shuchuback);	
					    if(shuchuback == 'y'||shuchuback == 'Y')
					    {		
					    caidan();
					    }		
						    else
						    {
						    				    system("cls");
												printf("\n别的健没写操作，退出算了，三秒后退出程序");	
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
    if (NULL == (fp = fopen("职工信息.txt", "r"))) {
        return;
    }
 
for (int i = 0; i < 2; ++i) {
    char buffer[256];  // 假设一行不超过 256 个字符
    if (fgets(buffer, sizeof(buffer), fp) == NULL) {
        // 处理文件不足三行的情况
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
 			        char shuchuback;//判断是否返回菜单
 					printf("********************************************************\n");
 					printf("*               欢迎使用职工信息管理系统               *\n");
 					printf("********************************************************\n");
 					printf("****                 输入Y进入系统                  ****\n");
 					printf("********************************************************\n");
 					printf("输入：");
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
