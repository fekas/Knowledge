//Algorithm description
//构建有序序列,对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。
//插入排序在实现上，通常采用in-place排序（即只需用到O(1)的额外空间的排序），
//因而在从后向前扫描过程中，需要反复把已排序元素逐步向后挪位，
//为最新元素提供插入空间。
//时间复杂度O(n^2)
void insert_sort(int*array,int end)
{
	if(end==0)
		return;
	int temp,i,j,m;

	for(i=0;i<end-1;i++)
	{
		if(array[i]<array[i+1])
		{
			temp=array[i+1];
			for(j=0;j<i+1;j++)
				if(temp>array[j])
				{
					for(m=i+1;m>=j;m--)
						array[m]=array[m-1];
					array[j]=temp;
					break;
				}
		}
	}
	return;
}
