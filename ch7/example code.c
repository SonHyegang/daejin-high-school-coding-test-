pro1

*1
int func(unsigned int bits){
	unsigned int i;
	unsigned int mask=1<<31; //network°³³ä
	unsigned int total=0;
	for(i=0;i<32;i++,bits<<=1){
		if((bits&mask)==mask)
			total++;
	}
	return total%2?1:0;
}

*2
	unsigned int num, i, bit[10], count=0;
	printf("Enter an interger : ");
	scanf("%d",&num);
	for(i=0;num;i++){
		bit[i]=num%2;
		num/=2;
		if(bit[i])
			count++;
	}
	printf("The total number of is in the bit representation is %s",count%2?"odd":"even");
	

pro3
bit ~ not operator
	for(i=0;i<15;i++,bits<<=1){
		if(!((bits&mask)==mask))
			reverse++;
		reverse<<=1;
	}

