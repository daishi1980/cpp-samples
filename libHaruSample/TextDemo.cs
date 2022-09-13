/*
 * << Haru Free PDF Library 2.0.5 >> -- TextDemo.cs
 *
 * Copyright (c) 1999-2006 Takeshi Kanno <takeshi_kanno@est.hi-ho.ne.jp>
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.
 * It is provided "as is" without express or implied warranty.
 *
 */

using System;
using System.IO;
using HPdf;


public class TextDemo {

    public static void Main()
    {
        const string page_title = "タイトル";
        try
        {
            // ドキュメント生成
            HPdfDoc pdf = new HPdfDoc();

            // ページ追加
            HPdfPage page = pdf.AddPage();

            // ページ設定
            page.SetSize(HPdfPageSizes.HPDF_PAGE_SIZE_A4, HPdfPageDirection.HPDF_PAGE_LANDSCAPE);

            // 保存
            pdf.SaveToFile("libHaruSample.pdf");

        }
        catch (Exception e)
        {
            Console.Error.WriteLine(e.Message);
        }
        Console.ReadLine();
    }
}