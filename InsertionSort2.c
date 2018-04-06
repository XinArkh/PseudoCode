void InsetionSort2( ElementType A[ ], int N ){
	int i, j, low, high, mid;
	ElementType Tmp;
	for( i=1; i<N; i++ ){
		Tmp = A[i];
		low = 1; high = i - 1;
		while( low<=high ){
			mid = (low + high) / 2;
			if( a[mid]>Tmp )	high = mid - 1;
			else	low = mid + 1;
		}
		for( j=i; j>high+1; j-- )
			A[j] = A[j-1];
		A[j] = Tmp;
	}
}
