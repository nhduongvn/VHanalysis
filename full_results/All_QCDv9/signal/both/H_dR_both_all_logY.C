#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_all_logY()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(-1.353788,0.4499349,7.264125,2.937061);
   H_dR_both_all->SetFillColor(0);
   H_dR_both_all->SetFillStyle(4000);
   H_dR_both_all->SetBorderMode(0);
   H_dR_both_all->SetBorderSize(2);
   H_dR_both_all->SetLogy();
   H_dR_both_all->SetLeftMargin(0.15709);
   H_dR_both_all->SetRightMargin(0.1234783);
   H_dR_both_all->SetBottomMargin(0.12);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(371.3368);
   
   TH1F *st_stack_136 = new TH1F("st_stack_136","",30,0,6);
   st_stack_136->SetMinimum(5.602605);
   st_stack_136->SetMaximum(487.9193);
   st_stack_136->SetDirectory(0);
   st_stack_136->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_136->SetLineColor(ci);
   st_stack_136->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_136->GetXaxis()->SetRange(1,31);
   st_stack_136->GetXaxis()->SetLabelFont(42);
   st_stack_136->GetXaxis()->SetTitleOffset(1);
   st_stack_136->GetXaxis()->SetTitleFont(42);
   st_stack_136->GetYaxis()->SetTitle("Events/0.2");
   st_stack_136->GetYaxis()->SetLabelFont(42);
   st_stack_136->GetYaxis()->SetTitleSize(0.037);
   st_stack_136->GetYaxis()->SetTitleFont(42);
   st_stack_136->GetZaxis()->SetLabelFont(42);
   st_stack_136->GetZaxis()->SetTitleOffset(1);
   st_stack_136->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_136);
   
   
   TH1D *VbbHcc_both_H_dR_all_stack_1 = new TH1D("VbbHcc_both_H_dR_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,0.6251389);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,1.210183);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,1.500805);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,1.829261);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,2.205959);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,2.35266);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,2.508645);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,2.543032);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,2.540091);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,2.455695);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,2.623486);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,2.74527);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,2.923135);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,2.919289);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,1.154303);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,0.652965);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,0.3329598);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,0.2306143);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,0.1531162);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,0.1060358);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,0.06344144);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,0.0337598);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,0.007195303);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,0.01452384);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(27,0.005209758);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,0.03538364);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,0.05038386);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,0.05689766);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,0.06217223);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,0.06876622);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,0.07151056);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,0.07482868);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,0.07366274);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,0.07437723);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,0.07280256);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,0.07436639);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,0.07606405);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,0.07715665);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,0.0796968);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,0.05102896);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,0.03644126);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,0.02642807);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,0.02088999);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,0.01760209);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,0.01476773);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,0.01077311);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,0.007455734);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,0.003690872);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,0.004868925);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(27,0.003058091);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(19696);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_2 = new TH1D("VbbHcc_both_H_dR_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(2,0.0001892188);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,0.2602607);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,0.466667);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,0.5750147);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,0.7977891);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,0.9031202);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,0.9401106);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,0.8387141);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,0.7459684);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,0.6967626);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,0.6730697);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,0.6884055);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,0.7325982);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,0.7902326);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,0.755856);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,0.3976144);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,0.235489);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,0.1453767);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,0.08656174);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,0.06583979);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,0.04351934);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,0.02542803);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,0.01909123);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,0.009107867);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,0.00331382);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,0.002016588);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,0.000533292);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(2,0.0001892188);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,0.008786273);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,0.01159414);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,0.0130214);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,0.01531862);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,0.01640473);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,0.01682663);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,0.01563055);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,0.01487702);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,0.01426708);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,0.0139827);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,0.0141476);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,0.01449342);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,0.01510208);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,0.01470171);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,0.01057897);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,0.008125943);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,0.006400493);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,0.00488346);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,0.004378901);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,0.003440466);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,0.002665305);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,0.002402952);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,0.001521331);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,0.0009469007);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,0.000948559);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,0.0003083126);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(45704);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_1","ZHcc","F");

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
   H_dR_both_all->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->SetSelected(H_dR_both_all);
}
