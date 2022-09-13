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
        const string page_title = "�^�C�g��";
        try
        {
            // �h�L�������g����
            HPdfDoc pdf = new HPdfDoc();

            // �y�[�W�ǉ�
            HPdfPage page = pdf.AddPage();

            // �y�[�W�ݒ�
            page.SetSize(HPdfPageSizes.HPDF_PAGE_SIZE_A4, HPdfPageDirection.HPDF_PAGE_LANDSCAPE);

            // �ۑ�
            pdf.SaveToFile("libHaruSample.pdf");

        }
        catch (Exception e)
        {
            Console.Error.WriteLine(e.Message);
        }
        Console.ReadLine();
    }
}