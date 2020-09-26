pro 2
	//대문자를 소문자로 변환하거나 A,a중복 계산하기
	//아스키코드 65 97
	/*
	for (i = 0;i < 3;i++) {
		gets(str[i]);
		//gets(&str[i][0])
		//str[i][j]=tolower(str[i][j])
		search = &str[i][0];
		for(i=0;i<26;i++)
		for(j=0, count =0 ;j<=2;j++)
		while (search = strchr(search = 'a' + i)) {
			count++;
			*search++;
			//search = NULL까지 검색
		}
		count[i] = count;
	}
	*/
	/*
	for(i=0;i<3;i++){
		gets(str[i]);
		for(j=0;str[i][j];j++)
			str[i][j]=tolower(str[i][j]);
		search=str[i];
		while(*search){
			for(j=0;j<26;j++){
				if(strchr(search,'a'+j))
					count[j]++;
			}
			search++;
		}
	}
	*/
	/*
	for(i=0;i<3;i++){
		char *search=str[i];
		for(j=0;j<26;j++){
			if(search==strchr(search,'a'+j))
				count[j]++;
		}
	}
	*/
	/*
	for(i=0;i<26;i++){
		for(j=0;j<3;j++){
			search=&str[j][0];
			while(strchr(search,'a'+i)){
				count[i]++;
				*search++;
			}
		}
	}
	*/
	/*
	for(i=0;i<3;i++){
		search=&str[i][0];
		for(j=0;j<26;j++){
			while(strchr(search,'a'+j)){
				count[j]++;
				*search++;
			}
		}
	}
	*/ 
pro 5
	for(i=0;i<3;i++){
		gets(text[i]);
		temp=strtok(text[i]," .\n");
		while(temp){
			while(j=0;j<30;j++)
				if(!strcmp(word[j],temp)){
					count[j]++;
				}
				else{
					count[k]++;
					strcpy(word[k ++],temp);
				}
			}
			temp = strtok(NULL, " .\n");
		}
	} 
j=0에서 같지 않으면 무조건 새로 추가한다. 따라서 중복해서 계산을 대부분의 경우에 하지 못하는 code이다.
 
