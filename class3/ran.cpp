// random function for task4
int ran(int lower,int upper){
    srand(time(NULL));

    int gap = upper - lower;
    int result = rand() % gap + lower;
    return result;
}