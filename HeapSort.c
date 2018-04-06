#define LeftChild(i) ( 2*(i) + 1 )

void BuildMaxHeap( ElementType A[ ], int N ){
	int i;
	for( i=N/2-1; i>=0; i-- ){
		AdjustDown( A, i, N );
	}
}

void AdjustDown( ElementType A[ ], int i, int N ){
	int Child;
	ElementType Tmp;
	for( Tmp=A[i]; LeftChild(i)<N; i=Child ){
		Child = LeftChild(i);
		if( Child!=N-1 && A[child+1]>A[Child] )
			Child++;
		if( Tmp<A[Child] )
			A[i] = A[Child];
		else
			break;
	}
	A[i] = Tmp;
}

void HeapSort( ElementType A[ ], int N ){
	int i;
	BuildMaxHeap( A, N );
	for( i=N-1; i>0; i-- ){
		swap( &A[0], &A[i] );
		AdjustDown( A, 0, i );
	}
}
