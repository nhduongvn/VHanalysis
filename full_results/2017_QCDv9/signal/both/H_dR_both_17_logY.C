#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Tue Feb 14 16:07:56 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.353788,0.5453926,7.264125,2.562372);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15709);
   H_dR_both_17->SetRightMargin(0.1234783);
   H_dR_both_17->SetBottomMargin(0.12);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(183.1768);
   
   TH1F *st_stack_150 = new TH1F("st_stack_150","",30,0,6);
   st_stack_150->SetMinimum(6.129572);
   st_stack_150->SetMaximum(229.4425);
   st_stack_150->SetDirectory(0);
   st_stack_150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_150->SetLineColor(ci);
   st_stack_150->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_150->GetXaxis()->SetRange(1,31);
   st_stack_150->GetXaxis()->SetLabelFont(42);
   st_stack_150->GetXaxis()->SetTitleOffset(1);
   st_stack_150->GetXaxis()->SetTitleFont(42);
   st_stack_150->GetYaxis()->SetTitle("Events/0.2");
   st_stack_150->GetYaxis()->SetLabelFont(42);
   st_stack_150->GetYaxis()->SetTitleSize(0.037);
   st_stack_150->GetYaxis()->SetTitleFont(42);
   st_stack_150->GetZaxis()->SetLabelFont(42);
   st_stack_150->GetZaxis()->SetTitleOffset(1);
   st_stack_150->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_150);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,0.3000029);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,0.7099879);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,0.8510517);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,1.14123);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,1.277286);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,1.309443);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,1.2839);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,1.328888);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,1.297133);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,1.21049);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,1.301593);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,1.35832);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,1.370175);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,1.445575);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,0.5017421);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,0.2777249);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,0.1949007);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,0.1061374);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,0.07325235);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,0.04761235);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,0.03156725);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,0.02272266);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,0.01606761);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,0.003915085);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,0.02433187);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,0.03666204);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,0.03996423);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,0.04684174);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,0.04886329);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,0.04971582);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,0.04917596);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,0.05067926);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,0.04995603);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,0.04777478);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,0.0497285);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,0.05096375);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,0.05113096);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,0.05181317);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,0.03059781);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,0.02282153);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,0.01896605);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,0.01416625);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,0.01140435);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,0.009318412);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,0.007533775);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,0.006547148);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,0.005177025);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,0.002356374);
   VbbHcc_both_H_dR_stack_1->SetEntries(10111);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,0.108284);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,0.2112396);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,0.3058909);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,0.432748);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,0.513559);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,0.5223247);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,0.4658223);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,0.4069258);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,0.3472287);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,0.3288198);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,0.341408);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,0.3373638);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,0.3568435);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,0.3523957);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,0.1773777);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,0.1024787);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,0.06738609);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,0.04841426);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,0.0310378);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,0.01426538);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,0.009758979);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,0.006341372);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,0.003410968);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.002140878);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.0008826534);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.0002565271);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,0.00512579);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,0.007102178);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,0.008544807);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,0.01019933);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,0.01118661);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,0.01126095);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,0.01059636);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,0.0099117);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,0.009155951);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,0.008949624);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,0.009066202);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,0.008998148);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,0.009280719);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,0.00920399);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,0.006531389);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,0.004962297);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,0.004004245);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,0.003396801);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,0.002702574);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.001805943);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.001470971);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.001189212);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.0008786152);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.0006931996);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.0004501169);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.0002565271);
   VbbHcc_both_H_dR_stack_2->SetEntries(23807);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","ZHcc","F");

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
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
