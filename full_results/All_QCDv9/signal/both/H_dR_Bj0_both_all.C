#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_all()
{
//=========Macro generated from canvas: H_dR_Bj0_both_all/H_dR_Bj0_both_all
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_both_all = new TCanvas("H_dR_Bj0_both_all", "H_dR_Bj0_both_all",0,0,600,600);
   H_dR_Bj0_both_all->SetHighLightColor(2);
   H_dR_Bj0_both_all->Range(-1.310117,-1.57409,7.029799,11.54332);
   H_dR_Bj0_both_all->SetFillColor(0);
   H_dR_Bj0_both_all->SetFillStyle(4000);
   H_dR_Bj0_both_all->SetBorderMode(0);
   H_dR_Bj0_both_all->SetBorderSize(2);
   H_dR_Bj0_both_all->SetLeftMargin(0.15709);
   H_dR_Bj0_both_all->SetRightMargin(0.1234783);
   H_dR_Bj0_both_all->SetBottomMargin(0.12);
   H_dR_Bj0_both_all->SetFrameFillStyle(1000);
   H_dR_Bj0_both_all->SetFrameBorderMode(0);
   H_dR_Bj0_both_all->SetFrameFillStyle(1000);
   H_dR_Bj0_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(10.23158);
   
   TH1F *st_stack_156 = new TH1F("st_stack_156","",30,0,6);
   st_stack_156->SetMinimum(0);
   st_stack_156->SetMaximum(10.23158);
   st_stack_156->SetDirectory(0);
   st_stack_156->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_156->SetLineColor(ci);
   st_stack_156->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_156->GetXaxis()->SetRange(1,30);
   st_stack_156->GetXaxis()->SetLabelFont(42);
   st_stack_156->GetXaxis()->SetTitleOffset(1);
   st_stack_156->GetXaxis()->SetTitleFont(42);
   st_stack_156->GetYaxis()->SetTitle("Events/0.2");
   st_stack_156->GetYaxis()->SetLabelFont(42);
   st_stack_156->GetYaxis()->SetTitleSize(0.037);
   st_stack_156->GetYaxis()->SetTitleFont(42);
   st_stack_156->GetZaxis()->SetLabelFont(42);
   st_stack_156->GetZaxis()->SetTitleOffset(1);
   st_stack_156->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_156);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(1,0.8732758);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(2,3.860759);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(3,5.046447);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(4,4.629699);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(5,3.912272);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(6,3.206166);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(7,2.468033);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(8,2.12185);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(9,1.623861);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(10,1.234773);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(11,1.121509);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(12,1.047761);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(13,0.8998937);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(14,0.8048099);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(15,0.7616467);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(16,0.6514969);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(17,0.3969416);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(18,0.2533518);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(19,0.1800324);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(20,0.09579482);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(21,0.07953086);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(22,0.05169143);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(23,0.03228536);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(24,0.01214294);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(25,0.009819518);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(26,0.01461279);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(27,0.004468371);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(28,0.003764068);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(31,0.002323422);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(1,0.04061855);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(2,0.08535719);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(3,0.09715446);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(4,0.09336111);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(5,0.08582766);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(6,0.07764774);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(7,0.06822585);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(8,0.0634882);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(9,0.05535555);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(10,0.04812799);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(11,0.04586316);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(12,0.04397147);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(13,0.04083851);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(14,0.03892066);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(15,0.03756727);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(16,0.03480125);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(17,0.0271021);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(18,0.02166501);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(19,0.01868976);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(20,0.01359401);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(21,0.01212473);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(22,0.01015994);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(23,0.00800514);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(24,0.004696872);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(25,0.004081949);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(26,0.005282258);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(27,0.002582584);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(28,0.002733816);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(31,0.002323422);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetEntries(19696);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(1,0.3981218);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(2,1.507197);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(3,1.774608);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(4,1.472903);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(5,1.153379);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(6,0.9249408);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(7,0.6808334);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(8,0.5588854);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(9,0.4390913);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(10,0.3674493);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(11,0.3245815);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(12,0.2796025);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(13,0.2740167);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(14,0.2318992);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(15,0.2201627);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(16,0.190906);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(17,0.1266135);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(18,0.07692594);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(19,0.06348383);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(20,0.04006939);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(21,0.02612571);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(22,0.0174112);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(23,0.0124681);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(24,0.00861229);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(25,0.004264836);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(26,0.001505829);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(27,0.001300992);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(28,0.001489891);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(29,0.0009249816);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(30,0.0005241698);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(31,0.0005241698);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(1,0.01028077);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(2,0.0199962);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(3,0.02173029);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(4,0.01975821);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(5,0.01742374);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(6,0.01563412);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(7,0.013429);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(8,0.01220968);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(9,0.01076574);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(10,0.009859613);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(11,0.009149353);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(12,0.008531314);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(13,0.008385458);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(14,0.007830744);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(15,0.007553749);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(16,0.007073494);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(17,0.005768756);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(18,0.00440863);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(19,0.004095193);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(20,0.003199119);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(21,0.002570227);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(22,0.002145199);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(23,0.001847729);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(24,0.001497887);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(25,0.001046496);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(26,0.0005878468);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(27,0.000493173);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(28,0.0006317959);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(29,0.0004816596);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(30,0.0003883826);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(31,0.0003883826);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetEntries(45704);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_both_all->Modified();
   H_dR_Bj0_both_all->cd();
   H_dR_Bj0_both_all->SetSelected(H_dR_Bj0_both_all);
}
