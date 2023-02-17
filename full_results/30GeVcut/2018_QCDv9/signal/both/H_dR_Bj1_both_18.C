#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_18()
{
//=========Macro generated from canvas: H_dR_Bj1_both_18/H_dR_Bj1_both_18
//=========  (Tue Feb 14 15:57:11 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_18 = new TCanvas("H_dR_Bj1_both_18", "H_dR_Bj1_both_18",0,0,600,600);
   H_dR_Bj1_both_18->SetHighLightColor(2);
   H_dR_Bj1_both_18->Range(-1.310117,-0.9013522,7.029799,6.609916);
   H_dR_Bj1_both_18->SetFillColor(0);
   H_dR_Bj1_both_18->SetFillStyle(4000);
   H_dR_Bj1_both_18->SetBorderMode(0);
   H_dR_Bj1_both_18->SetBorderSize(2);
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
   st->SetMaximum(5.85879);
   
   TH1F *st_stack_175 = new TH1F("st_stack_175","",30,0,6);
   st_stack_175->SetMinimum(0);
   st_stack_175->SetMaximum(5.85879);
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
   st_stack_175->GetYaxis()->SetTitle("Events/0.2");
   st_stack_175->GetYaxis()->SetLabelFont(42);
   st_stack_175->GetYaxis()->SetTitleSize(0.037);
   st_stack_175->GetYaxis()->SetTitleFont(42);
   st_stack_175->GetZaxis()->SetLabelFont(42);
   st_stack_175->GetZaxis()->SetTitleOffset(1);
   st_stack_175->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_175);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,0.5689405);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,2.394102);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,2.910699);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,2.526096);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,2.382723);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,2.014049);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,1.6431);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,1.174293);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,1.103745);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,0.8647895);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,0.7510014);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,0.6258345);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,0.4938403);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,0.5211495);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,0.4050856);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,0.4483251);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,0.2526096);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,0.1160639);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,0.07965167);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,0.05916981);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,0.03641219);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,0.009103048);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,0.01365457);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,0.009103048);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,0.006827286);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,0.03598296);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,0.07381331);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,0.08138832);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,0.07582079);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,0.07363769);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,0.06770153);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,0.06114985);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,0.05169537);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,0.05011846);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,0.04436277);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,0.04134127);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,0.03773924);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,0.03352407);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,0.03443853);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,0.03036245);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,0.03194184);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,0.02397664);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,0.01625219);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,0.01346359);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,0.01160415);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,0.009103048);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,0.004551524);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,0.005574455);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,0.004551524);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,0.003941735);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(9410);

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
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,0.2364292);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,0.8950749);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,0.9951602);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,0.869604);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,0.7371557);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,0.5426785);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,0.4530811);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,0.3389118);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,0.2610011);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,0.2070628);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,0.1839893);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,0.1654106);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,0.1513267);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,0.1387411);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,0.1225596);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,0.111772);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,0.05633548);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,0.0353595);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,0.0242722);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,0.0152825);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,0.009888674);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.00659245);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.006892106);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.003296225);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.002397254);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.001498284);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.002397254);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,0.008417103);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,0.01637728);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,0.01726866);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,0.01614258);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,0.01486249);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,0.01275215);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,0.01165199);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,0.01007756);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,0.008843684);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,0.007877042);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,0.007425203);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,0.007040341);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,0.006733949);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,0.006447846);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,0.006060184);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,0.005787334);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,0.004108687);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.003255106);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.002696911);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.002139978);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.001721397);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.001405515);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.001437104);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.0009938492);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.0008475574);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.000670053);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.0008475574);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(21941);

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
