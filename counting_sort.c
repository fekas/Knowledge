//Algorithm description
//找出待排序的数组中最大和最小的元素；
//统计数组中每个值为i的元素出现的次数，存入数组C的第i项；
//对所有的计数累加（从C中的第一个元素开始，每一项和前一项相加）；
//反向填充目标数组：将每个元素i放在新数组的第C(i)项，每放一个元素就将C(i)减去1
//时间复杂度O(n+k)
void counting_sort(int*array,int end)
{
    int max,min,i,j;
    int*ptr;

    min=max=array[0];

    for(i=0;i<end;i++)
    {
        min=(min<array[i])?min:array[i];
        max=(max>array[i])?max:array[i];
    }

    ptr=(int*)malloc(sizeof(int)*(max-min+1));

    for(i=0;i<end;i++)
    {
        ptr[array[i]-min]++;
    }
    for(i=0,j=0;i<max-min+1;i++)
    {
        while(ptr[i]--)
            array[j++]=i+min;
    }
    free(ptr);
    return;
}

