#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Tue Feb 14 16:07:55 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(-1.353788,0.5501399,7.264125,2.544131);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetLogy();
   H_dR_tags_17->SetLeftMargin(0.15709);
   H_dR_tags_17->SetRightMargin(0.1234783);
   H_dR_tags_17->SetBottomMargin(0.12);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(176.9961);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(6.157704);
   st_stack_22->SetMaximum(221.173);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.2836929);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.6853254);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,0.8175149);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,1.099728);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,1.242032);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,1.263274);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,1.25758);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,1.316753);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,1.266993);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,1.192759);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,1.272241);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,1.334342);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,1.35597);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,1.423964);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.484477);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.2724707);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.1985827);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.1018505);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.07253808);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.04761235);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.03156725);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,0.02080836);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.01606761);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,0.003915085);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.02374253);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.03601189);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.0391944);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.04602835);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.04816837);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.04883058);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.04865876);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.0504701);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.049376);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.04743618);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.04917721);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.05049139);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.05087552);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.05147798);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.03009632);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.02261567);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.01914443);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.013944);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.01130352);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.009318412);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.007533775);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,0.006261038);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.005177025);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,0.002356374);
   VbbHcc_tags_H_dR_stack_1->SetEntries(9885);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.1039563);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.2009247);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.2946152);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.4217292);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.5004262);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.5066873);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.4547805);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.396279);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.3363587);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.3179862);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.3295913);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.3289121);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.3471599);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.3419662);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.171951);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.100564);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.06415002);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.04746321);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.02892721);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.01426538);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.009321803);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.006438099);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.003410968);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.002140878);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,0.0008826534);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,0.0002565271);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.005025334);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.006919479);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.008381205);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.01007287);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.01104825);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.011093);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.01047639);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.009790355);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.009011936);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.008793757);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.008909631);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.0088924);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.009149028);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.0090553);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.006431811);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.004909443);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.003911606);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.003362624);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.002596828);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.001805943);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.001436307);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.001206368);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.0008786152);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.0006931996);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.0004501169);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,0.0002565271);
   VbbHcc_tags_H_dR_stack_2->SetEntries(23096);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","ZHcc","F");

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
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}
