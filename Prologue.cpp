/*
1. 카드 초기화 (가로5 * 세로4)
0123456789 사용

ex) 
09783\n\
32187\n\
55694\n\
40261

2. 카드 정보를 받을 배열을 1차 배열로 동적 할당

3. 모든 숫자들을 #으로 출력 (숫자를 가림)
-> 출력을 위한 또다른 배열 필요?

4. 클리어확인 ( #이 하나라도 있으면 X ) 

5. 좌표 입력을 받아 숫자 2개 선택

ex) 가로 1~5, 세로 1~4

3 4 = 6
4 1 = 8

6. 콘솔 화면 지운 후, 숫자 공개
ex)
#include <stdlib.h>
system("cls")
★작동 안할시 다른 기능 사용해보기

7. 카드 여부 따지기
7-1 두 숫자가 같으면 correct, 숫자 그대로 남김
7-2 두 숫자가 다르면 wrong, 숫자 보여준 후, 다시 #으로 덮음

*/