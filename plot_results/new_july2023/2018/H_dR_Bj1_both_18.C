void H_dR_Bj1_both_18()
{
//=========Macro generated from canvas: H_dR_Bj1_both_18/H_dR_Bj1_both_18
//=========  (Mon Jul 24 10:12:18 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_18 = new TCanvas("H_dR_Bj1_both_18", "H_dR_Bj1_both_18",0,0,600,600);
   H_dR_Bj1_both_18->SetHighLightColor(2);
   H_dR_Bj1_both_18->Range(0,0,1,1);
   H_dR_Bj1_both_18->SetFillColor(0);
   H_dR_Bj1_both_18->SetFillStyle(4000);
   H_dR_Bj1_both_18->SetBorderMode(0);
   H_dR_Bj1_both_18->SetBorderSize(2);
   H_dR_Bj1_both_18->SetFrameFillStyle(1000);
   H_dR_Bj1_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1106.613,6.314516,1105516);
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
   st->SetMaximum(947480);
   
   TH1F *st_stack_239 = new TH1F("st_stack_239","",30,0,6);
   st_stack_239->SetMinimum(0.01);
   st_stack_239->SetMaximum(994854);
   st_stack_239->SetDirectory(0);
   st_stack_239->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_239->SetLineColor(ci);
   st_stack_239->GetXaxis()->SetRange(1,30);
   st_stack_239->GetXaxis()->SetLabelFont(42);
   st_stack_239->GetXaxis()->SetLabelSize(0.035);
   st_stack_239->GetXaxis()->SetTitleSize(0.035);
   st_stack_239->GetXaxis()->SetTitleFont(42);
   st_stack_239->GetYaxis()->SetTitle("Events/0.2");
   st_stack_239->GetYaxis()->SetLabelFont(42);
   st_stack_239->GetYaxis()->SetLabelSize(0.05);
   st_stack_239->GetYaxis()->SetTitleSize(0.057);
   st_stack_239->GetYaxis()->SetTitleOffset(1.2);
   st_stack_239->GetYaxis()->SetTitleFont(42);
   st_stack_239->GetZaxis()->SetLabelFont(42);
   st_stack_239->GetZaxis()->SetLabelSize(0.035);
   st_stack_239->GetZaxis()->SetTitleSize(0.035);
   st_stack_239->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_239);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,100521.8);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,245612.4);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,219038.5);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,166210.1);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,141724.5);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,116837.5);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,97441.34);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,81788.31);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,68027.04);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,69200.86);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,60887.32);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,57301.4);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,55516.52);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,51515.62);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,50581.19);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,43889.09);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,28915.55);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,25331.58);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,15450.21);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,14415.87);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,8265.807);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,8375.619);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,4385.522);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,3028.358);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,3564.308);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,1392.96);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,1024.765);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,744.7184);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,100.5305);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(30,79.80046);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(31,52.12503);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,2632.574);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,5396.517);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,5698.381);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,4926.408);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,4687.717);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,4976.944);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,4635.904);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,3643.157);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,3266.766);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,4129.408);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,3245.499);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,3164.711);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,2671.831);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,2941.839);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,2920.244);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,2189.07);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,1685.597);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,2442.444);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,1176.843);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,2024.386);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,835.7074);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,1073.985);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,642.1016);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,522.401);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,856.5456);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,367.266);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,359.2527);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,356.1655);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,39.18101);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(30,36.04834);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(31,21.01645);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(164216);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,1012.413);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,3054.201);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,3091.099);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,2367.059);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,1789.927);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,1449.635);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,1218.019);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,1011.489);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,877.4486);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,806.5481);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,716.4814);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,659.5963);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,587.9315);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,583.3851);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,552.5098);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,522.4049);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,328.9818);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,236.1988);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,161.0677);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,119.8962);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,87.44794);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,63.67748);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,44.92039);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,28.52697);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,21.92258);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,12.53805);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,5.902045);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,3.80805);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,1.499011);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(30,0.9508667);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,1.588833);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,13.68808);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,22.89048);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,22.60964);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,19.616);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,17.19208);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,15.62893);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,14.44811);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,13.07724);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,12.16686);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,11.68441);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,10.9934);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,10.52372);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,9.769);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,9.835978);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,9.485866);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,9.202503);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,7.076263);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,5.818137);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,4.623866);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,3.888348);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,3.273381);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,2.773779);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,2.294997);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,1.840064);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,1.620073);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,1.203562);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.7475279);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.7473443);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.446581);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(30,0.3290283);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.4576486);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(233695);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(1,12460.53);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(2,44020.43);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(3,51796.55);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(4,43679.26);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(5,34230.05);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(6,27474.43);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(7,22899.92);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(8,19455.18);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(9,16861.1);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(10,14912.23);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(11,13407.39);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(12,12222.27);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(13,11165.21);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(14,10457.04);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(15,9786.747);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(16,8977.965);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(17,5556.406);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(18,3740.523);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(19,2561.311);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(20,1796.179);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(21,1226.923);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(22,835.4707);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(23,562.6618);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(24,373.7088);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(25,242.3899);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(26,146.0969);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(27,83.70973);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(28,49.32288);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(29,28.52756);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(30,17.0896);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(31,27.45439);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(1,27.73419);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(2,52.20294);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(3,56.80075);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(4,52.26445);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(5,46.33567);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(6,41.54405);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(7,37.95143);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(8,35.00363);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(9,32.60587);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(10,30.67038);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(11,29.08713);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(12,27.78413);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(13,26.5481);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(14,25.6946);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(15,24.85977);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(16,23.80588);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(17,18.70465);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(18,15.32696);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(19,12.66458);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(20,10.59849);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(21,8.742033);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(22,7.202263);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(23,5.900511);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(24,4.809033);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(25,3.875866);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(26,3.00256);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(27,2.27507);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(28,1.746371);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(29,1.33158);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(30,1.029752);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(31,1.313317);
   VbbHcc_both_H_dR_Bj1_stack_3->SetEntries(6104032);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(1,883.8502);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(2,2123.048);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(3,1976.951);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(4,1562.315);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(5,1193.03);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(6,988.3721);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(7,822.0041);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(8,725.5603);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(9,603.5658);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(10,560.6096);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(11,492.5267);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(12,441.7597);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(13,414.9446);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(14,420.8446);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(15,383.829);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(16,364.0691);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(17,217.4969);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(18,162.6462);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(19,106.232);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(20,87.08397);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(21,52.34112);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(22,42.44261);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(23,24.03989);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(24,29.94207);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(25,17.30629);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(26,5.636276);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(27,4.796076);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(28,2.593444);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(29,0.8140376);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(30,0.8401998);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(31,1.534426);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(1,12.6092);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(2,27.51393);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(3,29.41806);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(4,26.48801);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(5,22.87744);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(6,24.17229);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(7,20.42769);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(8,19.36476);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(9,15.72813);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(10,16.47622);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(11,15.06984);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(12,11.88337);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(13,11.35086);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(14,13.88949);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(15,12.31676);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(16,12.15425);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(17,8.91247);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(18,9.110131);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(19,6.342221);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(20,5.970909);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(21,3.541702);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(22,3.180712);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(23,2.147843);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(24,4.799537);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(25,4.406518);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(26,1.078475);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(27,1.03576);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(28,0.9208762);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(29,0.3102265);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(30,0.3005151);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(31,0.7284415);
   VbbHcc_both_H_dR_Bj1_stack_4->SetEntries(94684);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(1,526.3928);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(2,1135.023);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(3,997.2576);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(4,815.9119);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(5,691.1253);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(6,473.4077);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(7,388.0979);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(8,334.7014);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(9,280.7894);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(10,250.1374);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(11,212.0594);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(12,225.8383);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(13,196.7479);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(14,193.8485);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(15,175.5635);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(16,188.7296);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(17,92.75135);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(18,74.08864);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(19,63.35897);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(20,41.89016);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(21,33.4059);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(22,27.77916);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(23,18.53633);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(24,10.12847);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(25,6.663714);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(26,6.048188);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(27,2.427637);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(28,0.8548092);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(29,0.1406278);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(30,0.173614);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(31,0.3937605);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(1,15.06284);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(2,31.92554);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(3,31.69417);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(4,40.56473);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(5,39.61529);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(6,27.27514);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(7,30.36045);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(8,22.07771);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(9,18.18657);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(10,14.92265);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(11,13.09134);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(12,19.47297);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(13,12.17269);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(14,12.05508);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(15,10.84173);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(16,15.62003);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(17,7.601324);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(18,7.070059);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(19,12.0067);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(20,4.532089);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(21,5.518603);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(22,10.83761);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(23,4.804475);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(24,3.11183);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(25,2.295754);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(26,2.316545);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(27,0.726359);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(28,0.3752976);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(29,0.1273451);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(30,0.1350279);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(31,0.2196699);
   VbbHcc_both_H_dR_Bj1_stack_5->SetEntries(40778);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(1,4.046677);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(2,5.780967);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,4.624774);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(4,5.20287);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(5,4.913822);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(6,2.312387);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(7,1.156193);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(8,1.445242);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(9,1.156193);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(10,2.023338);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(11,2.601435);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(12,1.445242);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(13,1.73429);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(14,2.601435);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(15,0.867145);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(16,0.867145);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(18,0.2890483);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(20,0.2890483);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(1,1.08152);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(2,1.292663);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,1.156193);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(4,1.226328);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(5,1.191777);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(6,0.8175522);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(7,0.5780967);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(8,0.6463317);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(9,0.5780967);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(10,0.76475);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(11,0.867145);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(12,0.6463317);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(13,0.708021);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(14,0.867145);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(15,0.5006464);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(16,0.5006464);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(18,0.2890483);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(20,0.2890483);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(150);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(1,10.1592);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,21.35505);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,12.8545);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,9.951867);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,6.634578);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,6.427248);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(7,4.975934);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,4.146611);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,3.317289);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(10,5.390595);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(11,3.939281);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(12,2.695297);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(13,2.902628);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(14,3.73195);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(15,3.317289);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(16,2.073306);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(17,1.658645);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(18,1.451314);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(19,0.2073306);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(20,0.4146611);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(21,0.2073306);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(22,0.2073306);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(23,0.2073306);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(25,0.2073306);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(1,1.451314);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,2.104175);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,1.632523);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,1.436428);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,1.172839);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,1.154368);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(7,1.015708);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.9272105);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.8293223);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(10,1.057183);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(11,0.903733);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(12,0.747541);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(13,0.7757599);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(14,0.8796291);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(15,0.8293223);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(16,0.6556368);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(17,0.5864194);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(18,0.5485451);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(19,0.2073306);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(20,0.2932097);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(21,0.2073306);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(22,0.2073306);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(23,0.2073306);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(25,0.2073306);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(523);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,8.037481);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,17.72368);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,20.60893);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,13.18971);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,9.067927);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,6.388767);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,5.56441);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,3.091339);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,3.503517);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,3.709607);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,4.121785);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,3.709607);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,1.854803);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,2.67916);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,1.648714);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,3.091339);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,2.266982);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(18,1.030446);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(19,0.6182678);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(20,0.824357);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(21,0.2060893);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,1.287027);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.911193);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,2.060893);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.648714);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,1.367041);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,1.147456);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,1.070871);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.7981802);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.8497278);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.8743626);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.9216592);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.8743626);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.6182678);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.7430654);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.5829084);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.7981802);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.6835207);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(18,0.4608296);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(19,0.3569571);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(20,0.4121785);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(21,0.2060893);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(548);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(1,5.483583);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(2,15.49758);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(3,13.8221);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(4,9.001396);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(5,6.548756);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(6,4.918996);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(7,4.224119);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(8,3.613816);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(9,3.104087);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(10,2.738363);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(11,2.573787);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(12,2.416068);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(13,2.265207);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(14,2.153203);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(15,2.029771);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(16,1.796622);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(17,1.074316);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(18,0.6697331);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(19,0.4297264);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(20,0.2857223);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(21,0.2194347);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(22,0.10286);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(23,0.07771647);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(24,0.05943024);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(25,0.03428668);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(26,0.01600045);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(27,0.01142889);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(28,0.004571557);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(29,0.004571557);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(31,0.004571557);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(1,0.1119565);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(2,0.1882127);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(3,0.1777478);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(4,0.1434406);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(5,0.1223479);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(6,0.1060365);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(7,0.0982619);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(8,0.09088665);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(9,0.08423335);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(10,0.07911568);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(11,0.07670141);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(12,0.07431418);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(13,0.07195666);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(14,0.07015516);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(15,0.06811467);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(16,0.06408339);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(17,0.0495545);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(18,0.03912623);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(19,0.03134102);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(20,0.02555578);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(21,0.02239597);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(22,0.01533347);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(23,0.01332827);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(24,0.01165523);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(25,0.008852783);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(26,0.006047602);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(27,0.005111156);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(28,0.003232579);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(29,0.003232579);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(31,0.003232579);
   VbbHcc_both_H_dR_Bj1_stack_9->SetEntries(37266);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(1,4.45797);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(2,13.26422);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(3,13.55812);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(4,9.93475);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(5,6.70007);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(6,5.123267);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(7,4.240973);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(8,3.566733);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(9,3.052857);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(10,2.700535);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(11,2.443597);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(12,2.208716);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(13,2.074583);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(14,1.935682);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(15,1.870106);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(16,1.608994);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(17,1.006888);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(18,0.6581437);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(19,0.4643967);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(20,0.2724381);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(21,0.2193812);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(22,0.14844);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(23,0.1049215);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(24,0.06199904);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(25,0.04292241);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(26,0.0280188);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(27,0.01132675);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(28,0.007153736);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(29,0.005365302);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(30,0.001788434);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(31,0.001788434);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(1,0.05155186);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(2,0.08892352);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(3,0.08990328);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(4,0.07695809);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(5,0.06319977);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(6,0.05526489);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(7,0.05028154);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(8,0.0461117);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(9,0.0426608);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(10,0.04012368);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(11,0.03816723);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(12,0.03628656);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(13,0.03516748);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(14,0.03396978);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(15,0.03338942);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(16,0.03097085);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(17,0.02450002);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(18,0.0198078);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(19,0.01663874);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(20,0.01274412);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(21,0.01143604);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(22,0.009407004);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(23,0.007908752);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(24,0.006079506);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(25,0.005058455);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(26,0.004086962);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(27,0.002598534);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(28,0.002065106);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(29,0.001788434);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(30,0.001032553);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(31,0.001032553);
   VbbHcc_both_H_dR_Bj1_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(1,0.08192743);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(2,0.4323948);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(3,0.4073614);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(4,0.2912975);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(5,0.2048186);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(6,0.143373);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(7,0.1228911);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(8,0.07510014);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(9,0.0773759);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(10,0.05234252);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(11,0.05916981);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(12,0.02275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(13,0.0295849);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(14,0.03868795);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(15,0.02048186);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(16,0.03186067);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(17,0.02048186);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(18,0.006827286);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(19,0.004551524);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(20,0.004551524);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(21,0.006827286);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(23,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(1,0.01365457);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(2,0.03136921);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(3,0.03044762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(4,0.02574731);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(5,0.02158977);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(6,0.0180633);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(7,0.01672337);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(8,0.01307326);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(9,0.01326986);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(10,0.01091417);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(11,0.01160415);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(12,0.007196591);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(13,0.008205376);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(14,0.009383207);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(15,0.006827286);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(16,0.008515121);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(17,0.006827286);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(18,0.003941735);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(19,0.003218413);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(20,0.003218413);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(21,0.003941735);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(23,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetEntries(939);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.03206328);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.1812924);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.1965749);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.1612154);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.1135699);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.07431489);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.05214028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.03895538);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.03416087);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.02936637);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.02487151);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.02007701);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.01977735);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(14,0.01618147);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.01498284);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.01258559);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(17,0.00749142);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(18,0.005094166);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(19,0.003595882);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(20,0.002696911);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(21,0.0005993136);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(23,0.0008989704);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(25,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(31,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.003099674);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.007370583);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.007674959);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.006950488);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.005833695);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.004719);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.003952745);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.003416613);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.003199459);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.002966451);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.002730003);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.002452797);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.002434423);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(14,0.002202019);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.002118894);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.001941998);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(17,0.001498284);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(18,0.001235517);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(19,0.001038042);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(20,0.0008989704);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(21,0.0004237787);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(23,0.0005190208);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(25,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(31,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(3484);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1__477 = new TH1D("VbbHcc_both_H_dR_Bj1__477","",30,0,6);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(1,145005);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(2,426366);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(3,413062);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(4,326642);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(5,264719);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(6,217043);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(7,182720);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(8,156449);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(9,136700);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(10,121787);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(11,110695);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(12,101874);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(13,95810);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(14,90599);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(15,86567);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(16,79826);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(17,53315);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(18,39122);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(19,29364);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(20,22332);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(21,17358);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(22,12830);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(23,9388);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(24,6608);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(25,4521);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(26,2880);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(27,1679);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(28,940);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(29,405);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(30,208);
   VbbHcc_both_H_dR_Bj1__477->SetBinContent(31,360);
   VbbHcc_both_H_dR_Bj1__477->SetEntries(3157203);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1__477->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1__477->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1__477->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1__477->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1__477->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1__477->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__477->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__477->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__477->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__477->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__477->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__477->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__477->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1__477->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__477->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__477->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__477->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__477->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__477->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fx1477[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fy1477[30] = {
   115437.3,
   296019.3,
   276966.4,
   214682.4,
   179662.9,
   147248.8,
   122789.7,
   103331.2,
   86664.19,
   85747.03,
   75731.54,
   70863.38,
   67892.23,
   63183.9,
   61489.61,
   53951.74,
   35117.22,
   29549.15,
   18343.91,
   16463.01,
   9666.784,
   9345.448,
   5036.074,
   3470.786,
   3852.876,
   1563.323,
   1121.624,
   801.3093,
   131.5217,
   98.85653};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fex1477[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fey1477[30] = {
   2632.83,
   5396.984,
   5698.874,
   4926.964,
   4688.201,
   4977.275,
   4636.226,
   3643.467,
   3267.04,
   4129.598,
   3245.71,
   3164.933,
   2672.033,
   2942.026,
   2920.412,
   2189.308,
   1685.756,
   2442.527,
   1176.999,
   2024.431,
   835.7853,
   1074.072,
   642.1544,
   522.4577,
   856.5703,
   367.2891,
   359.2629,
   356.172,
   39.20761,
   36.06605};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_fx1477,Graph_from_VbbHcc_both_H_dR_Bj1_fy1477,Graph_from_VbbHcc_both_H_dR_Bj1_fex1477,Graph_from_VbbHcc_both_H_dR_Bj1_fey1477);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj11477 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj11477","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetMinimum(56.51143);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetMaximum(331551.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj11477);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_both_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__478 = new TH1D("data_mc_ratio__478","",30,0,6);
   data_mc_ratio__478->SetBinContent(1,1.256137);
   data_mc_ratio__478->SetBinContent(2,1.440332);
   data_mc_ratio__478->SetBinContent(3,1.49138);
   data_mc_ratio__478->SetBinContent(4,1.521513);
   data_mc_ratio__478->SetBinContent(5,1.473421);
   data_mc_ratio__478->SetBinContent(6,1.473989);
   data_mc_ratio__478->SetBinContent(7,1.488073);
   data_mc_ratio__478->SetBinContent(8,1.514054);
   data_mc_ratio__478->SetBinContent(9,1.577353);
   data_mc_ratio__478->SetBinContent(10,1.420306);
   data_mc_ratio__478->SetBinContent(11,1.461676);
   data_mc_ratio__478->SetBinContent(12,1.437611);
   data_mc_ratio__478->SetBinContent(13,1.411207);
   data_mc_ratio__478->SetBinContent(14,1.433894);
   data_mc_ratio__478->SetBinContent(15,1.407831);
   data_mc_ratio__478->SetBinContent(16,1.479582);
   data_mc_ratio__478->SetBinContent(17,1.518201);
   data_mc_ratio__478->SetBinContent(18,1.323964);
   data_mc_ratio__478->SetBinContent(19,1.60075);
   data_mc_ratio__478->SetBinContent(20,1.356496);
   data_mc_ratio__478->SetBinContent(21,1.795633);
   data_mc_ratio__478->SetBinContent(22,1.372861);
   data_mc_ratio__478->SetBinContent(23,1.864151);
   data_mc_ratio__478->SetBinContent(24,1.903892);
   data_mc_ratio__478->SetBinContent(25,1.173409);
   data_mc_ratio__478->SetBinContent(26,1.84223);
   data_mc_ratio__478->SetBinContent(27,1.496937);
   data_mc_ratio__478->SetBinContent(28,1.17308);
   data_mc_ratio__478->SetBinContent(29,3.07934);
   data_mc_ratio__478->SetBinContent(30,2.104059);
   data_mc_ratio__478->SetBinContent(31,4.331969);
   data_mc_ratio__478->SetBinError(1,0.00329872);
   data_mc_ratio__478->SetBinError(2,0.002205826);
   data_mc_ratio__478->SetBinError(3,0.002320495);
   data_mc_ratio__478->SetBinError(4,0.002662194);
   data_mc_ratio__478->SetBinError(5,0.002863744);
   data_mc_ratio__478->SetBinError(6,0.003163889);
   data_mc_ratio__478->SetBinError(7,0.003481217);
   data_mc_ratio__478->SetBinError(8,0.003827849);
   data_mc_ratio__478->SetBinError(9,0.004266233);
   data_mc_ratio__478->SetBinError(10,0.004069878);
   data_mc_ratio__478->SetBinError(11,0.004393263);
   data_mc_ratio__478->SetBinError(12,0.004504119);
   data_mc_ratio__478->SetBinError(13,0.004559165);
   data_mc_ratio__478->SetBinError(14,0.00476382);
   data_mc_ratio__478->SetBinError(15,0.004784917);
   data_mc_ratio__478->SetBinError(16,0.005236809);
   data_mc_ratio__478->SetBinError(17,0.006575133);
   data_mc_ratio__478->SetBinError(18,0.00669369);
   data_mc_ratio__478->SetBinError(19,0.009341482);
   data_mc_ratio__478->SetBinError(20,0.009077256);
   data_mc_ratio__478->SetBinError(21,0.01362912);
   data_mc_ratio__478->SetBinError(22,0.01212029);
   data_mc_ratio__478->SetBinError(23,0.01923953);
   data_mc_ratio__478->SetBinError(24,0.0234211);
   data_mc_ratio__478->SetBinError(25,0.01745148);
   data_mc_ratio__478->SetBinError(26,0.03432792);
   data_mc_ratio__478->SetBinError(27,0.0365324);
   data_mc_ratio__478->SetBinError(28,0.03826166);
   data_mc_ratio__478->SetBinError(29,0.1530137);
   data_mc_ratio__478->SetBinError(30,0.1458903);
   data_mc_ratio__478->SetBinError(31,1.122123);
   data_mc_ratio__478->SetMinimum(0.4);
   data_mc_ratio__478->SetMaximum(1.6);
   data_mc_ratio__478->SetEntries(869.6336);
   data_mc_ratio__478->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__478->SetLineColor(ci);
   data_mc_ratio__478->SetLineWidth(2);
   data_mc_ratio__478->SetMarkerStyle(20);
   data_mc_ratio__478->SetMarkerSize(1.2);
   data_mc_ratio__478->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__478->GetXaxis()->SetRange(1,30);
   data_mc_ratio__478->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__478->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__478->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__478->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__478->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__478->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__478->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__478->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__478->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__478->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__478->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__478->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__478->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__478->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__478->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__478->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__478->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1478[30] = {
   0.02280746,
   0.01823186,
   0.02057605,
   0.02295002,
   0.02609444,
   0.03380181,
   0.03775745,
   0.03526008,
   0.03769769,
   0.04816025,
   0.0428581,
   0.04466247,
   0.03935697,
   0.0465629,
   0.04749439,
   0.04057901,
   0.0480037,
   0.0826598,
   0.06416294,
   0.1229685,
   0.0864595,
   0.11493,
   0.1275109,
   0.1505301,
   0.2223197,
   0.2349413,
   0.3203061,
   0.4444875,
   0.2981076,
   0.3648323};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1478,Graph_from_mc_statistical_error_fy1478,Graph_from_mc_statistical_error_fex1478,Graph_from_mc_statistical_error_fey1478);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1478 = new TH1F("Graph_Graph_from_mc_statistical_error1478","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1478->SetMinimum(0.466615);
   Graph_Graph_from_mc_statistical_error1478->SetMaximum(1.533385);
   Graph_Graph_from_mc_statistical_error1478->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1478->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1478->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1478);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_18->cd();
   H_dR_Bj1_both_18->Modified();
   H_dR_Bj1_both_18->cd();
   H_dR_Bj1_both_18->SetSelected(H_dR_Bj1_both_18);
}
