void InsetionSort( ElementType A[ ], int N ){
	int i, j;
	ElementType Tmp;
	for( i=1; i<N; i++ ){
		Tmp = A[i];
		for( j=i; j>0 && A[j-1]>Tmp; j-- )
			A[j] = A[j-1];
		A[j] = Tmp;
	} 
}
