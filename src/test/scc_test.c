/*scc_test.cԴ�ļ�*/

/*********************************************************** 
 * ����:	��������ʽ����
 **********************************************************/
void expr_arithmetic_test()
{
	int a = 6, b = 2, c, d, e, f, g;
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	g = a % b;
	printf("%d + %d = %d\n",a,b,c);
	printf("%d - %d = %d\n",a,b,d);
	printf("%d * %d = %d\n",a,b,e);
	printf("%d / %d = %d\n",a,b,f);
	printf("%d %% %d = %d\n",a,b,g);
}

/*********************************************************** 
 * ����:	ָ���������
 **********************************************************/
void pointer_op_test()
{
	char 	*p1 = 0, *p2;
	short *p3 = 0, *p4;
	int  	*p5 = 0, *p6;
	
	p2 = p1 + 1;
	p4 = p3 + 1;
	p6 = p5 + 1;	
	printf("p1=%.8x, p2=%.8x\n",p1,p2);
	printf("p3=%.8x, p4=%.8x\n",p3,p4);
	printf("p5=%.8x, p6=%.8x\n",p5,p6);
}

/*********************************************************** 
 * ����:	�Ƚ��������
 **********************************************************/
void expr_cmp_test()
{
    int a, b,c;
        
    a = 123;
    b = 456;    
    printf("%d == %d = %d\n", a, a, a == a);
    printf("%d != %d = %d\n", a, a, a != a);

    printf("%d < %d = %d\n", a, b, a < b);
    printf("%d <= %d = %d\n", a, b, a <= b);
    printf("%d <= %d = %d\n", a, a, a <= a);
    printf("%d >= %d = %d\n", b, a, b >= a);
    printf("%d >= %d = %d\n", a, a, a >= a);
    printf("%d > %d = %d\n", b, a, b > a);
}

/*********************************************************** 
 * ����:	�������
 **********************************************************/
void array_test()
{
	int arr1[2];
	int arr2[2][2];
	
	arr1[0] = 100;
  arr1[1] = 200;
  
  arr2[0][0] = 10; 		   
  arr2[0][1] = 20;  
  arr2[1][0] = 30;
  arr2[1][1] = 40;
	
  printf("arr1[0] = %d, arr1[1] = %d\n", arr1[0], arr1[1]);
  printf("arr2[0][0]=%d, arr2[0][1]=%d\n", arr2[0][0], arr2[0][1]);
  printf("arr2[1][0]=%d, arr2[1][1]=%d\n", arr2[1][0], arr2[1][1]);
}

/*********************************************************** 
 * ����:	�����Ų���
 **********************************************************/
void plus_minus_test()
{
	int a = +7;
	int b = -9;
	
	printf("a = %d, b = %d\n", a, b);
}

/*********************************************************** 
 * ����:	�����Զ�ת������
 **********************************************************/
int cast_test()
{
	int c;
	short b;
	char a;
	
	a = 68;
	b = a;
	c = b;
	printf("a = %d, b = %d, c= %d\n", a, b, c);  
}


/*********************************************************** 
 * ����:	�ṹ�����
 **********************************************************/
struct point
{
	int x;
	int y;
};

void struct_test()
{
	struct point  pt;
	struct point *ppt;
	
	ppt = &pt;
	pt.x = 1024;
	pt.y = 768;
	printf("pt.x = %d, pt.y = %d\n",pt.x,pt.y);
	printf("ppt->x = %d, ppt->y = %d\n",ppt->x,ppt->y);	
}

/*********************************************************** 
 * ����:	�����ͳ��Ȳ���
 **********************************************************/
void sizeof_test()
{
	printf("sizeof(char)=%d,  sizeof(short)=%d, sizeof(int)=%d, 
					sizeof(struct point)=%d\n",
					sizeof(char),	    sizeof(short),	  sizeof(int), 		
					sizeof(struct point));
}

/*********************************************************** 
 * ����:	ǿ�ƶ������
 **********************************************************/
void struct_align_test()
{
	struct s1
	{
		char 	m1;
		short m2;
		int 	m3;
	};

	struct s2
	{
		char 	m1;
		short __align(1) m2;
		int 	__align(1) m3;
	};
	
	struct s3
	{
		char 	m1;
		short __align(4) m2;
		int 	__align(4) m3;
	};
	
	printf("sizeof(struct s1) = %d\n",sizeof(struct s1));
	printf("sizeof(struct s2) = %d\n",sizeof(struct s2));
	printf("sizeof(struct s3) = %d\n",sizeof(struct s3));
}

