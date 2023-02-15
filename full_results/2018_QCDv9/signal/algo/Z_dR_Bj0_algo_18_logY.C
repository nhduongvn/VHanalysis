#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Tue Feb 14 16:07:56 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.310117,0.5339722,7.029799,2.606409);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLogy();
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(199.0087);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",30,0,6);
   st_stack_115->SetMinimum(6.062678);
   st_stack_115->SetMaximum(250.7061);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_115->GetXaxis()->SetRange(1,30);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.2");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetTitleSize(0.037);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.34364);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,1.497451);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,1.340424);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.7532772);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.4506009);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.1979913);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.095582);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.04551524);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,0.02730914);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,0.009103048);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.02796503);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.05837673);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.0552312);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.04140386);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.03202281);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.02122689);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.01474862);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.01017752);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,0.00788347);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(2101);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.07431489);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.4926358);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.4090315);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.1690064);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.05903239);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.0263698);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.0110873);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.008090734);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.005094166);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.004494852);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.002696911);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.0008989704);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,0.002097598);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,0.001498284);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.004719);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.01214997);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.01107109);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.007116455);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.004205884);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.00281103);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.001822741);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.001557062);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.001235517);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.001160566);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.0008989704);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.0005190208);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,0.0007928174);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,0.000670053);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,0.0004237787);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(4230);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","ZHcc","F");

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
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
