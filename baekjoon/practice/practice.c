#include <stdio.h>

int main(void) {
  int birth_year; // 입력받은 태어난 년도
  int age[100] = {0}; // 각 사람들의 나이 (최대 100명) 
  int count_person; // 입력된 인원 수
  int count_baby = 0; // 유아 수
  int count_child = 0; // 어린이 수
  int count_youth = 0; // 청소년 수
  int count_young = 0; // 청년 수
  int count_adult = 0; // 중년 수
  int count_old = 0; // 노년 수
  int i; // 반복문을 위한 변수 
  
  
  // 1. 최대 100명 년도 입력받기 
  for (i = 0 ; i < 100 ; i++){
    printf("%d번째 사람의 태어난 년도를 입력하시오.", i+1);
    scanf("%d", &birth_year);
    if (birth_year > 2020) break;
    age[i] = 2020 - birth_year + 1;
    if(age[i] < 7) count_baby++;
    else if(age[i] < 13) count_child++;
    else if(age[i] < 20) count_youth++;
    else if(age[i] < 30) count_young++;
    else if(age[i] < 60) count_adult++;
    else count_old++;
  }
  // 2. 나이 계산 후 출력 
  for (i = 0 ; i < sizeof(age) ; i++){
    if (age[i] == 0) break;
    printf("%d번째 사람의 나이는 %d입니다.\n", i+1, age[i]);
  }
  // 3. 연령대 구분 후 출력
  printf("유아는 %d명입니다.\n", count_baby);
  printf("어린이는 %d명입니다.\n", count_child);
  printf("청소년는 %d명입니다.\n", count_youth);
  printf("청년는 %d명입니다.\n", count_young);
  printf("중년는 %d명입니다.\n", count_adult);
  printf("노년는 %d명입니다.\n", count_old);
  
  
  
  return 0;
}