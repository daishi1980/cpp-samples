// member.template.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

template <typename T>
class Point
{
private:
    T x_;
    T y_;
public:
    Point(T x, T y) : x_(x), y_(y) {}

    Point(const Point& other) : x_(other.x_), y_(other.y_) {}

    template <typename U> 
    void get(U& dst_x, U& dst_y) const
    {
        dst_x = this->x_;
        dst_y = this->y_;
    }
};

int main()
{
    Point<double> p(1.1, 2.1);
    int x, y;
    p.get(x, y);
    std::cout << x << std::endl << y << std::endl;
    std::getchar();
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
