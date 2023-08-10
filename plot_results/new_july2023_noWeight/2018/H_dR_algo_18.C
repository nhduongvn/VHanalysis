void H_dR_algo_18()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Thu Aug 10 12:28:24 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(0,0,1,1);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetFillStyle(4000);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-346.7514,6.525,346414.6);
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
   st->SetMinimum(0.01);
   st->SetMaximum(296893.8);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",30,0,6);
   st_stack_119->SetMinimum(0.01);
   st_stack_119->SetMaximum(311738.5);
   st_stack_119->SetDirectory(0);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->GetXaxis()->SetRange(1,31);
   st_stack_119->GetXaxis()->SetLabelFont(42);
   st_stack_119->GetXaxis()->SetLabelSize(0.035);
   st_stack_119->GetXaxis()->SetTitleSize(0.035);
   st_stack_119->GetXaxis()->SetTitleFont(42);
   st_stack_119->GetYaxis()->SetTitle("Events/0.2");
   st_stack_119->GetYaxis()->SetLabelFont(42);
   st_stack_119->GetYaxis()->SetLabelSize(0.05);
   st_stack_119->GetYaxis()->SetTitleSize(0.057);
   st_stack_119->GetYaxis()->SetTitleOffset(1.2);
   st_stack_119->GetYaxis()->SetTitleFont(42);
   st_stack_119->GetZaxis()->SetLabelFont(42);
   st_stack_119->GetZaxis()->SetLabelSize(0.035);
   st_stack_119->GetZaxis()->SetTitleSize(0.035);
   st_stack_119->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_119);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,49274.34);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,65731.38);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,51475.09);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,50105.27);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,57058.11);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,60145.89);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,63719.53);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,65667.36);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,84397.98);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,90415.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,103854);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,107422.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,118939.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,120647.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,123696.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,96320.21);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,92458.67);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,90750.81);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,93774.61);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,64920.74);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,46141.57);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,37945.53);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,28036.94);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,19036.49);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,15164.18);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,9201.696);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(29,10315.14);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(30,7146.74);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(31,3759.186);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,2710.919);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,4067.744);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,2996.053);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,3011.027);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,3640.272);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,3463.777);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,3744.031);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,3385.227);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,4532.55);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,3930.705);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,4992.45);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,4193.419);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,5197.996);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,5200.263);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,5181.179);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,3682.49);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,3791.035);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,4581.331);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,20440.98);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,3602.176);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,2930.204);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,3120.098);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,2400.39);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,1837.358);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,1741.853);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,1165.016);
   VbbHcc_algo_H_dR_stack_1->SetBinError(29,1425.664);
   VbbHcc_algo_H_dR_stack_1->SetBinError(30,1202.631);
   VbbHcc_algo_H_dR_stack_1->SetBinError(31,772.0511);
   VbbHcc_algo_H_dR_stack_1->SetEntries(114901);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.323834);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,269.4992);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,462.6538);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,473.5719);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,476.4384);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,490.5736);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,507.5199);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,539.8248);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,614.3876);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,676.0294);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,730.1892);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,797.4363);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,829.6482);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,807.827);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,788.341);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,732.0974);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,673.1568);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,654.4996);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,575.2815);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,497.3618);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,397.4967);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,313.6383);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,256.375);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,198.5512);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,163.1478);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,122.1266);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,93.83902);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,67.40961);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(30,47.70974);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(31,35.10004);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.2745852);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,6.833032);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,9.079914);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,8.882172);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,8.871549);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,9.072681);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,9.193791);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,9.435425);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,10.15472);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,10.54155);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,10.87266);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,11.2331);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,11.4462);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,11.10944);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,10.80592);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,10.41141);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,10.10325);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,10.09389);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,9.453772);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,8.725446);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,7.869441);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,6.893569);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,6.290492);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,5.543587);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,5.046251);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,4.347646);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,3.809733);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,3.110707);
   VbbHcc_algo_H_dR_stack_2->SetBinError(30,2.734209);
   VbbHcc_algo_H_dR_stack_2->SetBinError(31,2.29257);
   VbbHcc_algo_H_dR_stack_2->SetEntries(162879);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_3 = new TH1D("VbbHcc_algo_H_dR_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,3.243129);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,7741.388);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,15247.98);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,17319.61);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,16647.2);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,14339.64);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,11862.43);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,10143.32);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,9557.484);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,9688.511);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,10228.61);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,10509.82);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,10327.38);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,9650.767);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,8988.236);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,8329.698);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,7877.786);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,7669.145);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,7270.519);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,6548.223);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,5606.064);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,4785.046);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,4183.703);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,3710.292);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,3356.944);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,2989.012);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,2485.655);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,1810.18);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(30,1024.625);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(31,668.5214);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.437907);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,21.95378);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,30.97202);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,33.05861);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,32.39858);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,29.99962);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,27.15852);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,24.93721);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,24.07357);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,24.17442);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,24.82751);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,25.16687);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,24.94382);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,24.09361);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,23.23795);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,22.39105);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,21.79597);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,21.53289);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,20.97888);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,19.91188);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,18.43137);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,17.04314);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,15.98988);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,15.11048);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,14.42119);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,13.64283);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,12.451);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,10.60848);
   VbbHcc_algo_H_dR_stack_3->SetBinError(30,7.961219);
   VbbHcc_algo_H_dR_stack_3->SetBinError(31,6.377507);
   VbbHcc_algo_H_dR_stack_3->SetEntries(3891102);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_4 = new TH1D("VbbHcc_algo_H_dR_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(2,0.09257296);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,343.1757);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,537.9629);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,482.1633);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,407.9223);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,365.0749);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,380.6972);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,435.4731);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,433.8117);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,548.5921);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,581.5018);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,656.9884);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,725.0838);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,662.4331);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,672.9295);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,612.0807);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,615.3831);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,551.3104);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,521.6754);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,408.8191);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,350.6247);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,249.5329);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,173.9019);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,141.6591);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,98.48866);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,90.13931);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(28,87.16745);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(29,72.25958);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(30,39.39665);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(31,22.89725);
   VbbHcc_algo_H_dR_stack_4->SetBinError(2,0.09257296);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,12.43896);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,13.73189);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,18.78046);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,17.39015);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,16.42359);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,14.68218);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,18.82047);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,15.2611);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,21.44276);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,17.13411);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,19.99915);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,21.51772);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,18.06875);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,20.04432);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,16.65021);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,18.47908);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,15.41092);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,18.38328);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,13.68141);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,14.71595);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,12.92456);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,7.429138);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,9.50419);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,7.764592);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,7.767156);
   VbbHcc_algo_H_dR_stack_4->SetBinError(28,7.73175);
   VbbHcc_algo_H_dR_stack_4->SetBinError(29,7.318995);
   VbbHcc_algo_H_dR_stack_4->SetBinError(30,3.621741);
   VbbHcc_algo_H_dR_stack_4->SetBinError(31,2.751392);
   VbbHcc_algo_H_dR_stack_4->SetEntries(56536);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_5 = new TH1D("VbbHcc_algo_H_dR_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,108.7974);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,141.1569);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,102.3942);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,119.0933);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,85.30046);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,139.7736);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,128.905);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,150.7824);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,171.7425);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,172.0195);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,220.0949);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,196.756);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,228.8966);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,206.0019);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,206.4949);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,201.4526);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,180.4454);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,209.8548);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,154.6793);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,125.3894);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,59.83481);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,64.00312);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,43.84343);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(26,31.53783);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,20.05041);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(28,15.75026);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(29,14.48665);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(30,11.45213);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(31,7.039708);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,9.008517);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,16.07278);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,14.29162);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,20.20736);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,8.979649);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,23.23816);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,15.37653);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,16.28577);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,19.33261);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,18.61237);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,22.6569);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,16.51126);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,22.61306);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,17.04759);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,17.26622);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,17.45908);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,16.17619);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,26.14811);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,21.02665);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,18.21734);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,6.32183);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,12.50753);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,7.212619);
   VbbHcc_algo_H_dR_stack_5->SetBinError(26,5.464688);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,4.022841);
   VbbHcc_algo_H_dR_stack_5->SetBinError(28,3.344246);
   VbbHcc_algo_H_dR_stack_5->SetBinError(29,3.846835);
   VbbHcc_algo_H_dR_stack_5->SetBinError(30,3.737343);
   VbbHcc_algo_H_dR_stack_5->SetBinError(31,2.299702);
   VbbHcc_algo_H_dR_stack_5->SetEntries(15329);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,1.808171);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,1.356128);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,2.260213);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,1.808171);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,0.9040853);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,0.9040853);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,1.808171);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(11,0.9040853);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,1.808171);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,2.712256);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,1.356128);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,1.808171);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,2.260213);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,2.260213);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,1.808171);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,1.356128);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(21,0.9040853);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(23,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(24,1.356128);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(25,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(27,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(28,0.9040853);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(29,0.9040853);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(31,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.9040853);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.7829609);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,1.010798);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,0.9040853);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,0.6392849);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.6392849);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.9040853);
   VbbHcc_algo_H_dR_stack_6->SetBinError(11,0.6392849);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.9040853);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,1.107274);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.7829609);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.9040853);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,1.010798);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,1.010798);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.9040853);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.7829609);
   VbbHcc_algo_H_dR_stack_6->SetBinError(21,0.6392849);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinError(23,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinError(24,0.7829609);
   VbbHcc_algo_H_dR_stack_6->SetBinError(25,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinError(27,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetBinError(28,0.6392849);
   VbbHcc_algo_H_dR_stack_6->SetBinError(29,0.6392849);
   VbbHcc_algo_H_dR_stack_6->SetBinError(31,0.4520427);
   VbbHcc_algo_H_dR_stack_6->SetEntries(77);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_7 = new TH1D("VbbHcc_algo_H_dR_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,9.209177);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,13.81377);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,4.604589);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,3.541991);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,2.125195);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,1.770996);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,2.125195);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,1.062597);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,2.833593);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,4.958788);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,2.479394);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,3.89619);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,4.958788);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,7.083982);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,4.958788);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,3.187792);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,2.479394);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,2.479394);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,2.125195);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,0.7083982);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(24,1.416796);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(25,0.3541991);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(26,0.3541991);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(28,1.062597);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(29,2.833593);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(30,0.7083982);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,1.806068);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,2.211973);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,1.277083);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,1.120076);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,0.8676071);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,0.7920133);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.8676071);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.6134909);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,1.001826);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,0.3541991);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,1.325292);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,0.9371228);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,1.174746);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,1.325292);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,1.584027);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,1.325292);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,1.062597);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.9371228);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.9371228);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,0.8676071);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.5009132);
   VbbHcc_algo_H_dR_stack_7->SetBinError(24,0.7083982);
   VbbHcc_algo_H_dR_stack_7->SetBinError(25,0.3541991);
   VbbHcc_algo_H_dR_stack_7->SetBinError(26,0.3541991);
   VbbHcc_algo_H_dR_stack_7->SetBinError(28,0.6134909);
   VbbHcc_algo_H_dR_stack_7->SetBinError(29,1.001826);
   VbbHcc_algo_H_dR_stack_7->SetBinError(30,0.5009132);
   VbbHcc_algo_H_dR_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_8 = new TH1D("VbbHcc_algo_H_dR_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,9.779502);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,20.39725);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,17.6031);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,5.588287);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,3.911801);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,3.073558);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,3.632387);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,4.191215);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,4.47063);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,2.794144);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,6.147116);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,6.42653);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,9.500088);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,6.147116);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,10.05892);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,6.42653);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,5.588287);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,4.191215);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,4.47063);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,2.794144);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(23,3.911801);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,1.397072);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(25,1.117657);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(26,1.117657);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(27,1.397072);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,2.235315);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(29,1.676486);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(30,1.117657);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(31,0.5588287);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,1.653038);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,2.387317);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,2.217783);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,1.249579);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,1.045473);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,0.9267126);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,1.007443);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,1.082167);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,1.117657);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,0.8835858);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,1.310569);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,1.340024);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,1.629252);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,1.310569);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,1.676486);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,1.340024);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,1.249579);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,1.082167);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,1.117657);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,0.8835858);
   VbbHcc_algo_H_dR_stack_8->SetBinError(23,1.045473);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.6247895);
   VbbHcc_algo_H_dR_stack_8->SetBinError(25,0.5588287);
   VbbHcc_algo_H_dR_stack_8->SetBinError(26,0.5588287);
   VbbHcc_algo_H_dR_stack_8->SetBinError(27,0.6247895);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.7903031);
   VbbHcc_algo_H_dR_stack_8->SetBinError(29,0.6844226);
   VbbHcc_algo_H_dR_stack_8->SetBinError(30,0.5588287);
   VbbHcc_algo_H_dR_stack_8->SetBinError(31,0.3951516);
   VbbHcc_algo_H_dR_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_9 = new TH1D("VbbHcc_algo_H_dR_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(2,0.002285779);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,6.706475);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,13.72839);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,13.25523);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,10.64944);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,6.473325);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,3.282378);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,2.505213);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,2.363495);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,2.905225);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,3.488098);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,4.157831);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,4.470983);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,3.972683);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,3.686961);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,3.581815);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,3.424096);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,3.387524);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,2.928082);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,2.196633);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,1.522329);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,1.250321);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,1.033172);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,1.083459);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,1.392039);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,1.517757);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(28,1.538329);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(29,1.209177);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(30,0.7177345);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(31,0.381725);
   VbbHcc_algo_H_dR_stack_9->SetBinError(2,0.002285779);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.1238124);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.1771442);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.1740647);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.1560201);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.1216412);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.08661865);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.07567274);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.0735012);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.08149049);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.08929177);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.09748786);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.1010924);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.09529257);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.09180183);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.09048335);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.08846879);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.08799506);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.08181044);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.07085914);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.05898903);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.05345986);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.04859632);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.04976492);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.05640827);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.0589004);
   VbbHcc_algo_H_dR_stack_9->SetBinError(28,0.05929823);
   VbbHcc_algo_H_dR_stack_9->SetBinError(29,0.05257291);
   VbbHcc_algo_H_dR_stack_9->SetBinError(30,0.0405041);
   VbbHcc_algo_H_dR_stack_9->SetBinError(31,0.02953877);
   VbbHcc_algo_H_dR_stack_9->SetEntries(47604);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_10 = new TH1D("VbbHcc_algo_H_dR_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(2,0.0005961446);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,1.679936);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,4.316683);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,5.55428);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,5.702123);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,4.578391);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,3.31516);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,2.478173);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,2.285619);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,2.544345);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,2.940782);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,3.186393);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,3.138105);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,2.789361);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,2.659401);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,2.343445);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,2.380406);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,2.372656);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,2.292176);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,1.964893);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,1.63284);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,1.175597);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,1.085579);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,1.049215);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.9824464);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.8650059);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(28,0.708816);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(29,0.5180497);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(30,0.2640921);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(31,0.1734781);
   VbbHcc_algo_H_dR_stack_10->SetBinError(2,0.0005961446);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.03164624);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.05072837);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.05754263);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.05830343);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.0522435);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.04445577);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.03843631);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.03691286);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.03894609);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.04187041);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.04358384);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.04325234);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.04077821);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.03981693);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.03737689);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.03767049);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.03760912);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.03696577);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.03422514);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.0311995);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.02647312);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.02543939);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.02500967);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.02420083);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.02270834);
   VbbHcc_algo_H_dR_stack_10->SetBinError(28,0.02055619);
   VbbHcc_algo_H_dR_stack_10->SetBinError(29,0.01757363);
   VbbHcc_algo_H_dR_stack_10->SetBinError(30,0.01254739);
   VbbHcc_algo_H_dR_stack_10->SetBinError(31,0.01016947);
   VbbHcc_algo_H_dR_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_11 = new TH1D("VbbHcc_algo_H_dR_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.05689405);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.07510014);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.09103048);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.0773759);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.03186067);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.0295849);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.02503338);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.01593033);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.02048186);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.02048186);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.04323948);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.047791);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.0295849);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.02730914);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.03868795);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.03413643);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.0182061);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.0182061);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.0182061);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.006827286);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.0182061);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(24,0.006827286);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(25,0.004551524);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(26,0.004551524);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.01593033);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(28,0.01365457);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(29,0.002275762);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(30,0.006827286);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(31,0.002275762);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.01137881);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.01307326);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.01439318);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.01326986);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.008515121);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.008205376);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.007547848);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.0060211);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.006827286);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.006827286);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.009919816);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.01042885);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.008205376);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.00788347);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.009383207);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.008813988);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.006436827);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.006436827);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.006436827);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.003941735);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.006436827);
   VbbHcc_algo_H_dR_stack_11->SetBinError(24,0.003941735);
   VbbHcc_algo_H_dR_stack_11->SetBinError(25,0.003218413);
   VbbHcc_algo_H_dR_stack_11->SetBinError(26,0.003218413);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.0060211);
   VbbHcc_algo_H_dR_stack_11->SetBinError(28,0.005574455);
   VbbHcc_algo_H_dR_stack_11->SetBinError(29,0.002275762);
   VbbHcc_algo_H_dR_stack_11->SetBinError(30,0.003941735);
   VbbHcc_algo_H_dR_stack_11->SetBinError(31,0.002275762);
   VbbHcc_algo_H_dR_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_12 = new TH1D("VbbHcc_algo_H_dR_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,0.01438353);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,0.03206328);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,0.0332619);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,0.02936637);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,0.0221746);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,0.01378421);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,0.0110873);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,0.01228593);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,0.01648112);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,0.01827906);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,0.01708044);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,0.01708044);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,0.01827906);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,0.01917804);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,0.01378421);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,0.01498284);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,0.01558215);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,0.01288524);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,0.007791077);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,0.005993136);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(23,0.006292793);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(24,0.003895538);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(25,0.005693479);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(26,0.004195195);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(27,0.004494852);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(28,0.003895538);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(29,0.003296225);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(30,0.001198627);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(31,0.001797941);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,0.002076083);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,0.003099674);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,0.00315708);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,0.002966451);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,0.002577745);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,0.002032371);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,0.001822741);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,0.00191874);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,0.002222314);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,0.002340394);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,0.002262359);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,0.002262359);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,0.002340394);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,0.002397254);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,0.002032371);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,0.002118894);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,0.002160856);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,0.001964981);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,0.001527956);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,0.001340106);
   VbbHcc_algo_H_dR_stack_12->SetBinError(23,0.0013732);
   VbbHcc_algo_H_dR_stack_12->SetBinError(24,0.001080428);
   VbbHcc_algo_H_dR_stack_12->SetBinError(25,0.001306174);
   VbbHcc_algo_H_dR_stack_12->SetBinError(26,0.001121213);
   VbbHcc_algo_H_dR_stack_12->SetBinError(27,0.001160566);
   VbbHcc_algo_H_dR_stack_12->SetBinError(28,0.001080428);
   VbbHcc_algo_H_dR_stack_12->SetBinError(29,0.0009938492);
   VbbHcc_algo_H_dR_stack_12->SetBinError(30,0.0005993136);
   VbbHcc_algo_H_dR_stack_12->SetBinError(31,0.0007340063);
   VbbHcc_algo_H_dR_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR__326 = new TH1D("VbbHcc_algo_H_dR__326","",30,0,6);
   VbbHcc_algo_H_dR__326->SetBinContent(2,27);
   VbbHcc_algo_H_dR__326->SetBinContent(3,58435);
   VbbHcc_algo_H_dR__326->SetBinContent(4,79957);
   VbbHcc_algo_H_dR__326->SetBinContent(5,71515);
   VbbHcc_algo_H_dR__326->SetBinContent(6,71945);
   VbbHcc_algo_H_dR__326->SetBinContent(7,73088);
   VbbHcc_algo_H_dR__326->SetBinContent(8,75150);
   VbbHcc_algo_H_dR__326->SetBinContent(9,80490);
   VbbHcc_algo_H_dR__326->SetBinContent(10,87186);
   VbbHcc_algo_H_dR__326->SetBinContent(11,97572);
   VbbHcc_algo_H_dR__326->SetBinContent(12,110673);
   VbbHcc_algo_H_dR__326->SetBinContent(13,122474);
   VbbHcc_algo_H_dR__326->SetBinContent(14,130445);
   VbbHcc_algo_H_dR__326->SetBinContent(15,132212);
   VbbHcc_algo_H_dR__326->SetBinContent(16,131468);
   VbbHcc_algo_H_dR__326->SetBinContent(17,125813);
   VbbHcc_algo_H_dR__326->SetBinContent(18,119590);
   VbbHcc_algo_H_dR__326->SetBinContent(19,110645);
   VbbHcc_algo_H_dR__326->SetBinContent(20,99298);
   VbbHcc_algo_H_dR__326->SetBinContent(21,84773);
   VbbHcc_algo_H_dR__326->SetBinContent(22,68131);
   VbbHcc_algo_H_dR__326->SetBinContent(23,54221);
   VbbHcc_algo_H_dR__326->SetBinContent(24,42089);
   VbbHcc_algo_H_dR__326->SetBinContent(25,32345);
   VbbHcc_algo_H_dR__326->SetBinContent(26,24647);
   VbbHcc_algo_H_dR__326->SetBinContent(27,19210);
   VbbHcc_algo_H_dR__326->SetBinContent(28,15242);
   VbbHcc_algo_H_dR__326->SetBinContent(29,12033);
   VbbHcc_algo_H_dR__326->SetBinContent(30,7522);
   VbbHcc_algo_H_dR__326->SetBinContent(31,5704);
   VbbHcc_algo_H_dR__326->SetEntries(2143929);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__326->SetLineColor(ci);
   VbbHcc_algo_H_dR__326->SetLineWidth(2);
   VbbHcc_algo_H_dR__326->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__326->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__326->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR__326->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__326->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__326->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__326->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__326->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__326->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__326->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__326->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__326->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__326->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__326->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__326->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__326->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__326->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1237[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1237[30] = {
   0,
   3.662418,
   57766.45,
   82174.86,
   69896.23,
   67781.96,
   72357.65,
   73048.7,
   74978.74,
   76435.57,
   95496.54,
   102139.6,
   116059.6,
   119519.2,
   130311.5,
   131322.4,
   133602.2,
   105705.7,
   101530.5,
   99341.42,
   101395.7,
   71408.85,
   51557.14,
   42629.82,
   32135.35,
   22690.92,
   18389.76,
   11890.57,
   12286.62,
   8272.74};
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1237[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1237[30] = {
   0,
   0.5251047,
   2711.061,
   4067.928,
   2996.342,
   3011.332,
   3640.455,
   3464.005,
   3744.205,
   3385.402,
   4532.719,
   3930.88,
   4992.618,
   4193.597,
   5198.144,
   5200.393,
   5181.294,
   3682.657,
   3791.176,
   4581.501,
   20441,
   3602.309,
   2930.297,
   3120.179,
   2400.474,
   1837.446,
   1741.934,
   1165.12,
   1425.732,
   1202.672};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_fx1237,Graph_from_VbbHcc_algo_H_dR_fy1237,Graph_from_VbbHcc_algo_H_dR_fex1237,Graph_from_VbbHcc_algo_H_dR_fey1237);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1237 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1237","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetMaximum(152661.9);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1237);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__327 = new TH1D("data_mc_ratio__327","",30,0,6);
   data_mc_ratio__327->SetBinContent(2,7.372179);
   data_mc_ratio__327->SetBinContent(3,1.011573);
   data_mc_ratio__327->SetBinContent(4,0.9730105);
   data_mc_ratio__327->SetBinContent(5,1.02316);
   data_mc_ratio__327->SetBinContent(6,1.061418);
   data_mc_ratio__327->SetBinContent(7,1.010094);
   data_mc_ratio__327->SetBinContent(8,1.028766);
   data_mc_ratio__327->SetBinContent(9,1.073504);
   data_mc_ratio__327->SetBinContent(10,1.140647);
   data_mc_ratio__327->SetBinContent(11,1.021733);
   data_mc_ratio__327->SetBinContent(12,1.083547);
   data_mc_ratio__327->SetBinContent(13,1.055269);
   data_mc_ratio__327->SetBinContent(14,1.091415);
   data_mc_ratio__327->SetBinContent(15,1.014585);
   data_mc_ratio__327->SetBinContent(16,1.001109);
   data_mc_ratio__327->SetBinContent(17,0.9416985);
   data_mc_ratio__327->SetBinContent(18,1.131349);
   data_mc_ratio__327->SetBinContent(19,1.089772);
   data_mc_ratio__327->SetBinContent(20,0.9995629);
   data_mc_ratio__327->SetBinContent(21,0.8360608);
   data_mc_ratio__327->SetBinContent(22,0.9540974);
   data_mc_ratio__327->SetBinContent(23,1.051668);
   data_mc_ratio__327->SetBinContent(24,0.9873137);
   data_mc_ratio__327->SetBinContent(25,1.006524);
   data_mc_ratio__327->SetBinContent(26,1.086206);
   data_mc_ratio__327->SetBinContent(27,1.044603);
   data_mc_ratio__327->SetBinContent(28,1.281856);
   data_mc_ratio__327->SetBinContent(29,0.979358);
   data_mc_ratio__327->SetBinContent(30,0.9092514);
   data_mc_ratio__327->SetBinContent(31,1.269159);
   data_mc_ratio__327->SetBinError(2,1.418776);
   data_mc_ratio__327->SetBinError(3,0.004184666);
   data_mc_ratio__327->SetBinError(4,0.003441037);
   data_mc_ratio__327->SetBinError(5,0.003825999);
   data_mc_ratio__327->SetBinError(6,0.003957183);
   data_mc_ratio__327->SetBinError(7,0.003736273);
   data_mc_ratio__327->SetBinError(8,0.00375277);
   data_mc_ratio__327->SetBinError(9,0.003783841);
   data_mc_ratio__327->SetBinError(10,0.003863028);
   data_mc_ratio__327->SetBinError(11,0.003270958);
   data_mc_ratio__327->SetBinError(12,0.003257069);
   data_mc_ratio__327->SetBinError(13,0.003015373);
   data_mc_ratio__327->SetBinError(14,0.003021872);
   data_mc_ratio__327->SetBinError(15,0.002790312);
   data_mc_ratio__327->SetBinError(16,0.002761031);
   data_mc_ratio__327->SetBinError(17,0.002654906);
   data_mc_ratio__327->SetBinError(18,0.003271517);
   data_mc_ratio__327->SetBinError(19,0.003276194);
   data_mc_ratio__327->SetBinError(20,0.003172049);
   data_mc_ratio__327->SetBinError(21,0.002871502);
   data_mc_ratio__327->SetBinError(22,0.003655277);
   data_mc_ratio__327->SetBinError(23,0.004516426);
   data_mc_ratio__327->SetBinError(24,0.004812501);
   data_mc_ratio__327->SetBinError(25,0.005596552);
   data_mc_ratio__327->SetBinError(26,0.006918787);
   data_mc_ratio__327->SetBinError(27,0.00753681);
   data_mc_ratio__327->SetBinError(28,0.01038289);
   data_mc_ratio__327->SetBinError(29,0.008928007);
   data_mc_ratio__327->SetBinError(30,0.01048377);
   data_mc_ratio__327->SetBinError(31,0.2186786);
   data_mc_ratio__327->SetMinimum(0.4);
   data_mc_ratio__327->SetMaximum(1.6);
   data_mc_ratio__327->SetEntries(401.326);
   data_mc_ratio__327->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__327->SetLineColor(ci);
   data_mc_ratio__327->SetLineWidth(2);
   data_mc_ratio__327->SetMarkerStyle(20);
   data_mc_ratio__327->SetMarkerSize(1.2);
   data_mc_ratio__327->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__327->GetXaxis()->SetRange(1,31);
   data_mc_ratio__327->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__327->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__327->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__327->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__327->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__327->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__327->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__327->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__327->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__327->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__327->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__327->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__327->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__327->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__327->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__327->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__327->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1238[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1238[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1238[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1238[30] = {
   0,
   0.1433765,
   0.04693141,
   0.04950332,
   0.04286844,
   0.04442675,
   0.05031196,
   0.04742048,
   0.04993689,
   0.04429093,
   0.04746474,
   0.03848538,
   0.04301773,
   0.03508723,
   0.03989015,
   0.0396002,
   0.0387815,
   0.03483878,
   0.03734028,
   0.04611873,
   0.2015963,
   0.05044624,
   0.05683591,
   0.07319242,
   0.07469886,
   0.08097716,
   0.09472303,
   0.09798682,
   0.1160394,
   0.1453777};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1238,Graph_from_mc_statistical_error_fy1238,Graph_from_mc_statistical_error_fex1238,Graph_from_mc_statistical_error_fey1238);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1238 = new TH1F("Graph_Graph_from_mc_statistical_error1238","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1238->SetMinimum(0.7580845);
   Graph_Graph_from_mc_statistical_error1238->SetMaximum(1.241916);
   Graph_Graph_from_mc_statistical_error1238->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1238->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1238->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1238);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->SetSelected(H_dR_algo_18);
}
