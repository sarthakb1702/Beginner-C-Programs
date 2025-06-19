#include <stdio.h>
struct employee
    {
        int code;
        float salary;
        char name[100];
    };
    void show(struct employee e){
        printf("Employee name:%s\n",e.name);
        printf("Employee code:%d\n",e.code);
        printf("Employee salary:%f\n",e.salary);
    }
int main(){
    struct employee Sarthak={51,97.32,"sarthak"};
    show(Sarthak);
    return 0;
}
