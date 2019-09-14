//Algorithm description
//通过一趟排序将待排记录分隔成独立的两部分，
//其中一部分记录的关键字均比另一部分的关键字小，
//则可分别对这两部分记录继续进行排序，以达到整个序列有序。
//时间复杂度O(n*logn)
void quick_sort(int*array,int begin,int end)
{
	if(begin>=end)
		return;

	int pivot=array[end];
	int i,j;

	i=begin,j=end-1;
	while(i<j)
	{
		while(array[i]<pivot)i++;
		while(array[j]>=pivot)j--;
		if(i<j)
		{
			int temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	}
	if(pivot<array[i])
	{
		array[end]=array[i];
		array[i]=pivot;
	}
	quick_sort(array,begin,i-1);
	quick_sort(array,i+1,end);
}