/*********************************************************** 
 * ����:	������䣬�������������
 **********************************************************/
void var_scope_test()
{
	int a = 10;
	
	printf("a=%d\n",a);
	{
		int a = 20;
		printf("a=%d\n",a);
		{
			int a = 30;
			printf("a=%d\n",a);
		}
		printf("a=%d\n",a);
	}	
	printf("a=%d\n",a);
}

/*********************************************************** 
 * ����:	if������
 **********************************************************/
void if_test()
{
	int a = 3, b = 5;
	
	if(a > b)
		printf("a(%d) > b(%d)\n", a, b);		
	else
		printf("a(%d) < b(%d)\n", a, b);
		
	if(50 > 30)
		printf("50 > 30\n");		
	else
		printf("50 < 30\n");			
}

/*********************************************************** 
 * ����:	for������,����continue���,break������
 **********************************************************/
void for_test()
{
	int i;
	
	for(i = 0; i < 10; i = i + 1)
	{
		if(i == 5)
			continue;
		if(i == 8)
			break;
		printf("i = %d\n",i);
	}
}

/*********************************************************** 
 * ����:	return������
 **********************************************************/
int return_test()
{
	return 2014;
}

/*********************************************************** 
 * ����:	������ֵ����
 **********************************************************/
int add(int x, int y)
{
	int z;
	
	z = x + y;
	return z;
}

/*********************************************************** 
 * ����:	��������ַ����
 **********************************************************/
void param_ptr(int *px)
{
	*px = 123;
}

/*********************************************************** 
 * ����:	��������ֵ����ʵ�β���
 **********************************************************/
int func_as_param_test()
{
	int sum, a = 1, b = 2, c;	
	
  sum = add(c = add(a,b),add(1,2));
	printf("sum = %d\n",sum);
}

/*********************************************************** 
 * ����:	�ɱ��������
 **********************************************************/
void __cdecl sum(int num,...)
{
	int sum = 0, i = 0;
	int *p1;
	int *end;
	
	p1 = &num;  
	end = p1 + num;
	for(p1 = p1 + 1; p1 <= end; p1 = p1 + 1)
	{
		sum = sum + *p1;
	}	
	printf("sum = %d\n",sum);
}

/*********************************************************** 
 * ����:	�ַ�����
 **********************************************************/
void char_test()
{
	char c1= 'E';
	char c2= 'GH';
	printf("c1 = %c, c2 = %c\n", c1, c2);
}

/*********************************************************** 
 * ����:	�ַ�������
 **********************************************************/
void string_test()
{
	char str1[] = "abc\n";
	char *str2  = "XYZ\n";
	printf(str1);
	printf(str2);
}

/*********************************************************** 
 * ����:	�ַ�������
 **********************************************************/
void characterset_test()
{
  printf("Hello�ۣ�����OK�ˣ������ᤷ�ɣ�\n");
  /*printf("�\�e�f\n");*/
}

/*********************************************************** 
 * ����:	ȫ�ֱ�������
 **********************************************************/
char g_char  	= 'a';
short g_short 	= 123;
int  g_int 	 	= 123456;
char g_str1[] = "SC���Լ�SCC���������Ϊ����ȫ��ı���ԭ����ѽ�ѧ������\n";
char *g_str2  = "Ҳ����ɣ�\n";
void global_var_test()
{
	printf("g_char='%c', g_short = %d, g_int = %d\n", 
	        g_char,g_short,g_int);
	printf(g_str1);
	printf(g_str2);
}


/*********************************************************** 
 * ����:	main����
 **********************************************************/
int  main()
{
	int n = 0;
	expr_arithmetic_test();
	pointer_op_test();
	expr_cmp_test();	
	array_test();
	plus_minus_test();
	cast_test();
	
	struct_test();
	sizeof_test();
	struct_align_test();
	
	var_scope_test();
	if_test();
	for_test();
	return_test();
	
	printf("add(3,5) = %d\n",add(3,5));
	param_ptr(&n);
	printf("n = %d\n",n);
	sum(5,1,2,3,4,5);
	
	char_test();
	string_test();
	characterset_test();
	
	global_var_test();
	
	return 0;
}

/*********************************************************** 
 * ����:	��ں���
 **********************************************************/
void  _entry()
{
	int ret;
	ret = main();
	exit(ret);
}