#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_bckg_16()
{
//=========Macro generated from canvas: CvB_jets_all_bckg_16/CvB_jets_all_bckg_16
//=========  (Wed Mar  1 14:06:15 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_bckg_16 = new TCanvas("CvB_jets_all_bckg_16", "CvB_jets_all_bckg_16",0,0,600,600);
   CvB_jets_all_bckg_16->SetHighLightColor(2);
   CvB_jets_all_bckg_16->Range(-0.2183529,-1.828367e+11,1.171633,1.340802e+12);
   CvB_jets_all_bckg_16->SetFillColor(0);
   CvB_jets_all_bckg_16->SetFillStyle(4000);
   CvB_jets_all_bckg_16->SetBorderMode(0);
   CvB_jets_all_bckg_16->SetBorderSize(2);
   CvB_jets_all_bckg_16->SetLeftMargin(0.15709);
   CvB_jets_all_bckg_16->SetRightMargin(0.1234783);
   CvB_jets_all_bckg_16->SetBottomMargin(0.12);
   CvB_jets_all_bckg_16->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_16->SetFrameBorderMode(0);
   CvB_jets_all_bckg_16->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.188438e+12);
   
   TH1F *st_stack_176 = new TH1F("st_stack_176","",20,0,1);
   st_stack_176->SetMinimum(0);
   st_stack_176->SetMaximum(1.188438e+12);
   st_stack_176->SetDirectory(0);
   st_stack_176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_176->SetLineColor(ci);
   st_stack_176->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_176->GetXaxis()->SetRange(1,20);
   st_stack_176->GetXaxis()->SetLabelFont(42);
   st_stack_176->GetXaxis()->SetTitleOffset(1);
   st_stack_176->GetXaxis()->SetTitleFont(42);
   st_stack_176->GetYaxis()->SetTitle("Events/0.05");
   st_stack_176->GetYaxis()->SetLabelFont(42);
   st_stack_176->GetYaxis()->SetTitleSize(0.037);
   st_stack_176->GetYaxis()->SetTitleFont(42);
   st_stack_176->GetZaxis()->SetLabelFont(42);
   st_stack_176->GetZaxis()->SetTitleOffset(1);
   st_stack_176->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_176);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,2.454708e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,7.527907e+09);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,6.786603e+09);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,8.094492e+09);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,1.120336e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,1.657473e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,2.505882e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,3.822881e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,5.959254e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,1.05152e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,2.220831e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,7.304295e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,7.922682e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,5.366995e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,5.13134e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,5.490139e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,6.24956e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,5.991417e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,2.581676e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,1.517801e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,2.18917e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,1.224268e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,1.166011e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,1.276858e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,1.505938e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,1.83496e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,2.259011e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,2.792432e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,3.486375e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,4.630923e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,6.741135e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.225451e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.275111e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.049404e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.026339e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.059836e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.127591e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.090748e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,7.105805e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,1.640201e+07);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1.398694e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,1.987818e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,3917599);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,2720043);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,2532502);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,2583952);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,2611246);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,2812321);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,3358553);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,4275829);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,5608667);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,8874881);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,2.180733e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,2.408584e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,1.885898e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,1.940724e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,2.10533e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,2.391833e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,2.44985e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,1.77396e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,2392645);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,1121.99);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,497.5046);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,414.2265);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,398.4602);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,402.1864);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,404.5551);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,419.6997);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,456.3045);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,512.7584);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,590.5906);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,744.6564);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,1165.362);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,1224.585);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,1087.144);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,1109.061);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,1164.404);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,1244.97);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,1273.999);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,1096.426);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,402.8239);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(3.953548e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","QCD","F");

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
   CvB_jets_all_bckg_16->Modified();
   CvB_jets_all_bckg_16->cd();
   CvB_jets_all_bckg_16->SetSelected(CvB_jets_all_bckg_16);
}
