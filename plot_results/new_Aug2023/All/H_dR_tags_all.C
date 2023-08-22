void H_dR_tags_all()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Tue Aug 22 09:20:19 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(0,0,1,1);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-149.9455,6.525,150095.5);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.3);
   st->SetMaximum(128639);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(0.3);
   st_stack_24->SetMaximum(135071);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetRange(1,31);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetLabelSize(0.035);
   st_stack_24->GetXaxis()->SetTitleSize(0.035);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetLabelSize(0.05);
   st_stack_24->GetYaxis()->SetTitleSize(0.057);
   st_stack_24->GetYaxis()->SetTitleOffset(1.2);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetLabelSize(0.035);
   st_stack_24->GetZaxis()->SetTitleSize(0.035);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,31028.1);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,26666.14);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,18350);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,16964.12);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,14574.19);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,15397.22);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,14664.54);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,19383.19);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,19454.8);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,22580.96);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,26741.67);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,30335.02);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,27827.49);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,53794.39);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,31317.72);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,33202.59);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,25993.76);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,23307.23);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,14410.87);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,10276.01);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,10114.37);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,23769.87);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,7082.579);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,6147.686);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,5151.949);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(28,2872.972);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(29,5819.273);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(30,3096.984);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(31,3280.505);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,2676.275);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,2125.061);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,1801.248);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,1690.547);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,1613.543);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,1721.088);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,1595.355);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,2102.022);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,2284.62);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,2115.384);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,2673.68);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,2592.978);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,2382.988);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,20768.78);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,2505.454);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,2498.764);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,2020.246);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,2582.253);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,1655.236);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,1092.861);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,1845.543);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,16553.24);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,1205.201);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,2234.17);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,1053.539);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(28,554.2204);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(29,2325.073);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(30,805.8026);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(31,822.2948);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(27568);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(2,0.01519877);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,92.85832);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,111.1918);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,98.68907);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,101.8759);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,100.2459);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,90.90633);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,104.3753);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,108.9139);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,110.8207);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,129.5442);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,124.3245);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,144.5071);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,162.1025);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,174.1454);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,148.9384);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,133.5599);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,116.2755);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,103.6434);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,89.02373);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,74.02534);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,60.83305);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,47.15748);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,44.92805);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,33.77183);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,26.28572);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,23.48027);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(29,18.09356);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(30,13.79962);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(31,12.4236);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(2,0.08885914);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,4.141587);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,4.494539);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,4.183768);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,4.323833);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,4.26885);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,3.980796);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,4.30998);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,4.594892);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,4.455127);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,4.858873);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,4.724753);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,5.130134);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,5.304436);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,5.643736);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,5.127983);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,4.798056);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,4.435898);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,4.239413);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,3.886204);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,3.624606);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,3.221407);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,2.776427);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,2.764678);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,2.429253);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,2.096292);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,2.127797);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(29,1.842529);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(30,1.501673);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(31,1.509982);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(34548);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_3 = new TH1D("VbbHcc_tags_H_dR_all_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(2,1.997137);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(3,1587.297);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(4,2220.647);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(5,2237.646);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(6,2307.712);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(7,2261.55);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(8,2225.056);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(9,2195.005);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(10,2268.252);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(11,2412.399);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(12,2595.83);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(13,2818.019);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(14,3021.773);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(15,3245.045);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(16,3363.67);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(17,3182.938);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(18,2910.396);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(19,2580.336);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(20,2230.665);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(21,1886.186);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(22,1544.308);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(23,1259.759);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(24,1029.914);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(25,817.6427);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(26,675.3751);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(27,561.8783);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(28,461.0145);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(29,368.6786);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(30,244.6506);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(31,210.7592);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(2,0.3762439);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(3,11.09785);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(4,12.61233);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(5,12.48847);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(6,12.94447);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(7,12.73255);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(8,12.4964);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(9,12.37462);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(10,12.89357);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(11,12.94008);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(12,13.7843);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(13,14.12234);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(14,14.52956);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(15,15.34971);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(16,15.8347);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(17,15.79578);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(18,14.36739);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(19,13.8798);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(20,12.99551);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(21,11.79773);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(22,10.54447);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(23,9.409974);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(24,9.100308);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(25,8.126728);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(26,6.865068);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(27,7.680038);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(28,5.702386);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(29,5.020821);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(30,4.03018);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(31,3.759594);
   VbbHcc_tags_H_dR_all_stack_3->SetEntries(905703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_4 = new TH1D("VbbHcc_tags_H_dR_all_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(2,0.02707554);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(3,312.8268);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(4,393.4233);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(5,346.587);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(6,321.6356);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(7,264.558);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(8,234.52);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(9,247.6436);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(10,242.2075);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(11,277.8409);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(12,331.4367);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(13,358.2591);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(14,398.5408);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(15,434.3149);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(16,491.4915);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(17,450.9534);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(18,425.5523);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(19,358.0339);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(20,305.0368);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(21,243.6675);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(22,183.0755);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(23,152.2171);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(24,105.4682);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(25,97.20436);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(26,90.90018);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(27,64.54784);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(28,57.52011);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(29,48.029);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(30,33.9775);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(31,24.11349);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(2,0.02707554);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(3,11.80595);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(4,10.74416);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(5,12.21995);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(6,14.12327);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(7,11.5508);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(8,8.482604);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(9,10.51642);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(10,10.9238);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(11,11.06049);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(12,14.21584);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(13,12.41146);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(14,14.097);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(15,13.23926);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(16,20.66066);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(17,14.58079);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(18,16.40355);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(19,13.89602);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(20,14.37318);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(21,11.7172);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(22,11.99909);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(23,10.02975);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(24,5.70115);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(25,8.122623);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(26,6.659434);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(27,4.623955);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(28,4.058447);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(29,3.509173);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(30,3.856983);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(31,2.319073);
   VbbHcc_tags_H_dR_all_stack_4->SetEntries(49827);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_5 = new TH1D("VbbHcc_tags_H_dR_all_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(3,38.88123);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(4,34.18751);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(5,28.43014);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(6,27.55133);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(7,23.38127);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(8,30.84405);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(9,31.67891);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(10,22.15239);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(11,32.85841);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(12,36.03552);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(13,34.1565);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(14,42.5707);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(15,40.25693);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(16,34.11514);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(17,42.8757);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(18,39.25445);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(19,42.34172);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(20,30.20399);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(21,17.64104);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(22,17.25389);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(23,15.33238);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(24,9.475637);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(25,12.70507);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(26,4.840847);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(27,9.77749);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(28,14.35059);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(29,4.848591);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(30,3.589955);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(31,1.996238);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(3,6.447154);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(4,4.765563);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(5,3.757387);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(6,9.214702);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(7,2.708703);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(8,8.442627);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(9,6.27751);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(10,2.97637);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(11,4.908288);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(12,4.893784);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(13,3.817624);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(14,5.761085);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(15,3.950236);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(16,3.969149);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(17,5.040992);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(18,5.183816);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(19,5.288993);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(20,4.381854);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(21,1.882117);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(22,3.057791);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(23,2.789167);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(24,1.399742);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(25,3.563737);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(26,0.8818709);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(27,2.720022);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(28,6.041929);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(29,1.523797);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(30,0.7469144);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(31,0.4758438);
   VbbHcc_tags_H_dR_all_stack_5->SetEntries(7212);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_6 = new TH1D("VbbHcc_tags_H_dR_all_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(3,0.6801996);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(4,0.9176026);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(5,0.3551512);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(6,0.1335451);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(9,0.1243737);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(12,0.1152503);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(13,0.1142782);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(15,0.2077953);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(16,0.2467491);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(18,0.5512743);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(24,0.232904);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(3,0.4835381);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(4,0.6889366);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(5,0.2641889);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(6,0.1335451);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(9,0.1243737);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(12,0.1152503);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(13,0.1142782);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(15,0.1514189);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(16,0.1746882);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(18,0.4453011);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(24,0.232904);
   VbbHcc_tags_H_dR_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_7 = new TH1D("VbbHcc_tags_H_dR_all_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(3,1.243859);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(4,1.178693);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(5,0.5838016);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(7,0.2772399);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(10,0.09516179);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(12,0.2556988);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(13,0.08828565);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(14,0.09078265);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(15,0.1879754);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(16,0.195889);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(17,0.3823005);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(18,0.604131);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(19,0.4294301);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(20,0.09837659);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(21,0.1879639);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(24,0.334748);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(26,0.08117422);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(27,0.09049555);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(28,0.08787806);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(30,0.0686903);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(3,0.5360828);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(4,0.7052416);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(5,0.2931714);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(7,0.1603674);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(10,0.09516179);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(12,0.148425);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(13,0.08828565);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(14,0.09078265);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(15,0.1332554);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(16,0.1388659);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(17,0.1918884);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(18,0.445841);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(19,0.1925586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(20,0.09837659);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(21,0.132912);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(24,0.2541977);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(26,0.08117422);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(27,0.09049555);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(28,0.08787806);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(30,0.0686903);
   VbbHcc_tags_H_dR_all_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_8 = new TH1D("VbbHcc_tags_H_dR_all_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(3,9.463751);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(4,8.173135);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(5,9.701462);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(6,4.646061);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(7,3.52815);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(8,2.414316);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(9,1.762049);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(10,3.087925);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(11,2.86633);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(12,3.608995);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(13,3.610931);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(14,7.027496);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(15,10.45059);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(16,14.94666);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(17,8.799786);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(18,12.94144);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(19,8.991885);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(20,5.386597);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(21,5.6504);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(22,2.937749);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(23,1.227103);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(24,1.80148);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(25,0.8018399);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(26,1.676863);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(27,1.067357);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(28,2.732965);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(29,0.5102153);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(30,0.9159032);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(31,0.1558356);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(3,1.61676);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(4,1.474352);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(5,1.651528);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(6,1.064246);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(7,0.9322689);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(8,0.8117355);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(9,0.7060942);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(10,0.9164575);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(11,0.8428424);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(12,1.004491);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(13,0.9815771);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(14,1.371428);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(15,1.677065);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(16,2.044612);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(17,1.480815);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(18,1.841871);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(19,1.573584);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(20,1.194195);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(21,1.238341);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(22,0.8705423);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(23,0.6218581);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(24,0.69685);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(25,0.4630472);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(26,0.7161062);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(27,0.4977674);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(28,0.8842722);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(29,0.3802627);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(30,0.4625793);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(31,0.1558356);
   VbbHcc_tags_H_dR_all_stack_8->SetEntries(564);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_9 = new TH1D("VbbHcc_tags_H_dR_all_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(2,0.001188163);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(3,5.598628);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(4,10.05562);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(5,9.512692);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(6,7.498837);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(7,5.020969);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(8,3.322782);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(9,2.754328);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(10,2.860621);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(11,3.366028);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(12,4.6728);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(13,6.415851);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(14,8.195765);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(15,10.02057);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(16,11.02161);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(17,10.77789);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(18,9.161017);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(19,6.767035);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(20,4.747264);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(21,3.355652);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(22,2.303737);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(23,1.486449);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(24,0.9964025);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(25,0.9228767);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(26,0.9651408);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(27,1.021007);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(28,1.170228);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(29,0.8487561);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(30,0.5524806);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(31,0.275982);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(2,0.001188163);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(3,0.1171763);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(4,0.1567785);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(5,0.152956);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(6,0.1314956);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(7,0.1147245);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(8,0.09708083);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(9,0.07900723);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(10,0.08193414);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(11,0.08605951);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(12,0.1034468);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(13,0.1264487);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(14,0.1434587);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(15,0.1571372);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(16,0.1664975);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(17,0.164722);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(18,0.1893136);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(19,0.1304694);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(20,0.1106481);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(21,0.08603002);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(22,0.07487605);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(23,0.05766715);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(24,0.04542656);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(25,0.04380096);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(26,0.04701761);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(27,0.04900374);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(28,0.05228076);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(29,0.05487407);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(30,0.03523269);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(31,0.02444261);
   VbbHcc_tags_H_dR_all_stack_9->SetEntries(79284);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_10 = new TH1D("VbbHcc_tags_H_dR_all_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(3,1.630092);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(4,3.154688);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(5,3.474562);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(6,3.224434);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(7,2.504265);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(8,1.952575);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(9,1.648161);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(10,1.531185);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(11,1.695686);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(12,2.038085);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(13,2.525911);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(14,2.814505);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(15,3.155165);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(16,3.329503);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(17,3.239198);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(18,2.941919);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(19,2.23171);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(20,1.911578);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(21,1.449349);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(22,1.061851);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(23,0.7233884);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(24,0.6512196);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(25,0.5268993);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(26,0.5444499);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(27,0.5085348);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(28,0.3845199);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(29,0.3320939);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(30,0.1947902);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(31,0.1165508);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(3,0.02781207);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(4,0.03823575);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(5,0.03965354);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(6,0.0378641);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(7,0.03326541);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(8,0.02941545);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(9,0.02716746);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(10,0.026178);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(11,0.02754838);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(12,0.03019911);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(13,0.03357799);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(14,0.03543795);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(15,0.03757434);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(16,0.03864025);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(17,0.03796808);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(18,0.03620946);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(19,0.03156517);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(20,0.02914567);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(21,0.02546088);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(22,0.02185215);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(23,0.01790097);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(24,0.01700227);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(25,0.01537808);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(26,0.01565387);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(27,0.01498757);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(28,0.01316128);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(29,0.01231847);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(30,0.009395296);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(31,0.007203027);
   VbbHcc_tags_H_dR_all_stack_10->SetEntries(122844);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_11 = new TH1D("VbbHcc_tags_H_dR_all_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(3,0.01849003);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(4,0.03915747);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(5,0.02972276);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(6,0.0373669);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(7,0.03278518);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(8,0.01046359);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(9,0.02018976);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(10,0.01436887);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(11,0.01249532);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(12,0.01031495);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(13,0.006861373);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(14,0.009329673);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(15,0.007938787);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(16,0.01378917);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(17,0.01779338);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(18,0.01228277);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(19,0.01746447);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(20,0.003976974);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(21,0.008728105);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(22,0.01020264);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(23,0.007403294);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(24,0.01561086);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(25,0.007856818);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(26,0.005046587);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(27,0.001470723);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(28,0.001856351);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(29,0.007862387);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(30,0.004391015);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(31,0.001147613);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(3,0.00632315);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(4,0.008926655);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(5,0.007891684);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(6,0.009464226);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(7,0.008309945);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(8,0.00455012);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(9,0.006268452);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(10,0.005517091);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(11,0.005138786);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(12,0.004354381);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(13,0.003850729);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(14,0.004215368);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(15,0.004112522);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(16,0.005351664);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(17,0.005767882);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(18,0.005028514);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(19,0.005953999);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(20,0.002822065);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(21,0.004382883);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(22,0.004279162);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(23,0.003613839);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(24,0.006002993);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(25,0.003985625);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(26,0.003185501);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(27,0.001470723);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(28,0.001856351);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(29,0.003955499);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(30,0.003104924);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(31,0.001147613);
   VbbHcc_tags_H_dR_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_12 = new TH1D("VbbHcc_tags_H_dR_all_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(3,0.004782655);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(4,0.01004959);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(5,0.01804162);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(6,0.01650188);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(7,0.01571051);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(8,0.008960096);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(9,0.008674817);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(10,0.006827972);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(11,0.00985522);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(12,0.006509959);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(13,0.008502847);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(14,0.005403446);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(15,0.007403783);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(16,0.006844298);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(17,0.003715175);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(18,0.009600224);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(19,0.005322489);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(20,0.004171519);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(21,0.003042539);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(22,0.003412451);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(23,0.003681774);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(24,0.002422309);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(25,0.002660388);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(26,0.001800448);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(27,0.004764756);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(28,0.001703688);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(29,0.001563193);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(30,0.0005925856);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(31,0.0008888006);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(3,0.001214496);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(4,0.001748037);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(5,0.002266685);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(6,0.002254937);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(7,0.002090049);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(8,0.001551309);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(9,0.001621276);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(10,0.001355999);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(11,0.001693339);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(12,0.001300786);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(13,0.001566672);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(14,0.00118523);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(15,0.001393768);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(16,0.001362086);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(17,0.001007178);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(18,0.001621834);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(19,0.001186814);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(20,0.00113331);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(21,0.0009329702);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(22,0.0009612984);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(23,0.001015943);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(24,0.0007659512);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(25,0.00084255);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(26,0.0006797353);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(27,0.00114688);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(28,0.0006730348);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(29,0.0007816172);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(30,0.000346917);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(31,0.0004549547);
   VbbHcc_tags_H_dR_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_all__65 = new TH1D("VbbHcc_tags_H_dR_all__65","",30,0,6);
   VbbHcc_tags_H_dR_all__65->SetBinContent(2,22);
   VbbHcc_tags_H_dR_all__65->SetBinContent(3,22247);
   VbbHcc_tags_H_dR_all__65->SetBinContent(4,23394);
   VbbHcc_tags_H_dR_all__65->SetBinContent(5,17853);
   VbbHcc_tags_H_dR_all__65->SetBinContent(6,16778);
   VbbHcc_tags_H_dR_all__65->SetBinContent(7,16120);
   VbbHcc_tags_H_dR_all__65->SetBinContent(8,15993);
   VbbHcc_tags_H_dR_all__65->SetBinContent(9,16398);
   VbbHcc_tags_H_dR_all__65->SetBinContent(10,17121);
   VbbHcc_tags_H_dR_all__65->SetBinContent(11,18540);
   VbbHcc_tags_H_dR_all__65->SetBinContent(12,20257);
   VbbHcc_tags_H_dR_all__65->SetBinContent(13,22306);
   VbbHcc_tags_H_dR_all__65->SetBinContent(14,25215);
   VbbHcc_tags_H_dR_all__65->SetBinContent(15,27141);
   VbbHcc_tags_H_dR_all__65->SetBinContent(16,29236);
   VbbHcc_tags_H_dR_all__65->SetBinContent(17,27963);
   VbbHcc_tags_H_dR_all__65->SetBinContent(18,25862);
   VbbHcc_tags_H_dR_all__65->SetBinContent(19,23447);
   VbbHcc_tags_H_dR_all__65->SetBinContent(20,20239);
   VbbHcc_tags_H_dR_all__65->SetBinContent(21,17015);
   VbbHcc_tags_H_dR_all__65->SetBinContent(22,13472);
   VbbHcc_tags_H_dR_all__65->SetBinContent(23,10900);
   VbbHcc_tags_H_dR_all__65->SetBinContent(24,8640);
   VbbHcc_tags_H_dR_all__65->SetBinContent(25,6890);
   VbbHcc_tags_H_dR_all__65->SetBinContent(26,5459);
   VbbHcc_tags_H_dR_all__65->SetBinContent(27,4586);
   VbbHcc_tags_H_dR_all__65->SetBinContent(28,3808);
   VbbHcc_tags_H_dR_all__65->SetBinContent(29,3462);
   VbbHcc_tags_H_dR_all__65->SetBinContent(30,2461);
   VbbHcc_tags_H_dR_all__65->SetBinContent(31,2042);
   VbbHcc_tags_H_dR_all__65->SetEntries(464896);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all__65->SetLineColor(ci);
   VbbHcc_tags_H_dR_all__65->SetLineWidth(2);
   VbbHcc_tags_H_dR_all__65->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_all__65->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_all__65->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all__65->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__65->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__65->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__65->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__65->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__65->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__65->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__65->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all__65->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__65->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__65->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__65->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__65->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__65->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fx1047[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fy1047[30] = {
   0,
   2.040599,
   33078.61,
   29449.12,
   21085.03,
   19738.45,
   17235.3,
   17986.26,
   17249.56,
   22032.32,
   22296.67,
   25684.52,
   30089.2,
   33960.55,
   31733.24,
   57887.57,
   35166.65,
   36737.58,
   29109.19,
   25988.93,
   16658.05,
   12100.99,
   11605.96,
   24965.92,
   8057.321,
   6955.848,
   5817.132,
   3433.716,
   6260.624,
   3394.738};
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fex1047[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fey1047[30] = {
   0,
   0.3875434,
   2676.336,
   2125.137,
   1801.342,
   1690.686,
   1613.642,
   1721.18,
   1595.456,
   2102.098,
   2284.693,
   2115.488,
   2673.753,
   2593.069,
   2383.084,
   20768.8,
   2505.557,
   2498.87,
   2020.353,
   2582.333,
   1655.326,
   1092.988,
   1845.6,
   16553.25,
   1205.265,
   2234.192,
   1053.583,
   554.3023,
   2325.082,
   805.8238};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_all_fx1047,Graph_from_VbbHcc_tags_H_dR_all_fy1047,Graph_from_VbbHcc_tags_H_dR_all_fex1047,Graph_from_VbbHcc_tags_H_dR_all_fey1047);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_all1047 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_all1047","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetMaximum(86522.01);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_all1047);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_all","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

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
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_tags_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__66 = new TH1D("data_mc_ratio__66","",30,0,6);
   data_mc_ratio__66->SetBinContent(2,10.78115);
   data_mc_ratio__66->SetBinContent(3,0.6725495);
   data_mc_ratio__66->SetBinContent(4,0.7943872);
   data_mc_ratio__66->SetBinContent(5,0.8467147);
   data_mc_ratio__66->SetBinContent(6,0.8500161);
   data_mc_ratio__66->SetBinContent(7,0.9352895);
   data_mc_ratio__66->SetBinContent(8,0.8891788);
   data_mc_ratio__66->SetBinContent(9,0.9506329);
   data_mc_ratio__66->SetBinContent(10,0.7770858);
   data_mc_ratio__66->SetBinContent(11,0.8315143);
   data_mc_ratio__66->SetBinContent(12,0.7886852);
   data_mc_ratio__66->SetBinContent(13,0.7413292);
   data_mc_ratio__66->SetBinContent(14,0.7424791);
   data_mc_ratio__66->SetBinContent(15,0.855286);
   data_mc_ratio__66->SetBinContent(16,0.505048);
   data_mc_ratio__66->SetBinContent(17,0.7951569);
   data_mc_ratio__66->SetBinContent(18,0.7039659);
   data_mc_ratio__66->SetBinContent(19,0.8054845);
   data_mc_ratio__66->SetBinContent(20,0.7787547);
   data_mc_ratio__66->SetBinContent(21,1.021428);
   data_mc_ratio__66->SetBinContent(22,1.113297);
   data_mc_ratio__66->SetBinContent(23,0.9391727);
   data_mc_ratio__66->SetBinContent(24,0.3460718);
   data_mc_ratio__66->SetBinContent(25,0.8551229);
   data_mc_ratio__66->SetBinContent(26,0.7848072);
   data_mc_ratio__66->SetBinContent(27,0.788361);
   data_mc_ratio__66->SetBinContent(28,1.109002);
   data_mc_ratio__66->SetBinContent(29,0.55298);
   data_mc_ratio__66->SetBinContent(30,0.7249455);
   data_mc_ratio__66->SetBinContent(31,0.5784133);
   data_mc_ratio__66->SetBinError(2,2.298548);
   data_mc_ratio__66->SetBinError(3,0.004509086);
   data_mc_ratio__66->SetBinError(4,0.005193737);
   data_mc_ratio__66->SetBinError(5,0.006336968);
   data_mc_ratio__66->SetBinError(6,0.006562315);
   data_mc_ratio__66->SetBinError(7,0.00736654);
   data_mc_ratio__66->SetBinError(8,0.007031114);
   data_mc_ratio__66->SetBinError(9,0.007423648);
   data_mc_ratio__66->SetBinError(10,0.005938878);
   data_mc_ratio__66->SetBinError(11,0.006106817);
   data_mc_ratio__66->SetBinError(12,0.005541357);
   data_mc_ratio__66->SetBinError(13,0.00496364);
   data_mc_ratio__66->SetBinError(14,0.004675787);
   data_mc_ratio__66->SetBinError(15,0.005191567);
   data_mc_ratio__66->SetBinError(16,0.002953749);
   data_mc_ratio__66->SetBinError(17,0.004755114);
   data_mc_ratio__66->SetBinError(18,0.004377444);
   data_mc_ratio__66->SetBinError(19,0.005260336);
   data_mc_ratio__66->SetBinError(20,0.005474017);
   data_mc_ratio__66->SetBinError(21,0.007830544);
   data_mc_ratio__66->SetBinError(22,0.009591688);
   data_mc_ratio__66->SetBinError(23,0.008995643);
   data_mc_ratio__66->SetBinError(24,0.003723139);
   data_mc_ratio__66->SetBinError(25,0.01030194);
   data_mc_ratio__66->SetBinError(26,0.010622);
   data_mc_ratio__66->SetBinError(27,0.01164148);
   data_mc_ratio__66->SetBinError(28,0.01797149);
   data_mc_ratio__66->SetBinError(29,0.009398227);
   data_mc_ratio__66->SetBinError(30,0.01461334);
   data_mc_ratio__66->SetBinError(31,0.1353339);
   data_mc_ratio__66->SetMinimum(0.4);
   data_mc_ratio__66->SetMaximum(1.6);
   data_mc_ratio__66->SetEntries(111.959);
   data_mc_ratio__66->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__66->SetLineColor(ci);
   data_mc_ratio__66->SetLineWidth(2);
   data_mc_ratio__66->SetMarkerStyle(20);
   data_mc_ratio__66->SetMarkerSize(1.2);
   data_mc_ratio__66->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__66->GetXaxis()->SetRange(1,31);
   data_mc_ratio__66->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__66->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__66->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__66->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__66->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__66->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__66->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__66->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__66->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__66->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__66->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__66->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__66->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__66->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1048[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1048[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1048[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1048[30] = {
   0,
   0.1899165,
   0.08090836,
   0.07216301,
   0.08543228,
   0.08565445,
   0.09362425,
   0.09569414,
   0.09249256,
   0.09540974,
   0.1024679,
   0.08236434,
   0.08886089,
   0.07635533,
   0.0750974,
   0.3587782,
   0.0712481,
   0.06801946,
   0.06940603,
   0.09936283,
   0.09937093,
   0.0903222,
   0.1590217,
   0.6630336,
   0.1495863,
   0.3211962,
   0.1811172,
   0.1614293,
   0.3713819,
   0.2373744};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1048,Graph_from_mc_statistical_error_fy1048,Graph_from_mc_statistical_error_fex1048,Graph_from_mc_statistical_error_fey1048);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1048 = new TH1F("Graph_Graph_from_mc_statistical_error1048","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1048->SetMinimum(0.2043596);
   Graph_Graph_from_mc_statistical_error1048->SetMaximum(1.79564);
   Graph_Graph_from_mc_statistical_error1048->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1048->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1048);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}
