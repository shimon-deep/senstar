/******************************************/
// [システム] OBJ口座#1課題2
// [機能概要] クラス内関数定義
/******************************************/

#include "cal.h"

//コンストラクタ
Cal::Cal() {
    //DO NOTHING
    std::cout << "コンストラクタに入りました" << std::endl;
    bJyosan = true;
}

void Cal::TryCatch( int iInteger1, int iInteger2 ) {

   if ( ( iInteger1 > 100) || (iInteger2 ) > 100 ) {
       throw std::range_error( "not 0~100" );
   }
   if ( ( iInteger1 < 0) || (iInteger2 < 0) ) {
       throw std::range_error( "not 0~100" );
   }
}

void Cal::TryCatch( int iInteger1, int iInteger2, bool bJyosn ) {

   if ( ( iInteger1 > 100) || (iInteger2 ) > 100 ) {
       throw std::range_error( "not 0~100" );
   }
   if ( ( iInteger1 < 0) || (iInteger2 < 0) ) {
       throw std::range_error( "not 0~100" );
   }

   if ( iInteger2 == 0 ) {
       throw std::range_error( "Divided by zero" );
    }
}
 
int CalAdd :: calculate( int iInteger1, int iInteger2 ) {
    Cal::TryCatch( iInteger1, iInteger2 );
    std::cout << "Add = " << ( iInteger1 + iInteger2 ) << std::endl;
    return ( iInteger1 + iInteger2 );
};

int CalSun :: calculate( int iInteger1, int iInteger2 ) {
    Cal::TryCatch( iInteger1, iInteger2 );
    std::cout << "Sun = " << ( iInteger1 - iInteger2 ) << std::endl;
    return ( iInteger1 - iInteger2 );
};

int CalMul :: calculate( int iInteger1, int iInteger2 ) {
    Cal::TryCatch( iInteger1, iInteger2 );
    std::cout << "Mul = " << ( iInteger1 * iInteger2 ) << std::endl;
    return ( iInteger1 * iInteger2 );
};

int CalDiv :: calculate( int iInteger1, int iInteger2 ) {
    Cal::TryCatch( iInteger1, iInteger2, true );
    std::cout << "Div = " << ( iInteger1 / iInteger2 ) << std::endl;
    return ( iInteger1 / iInteger2 );
};

