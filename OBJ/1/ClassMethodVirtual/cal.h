/*****************************************/
// [システム] OBJ講座#1課題2
// [機能概要] クラス宣言ヘッダーファイル
// Cal：計算クラス（親クラス）
// CalAdd：Calクラスを継承した加算クラス（子クラス）
// CalSun：Calクラスを継承した減算クラス（子クラス）
// CalMul：Calクラスを継承した乗算クラス（子クラス）
// CalDiv：Calクラスを継承した除算クラス（子クラス）
/*****************************************/

#ifndef _CAL_H_
#define _CAL_H_

#include <stdio.h>
#include <iostream>         //c++で使用
#include <cstdlib>
#define MAX_INTEGER_NUM 2   //整数の入力最大数

//親クラス
class Cal {
public:
    Cal(); //コンストラクタ
    virtual ~Cal() {}; //デストラクタ
    virtual int calculate( int iInteger1, int iInteger2 ) = 0; /* 純粋仮想関数(子クラスのメソッドを実装) */
    void TryCatch( int iInteger1, int jiInteger2 );
    void TryCatch( int iInteger1, int iInteger2, bool bJyosan );
private:
    bool bJyosan;
};


//以下、子クラス
class CalAdd : public Cal {
public:
    int calculate( int iInteger1, int iInteger2 ); /* オーバーライド */
};

class CalSun : public Cal {
public:    
    int calculate( int iInteger1, int iInteger2 ); /* オーバーライド */
};

class CalMul : public Cal {
public:    
    int calculate( int iInteger1, int iInteger2 ); /* オーバーライド */
};

class CalDiv : public Cal {
public:    
    int calculate( int iInteger1, int iInteger2 ); /* オーバーライド */
};


#endif // _CAL_H_
