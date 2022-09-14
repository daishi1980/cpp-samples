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
    const char *page_title = "タイトル";

    // ドキュメント生成
    HPDF_Doc pdf = HPDF_New(error_handler, NULL);

    // ページ追加
    HPDF_Page page = HPDF_AddPage(pdf);

    // ページ設定
    HPDF_Page_SetSize(page, HPDF_PAGE_SIZE_A4, HPDF_PAGE_LANDSCAPE);

    //HPDF_Font font = HPDF_GetFont(pdf, "Helvetica", nullptr);
    HPDF_UseJPEncodings(pdf);
    HPDF_UseJPFonts(pdf);

  //HPDF_Font font = HPDF_GetFont(pdf, "MS-Mincyo", "90ms-RKSJ-H");　//エラー。取得できない
    HPDF_Font font = HPDF_GetFont(pdf, "MS-Gothic", "90ms-RKSJ-H");


    HPDF_Page_SetFontAndSize(page, font, 24);

    HPDF_Page_BeginText(page);
    float tw = HPDF_Page_TextWidth(page, page_title);
    HPDF_Page_TextOut(page, (HPDF_Page_GetWidth(page) - tw) / 2, HPDF_Page_GetHeight(page) - 50, page_title);
    HPDF_Page_EndText(page);

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