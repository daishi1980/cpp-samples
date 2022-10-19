// unordered_map.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <unordered_map>
int main()
{
    std::unordered_map<std::string, int> salary;

    salary["John"] = 1400;
    salary["Harry"] = 1000;

    int a = salary["John"];     // 1400
    int b = salary["Tom"];      // 存在しない場合は自動で0が追加される
    int c = salary.at("Harry"); // 1000(存在しない場合は例外発生)

    salary.erase("Harry");       // (Harry, 1000)を削除

    // Keyが存在するか
    bool hasKey1 = salary.find("John") != salary.end();         // true
    bool hasKey2 = salary.find("Harry") != salary.end();        // false
    bool hasKey3 = salary.count("John") > 0;                    // true
    bool hasKey4 = salary.count("Harry") > 0;                   // false
    for (auto it = salary.begin(); it != salary.end(); ++it)    // イテレータで全要素ループ
    {
        std::string name = it->first;                           // key
        int money = it->second;                                 // value
    }
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
