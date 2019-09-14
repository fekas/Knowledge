//Algorithm description
//首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，
//然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
//以此类推，直到所有元素均排序完毕。
//时间复杂度O(n^2)
void select_sort(int*array,int end)
{
	int temp,flag,i,j;

	for(i=0;i<end-1;i++)
	{
		for(j=i,flag=i;j<end;j++)
		{
			if(array[j]>array[flag])
				flag=j;
		}
		temp=array[i];
		array[i]=array[flag];
		array[flag]=temp;
	}
}
