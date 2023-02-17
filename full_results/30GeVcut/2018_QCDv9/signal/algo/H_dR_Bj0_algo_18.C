#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Tue Feb 14 15:57:10 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(-1.310117,-0.4335415,7.029799,3.179305);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetFillStyle(4000);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_18->SetBottomMargin(0.12);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.81802);
   
   TH1F *st_stack_107 = new TH1F("st_stack_107","",30,0,6);
   st_stack_107->SetMinimum(0);
   st_stack_107->SetMaximum(2.81802);
   st_stack_107->SetDirectory(0);
   st_stack_107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_107->SetLineColor(ci);
   st_stack_107->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_107->GetXaxis()->SetRange(1,30);
   st_stack_107->GetXaxis()->SetLabelFont(42);
   st_stack_107->GetXaxis()->SetTitleOffset(1);
   st_stack_107->GetXaxis()->SetTitleFont(42);
   st_stack_107->GetYaxis()->SetTitle("Events/0.2");
   st_stack_107->GetYaxis()->SetLabelFont(42);
   st_stack_107->GetYaxis()->SetTitleSize(0.037);
   st_stack_107->GetYaxis()->SetTitleFont(42);
   st_stack_107->GetZaxis()->SetLabelFont(42);
   st_stack_107->GetZaxis()->SetTitleOffset(1);
   st_stack_107->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_107);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.4232917);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,1.406421);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,1.231187);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.8306531);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.4232917);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.2230247);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.1001335);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.05234252);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.04323948);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.02048186);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.01365457);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,0.006827286);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.03103725);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.05657454);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.05293287);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.04347837);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.03103725);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.02252889);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.0150957);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.01091417);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.009919816);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.006827286);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.005574455);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,0.003941735);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(2101);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.1129706);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.4722591);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.3643827);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.1749996);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.06892106);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.03266259);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.01797941);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.009589018);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.004195195);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.004494852);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.001797941);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,0.001498284);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.005818283);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.01189604);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.01044939);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.007241534);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.00454452);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.003128509);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.002321132);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.001695115);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.001121213);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.001160566);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0007340063);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,0.000670053);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.0004237787);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,0.0004237787);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(4230);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
