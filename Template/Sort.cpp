直接插入排序
整个序列分为有序区和无序区，取第一个元素作为初始有序区，然后第二个开始，依次插入到有序区的合适位置，直到排好序

void InsertSort(int arr[],int n){
    for (i = 0; i < n; i++)
		for (j = i + 1; j > 0; j--) {
			if (a[j - 1] > a[j]) {
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
}


冒泡排序
比较相邻的元素，如果反序则交换，过程也是分为有序区和无序区，初始时有序区为空，所有元素都在无序区，经过第一趟后就能找出最大的元素，然后重复便可

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            if (arr[j-1] > arr[j]) {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


选择排序
void SelectSort(  )
{
	int temp,k;
	for (int i = 0; i < n; i++)
	{
		k = i;
		for (int j = i+1; j < n; j++)
		{
			if (a[j] < a[k])
				k = j;
		}
		temp = a[k];
		a[k] = a[i];
		a[i] = temp;
	}
}








快速排序
快速排序首先选一个轴值(pivot，也有叫基准的)，将待排序记录划分成独立的两部分，左侧的元素均小于轴值，右侧的元素均大于或等于轴值，然后对这两部分再重复，直到整个序列有序

过程是和二叉搜索树相似，就是一个递归的过程

排序函数

QuickSort(int arr[], int first, int end){
 if (first < end) {
   int pivot = OnceSort(arr,first,end);
   //已经有轴值了，再对轴值左右进行递归
   QuickSort(arr,first,pivot-1);
   QuickSort(arr,pivot+1,end);
　}
}
接下来就是一次排序的函数

int OnceSort(int arr[], int first, int end){
 int i = first,j = end;
 //当i<j即移动的点还没到中间时循环
 while(i < j){
  //右边区开始，保证i<j并且arr[i]小于或者等于arr[j]的时候就向左遍历
  while(i < j && arr[i] <= arr[j]) --j;
  //这时候已经跳出循环，说明j>i 或者 arr[i]大于arr[j]了，如果i<j那就是arr[i]大于arr[j]，那就交换
  if(i < j){
   int temp = arr[i];
   arr[i] = arr[j];
   arr[j] = temp;
  }
  //对另一边执行同样的操作
  while(i < j && arr[i] <= arr[j]) ++i;
  if(i < j){
   int temp = arr[i];
   arr[i] = arr[j];
   arr[j] = temp;
  }
 }
 //返回已经移动的一边当做下次排序的轴值
 return i;
}
过程解释都写在注释里面了，挺好理解的
这是我在书上看到的实现，用的是递归的方法
我在维基上还看到用迭代的方法，这里就不说了，有兴趣的可以去看看


快速排序时间复杂度的最好情况和平均情况一样为O(nlog2 n)，最坏情况下为O(n^2 )，这个看起来比前面两种排序都要好，但是这是不稳定的算法，并且空间复杂度高一点（ O(nlog2 n)
而且快速排序适用于元素多的情况


堆排序
堆的结构类似于完全二叉树，每个结点的值都小于或者等于其左右孩子结点的值，或者每个节点的值都大于或等于其左右孩子的值

堆排序过程将待排序的序列构造成一个堆，选出堆中最大的移走，再把剩余的元素调整成堆，找出最大的再移走，重复直至有序

来看一下实现

//堆排序
void HeapSort(int arr[],int len){
    int i;
    //初始化堆，从最后一个父节点开始
    for(i = len/2 - 1; i >= 0; --i){
        Heapify(arr,i,len);
    }
    //从堆中的取出最大的元素再调整堆
    for(i = len - 1;i > 0;--i){
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        //调整成堆
        Heapify(arr,0,i);
    }
}
再看 调整成堆的函数

void Heapify(int arr[], int first, int end){
    int father = first;
    int son = father * 2 + 1;
    while(son < end){
        if(son + 1 < end && arr[son] < arr[son+1]) ++son;
        //如果父节点大于子节点则表示调整完毕
        if(arr[father] > arr[son]) break;
        else {
         //不然就交换父节点和子节点的元素
            int temp = arr[father];
            arr[father] = arr[son];
            arr[son] = temp;
            //父和子节点变成下一个要比较的位置
            father = son;
            son = 2 * father + 1;
        }
    }
}
堆排序的时间复杂度最好到最坏都是O(nlogn)，较多元素的时候效率比较高

图来自维基
2016-07-15_堆排序.gif

归并排序
归并排序的基本思想是将若干个序列进行两两归并，直至所有待排序记录都在一个有序序列为止

这个图很有概括性，来自维基
2016-07-15_归并排序.gif

我们也可以用递归的思想，每次合并就是一次递归
首先，将一整个序列分成两个序列，两个会分成4个，这样分下去分到最小单位，然后开始合并

void Merge(int arr[], int reg[], int start, int end) {
    if (start >= end)return;
    int len = end - start, mid = (len >> 1) + start;

    //分成两部分
    int start1 = start, end1 = mid;
    int start2 = mid + 1, end2 = end;
    //然后合并
    Merge(arr, reg, start1, end1);
    Merge(arr, reg, start2, end2);


    int k = start;
    //两个序列一一比较,哪的序列的元素小就放进reg序列里面,然后位置+1再与另一个序列原来位置的元素比较
    //如此反复,可以把两个有序的序列合并成一个有序的序列
    while (start1 <= end1 && start2 <= end2)
        reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];

    //然后这里是分情况,如果arr2序列的已经全部都放进reg序列了然后跳出了循环
    //那就表示arr序列还有更大的元素(一个或多个)没有放进reg序列,所以这一步就是接着放
    while (start1 <= end1)
        reg[k++] = arr[start1++];

    //这一步和上面一样
    while (start2 <= end2)
        reg[k++] = arr[start2++];
    //把已经有序的reg序列放回arr序列中
    for (k = start; k <= end; k++)
        arr[k] = reg[k];
}

void MergeSort(int arr[], const int len) {
    //创建一个同样长度的序列,用于临时存放
    int  reg[len];
    Merge(arr, reg, 0, len - 1);
}
过程解释都写在了注释里

归并排序的时间复杂度都是O(nlogn)，并且适用于元素较多的时候排序