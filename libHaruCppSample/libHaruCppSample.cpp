// libHaruCppSample.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <setjmp.h>
#include "hpdf.h"

static jmp_buf env;
static void error_handler(HPDF_STATUS err, HPDF_STATUS   detNo, void *udat) {
    printf("ERROR: err=%04X, detNo=%u\n", (HPDF_UINT)err, (HPDF_UINT)detNo);
    longjmp(env, 1);
}

int main()
{
    // ドキュメント生成
    HPDF_Doc pdf = HPDF_New(error_handler, NULL);

    // ページ追加
    HPDF_Page page_1 = HPDF_AddPage(pdf);

    // ページ設定
    HPDF_Page_SetSize(page_1, HPDF_PAGE_SIZE_A4, HPDF_PAGE_LANDSCAPE);

    // 保存
    HPDF_SaveToFile(pdf, "libHaruCppSample.pdf");
  
    if (setjmp(env)) {
        HPDF_Free(pdf);
        return 1;
    }
    // リソースを解放
    HPDF_Free(pdf);

    std::getchar();
}