#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Thu May 25 11:52:40 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.310117,-0.07803357,7.029799,0.5722461);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
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
   st->SetMaximum(0.5072182);
   
   TH1F *st_stack_83 = new TH1F("st_stack_83","",30,0,6);
   st_stack_83->SetMinimum(0);
   st_stack_83->SetMaximum(0.5072182);
   st_stack_83->SetDirectory(0);
   st_stack_83->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_83->SetLineColor(ci);
   st_stack_83->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_83->GetXaxis()->SetRange(1,30);
   st_stack_83->GetXaxis()->SetLabelFont(42);
   st_stack_83->GetXaxis()->SetTitleOffset(1);
   st_stack_83->GetXaxis()->SetTitleFont(42);
   st_stack_83->GetYaxis()->SetTitle("Event/0.2");
   st_stack_83->GetYaxis()->SetLabelFont(42);
   st_stack_83->GetYaxis()->SetTitleSize(0.037);
   st_stack_83->GetYaxis()->SetTitleFont(42);
   st_stack_83->GetZaxis()->SetLabelFont(42);
   st_stack_83->GetZaxis()->SetTitleOffset(1);
   st_stack_83->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_83);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.09846027);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,0.3145259);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.1996555);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.1011953);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.0738452);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.0355551);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.01914505);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.02735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.01641004);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.02932969);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.02336791);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.0166364);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.01421152);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.00986121);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.00723615);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.008648853);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.003867885);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,0.003867885);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(339);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.02000689);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.1064652);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.07788395);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.04072831);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.02572314);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.01286157);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.006788051);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.00428719);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.002858127);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.004644456);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.001786329);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.001786329);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,0.001071798);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,0.002500861);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,0.001071798);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.002673533);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.006167365);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.005274967);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.003814555);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.003031501);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.002143595);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.001557286);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.001237605);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.0010105);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.00128814);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,0.0005052502);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.0007988707);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.0007988707);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,0.0006188026);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,0.0009452366);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,0.0006188026);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(884);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
