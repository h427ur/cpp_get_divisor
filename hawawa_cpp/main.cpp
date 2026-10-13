#include <iostream>
#include <string>

int main(int argc, const char * argv[])
{
    //int len = sizeof(char) / sizeof(*argv);
    int num = 0;
    std::vector<int> divisors;
    std::string input;
    
    //input 값 저장
    //실행 시에 입력값이 주어졌다면
    if(argc > 1){
        input = argv[1];
    }
    else{
        std::cout << "정수 값을 입력하세요: ";
        std::cin >> input;
        std::cout << std::endl;
    }
    
    //input 값을 정수로 변환
    num = std::stoi(input);
    
    //반복문을 통해 약수 구하기 (1~입력값 까지 1씩)
    //입력값을 i로 나눈 몫이 0인 i가 입력값의 약수다.
    //약수가 올바른 인덱스에 할당되도록 인덱스 변수 선언 <- 조건문 내에서 +1씩 더해주도록.

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            divisors.push_back(i);
        }
    }
    
    //약수들을 반복문을 통해 출력한다.
    std::cout << std::format("{0}의 약수: ", num);
    for(int i = 0; i < divisors.size(); i++){
        std::cout << std::format("{0} ", divisors[i]);
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
