//Algorithm description
//将初始待排序关键字序列(R1,R2….Rn)构建成大顶堆，此堆为初始的无序区；
//将堆顶元素R[1]与最后一个元素R[n]交换，此时得到新的无序区(R1,R2,……Rn-1)和
//新的有序区(Rn),且满足R[1,2…n-1]<=R[n]；
//由于交换后新的堆顶R[1]可能违反堆的性质，因此需要对当前无序区(R1,R2,……Rn-1)
//调整为新堆，然后再次将R[1]与无序区最后一个元素交换，
//得到新的无序区(R1,R2….Rn-2)和新的有序区(Rn-1,Rn)。
//不断重复此过程直到有序区的元素个数为n-1，则整个排序过程完成
//时间复杂度O(nlogn)
void heapify(int*array,int n,int i)
{
	if(i>=n)
		return;
	
	int lchild=2*i+1;
	int rchild=2*i+2;
	int max=i;

	if(array[max]<array[lchild&&lchild<n])
		max=lchild;
	if(array[max]<array[rchild]&&rchild<n)
		max=rchild;
	if(max!=i)
	{
		int temp=array[max];
		array[max]=array[i];
		array[i]=temp;
		heapify(array,n,max);
	}
}
void heap_sort(int*array,int n)
{
	int i;
	int temp;

	for(i=n/2-1;i>=0;i--)
		heapify(array,n,i);
	for(i=n-1;i>0;i--)
	{
		temp=array[0];
        	array[0]=array[i];
        	array[i]=temp;
		heapify(array,i,0);
	}
	return;

}
