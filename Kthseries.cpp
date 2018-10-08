/*
	Programming Language : CPP
	Program : To Find the kth series of a number eg 28 2 8 10 18 28,1 9 7 17 33 57 107 197 
	why: In CPP Object Oriented Concepts Play the Great Role and the concept of
	     pointers also makes it more secure and powerfull language.

*/
int main()
{
	int n=197,m,l,i,j,sum=0,k;
	int a[10];
	l=len(n);
	m=n;
	for(i=l-1;i>=0;i--)
	{
		a[i]=n%10;
		n=n/10;
	}
	k=0;
	j=l;
	while(sum<=m)
	{
		sum=0;
		for(i=k;i<j;i++)
		{
			sum+=a[i];
		}
		if(sum==m)
		{
			a[j]=sum;
			j++;
 			break;
			
		}
		a[j]=sum;
		k++;
		j++;
	}
	
	for(i=0;i<j;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
	
}
int len(int n)
{
	int sum=0;
	while(n>0)
	{
		n/=10;
		sum++;
	}
	return sum;
}
/*
  The program is made to check whether the no is kthseries no or not
  first the no is splitted tokenize according to the length and then the sum is
  calculated as per the length of the no and then further it is continued till the sum ends with
  original no count or less than that.
  

  first the no tokenzied are stored in an array and then line by line the sum is calculatred according to their sets
  and stored at the end of the array and at last the series is print from an array
  I also found the logic very critical so i tried to use the recurssion based approach but was not able to complete it using
  recurssion. 
  So i gone with approach of array and tried to reduce the code and remove all uneccessary code from it and build it again
*/

