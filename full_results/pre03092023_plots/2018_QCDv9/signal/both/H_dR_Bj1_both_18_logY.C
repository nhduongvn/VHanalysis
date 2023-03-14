#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_18/H_dR_Bj1_both_18
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_18 = new TCanvas("H_dR_Bj1_both_18", "H_dR_Bj1_both_18",0,0,600,600);
   H_dR_Bj1_both_18->SetHighLightColor(2);
   H_dR_Bj1_both_18->Range(-1.310117,-3.432165,7.029799,0.413989);
   H_dR_Bj1_both_18->SetFillColor(0);
   H_dR_Bj1_both_18->SetFillStyle(4000);
   H_dR_Bj1_both_18->SetBorderMode(0);
   H_dR_Bj1_both_18->SetBorderSize(2);
   H_dR_Bj1_both_18->SetLogy();
   H_dR_Bj1_both_18->SetLeftMargin(0.15709);
   H_dR_Bj1_both_18->SetRightMargin(0.1234783);
   H_dR_Bj1_both_18->SetBottomMargin(0.12);
   H_dR_Bj1_both_18->SetFrameFillStyle(1000);
   H_dR_Bj1_both_18->SetFrameBorderMode(0);
   H_dR_Bj1_both_18->SetFrameFillStyle(1000);
   H_dR_Bj1_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_175 = new TH1F("st_stack_175","",30,0,6);
   st_stack_175->SetMinimum(17.95217);
   st_stack_175->SetMaximum(1.069975);
   st_stack_175->SetDirectory(0);
   st_stack_175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_175->SetLineColor(ci);
   st_stack_175->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_175->GetXaxis()->SetRange(1,30);
   st_stack_175->GetXaxis()->SetLabelFont(42);
   st_stack_175->GetXaxis()->SetTitleOffset(1);
   st_stack_175->GetXaxis()->SetTitleFont(42);
   st_stack_175->GetYaxis()->SetTitle("Event/0.2");
   st_stack_175->GetYaxis()->SetLabelFont(42);
   st_stack_175->GetYaxis()->SetTitleSize(0.037);
   st_stack_175->GetYaxis()->SetTitleFont(42);
   st_stack_175->GetZaxis()->SetLabelFont(42);
   st_stack_175->GetZaxis()->SetTitleOffset(1);
   st_stack_175->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_175);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,0.1633042);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,0.7716923);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,0.9221883);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,0.7380709);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,0.5907769);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,0.4642962);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,0.3298104);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,0.227345);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,0.1681073);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,0.1392889);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,0.1344858);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,0.08485414);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,0.08805618);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,0.1008644);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,0.0672429);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,0.07204596);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,0.04803064);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,0.02721736);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,0.01280817);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,0.01120715);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,0.004803064);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,0.003202043);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,0.001601021);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,0.001601021);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,0.001601021);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,0.001601021);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,0.001601021);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,0.01616952);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,0.03514962);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,0.03842451);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,0.03437539);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,0.03075462);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,0.02726441);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,0.02297898);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,0.01907837);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,0.01640559);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,0.01493333);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,0.0146736);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,0.01165561);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,0.01187349);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,0.01270771);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,0.0103758);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,0.01073998);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,0.008769156);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,0.006601181);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,0.004528372);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,0.004235905);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,0.00277305);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,0.002264186);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,0.001601021);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,0.001601021);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,0.001601021);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,0.001601021);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,0.001601021);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(3234);

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
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,0.06598402);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,0.3223309);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,0.378196);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,0.3482607);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,0.2639361);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,0.1722331);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,0.1288059);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,0.09085979);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,0.07420568);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,0.05860562);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,0.04954072);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,0.04384881);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,0.04174069);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,0.03625959);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,0.0345731);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,0.02824875);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,0.01517843);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,0.01117301);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,0.006324347);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,0.003794608);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,0.002951362);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.001686493);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.002108116);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.0002108116);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.0004216232);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.0002108116);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.0004216232);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,0.0002108116);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,0.003729638);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,0.008243245);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,0.008929059);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,0.008568395);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,0.007459275);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,0.006025672);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,0.005210928);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,0.004376562);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,0.003955176);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,0.003514931);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,0.00323168);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,0.003040368);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,0.002966382);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,0.002764768);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,0.002699705);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,0.00244032);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,0.001788796);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.001534731);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.001154663);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.0008943978);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.0007887847);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.0005962652);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.0006666447);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.0002108116);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.0002981326);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.0002108116);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.0002981326);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.0002108116);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(10352);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_18->Modified();
   H_dR_Bj1_both_18->cd();
   H_dR_Bj1_both_18->SetSelected(H_dR_Bj1_both_18);
}
