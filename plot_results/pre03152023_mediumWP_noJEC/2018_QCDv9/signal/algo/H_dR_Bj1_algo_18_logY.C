#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Thu Mar  9 13:08:26 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(-1.310117,-3.611763,7.029799,0.2343908);
   H_dR_Bj1_algo_18->SetFillColor(0);
   H_dR_Bj1_algo_18->SetFillStyle(4000);
   H_dR_Bj1_algo_18->SetBorderMode(0);
   H_dR_Bj1_algo_18->SetBorderSize(2);
   H_dR_Bj1_algo_18->SetLogy();
   H_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_18->SetBottomMargin(0.12);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(0.7276728);
   
   TH1F *st_stack_111 = new TH1F("st_stack_111","",30,0,6);
   st_stack_111->SetMinimum(1.074151);
   st_stack_111->SetMaximum(0.7075798);
   st_stack_111->SetDirectory(0);
   st_stack_111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_111->SetLineColor(ci);
   st_stack_111->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_111->GetXaxis()->SetRange(1,30);
   st_stack_111->GetXaxis()->SetLabelFont(42);
   st_stack_111->GetXaxis()->SetTitleOffset(1);
   st_stack_111->GetXaxis()->SetTitleFont(42);
   st_stack_111->GetYaxis()->SetTitle("Event/0.2");
   st_stack_111->GetYaxis()->SetLabelFont(42);
   st_stack_111->GetYaxis()->SetTitleSize(0.037);
   st_stack_111->GetYaxis()->SetTitleFont(42);
   st_stack_111->GetZaxis()->SetLabelFont(42);
   st_stack_111->GetZaxis()->SetTitleOffset(1);
   st_stack_111->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_111);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.09103048);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.3049521);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.4460493);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.4119129);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.295849);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.1502003);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.095582);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.06372133);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.03413643);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.04551524);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.0295849);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.02503338);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.0182061);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.01365457);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.0182061);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,0.004551524);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.01439318);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.02634385);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.03186067);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.03061724);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.02594768);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.01848838);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.01474862);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.0120422);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.008813988);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.01017752);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.008205376);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.007547848);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.006436827);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.005574455);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.006436827);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,0.003218413);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.01738009);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.07611283);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.1579191);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.1609157);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.09738846);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.05154097);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.02726877);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.0152825);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.01708044);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.008690047);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.00749142);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.007191763);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.00839039);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.00659245);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.009289361);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.002996568);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.001797941);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,0.001198627);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.001498284);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,0.0005993136);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.002282118);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.004775743);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.006879065);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.006944025);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.00540214);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.003929962);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.002858544);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.002139978);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.002262359);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.001613701);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.001498284);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.001468013);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.001585635);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.001405515);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.001668418);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.000947598);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.0007340063);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,0.0005993136);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.000670053);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,0.0004237787);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_18->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->SetSelected(H_dR_Bj1_algo_18);
}
