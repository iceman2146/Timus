/**========================================================================
 * !                              2001
 * ????????, ????????????? ?? ???????? ? ???????? ????? �????� ? 
 * ??????????????? ??????, ???????? ? ????? ??????, ??? ?? ???? ?????? 
 * ????????? ???????? k ?????. ?? ????????, ????? ?????? ?????? ???? 
 * ?????????? ?????????? ? ???????, ????? ???? ????????? ????????? ???????? 
 * ??????. ????????????? ????????? ?????? ???? ???????? ???????? ??? ??????????
 *  ?????????? ?????? ??????, ?????????????? ?????????? ???????????, 
 * ???????????? ? ????? ???????? ?? ??????? ??????. ?? ??????????, ??????????
 *  ? ?????? ?? n ?????, ????????? ? ?????? ??????????, ?????????? ??????????
 *  ?????, ??????? ? ?????? ? ????????? ?????? ???????.
 *========================================================================**/
#include <iostream>
using namespace std;

int main() {
    int cars_leave_per_minutes;
    int minutes_from_start;
    cin>>cars_leave_per_minutes>>minutes_from_start;
    int cars_arriveing_per_minutes;
    int cars_in_jam_in_n_minute=0;
    for (int i=0;i<minutes_from_start;i++) {
        cin>>cars_arriveing_per_minutes;
        if(cars_arriveing_per_minutes+cars_in_jam_in_n_minute>cars_leave_per_minutes)
        {
            cars_in_jam_in_n_minute=cars_arriveing_per_minutes-cars_leave_per_minutes+cars_in_jam_in_n_minute;
        }
        else
        {
            cars_in_jam_in_n_minute=0;
        }
    }
    cout<<cars_in_jam_in_n_minute;
        return 0;
    
}
