#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Tue Feb 14 16:02:01 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.310117,-1.025938,7.029799,10.16401);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetFillStyle(4000);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLogy();
   Z_dR_tags_17->SetLeftMargin(0.15709);
   Z_dR_tags_17->SetRightMargin(0.1234783);
   Z_dR_tags_17->SetBottomMargin(0.12);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(4.386966e+08);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(2.074223);
   st_stack_18->SetMaximum(1.109215e+09);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_18->GetXaxis()->SetRange(1,30);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,2269.655);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,3669474);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,4304279);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,3357348);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,2897408);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,2650720);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,2510440);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,2263940);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,2431380);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,2463735);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,2614091);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,2753974);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,3088662);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,3280306);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,3720074);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,2282361);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,1393799);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,1068530);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,728321.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,494822);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,282415.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,295027.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,122029.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,47045.29);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,43162.06);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,14980.52);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,4496.756);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,9.710887);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,689.5684);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,105862.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,117194.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,123215.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,117239.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,118793.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,116799.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,102656.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,120566);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,117367.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,125668.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,121056);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,138919.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,128760.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,146867.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,121782);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,88590.46);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,85904.68);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,71475.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,52507.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,34914.27);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,51248.12);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,21638.41);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,5875.293);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,19842.39);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,3871.406);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,2053.202);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,9.287382);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(517600);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,26.24125);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,41317.12);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,82686.61);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,98719.29);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,120358.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,140902.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,160503.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,179873);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,199860.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,220758.4);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,243682);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,267528.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,290930.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,312524.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,305945.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,160807.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,91758.42);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,54369.26);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,32051.88);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,18463.4);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,10354.34);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,5550.599);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,2802.097);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,1317.746);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,544.8612);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,179.5766);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,39.55021);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,2.383555);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,1.38159);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,54.94052);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,77.91726);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,85.21251);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,94.12974);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,101.8824);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,108.7593);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,115.1578);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,121.4137);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,127.6519);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,134.1794);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,140.6702);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,146.8029);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,152.2514);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,150.7434);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,109.2902);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,82.51681);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,63.49038);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,48.72515);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,36.92841);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,27.61479);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,20.15907);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,14.24018);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,9.764261);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,6.244353);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,3.527249);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.64341);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.4049791);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(4.530053e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
