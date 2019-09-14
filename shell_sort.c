//Algorithm description
//希尔排序也是一种插入排序，它是简单插入排序经过改进之后的一个更高效的版本，
//也称为缩小增量排序，同时该算法是冲破O(n2）的第一批算法之一。
//它与插入排序的不同之处在于，它会优先比较距离较远的元素。
//希尔排序又叫缩小增量排序。希尔排序是把记录按下表的一定增量分组，
//对每组使用直接插入排序算法排序；
//随着增量逐渐减少，每组包含的关键词越来越多，
//当增量减至1时，整个文件恰被分成一组，算法便终止。
//时间复杂度O(n*log2n)
void shell_sort(int*array,int end)
{
	int i,j,gap;

	gap=end/2;

	while(gap)
	{
		for(i=0;i<gap;i++)
		{
			for(j=i;j<end-gap;j+=gap)
			{
				if(array[j+gap]>array[j])
				{
					int temp=array[j+gap];
					for(int k=i;k<j+gap;k+=gap)
						if(temp>array[k])
						{
							for(int m=j+gap;m>=j;m-=gap)
								array[m]=array[m-gap];
							array[k]=temp;
							break;
						}
				}
			}
		}
		gap/=2;
	}
}
