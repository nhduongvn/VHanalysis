#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_18()
{
//=========Macro generated from canvas: H_dR_seljet_18/H_dR_seljet_18
//=========  (Thu Feb 16 10:35:23 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_18 = new TCanvas("H_dR_seljet_18", "H_dR_seljet_18",0,0,600,600);
   H_dR_seljet_18->SetHighLightColor(2);
   H_dR_seljet_18->Range(-1.353788,-10.33264,7.264125,75.77269);
   H_dR_seljet_18->SetFillColor(0);
   H_dR_seljet_18->SetFillStyle(4000);
   H_dR_seljet_18->SetBorderMode(0);
   H_dR_seljet_18->SetBorderSize(2);
   H_dR_seljet_18->SetLeftMargin(0.15709);
   H_dR_seljet_18->SetRightMargin(0.1234783);
   H_dR_seljet_18->SetBottomMargin(0.12);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(67.16216);
   
   TH1F *st_stack_279 = new TH1F("st_stack_279","",30,0,6);
   st_stack_279->SetMinimum(0);
   st_stack_279->SetMaximum(67.16216);
   st_stack_279->SetDirectory(0);
   st_stack_279->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_279->SetLineColor(ci);
   st_stack_279->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_279->GetXaxis()->SetRange(1,31);
   st_stack_279->GetXaxis()->SetLabelFont(42);
   st_stack_279->GetXaxis()->SetTitleOffset(1);
   st_stack_279->GetXaxis()->SetTitleFont(42);
   st_stack_279->GetYaxis()->SetTitle("Events/0.2");
   st_stack_279->GetYaxis()->SetLabelFont(42);
   st_stack_279->GetYaxis()->SetTitleSize(0.037);
   st_stack_279->GetYaxis()->SetTitleFont(42);
   st_stack_279->GetZaxis()->SetLabelFont(42);
   st_stack_279->GetZaxis()->SetTitleOffset(1);
   st_stack_279->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_279);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,0.002305427);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,0.8497457);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,1.726755);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,2.23566);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,2.769724);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,3.23284);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,3.676833);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,4.516226);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,5.408422);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,7.67661);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,10.71754);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,14.62813);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,21.46617);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,29.29208);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,32.84203);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,12.0453);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,5.221178);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,2.752982);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,1.863185);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,0.998192);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,0.5956391);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,0.3737068);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,0.2066778);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,0.1522572);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,0.06798418);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,0.01397422);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,0.005373077);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,0.002305427);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,0.04842395);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,0.06876715);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,0.08395926);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,0.09211117);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,0.1007729);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,0.1044625);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,0.158074);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,0.1239257);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,0.1473534);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,0.1785021);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,0.2070671);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,0.2563417);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,0.2995012);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,0.3287591);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,0.1897598);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,0.1239204);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,0.08745224);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,0.1633619);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,0.05139065);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,0.03971908);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,0.03261215);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,0.02377512);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,0.0204676);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,0.01493726);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,0.005784281);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,0.003805603);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(65138);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,0.394787);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,0.8912781);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,1.148811);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,1.1612);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,1.073027);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,1.032605);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,1.135392);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,1.583746);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,2.503095);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,4.004523);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,5.978597);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,8.374545);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,10.93118);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,11.93274);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,5.089305);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,2.532226);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,1.438716);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,0.9159691);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,0.5688326);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,0.365362);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,0.2107813);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,0.1230638);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,0.06494472);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,0.02578868);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,0.01422618);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,0.005322317);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,0.01339513);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,0.0180414);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,0.02057218);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,0.02182641);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,0.02010891);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,0.01995551);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,0.02078627);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,0.02398745);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,0.03118172);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,0.04019855);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,0.04768508);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,0.06027936);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,0.06593107);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,0.06807366);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,0.04450045);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,0.0313373);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,0.02281866);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,0.01845);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,0.01465507);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,0.01183147);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,0.009022969);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,0.006737029);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,0.005136689);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,0.003056386);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,0.002401972);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,0.001400816);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(186422);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","ZHcc","F");

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
   H_dR_seljet_18->Modified();
   H_dR_seljet_18->cd();
   H_dR_seljet_18->SetSelected(H_dR_seljet_18);
}
