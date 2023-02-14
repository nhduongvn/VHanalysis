#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Tue Feb 14 10:43:08 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(-1.310117,0.5357941,7.029799,2.599368);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetFillStyle(4000);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetLogy();
   H_dR_Bj1_both_16->SetLeftMargin(0.15709);
   H_dR_Bj1_both_16->SetRightMargin(0.1234783);
   H_dR_Bj1_both_16->SetBottomMargin(0.12);
   H_dR_Bj1_both_16->SetFrameFillStyle(1000);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   H_dR_Bj1_both_16->SetFrameFillStyle(1000);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(196.3882);
   
   TH1F *st_stack_173 = new TH1F("st_stack_173","",30,0,6);
   st_stack_173->SetMinimum(6.073277);
   st_stack_173->SetMaximum(247.1787);
   st_stack_173->SetDirectory(0);
   st_stack_173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_173->SetLineColor(ci);
   st_stack_173->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_173->GetXaxis()->SetRange(1,30);
   st_stack_173->GetXaxis()->SetLabelFont(42);
   st_stack_173->GetXaxis()->SetTitleOffset(1);
   st_stack_173->GetXaxis()->SetTitleFont(42);
   st_stack_173->GetYaxis()->SetTitle("Events/0.2");
   st_stack_173->GetYaxis()->SetLabelFont(42);
   st_stack_173->GetYaxis()->SetTitleSize(0.037);
   st_stack_173->GetYaxis()->SetTitleFont(42);
   st_stack_173->GetZaxis()->SetLabelFont(42);
   st_stack_173->GetZaxis()->SetTitleOffset(1);
   st_stack_173->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_173);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,0.3145259);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,1.137763);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,1.460494);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,1.260838);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,1.184258);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,0.9134925);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,0.8314423);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,0.6427268);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,0.5223864);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,0.374696);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,0.3336709);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,0.3309359);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,0.2762358);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,0.2707657);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,0.2406807);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,0.1914505);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,0.09299025);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,0.0738452);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,0.03008508);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,0.03008508);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,0.02188006);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,0.01641004);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,0.02932969);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,0.05578343);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,0.06320176);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,0.0587231);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,0.05691182);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,0.04998409);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,0.04768648);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,0.04192687);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,0.03779856);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,0.03201244);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,0.03020914);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,0.03008508);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,0.02748648);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,0.02721298);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,0.02565664);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,0.02288271);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,0.0159477);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,0.01421152);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,0.009070994);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,0.009070994);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,0.007735769);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,0.006699373);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(3861);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,0.1093233);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,0.4187156);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,0.5033876);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,0.4169292);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,0.3608385);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,0.2954589);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,0.2240057);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,0.163985);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,0.1293302);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,0.1146823);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,0.09646178);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,0.09431818);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,0.06645145);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,0.0710959);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,0.06788051);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,0.05680527);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,0.03787018);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,0.01964962);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,0.01286157);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,0.01000344);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,0.005358988);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.003572658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.003572658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.002500861);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.001429063);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,0.0062496);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,0.01223081);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,0.01341056);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,0.01220469);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,0.01135409);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,0.01027411);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,0.008945925);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,0.007654165);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,0.006797446);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,0.006400944);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,0.005870477);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,0.005804883);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,0.004872457);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,0.005039855);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,0.00492457);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,0.004504951);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,0.003678277);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.002649554);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.002143595);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.001890473);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.001383685);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.001129774);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.001129774);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.0009452366);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(9203);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_16->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->SetSelected(H_dR_Bj1_both_16);
}
