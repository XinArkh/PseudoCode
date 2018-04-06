void SelectSort( ElementType A[ ], int N ){
	int i, j, tmp;
	for( i=0; i<N-1; i++ ){
		tmp = i;
		for( j=i+1; j<N; j++ )
			if( A[j]<A[tmp] )	tmp = j;
		if( tmp!=i )	swap( &A[tmp], &A[i] );
	}
}
