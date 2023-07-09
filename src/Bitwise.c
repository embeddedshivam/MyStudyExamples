

/*
 * 	Left shift ( << ) : (1010<<1) == 10100
 * 	Multiply 2^k times
 */
bool iskthbitSet(int N, int k){
	int mask=1<<(k-1);
	/*
	 * k=3
	 * N=1101
	 * mask = 0001<<(3-1)
	 * mask = 0100
	 */
	if (N&mask){
		return true;
		// kth bit is set
	}else
	{
		return false;
		// kth bit is not set
	}
}

int setithBit(int N, int i){
	int mask=1<<(i-1);
	/*
	 * k=2
	 * N=1101
	 * mask = 0001<<(3-1)
	 * mask = 0010
	 * return 1101 | 0010
	 * 			1111
	 */
	return (N|mask);
}
int clearithBit(int N, int i){
	int mask=1<<(i-1);
	mask = ~mask;
	/*
	 * k=2
	 * N=1111
	 * mask = 0001<<(3-1)
	 * mask = 0010
	 * ~mask = 1101
	 * return 1111 | 1101
	 * 			1101
	 */
	return (N&mask);
}
