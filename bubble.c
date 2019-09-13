//Algorithm description
//比较相邻的元素。如果第一个比第二个大，就交换它们两个；
//对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对，这样
//在最后的元素应该会是最大的数；
//针对所有的元素重复以上的步骤，除了最后一个；
//重复步骤1~3，直到排序完成
//时间复杂度O(n^2)
void Bubble_sort(int*array,int end)
{
	int i,j,temp;
	
	if(end==0)
		return;
	for(i=0;i<end-1;i++)
		for(j=0;j<end-i-1;j++)
			if(array[j+1]>array[j]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
	return;
}

