void BubbleSort( ElementType A[], int N ){
	int i, j, flag;
	for( i=0; i<N-1; i++ ){
		flag = false;
		for( j=N-1; j>i; j-- ){
			if( A[j-1]>A[j] ){
				swap( A[j-1], A[j] );
				flag = true;
			}
		}
		if( flag == false ) return;
	}
} 
