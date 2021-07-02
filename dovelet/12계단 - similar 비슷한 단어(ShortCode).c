r,x,k,m;char a[9],b[9],d[99];main(i){for(scanf("%s%s",b,a),m=strlen(a);gets(b);x=0){memset(d,0,99);for(i=0;i<m;)++d[a[i++]];k=strlen(b);for(i=0;i<k;++i)d[b[i]]?--d[b[i]],++x:0;abs(m-k)>1|abs((k>m?k:m)-x)>1?:++r;}printf("%d",r);}

/*
 * code len: 228
 * 첫 번째 단어와 비슷한 단어가 몇 개인지 출력하는 문제
 * -두 단어가 같은 구성을 갖는 경우,
 * -한 단어에서 한 문자를 더하거나, 빼거나, 하나의 문자를 다른 문자로 바꾸어 나머지 한 단어와 같은 구성을 갖게 되는 경우
 * 를 비슷한 단어라고 정의할 때, 정의 조건이 만족하는 문자열을 찾는다.
 *
 * 입력
 * 4
 * DOG
 * GOD
 * GOOD
 * DOLL
 * 출력
 * 2
 */