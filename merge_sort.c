//Algorithm desicribe
//把长度为n的输入序列分成两个长度为n/2的子序列；
//对这两个子序列分别采用归并排序；
//将两个排序好的子序列合并成一个最终的排序序列
//时间复杂度O(nlogn)
void merge_sort(int *array,int begin,int end)
{
	if(end<=begin)
		return;

	int mid,i,j;

	mid=(begin+end)/2;
	merge_sort(array,begin,mid);
	merge_sort(array,mid+1,end);
	for(i=mid+1;i<=end;i++)
	{
		if(array[i]>array[mid])
		{
			int temp=array[i];
			for(j=begin;j<=mid;j++)
				if(temp>array[j])
				{
					for(int m=mid+1;m>=j;m--)
						array[m]=array[m-1];
					array[j]=temp;
					break;
				}
			mid++;
		}
		else
			break;
	}


}
