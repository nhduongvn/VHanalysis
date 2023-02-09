#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_17/H_dR_Bj0_both_17
//=========  (Wed Jan 18 11:42:15 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_both_17 = new TCanvas("H_dR_Bj0_both_17", "H_dR_Bj0_both_17",0,0,600,600);
   H_dR_Bj0_both_17->SetHighLightColor(2);
   H_dR_Bj0_both_17->Range(-1.310117,0.5205561,7.029799,2.658418);
   H_dR_Bj0_both_17->SetFillColor(0);
   H_dR_Bj0_both_17->SetFillStyle(4000);
   H_dR_Bj0_both_17->SetBorderMode(0);
   H_dR_Bj0_both_17->SetBorderSize(2);
   H_dR_Bj0_both_17->SetLogy();
   H_dR_Bj0_both_17->SetLeftMargin(0.15709);
   H_dR_Bj0_both_17->SetRightMargin(0.1234783);
   H_dR_Bj0_both_17->SetBottomMargin(0.12);
   H_dR_Bj0_both_17->SetFrameFillStyle(1000);
   H_dR_Bj0_both_17->SetFrameBorderMode(0);
   H_dR_Bj0_both_17->SetFrameFillStyle(1000);
   H_dR_Bj0_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(219.4903);
   
   TH1F *st_stack_170 = new TH1F("st_stack_170","",30,0,6);
   st_stack_170->SetMinimum(5.985488);
   st_stack_170->SetMaximum(278.3758);
   st_stack_170->SetDirectory(0);
   st_stack_170->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_170->SetLineColor(ci);
   st_stack_170->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_170->GetXaxis()->SetRange(1,30);
   st_stack_170->GetXaxis()->SetLabelFont(42);
   st_stack_170->GetXaxis()->SetTitleOffset(1);
   st_stack_170->GetXaxis()->SetTitleFont(42);
   st_stack_170->GetYaxis()->SetTitle("Events/0.2");
   st_stack_170->GetYaxis()->SetLabelFont(42);
   st_stack_170->GetYaxis()->SetTitleSize(0.037);
   st_stack_170->GetYaxis()->SetTitleFont(42);
   st_stack_170->GetZaxis()->SetLabelFont(42);
   st_stack_170->GetZaxis()->SetTitleOffset(1);
   st_stack_170->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_170);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,0.2555196);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,1.215702);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,1.680716);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,1.550576);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,1.3633);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,1.050646);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,0.828455);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,0.6840309);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,0.525323);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,0.4269241);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,0.3301123);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,0.3729635);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,0.2793258);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,0.2666292);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,0.2396489);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,0.2348876);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,0.1428371);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,0.08252808);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,0.05237359);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,0.02539326);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,0.02380618);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,0.01428371);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,0.007935393);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,0.003174157);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,0.003174157);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,0.004761236);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,0.001587079);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,0.02013777);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,0.0439251);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,0.05164715);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,0.04960731);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,0.04651521);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,0.04083452);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,0.03626049);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,0.03294861);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,0.02887436);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,0.02603002);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,0.02288917);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,0.02432945);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,0.02105498);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,0.02057089);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,0.01950235);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,0.01930764);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,0.01505635);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,0.01144459);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,0.009117072);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,0.006348314);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,0.006146729);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,0.004761236);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,0.003548816);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,0.002244468);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,0.002244468);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,0.002748901);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,0.001587079);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(7351);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,0.08279093);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,0.425435);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,0.5141869);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,0.4519281);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,0.3642801);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,0.2753074);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,0.2044384);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,0.1708805);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,0.130037);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,0.1057516);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,0.09559593);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,0.08190783);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,0.08080395);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,0.06270033);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,0.06336266);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,0.05453163);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,0.03620723);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,0.02185681);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,0.01744129);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,0.01037646);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,0.009714136);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,0.00529862);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,0.003753189);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.001766207);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.001103879);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.0008831033);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.0002207758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.0002207758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(29,0.0002207758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,0.004275305);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,0.00969153);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,0.01065458);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,0.009988734);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,0.008967956);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,0.007796232);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,0.006718263);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,0.006142172);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,0.00535808);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,0.004831915);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,0.004594047);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,0.004252443);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,0.00422369);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,0.00372058);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,0.00374018);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,0.003469764);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,0.00282731);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,0.002196692);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.001962298);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.001513563);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.001464461);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.001081576);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.000910282);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.0006244483);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.0004936697);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.0004415516);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.0002207758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.0002207758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(29,0.0002207758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(14825);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_both_17->Modified();
   H_dR_Bj0_both_17->cd();
   H_dR_Bj0_both_17->SetSelected(H_dR_Bj0_both_17);
}
