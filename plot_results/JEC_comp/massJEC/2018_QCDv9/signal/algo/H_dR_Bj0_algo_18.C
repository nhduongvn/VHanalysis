#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Mon Mar 20 11:50:03 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(-1.310117,-0.1611445,7.029799,1.181726);
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
   st->SetMaximum(1.047439);
   
   TH1F *st_stack_139 = new TH1F("st_stack_139","",30,0,6);
   st_stack_139->SetMinimum(0);
   st_stack_139->SetMaximum(1.047439);
   st_stack_139->SetDirectory(0);
   st_stack_139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_139->SetLineColor(ci);
   st_stack_139->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_139->GetXaxis()->SetRange(1,30);
   st_stack_139->GetXaxis()->SetLabelFont(42);
   st_stack_139->GetXaxis()->SetTitleOffset(1);
   st_stack_139->GetXaxis()->SetTitleFont(42);
   st_stack_139->GetYaxis()->SetTitle("Event/0.2");
   st_stack_139->GetYaxis()->SetLabelFont(42);
   st_stack_139->GetYaxis()->SetTitleSize(0.037);
   st_stack_139->GetYaxis()->SetTitleFont(42);
   st_stack_139->GetZaxis()->SetLabelFont(42);
   st_stack_139->GetZaxis()->SetTitleOffset(1);
   st_stack_139->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_139);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.1888882);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,0.6554194);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.487013);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.2639884);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.1456488);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.09330624);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.04096371);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.03186067);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.03868795);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.02503338);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.01137881);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,0.0182061);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,0.009103048);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,0.01365457);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,0.009103048);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,0.01365457);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,0.006827286);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.02073318);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.03862096);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.03329153);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.02451071);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.0182061);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.01457199);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.00965524);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.008515121);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.009383207);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.007547848);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.005088758);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,0.006436827);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,0.003218413);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,0.005574455);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,0.005574455);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,0.003218413);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,0.003941735);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);
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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.04674646);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.213955);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.1738009);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.09319326);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.04584749);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.02457186);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.01558215);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.008989704);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.006892106);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.01048799);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.005094166);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,0.004494852);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.004494852);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.004494852);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,0.005094166);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,0.003296225);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,0.003595882);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,0.001198627);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,0.003296225);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,0.001198627);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.003742712);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.008007063);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.007216691);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.005284505);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.00370655);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.002713508);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.002160856);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.001641288);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.001437104);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.001772794);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.001235517);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,0.001160566);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.001160566);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.001160566);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,0.001235517);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,0.0009938492);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,0.001038042);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,0.0009938492);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
