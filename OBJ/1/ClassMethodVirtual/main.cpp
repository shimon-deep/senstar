/******************************************/
// [システム] OBJ口座#1課題2
// [機能概要] main
// [機能概要] 整数を2つ入力し、加算、減算、乗算、除算結果を出力する
/******************************************/

#include "cal.h"

int main( void ) 
{
    int iInteger[MAX_INTEGER_NUM] = { 0 };
    
    //クラスのインスタンス生成
    Cal* instance1 = new CalAdd();
    Cal* instance2 = new CalSun();
    Cal* instance3 = new CalMul();
    Cal* instance4 = new CalDiv();
    
    for ( int iCount = 0; iCount < MAX_INTEGER_NUM; iCount++ ) {
        printf( "%dつ目の整数を入力してください (0～100) ：", (iCount + 1) );
        scanf( "%d", &iInteger[iCount] );
    }
    
    try {
        //計算
        instance1->calculate( iInteger[0], iInteger[1] );
        instance2->calculate( iInteger[0], iInteger[1] );
        instance3->calculate( iInteger[0], iInteger[1] );
        instance4->calculate( iInteger[0], iInteger[1] );
    }
    
    catch ( std::range_error &e ) {
        std::cerr << "range_error: " << e.what() << std::endl;
        return -1;
    }
    catch (...) {
        std::cerr << "unknown exeption" << std::endl;
    }

   
    //インスタンスの消去
    delete instance1;
    delete instance2;
    delete instance3;
    delete instance4;
    
    return 0;
}
