#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.310117,-1.012821,7.029799,10.09119);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLogy();
   Z_dR_both_16->SetLeftMargin(0.15709);
   Z_dR_both_16->SetRightMargin(0.1234783);
   Z_dR_both_16->SetBottomMargin(0.12);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.802571e+08);
   
   TH1F *st_stack_129 = new TH1F("st_stack_129","",30,0,6);
   st_stack_129->SetMinimum(2.087666);
   st_stack_129->SetMaximum(9.567328e+08);
   st_stack_129->SetDirectory(0);
   st_stack_129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_129->SetLineColor(ci);
   st_stack_129->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_129->GetXaxis()->SetRange(1,30);
   st_stack_129->GetXaxis()->SetLabelFont(42);
   st_stack_129->GetXaxis()->SetTitleOffset(1);
   st_stack_129->GetXaxis()->SetTitleFont(42);
   st_stack_129->GetYaxis()->SetTitle("Events/0.2");
   st_stack_129->GetYaxis()->SetLabelFont(42);
   st_stack_129->GetYaxis()->SetTitleSize(0.037);
   st_stack_129->GetYaxis()->SetTitleFont(42);
   st_stack_129->GetZaxis()->SetLabelFont(42);
   st_stack_129->GetZaxis()->SetTitleOffset(1);
   st_stack_129->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_129);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,1168.643);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,2883308);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,3626588);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,2791347);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,2409061);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,2188762);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,2040198);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,2071412);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,2218336);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,2231246);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,2468019);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,2468245);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,3015029);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,3395624);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,3571829);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,2247462);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,1485144);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,949774.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,589711.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,579212);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,338153.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,247277);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,154702.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,85307.67);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,44668.14);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,6808.298);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,2525.213);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,237.9796);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,481.1385);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,89579.47);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,116470.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,116691.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,102846);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,107494.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,106415.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,110365.8);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,122601.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,123510.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,134602.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,123898.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,152379.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,157759.7);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,166001.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,135150);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,114603.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,83291.06);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,61848.28);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,72414.34);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,56499.38);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,47219.37);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,33347.44);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,27725.85);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,19475.26);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,2353.626);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,1576.98);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,237.6175);
   VbbHcc_both_Z_dR_stack_1->SetEntries(542633);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,24.97482);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,32391.77);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,62735.39);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,75186.61);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,91761.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,107103.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,121542.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,135840);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,150765.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,166302.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,183306.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,201528.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,219369.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,235332.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,230742.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,120805.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,68698.88);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,40478.27);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,23763.48);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,13669.43);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,7659.345);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,4090.832);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,2089.628);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,967.1349);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,401.6358);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,135.2591);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,33.59224);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,1.296079);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,1.412709);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,50.98455);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,71.09185);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,77.92791);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,86.12547);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,93.07209);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,99.15931);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,104.8396);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,110.4812);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,116.0645);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,121.9167);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,127.9046);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,133.5662);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,138.4373);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,137.1943);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,99.25661);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,74.82971);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,57.41442);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,43.95217);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,33.31399);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,24.86277);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,18.1302);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,12.90299);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,8.751383);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,5.622501);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,3.247895);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,1.608954);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.3102703);
   VbbHcc_both_Z_dR_stack_2->SetEntries(3.109335e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
