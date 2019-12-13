// テストケース記述ファイル
#include "gtest/gtest.h" // googleTestを使用するおまじないはこれだけでOK
// テスト対象関数を呼び出せるようにするのだが
// extern "C"がないとCと解釈されない、意外とハマりがち。

extern "C"{
    #include "myfunction.h"
}

// fixtureNameはテストケース群をまとめるグループ名と考えればよい、任意の文字列
// それ以外のclass～testing::Testまではおまじないと考える
class TestMyfunction :public ::testing::Test{
    protected:
    // fixtureNameでグループ化されたテストケースはそれぞれのテストケース実行前に
    // この関数を呼ぶ。共通の初期化処理を入れておくとテストコードがすっきりする
    virtual void SetUp(){
    }
    // SetUpと同様にテストケース実行後に呼ばれる関数。共通後始末を記述する。
    virtual void TearDown(){
    }
};

// 成功するテストケース。細かい説明はGoogleTestのマニュアルを見てね。
TEST_F(TestMyfunction, testMysum)
{
    EXPECT_EQ(8, mysum(3,5));
    EXPECT_EQ(10, mysum(4,6));
}
// あえて失敗するテストケースも書いておく。
TEST_F(TestMyfunction, testMywari)
{
    EXPECT_EQ(1, myWari(3,3));
    EXPECT_EQ(0, myWari(6,5));
}