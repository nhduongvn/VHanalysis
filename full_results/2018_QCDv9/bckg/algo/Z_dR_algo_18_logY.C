#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Mon Dec 19 11:15:38 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(-1.310117,-0.9203124,7.029799,9.580882);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetLogy();
   Z_dR_algo_18->SetLeftMargin(0.15709);
   Z_dR_algo_18->SetRightMargin(0.1234783);
   Z_dR_algo_18->SetBottomMargin(0.12);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.397408e+08);
   
   TH1F *st_stack_75 = new TH1F("st_stack_75","",30,0,6);
   st_stack_75->SetMinimum(2.18691);
   st_stack_75->SetMaximum(3.394395e+08);
   st_stack_75->SetDirectory(0);
   st_stack_75->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_75->SetLineColor(ci);
   st_stack_75->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_75->GetXaxis()->SetRange(1,30);
   st_stack_75->GetXaxis()->SetLabelFont(42);
   st_stack_75->GetXaxis()->SetTitleOffset(1);
   st_stack_75->GetXaxis()->SetTitleFont(42);
   st_stack_75->GetYaxis()->SetTitle("Events/0.2");
   st_stack_75->GetYaxis()->SetLabelFont(42);
   st_stack_75->GetYaxis()->SetTitleSize(0.037);
   st_stack_75->GetYaxis()->SetTitleFont(42);
   st_stack_75->GetZaxis()->SetLabelFont(42);
   st_stack_75->GetZaxis()->SetTitleOffset(1);
   st_stack_75->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_75);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,2220.507);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,1171291);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,1387839);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,1171171);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,1060250);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,783765.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,781785.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,760784.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,729329.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,473558.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,548721);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,457526.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,522137.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,473985.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,468886.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,179196.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,125585.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,76650.06);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,134796.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,24198.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,9590.43);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,2391.674);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,2911.723);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,618.4784);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,2857.078);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,19.36528);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,1863.817);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,92308.64);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,98818.27);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,114005.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,108144.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,79957.95);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,84107.04);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,95301.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,90658.71);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,59879.84);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,80332.17);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,67706.44);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,81148.52);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,82665.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,72497.34);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,31025.78);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,29877.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,33978.69);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,47439.18);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,6032.869);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,3382.642);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,754.099);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,1023.366);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,365.7392);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,2033.258);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,13.13466);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(42604);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,3.423449);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,4245.364);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,9568.93);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,12726.62);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,16029.38);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,18329.32);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,19314.84);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,19268.54);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,18087.61);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,16500.32);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,14534.1);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,12770.47);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,11259.69);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,10088.48);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,8677.372);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,4053.129);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,2013.999);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,1027.841);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,538.4324);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,267.0114);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,124.7587);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,56.72155);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,23.6675);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,10.42883);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,3.712052);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.8728812);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,0.1805984);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.5516016);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,19.45502);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,29.3777);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,33.85249);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,39.01125);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,41.02321);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,41.62389);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,41.73324);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,40.21885);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,38.33847);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,35.76111);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,33.35802);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,31.53469);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,30.36246);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,27.62276);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,18.72982);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,13.74308);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,9.095966);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,6.56524);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,4.798442);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,3.336681);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,2.263365);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,1.358025);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.8819933);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.5308006);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.2776622);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,0.1529874);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(2750781);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}
