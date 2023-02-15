#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Tue Feb 14 16:02:02 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.310117,-0.8911406,7.029799,9.421158);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLogy();
   H_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_16->SetBottomMargin(0.12);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.021828e+08);
   
   TH1F *st_stack_105 = new TH1F("st_stack_105","",30,0,6);
   st_stack_105->SetMinimum(2.219909);
   st_stack_105->SetMaximum(2.454303e+08);
   st_stack_105->SetDirectory(0);
   st_stack_105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_105->SetLineColor(ci);
   st_stack_105->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_105->GetXaxis()->SetRange(1,30);
   st_stack_105->GetXaxis()->SetLabelFont(42);
   st_stack_105->GetXaxis()->SetTitleOffset(1);
   st_stack_105->GetXaxis()->SetTitleFont(42);
   st_stack_105->GetYaxis()->SetTitle("Events/0.2");
   st_stack_105->GetYaxis()->SetLabelFont(42);
   st_stack_105->GetYaxis()->SetTitleSize(0.037);
   st_stack_105->GetYaxis()->SetTitleFont(42);
   st_stack_105->GetZaxis()->SetLabelFont(42);
   st_stack_105->GetZaxis()->SetTitleOffset(1);
   st_stack_105->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_105);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,423413.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,998969.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,867780.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,490724.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,342611.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,214953.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,125846.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,87153.13);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,84330.55);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,46075.35);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,23619.78);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,35904.79);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,6331.418);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,26463.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,5668.829);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,2403.218);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,2399.372);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,22673.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,332.5506);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1738.365);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1631.528);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,9.628096);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,32.55607);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,23.3873);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,15881.28);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,48272.66);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,74996.53);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,57928.08);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,42595.83);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,40613.46);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,24899.87);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,23852.98);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,32066.75);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,22789.12);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,5465.015);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,22589);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,2434.288);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,22295.66);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,2413.203);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,1664.026);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,1664.022);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,22222.79);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,310.0466);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,1605.235);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1604.619);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,9.180274);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,25.12035);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,23.3873);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(33466);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,6297.963);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,22857.99);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,22326.53);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,14812.28);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,8857.943);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,5309.095);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,3279.792);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,2103.764);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,1382.488);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,930.9919);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,615.3415);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,415.5163);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,282.0476);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,191.8586);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,127.2708);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,93.80743);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,62.29285);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,40.44343);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,31.10294);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,20.80195);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,12.44916);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,7.883654);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,5.924948);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,3.88092);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,3.858489);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,1.844133);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.387269);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.7589066);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.7068034);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.3593281);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,0.479295);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,19.49971);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,37.43725);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,37.31716);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,30.61852);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,23.77795);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,18.44381);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,14.49672);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,11.59836);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,9.385924);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,7.714797);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,6.266566);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.146566);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,4.243007);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,3.494562);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,2.849533);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,2.449734);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,1.998171);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.605348);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.411078);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.149338);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.8914247);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.7138731);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.6126741);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.4957383);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.4963734);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3465808);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.2938672);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2214914);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2152759);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.149538);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.1820171);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(1481664);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
