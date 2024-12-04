#include <stdio.h>

int main() {
    int x, y, ch;
    char buffer[100];

    fscanf(stdin, "%d %d", &x, &y);
    fprintf(stdout, "%d %d\n", x, y);

    while ((ch = getchar()) != '\n');
    
    fgets(buffer, 100, stdin);
    fputs(buffer, stdout);

    return 0;
}

//파일 처리 개념 모음
//Steam : (컴퓨터) 연속되는 데이터의 흐름 , Buffer : 임시저장공간으로 연속적으로 들어온 데이터가 Buffer 안에 쌓이게 되는 것
//Soket, stdin, Stdout, FILE*(MP3파일이나 특정파일) - 4개 다 steam을 의미함. steam안에 Buffer가 있다.
//stdin : (standard input) 표준 입력 스트림으로, 기본적인 키보드 입력을 처리함(프로그램 실행 중 데이터를 입력받는 가장 기본적인 방법)
//stdout : 프로그램의 출력 데이터를 기본적으로 화면(콘솔)에 전달하는 표준 출력 스트림이다.
//Soket : 네트워크 통신을 위해 컴퓨터 간 데이터를 주고받는 소프츠웨어 인터페이스
//중요!! 모든 자료의 입출력은 운영체제(OS)가 스트림으로(데이터를 연속적이고 순차적으로 흐르는 방식으로) 처리한다.
//(stdin, stdout)은 파일에 해당함(키보드, 모니터도 파일임)
// 1.Open 먼저 열고 2. lnput/Output 읽고 쓰고 동작 3.Close 닫음 -> Stream / 입출력장치는 OS에서 파일로 관리함. 전부 다 동일한 절차로 진행됌
//파일은 우리가 만들 수 없고, 파일을 쓰고자 한다면 운영체제한테 만들어달라고 해야하고 OS가 그 해당 파일을 steam으로 변환해서 만들어 놓은 다음에 파일 포인터를 반환한다.
//C언어에서 파일은 종류가 텍스트파일처리와 바이너리 파일처리 함수가 조금 다름.

//동적할당 개념 모음
// 사용자로부터 입력 받은 숫자만큼 배열을 생성하고 싶다
//시스템에 따라 컴파일러에 따라 되는 것도 있고, 안되는 것도 있기에 안된다고 생각하는게 편함.
//내가 짠 프로그램이 메모리에 저장되는 방식은?
//사용자로부터 입력받은 숫자만큼 배열을 생성하고 싶다면 우리가 짠 프로그램이 메모리에 어떻게 저장되는가를 동작방식을 살펴보아야 한다.
//스텍(STACK)영역 : 함수를 호춣게 되면 프로그램마다 고유의 메모이 영역이 만들어진다. 결론은 밑에서부터 쌓이고, 뺄 때는 위에서부터 빠지는 형식
//만들어지는 구조는 맨 밑에서부터 쌓아나가는 구조. 함수가 호출될 때마다 쌓아가는 구조. 함수 안에 메모리 영역이 컴파일할 때 크기가 결정이 된다.
//함수가 return하거나 함수가 끝나면 바로 메모리에서 사라짐.
//힙(HEAP) : 프로그래머가 할당 및 반환하는 영역을 의미
//중요!! 동적할당 : 실행 도중에 메모리 공간이 필요해! 라고 했을 때 만들 수 있는 공간은 스텍 영역이 아닌 힙 영역에서 만들어진다.
