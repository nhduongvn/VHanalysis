void H_dR_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Thu Aug 10 12:20:46 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9499975,-2.905354,6.525,13.70914);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(3.019671e+11);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",30,0,6);
   st_stack_119->SetMinimum(0.001291993);
   st_stack_119->SetMaximum(1.116068e+12);
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
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,53526.84);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,74551.48);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,55968.26);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,52493.07);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,62509.86);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,64424.37);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,70342.09);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,72095.93);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,92759.88);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,100053.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,112968.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,118112.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,130488.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,132820.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,135593.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,105899.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,101443.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,99397.73);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,103912.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,71512.75);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,51182.16);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,39670.12);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,30194.06);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,20229.21);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,17419.03);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,10113.59);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(29,11591.48);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(30,7659.523);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(31,4108.822);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,3130.32);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,4896.666);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,3417.749);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,3266.273);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,4071.977);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,3850.705);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,4363.745);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,4037.595);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,5354.025);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,4725.896);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,5624.303);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,4839.341);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,5822.334);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,6370.184);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,6009.279);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,4435.672);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,4393.693);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,5258.875);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,23522.48);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,4175.793);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,3405.299);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,3380.343);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,2757.853);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,2021.602);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,2092.572);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,1388.746);
   VbbHcc_algo_H_dR_stack_1->SetBinError(29,1695.819);
   VbbHcc_algo_H_dR_stack_1->SetBinError(30,1331.041);
   VbbHcc_algo_H_dR_stack_1->SetBinError(31,909.4075);
   VbbHcc_algo_H_dR_stack_1->SetEntries(112239);

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
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.32203);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,277.7326);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,473.623);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,474.0716);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,487.8142);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,503.1294);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,512.6805);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,559.4436);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,627.5496);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,688.1134);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,724.6788);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,790.2538);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,814.7489);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,796.7234);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,777.7034);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,724.8594);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,670.7772);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,650.3229);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,563.278);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,491.7837);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,396.3587);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,313.0814);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,248.8962);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,195.3209);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,164.2234);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,120.3807);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,98.17192);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,69.93832);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(30,47.29102);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(31,34.97706);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.288404);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,7.864865);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,10.52286);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,10.07537);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,11.23794);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,11.48984);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,10.58281);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,12.18269);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,12.27722);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,17.49918);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,12.47686);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,12.85562);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,12.99105);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,13.1204);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,12.72323);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,12.27248);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,12.3752);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,11.87865);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,10.87927);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,10.07866);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,9.596206);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,8.237055);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,7.113995);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,6.511879);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,6.31832);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,5.177856);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,5.111653);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,3.741104);
   VbbHcc_algo_H_dR_stack_2->SetBinError(30,3.175679);
   VbbHcc_algo_H_dR_stack_2->SetBinError(31,2.670807);
   VbbHcc_algo_H_dR_stack_2->SetEntries(153765);

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
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,3.431904);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,8478.422);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,16817.13);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,19224.58);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,18543.95);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,16014.58);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,13321.9);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,11425.84);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,10739.43);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,10853.22);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,11468.12);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,11770.67);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,11555.14);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,10761.41);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,10027.38);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,9265.296);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,8744.812);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,8568.226);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,8106.344);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,7316.078);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,6256.832);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,5345.461);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,4690.691);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,4172.75);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,3756.265);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,3330.922);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,2780.249);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,2016.71);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(30,1136.357);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(31,738.1392);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.5619564);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,29.48949);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,40.44653);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,43.99377);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,42.48024);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,39.80799);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,36.38692);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,33.56481);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,32.68651);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,31.8062);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,33.20775);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,33.4931);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,33.79258);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,32.73315);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,31.98642);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,29.89295);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,28.87705);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,29.18402);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,28.23587);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,26.98228);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,24.32457);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,22.92822);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,21.94835);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,20.60283);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,19.46609);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,17.78385);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,16.90258);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,14.71445);
   VbbHcc_algo_H_dR_stack_3->SetBinError(30,10.32409);
   VbbHcc_algo_H_dR_stack_3->SetBinError(31,8.247019);
   VbbHcc_algo_H_dR_stack_3->SetEntries(3228671);

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
   VbbHcc_algo_H_dR_stack_4->SetBinContent(2,0.09903028);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,394.3282);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,616.341);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,535.7268);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,457.6411);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,404.7696);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,438.7078);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,492.1235);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,484.0718);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,639.9849);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,640.9332);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,745.9187);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,827.6893);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,747.5633);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,765.488);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,700.959);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,701.3204);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,613.7386);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,610.4881);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,464.7568);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,399.8902);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,289.2372);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,195.0927);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,157.0298);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,110.3223);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,109.9144);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(28,99.53519);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(29,83.12902);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(30,45.74319);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(31,27.5368);
   VbbHcc_algo_H_dR_stack_4->SetBinError(2,0.09903028);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,14.75068);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,17.60873);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,21.36022);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,19.98579);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,18.18394);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,18.4835);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,21.67173);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,17.60079);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,25.52447);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,18.76591);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,24.38801);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,26.03175);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,21.00477);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,24.80403);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,20.87462);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,21.29531);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,17.67244);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,27.4482);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,16.51576);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,18.95983);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,18.07083);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,8.917195);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,11.12097);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,8.443973);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,14.1385);
   VbbHcc_algo_H_dR_stack_4->SetBinError(28,8.955782);
   VbbHcc_algo_H_dR_stack_4->SetBinError(29,8.330818);
   VbbHcc_algo_H_dR_stack_4->SetBinError(30,4.422971);
   VbbHcc_algo_H_dR_stack_4->SetBinError(31,3.534163);
   VbbHcc_algo_H_dR_stack_4->SetEntries(55877);

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
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,123.922);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,152.9221);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,112.5118);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,120.8001);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,94.4632);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,156.4033);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,145.0412);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,171.0806);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,186.4667);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,196.7722);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,241.6401);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,258.4914);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,249.9916);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,223.0534);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,236.02);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,223.6208);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,197.4634);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,232.5279);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,169.4119);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,148.6208);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,73.89727);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,71.40324);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,50.44962);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(26,34.82759);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,23.54117);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(28,17.22088);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(29,15.34735);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(30,11.04596);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(31,8.001998);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,10.24223);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,15.33774);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,15.83693);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,18.92016);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,10.06348);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,24.75784);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,17.60417);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,18.7495);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,18.04607);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,23.50271);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,23.61342);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,36.39733);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,24.75997);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,18.39847);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,21.77988);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,19.93863);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,16.87859);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,28.40223);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,22.58272);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,23.62349);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,12.02341);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,13.82271);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,8.689816);
   VbbHcc_algo_H_dR_stack_5->SetBinError(26,6.164713);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,4.873663);
   VbbHcc_algo_H_dR_stack_5->SetBinError(28,3.597806);
   VbbHcc_algo_H_dR_stack_5->SetBinError(29,4.159071);
   VbbHcc_algo_H_dR_stack_5->SetBinError(30,3.494903);
   VbbHcc_algo_H_dR_stack_5->SetBinError(31,2.600354);
   VbbHcc_algo_H_dR_stack_5->SetEntries(15424);

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
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,1.952621);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,1.582758);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,2.922051);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,0.4761541);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,2.110917);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,1.757943);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,0.8703558);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,1.910281);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(11,1.224268);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,1.999354);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,3.101758);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,1.328646);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,2.306757);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,2.462117);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,2.542961);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,0.587622);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,2.1994);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,1.49064);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(21,2.685024);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.4579351);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(23,0.4579351);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(24,1.917015);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(25,0.4856374);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.4921557);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(27,0.4856374);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(28,1.098011);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(29,1.147759);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(31,0.4684126);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.976409);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.9167913);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,1.320694);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,0.4761541);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,1.062509);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,1.352006);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.6288142);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.9564927);
   VbbHcc_algo_H_dR_stack_6->SetBinError(11,0.8683281);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,1.013884);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,1.297727);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.8091962);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,1.177517);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,1.145947);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,1.153343);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.587622);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,1.113892);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.8646047);
   VbbHcc_algo_H_dR_stack_6->SetBinError(21,2.265563);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.4579351);
   VbbHcc_algo_H_dR_stack_6->SetBinError(23,0.4579351);
   VbbHcc_algo_H_dR_stack_6->SetBinError(24,1.106872);
   VbbHcc_algo_H_dR_stack_6->SetBinError(25,0.4856374);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.4921557);
   VbbHcc_algo_H_dR_stack_6->SetBinError(27,0.4856374);
   VbbHcc_algo_H_dR_stack_6->SetBinError(28,0.7813347);
   VbbHcc_algo_H_dR_stack_6->SetBinError(29,0.8211266);
   VbbHcc_algo_H_dR_stack_6->SetBinError(31,0.4684126);
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
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,9.929058);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,16.32648);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,5.468629);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,3.81963);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,2.643277);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,1.974243);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,2.371363);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,1.277451);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,2.706168);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,0.2694972);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,5.720958);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,2.667719);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,4.508243);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,5.34518);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,8.249343);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,5.258898);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,3.090875);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,2.808985);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,2.734336);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,2.522116);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,0.7960837);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(24,1.962945);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(25,0.3767055);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(26,0.3816532);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(28,1.284959);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(29,3.024204);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(30,0.8603495);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,2.012759);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,2.661804);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,1.572183);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,1.222931);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,1.089795);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,0.903676);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.9763231);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.7465057);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,0.9902413);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,0.2694972);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,1.589731);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,1.024345);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,1.368671);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,1.443913);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,1.89558);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,1.438765);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,1.09379);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,1.07656);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,1.035988);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,1.050448);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.5629436);
   VbbHcc_algo_H_dR_stack_7->SetBinError(24,0.9869766);
   VbbHcc_algo_H_dR_stack_7->SetBinError(25,0.3767055);
   VbbHcc_algo_H_dR_stack_7->SetBinError(26,0.3816532);
   VbbHcc_algo_H_dR_stack_7->SetBinError(28,0.7501123);
   VbbHcc_algo_H_dR_stack_7->SetBinError(29,1.074908);
   VbbHcc_algo_H_dR_stack_7->SetBinError(30,0.6122167);
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
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,10.62931);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,22.60121);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,19.77995);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,6.380082);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,4.192443);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,3.840202);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,3.738267);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,4.817289);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,4.762403);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,3.011575);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,6.789081);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,7.381516);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,11.24457);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,6.441108);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,10.75905);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,7.062716);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,6.625988);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,4.652078);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,4.7221);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,2.766301);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(23,4.37193);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,1.610412);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(25,1.29665);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(26,1.098583);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(27,1.512015);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,2.564052);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(29,1.709543);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(30,1.198242);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(31,0.7086499);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,1.832074);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,2.723898);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,2.53349);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,1.44542);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,1.196075);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,1.168995);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,1.084468);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,1.269279);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,1.221229);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,0.9621356);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,1.481961);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,1.550261);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,1.992158);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,1.392108);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,1.864036);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,1.498299);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,1.501524);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,1.219104);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,1.209423);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,0.9236564);
   VbbHcc_algo_H_dR_stack_8->SetBinError(23,1.174176);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.7281509);
   VbbHcc_algo_H_dR_stack_8->SetBinError(25,0.654591);
   VbbHcc_algo_H_dR_stack_8->SetBinError(26,0.5539583);
   VbbHcc_algo_H_dR_stack_8->SetBinError(27,0.6822129);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.9100443);
   VbbHcc_algo_H_dR_stack_8->SetBinError(29,0.7024419);
   VbbHcc_algo_H_dR_stack_8->SetBinError(30,0.618407);
   VbbHcc_algo_H_dR_stack_8->SetBinError(31,0.5038488);
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
   VbbHcc_algo_H_dR_stack_9->SetBinContent(2,0.001104061);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,7.328356);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,14.81324);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,14.64744);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,11.7602);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,7.134953);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,3.703327);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,2.849905);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,2.678931);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,3.277225);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,3.984512);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,4.605377);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,4.998448);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,4.410659);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,4.113541);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,4.020175);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,3.985397);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,3.8933);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,3.280812);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,2.510572);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,1.698054);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,1.402671);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,1.191111);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,1.216734);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,1.521975);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,1.651898);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(28,1.656746);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(29,1.277818);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(30,0.8108216);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(31,0.4365953);
   VbbHcc_algo_H_dR_stack_9->SetBinError(2,0.001104061);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.1527104);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.211447);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.2174504);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.1935552);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.1453264);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.1115414);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.09113303);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.08612922);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.09636792);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.1158961);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.1137268);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.1206828);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.1117973);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.1087171);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.1108212);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.1521209);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.116681);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.1055446);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.08809939);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.06793033);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.06152452);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.0657072);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.05914531);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.0668712);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.06857008);
   VbbHcc_algo_H_dR_stack_9->SetBinError(28,0.06814947);
   VbbHcc_algo_H_dR_stack_9->SetBinError(29,0.06685996);
   VbbHcc_algo_H_dR_stack_9->SetBinError(30,0.04856994);
   VbbHcc_algo_H_dR_stack_9->SetBinError(31,0.03493665);
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
   VbbHcc_algo_H_dR_stack_10->SetBinContent(2,0.000583236);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,1.752343);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,4.558145);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,5.903828);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,6.071901);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,4.890418);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,3.528833);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,2.640908);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,2.419094);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,2.68955);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,3.110981);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,3.383385);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,3.323774);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,2.945247);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,2.814109);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,2.47972);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,2.516867);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,2.514555);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,2.427818);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,2.07704);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,1.732749);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,1.24354);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,1.152111);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,1.1166);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,1.045743);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.915029);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(28,0.7533226);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(29,0.5438719);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(30,0.2755837);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(31,0.178862);
   VbbHcc_algo_H_dR_stack_10->SetBinError(2,0.000583236);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.03339376);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.05409944);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.06170021);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.06261926);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.05625158);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.04773669);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.04126779);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.03941721);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.0415855);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.04473385);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.04669523);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.04622845);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.0434742);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.04251324);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.03990061);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.04018835);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.04022005);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.03947553);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.03650163);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.03338346);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.02825805);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.02722775);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.02685502);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.02596496);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.02425778);
   VbbHcc_algo_H_dR_stack_10->SetBinError(28,0.02202597);
   VbbHcc_algo_H_dR_stack_10->SetBinError(29,0.01865973);
   VbbHcc_algo_H_dR_stack_10->SetBinError(30,0.01326513);
   VbbHcc_algo_H_dR_stack_10->SetBinError(31,0.01064083);
   VbbHcc_algo_H_dR_stack_10->SetEntries(112076);

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
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.06147858);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.08843203);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.0850427);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.08732931);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.02926177);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.03351526);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.02733746);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.01768314);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.02346821);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.02120589);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.0503757);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.05391054);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.03033985);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.02249875);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.04742416);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.03517394);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.02341851);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.0211703);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.01405866);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.009601281);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.019122);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(24,0.005662941);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(25,0.005418537);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(26,0.004970739);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.01699985);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(28,0.01485768);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(29,0.003551429);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(30,0.00794938);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(31,0.003836532);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.01462154);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.01642368);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.01589428);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.01607046);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.01055741);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.009862513);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.008723671);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.007503371);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.008451138);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.0081461);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.01209669);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.01305982);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.009785065);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.009513444);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.01206711);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.0101041);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.008621107);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.008197926);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.006446507);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.005599516);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.007407573);
   VbbHcc_algo_H_dR_stack_11->SetBinError(24,0.004004304);
   VbbHcc_algo_H_dR_stack_11->SetBinError(25,0.003836083);
   VbbHcc_algo_H_dR_stack_11->SetBinError(26,0.003541973);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.007042452);
   VbbHcc_algo_H_dR_stack_11->SetBinError(28,0.009210999);
   VbbHcc_algo_H_dR_stack_11->SetBinError(29,0.003551429);
   VbbHcc_algo_H_dR_stack_11->SetBinError(30,0.004606142);
   VbbHcc_algo_H_dR_stack_11->SetBinError(31,0.003836532);
   VbbHcc_algo_H_dR_stack_11->SetEntries(313);

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
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,0.01579818);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,0.0398305);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,0.03684165);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,0.03253525);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,0.02666887);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,0.0150696);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,0.01184604);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,0.01294037);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,0.01826734);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,0.02025783);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,0.01902259);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,0.01922503);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,0.02100957);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,0.024145);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,0.0151978);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,0.01639508);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,0.01777324);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,0.01320538);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,0.008936287);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,0.00644379);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(23,0.007029738);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(24,0.004811721);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(25,0.006422619);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(26,0.004596936);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(27,0.004834902);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(28,0.004759581);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(29,0.004013857);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(30,0.001636923);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(31,0.001972868);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,0.002367843);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,0.005179763);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,0.003594049);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,0.003351042);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,0.003344402);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,0.002303651);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,0.001999384);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,0.002106667);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,0.002515308);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,0.002670673);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,0.002564711);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,0.002581133);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,0.002749548);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,0.004508094);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,0.002282018);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,0.002366364);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,0.002512875);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,0.002088516);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,0.001814041);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,0.001489675);
   VbbHcc_algo_H_dR_stack_12->SetBinError(23,0.001579818);
   VbbHcc_algo_H_dR_stack_12->SetBinError(24,0.001351565);
   VbbHcc_algo_H_dR_stack_12->SetBinError(25,0.001514634);
   VbbHcc_algo_H_dR_stack_12->SetBinError(26,0.001265623);
   VbbHcc_algo_H_dR_stack_12->SetBinError(27,0.00129957);
   VbbHcc_algo_H_dR_stack_12->SetBinError(28,0.001330806);
   VbbHcc_algo_H_dR_stack_12->SetBinError(29,0.001224878);
   VbbHcc_algo_H_dR_stack_12->SetBinError(30,0.0008215078);
   VbbHcc_algo_H_dR_stack_12->SetBinError(31,0.0008167351);
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
   VbbHcc_algo_H_dR__326->SetBinContent(3,58349);
   VbbHcc_algo_H_dR__326->SetBinContent(4,79821);
   VbbHcc_algo_H_dR__326->SetBinContent(5,71426);
   VbbHcc_algo_H_dR__326->SetBinContent(6,71810);
   VbbHcc_algo_H_dR__326->SetBinContent(7,73025);
   VbbHcc_algo_H_dR__326->SetBinContent(8,75039);
   VbbHcc_algo_H_dR__326->SetBinContent(9,80347);
   VbbHcc_algo_H_dR__326->SetBinContent(10,87156);
   VbbHcc_algo_H_dR__326->SetBinContent(11,97437);
   VbbHcc_algo_H_dR__326->SetBinContent(12,110552);
   VbbHcc_algo_H_dR__326->SetBinContent(13,122330);
   VbbHcc_algo_H_dR__326->SetBinContent(14,130257);
   VbbHcc_algo_H_dR__326->SetBinContent(15,132007);
   VbbHcc_algo_H_dR__326->SetBinContent(16,131201);
   VbbHcc_algo_H_dR__326->SetBinContent(17,125679);
   VbbHcc_algo_H_dR__326->SetBinContent(18,119392);
   VbbHcc_algo_H_dR__326->SetBinContent(19,110465);
   VbbHcc_algo_H_dR__326->SetBinContent(20,99142);
   VbbHcc_algo_H_dR__326->SetBinContent(21,84638);
   VbbHcc_algo_H_dR__326->SetBinContent(22,67997);
   VbbHcc_algo_H_dR__326->SetBinContent(23,54158);
   VbbHcc_algo_H_dR__326->SetBinContent(24,41975);
   VbbHcc_algo_H_dR__326->SetBinContent(25,32251);
   VbbHcc_algo_H_dR__326->SetBinContent(26,24561);
   VbbHcc_algo_H_dR__326->SetBinContent(27,19189);
   VbbHcc_algo_H_dR__326->SetBinContent(28,15233);
   VbbHcc_algo_H_dR__326->SetBinContent(29,12013);
   VbbHcc_algo_H_dR__326->SetBinContent(30,7506);
   VbbHcc_algo_H_dR__326->SetBinContent(31,5703);
   VbbHcc_algo_H_dR__326->SetEntries(2140715);

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
   3.854652,
   62832.91,
   92671.51,
   76363.99,
   72131.91,
   79547.83,
   78868.91,
   82977.04,
   84131.2,
   105142.4,
   113096.8,
   126540.6,
   131588.1,
   143070.1,
   144635.5,
   146548.7,
   116259.7,
   111491.9,
   108925.1,
   112368.9,
   78723.65,
   57212.14,
   44884.04,
   34774.11,
   24299.4,
   21008.37,
   13116.15,
   13784.31,
   8903.115};
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
   0.6393594,
   3130.522,
   4896.901,
   3418.152,
   3266.685,
   4072.241,
   3851.016,
   4363.981,
   4037.828,
   5354.24,
   4726.125,
   5624.52,
   4839.684,
   5822.532,
   6370.352,
   6009.442,
   4435.879,
   4393.875,
   5259.111,
   23522.52,
   4175.985,
   3405.456,
   3380.463,
   2757.974,
   2021.733,
   2092.707,
   1388.892,
   1695.913,
   1331.097};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_fx1237,Graph_from_VbbHcc_algo_H_dR_fy1237,Graph_from_VbbHcc_algo_H_dR_fex1237,Graph_from_VbbHcc_algo_H_dR_fey1237);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1237 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1237","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetMinimum(167.8139);
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetMaximum(167813.9);
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
   data_mc_ratio__327->SetBinContent(2,7.004524);
   data_mc_ratio__327->SetBinContent(3,0.9286375);
   data_mc_ratio__327->SetBinContent(4,0.8613327);
   data_mc_ratio__327->SetBinContent(5,0.9353361);
   data_mc_ratio__327->SetBinContent(6,0.9955372);
   data_mc_ratio__327->SetBinContent(7,0.9180012);
   data_mc_ratio__327->SetBinContent(8,0.9514395);
   data_mc_ratio__327->SetBinContent(9,0.968304);
   data_mc_ratio__327->SetBinContent(10,1.035953);
   data_mc_ratio__327->SetBinContent(11,0.926715);
   data_mc_ratio__327->SetBinContent(12,0.9774986);
   data_mc_ratio__327->SetBinContent(13,0.9667249);
   data_mc_ratio__327->SetBinContent(14,0.9898846);
   data_mc_ratio__327->SetBinContent(15,0.9226739);
   data_mc_ratio__327->SetBinContent(16,0.9071149);
   data_mc_ratio__327->SetBinContent(17,0.8575923);
   data_mc_ratio__327->SetBinContent(18,1.026942);
   data_mc_ratio__327->SetBinContent(19,0.9907894);
   data_mc_ratio__327->SetBinContent(20,0.9101854);
   data_mc_ratio__327->SetBinContent(21,0.7532158);
   data_mc_ratio__327->SetBinContent(22,0.863743);
   data_mc_ratio__327->SetBinContent(23,0.9466173);
   data_mc_ratio__327->SetBinContent(24,0.9351876);
   data_mc_ratio__327->SetBinContent(25,0.9274428);
   data_mc_ratio__327->SetBinContent(26,1.010766);
   data_mc_ratio__327->SetBinContent(27,0.9133976);
   data_mc_ratio__327->SetBinContent(28,1.161393);
   data_mc_ratio__327->SetBinContent(29,0.871498);
   data_mc_ratio__327->SetBinContent(30,0.8430757);
   data_mc_ratio__327->SetBinContent(31,1.159317);
   data_mc_ratio__327->SetBinError(2,1.348021);
   data_mc_ratio__327->SetBinError(3,0.003844409);
   data_mc_ratio__327->SetBinError(4,0.003048684);
   data_mc_ratio__327->SetBinError(5,0.00349977);
   data_mc_ratio__327->SetBinError(6,0.003715053);
   data_mc_ratio__327->SetBinError(7,0.003397093);
   data_mc_ratio__327->SetBinError(8,0.003473263);
   data_mc_ratio__327->SetBinError(9,0.003416071);
   data_mc_ratio__327->SetBinError(10,0.003509066);
   data_mc_ratio__327->SetBinError(11,0.002968822);
   data_mc_ratio__327->SetBinError(12,0.002939902);
   data_mc_ratio__327->SetBinError(13,0.00276399);
   data_mc_ratio__327->SetBinError(14,0.002742736);
   data_mc_ratio__327->SetBinError(15,0.002539509);
   data_mc_ratio__327->SetBinError(16,0.002504343);
   data_mc_ratio__327->SetBinError(17,0.002419076);
   data_mc_ratio__327->SetBinError(18,0.002972065);
   data_mc_ratio__327->SetBinError(19,0.002981048);
   data_mc_ratio__327->SetBinError(20,0.002890687);
   data_mc_ratio__327->SetBinError(21,0.002589028);
   data_mc_ratio__327->SetBinError(22,0.003312376);
   data_mc_ratio__327->SetBinError(23,0.004067646);
   data_mc_ratio__327->SetBinError(24,0.004564607);
   data_mc_ratio__327->SetBinError(25,0.005164348);
   data_mc_ratio__327->SetBinError(26,0.006449522);
   data_mc_ratio__327->SetBinError(27,0.006593769);
   data_mc_ratio__327->SetBinError(28,0.009409932);
   data_mc_ratio__327->SetBinError(29,0.007951346);
   data_mc_ratio__327->SetBinError(30,0.009731108);
   data_mc_ratio__327->SetBinError(31,0.2148799);
   data_mc_ratio__327->SetMinimum(0.4);
   data_mc_ratio__327->SetMaximum(1.6);
   data_mc_ratio__327->SetEntries(336.0915);
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
   0.165867,
   0.04982296,
   0.0528415,
   0.04476131,
   0.04528765,
   0.05119236,
   0.04882806,
   0.05259263,
   0.04799442,
   0.05092372,
   0.0417883,
   0.04444833,
   0.03677905,
   0.04069707,
   0.04404418,
   0.04100646,
   0.0381549,
   0.03940981,
   0.04828192,
   0.2093331,
   0.05304613,
   0.05952331,
   0.07531546,
   0.07931112,
   0.08320095,
   0.099613,
   0.1058918,
   0.1230321,
   0.1495091};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1238,Graph_from_mc_statistical_error_fy1238,Graph_from_mc_statistical_error_fex1238,Graph_from_mc_statistical_error_fey1238);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1238 = new TH1F("Graph_Graph_from_mc_statistical_error1238","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1238->SetMinimum(0.7488003);
   Graph_Graph_from_mc_statistical_error1238->SetMaximum(1.2512);
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
