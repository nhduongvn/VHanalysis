void H_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_18/H_dR_Bj1_tags_18
//=========  (Mon Jul 24 10:11:23 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_18 = new TCanvas("H_dR_Bj1_tags_18", "H_dR_Bj1_tags_18",0,0,600,600);
   H_dR_Bj1_tags_18->SetHighLightColor(2);
   H_dR_Bj1_tags_18->Range(0,0,1,1);
   H_dR_Bj1_tags_18->SetFillColor(0);
   H_dR_Bj1_tags_18->SetFillStyle(4000);
   H_dR_Bj1_tags_18->SetBorderMode(0);
   H_dR_Bj1_tags_18->SetBorderSize(2);
   H_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-927.0916,6.314516,926174.5);
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
   st->SetMaximum(793775.6);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",30,0,6);
   st_stack_47->SetMinimum(0.01);
   st_stack_47->SetMaximum(833464.3);
   st_stack_47->SetDirectory(0);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->GetXaxis()->SetRange(1,30);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetLabelSize(0.035);
   st_stack_47->GetXaxis()->SetTitleSize(0.035);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/0.2");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetLabelSize(0.05);
   st_stack_47->GetYaxis()->SetTitleSize(0.057);
   st_stack_47->GetYaxis()->SetTitleOffset(1.2);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetLabelSize(0.035);
   st_stack_47->GetZaxis()->SetTitleSize(0.035);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,77046.54);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,215224.3);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,208094.6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,153040.1);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,126024.1);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,103924.5);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,88691.14);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,82550.14);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,70621.95);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,63173.29);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,59171.28);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,59520.39);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,48814.74);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,48414.01);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,43232.64);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,40864.73);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,32610.05);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,25446.12);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,20341.13);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,20754.58);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,15670.99);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,12471.6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,10255.01);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,8437.926);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,8891.448);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,5670.253);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,4766.895);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,2474.851);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,2695.794);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(30,1109.975);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(31,4090.61);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,2160.552);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,4969.122);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,6512.105);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,4769.184);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,4674.432);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,4099.522);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,3723.276);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,3736.804);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,3073.936);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,2862.956);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,3170.559);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,3577.433);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,2427.641);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,2495.933);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,2266.125);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,3176.834);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,2145.541);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,1738.858);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,1502.663);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,1679.339);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,1974.372);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,1204.417);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,1089.064);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,905.0362);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,1944.537);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,807.3994);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,801.5653);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,389.0951);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,702.9809);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(30,136.3441);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(31,1739.597);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(155876);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,747.7176);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,2524.079);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,2693.543);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,2100.551);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,1649.1);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,1328.903);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,1150.645);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,997.8249);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,890.8147);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,829.0264);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,754.7315);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,699.6085);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,634.601);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,556.6491);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,500.777);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,433.5543);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,354.364);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,293.3323);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,235.1525);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,209.2962);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,174.0499);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,138.3485);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,112.0023);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,88.06031);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,70.25765);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,52.80241);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,39.39559);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,23.90111);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,16.01921);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(30,9.821307);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,19.82114);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,11.94838);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,21.0665);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,21.34711);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,18.59046);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,16.60634);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,14.81466);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,13.86853);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,12.9189);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,12.03391);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,11.66962);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,11.0213);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,10.58935);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,10.10641);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,9.358947);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,8.840644);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,8.219616);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,7.356805);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,6.757423);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,5.958675);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,5.767882);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,5.233714);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,4.570835);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,4.175231);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,3.66223);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,3.219612);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,2.899961);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,2.404219);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,1.84011);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,1.418051);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(30,1.088308);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,1.524766);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(222347);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(1,8591.148);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(2,36763.95);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(3,46143.54);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(4,40042.67);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(5,31581.25);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(6,25365.8);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(7,20955.53);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(8,17940.62);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(9,15866.09);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(10,14442.41);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(11,13354.08);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(12,12352.47);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(13,11167.23);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(14,10020.05);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(15,8696.868);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(16,7497.731);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(17,6061.795);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(18,4902.926);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(19,3983.534);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(20,3201.875);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(21,2578.054);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(22,2027.235);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(23,1601.278);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(24,1228.31);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(25,912.7475);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(26,660.789);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(27,459.905);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(28,306.5778);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(29,201.5855);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(30,134.2959);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(31,237.3022);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(1,23.00245);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(2,47.72107);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(3,53.67398);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(4,50.11906);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(5,44.55189);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(6,39.93286);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(7,36.2879);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(8,33.57217);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(9,31.58052);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(10,30.14509);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(11,29.00644);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(12,27.9083);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(13,26.52802);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(14,25.12943);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(15,23.39727);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(16,21.7);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(17,19.49944);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(18,17.53103);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(19,15.78137);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(20,14.13231);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(21,12.66378);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(22,11.21915);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(23,9.966576);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(24,8.717165);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(25,7.502801);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(26,6.38124);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(27,5.319501);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(28,4.33238);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(29,3.50867);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(30,2.861529);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(31,3.796343);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetEntries(5745643);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(1,665.422);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(2,1758.623);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(3,1739.932);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(4,1356.966);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(5,1089.432);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(6,897.2707);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(7,786.7323);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(8,663.5948);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(9,585.3011);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(10,528.2667);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(11,461.8745);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(12,449.0798);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(13,409.6828);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(14,361.5149);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(15,335.8911);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(16,291.1923);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(17,227.6093);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(18,190.3225);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(19,163.9701);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(20,135.0925);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(21,115.7438);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(22,90.55207);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(23,68.76627);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(24,63.79799);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(25,49.57515);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(26,45.26414);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(27,26.33373);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(28,23.27904);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(29,7.336261);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(30,6.165084);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(31,11.47714);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(1,10.45843);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(2,24.82527);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(3,28.40369);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(4,24.96995);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(5,23.33382);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(6,20.45403);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(7,19.59896);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(8,18.04857);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(9,15.01411);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(10,16.49228);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(11,12.76435);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(12,13.81464);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(13,11.60341);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(14,13.46331);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(15,12.69246);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(16,12.22327);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(17,10.00423);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(18,8.83808);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(19,9.334362);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(20,8.082169);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(21,7.752282);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(22,6.160964);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(23,4.111613);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(24,5.695168);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(25,5.229077);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(26,5.09962);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(27,2.587949);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(28,4.599667);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(29,1.23584);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(30,1.008847);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(31,1.810807);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetEntries(86588);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(1,442.7725);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(2,1004.256);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(3,909.3669);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(4,715.4558);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(5,541.6691);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(6,510.8822);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(7,427.7522);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(8,312.8269);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(9,291.6724);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(10,284.9127);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(11,248.7968);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(12,226.0888);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(13,188.0028);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(14,168.8881);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(15,170.623);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(16,135.2374);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(17,96.77807);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(18,84.77142);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(19,81.40403);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(20,49.79098);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(21,54.68341);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(22,44.49279);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(23,41.64358);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(24,44.83737);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(25,24.89419);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(26,17.69826);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(27,12.26307);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(28,7.400814);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(29,6.678699);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(30,4.374781);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(31,4.134464);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(1,14.33497);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(2,27.93249);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(3,34.34776);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(4,33.95344);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(5,31.35776);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(6,31.29104);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(7,31.46275);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(8,18.96877);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(9,18.67034);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(10,25.38256);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(11,14.92933);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(12,17.04369);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(13,15.12514);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(14,10.80278);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(15,15.88388);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(16,9.723015);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(17,8.579445);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(18,7.984539);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(19,8.449785);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(20,5.121497);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(21,11.76241);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(22,5.700178);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(23,5.979937);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(24,11.68997);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(25,4.118393);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(26,3.379854);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(27,1.627353);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(28,1.129977);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(29,2.291265);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(30,2.167782);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(31,0.8149196);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetEntries(38399);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(1,2.890483);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(2,4.913822);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(3,5.491919);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(4,6.070015);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(5,4.624774);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(6,2.312387);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(7,1.445242);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(8,1.73429);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(9,1.156193);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(10,1.73429);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(11,2.023338);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(12,0.5780967);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(13,2.023338);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(14,0.5780967);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(15,0.5780967);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(16,0.2890483);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(18,0.5780967);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(20,0.2890483);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(21,0.867145);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(22,0.2890483);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(24,0.5780967);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(25,0.2890483);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(27,0.2890483);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(1,0.9140511);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(2,1.191777);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(3,1.259933);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(4,1.324586);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(5,1.156193);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(6,0.8175522);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(7,0.6463317);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(8,0.708021);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(9,0.5780967);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(10,0.708021);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(11,0.76475);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(12,0.4087761);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(13,0.76475);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(14,0.4087761);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(15,0.4087761);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(16,0.2890483);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(18,0.4087761);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(20,0.2890483);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(21,0.5006464);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(22,0.2890483);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(24,0.4087761);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(25,0.2890483);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(27,0.2890483);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetEntries(144);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(1,8.293223);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(2,18.45242);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(3,15.34246);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(4,8.085892);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(5,9.122545);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(6,6.219917);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(7,5.183264);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(8,4.561272);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(9,3.109959);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(10,4.561272);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(11,4.146611);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(12,2.695297);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(13,2.695297);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(14,1.865975);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(15,2.073306);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(16,1.658645);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(17,0.6219917);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(18,1.036653);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(19,1.036653);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(20,0.8293223);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(21,1.036653);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(22,0.8293223);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(23,0.6219917);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(24,0.6219917);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(25,0.4146611);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(26,0.2073306);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(29,0.2073306);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(31,0.6219917);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(1,1.311274);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(2,1.955953);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(3,1.783525);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(4,1.294779);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(5,1.375275);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(6,1.135596);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(7,1.036653);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(8,0.9724666);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(9,0.8029878);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(10,0.9724666);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(11,0.9272105);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(12,0.747541);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(13,0.747541);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(14,0.6219917);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(15,0.6556368);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(16,0.5864194);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(17,0.3591071);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(18,0.4636052);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(19,0.4636052);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(20,0.4146611);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(21,0.4636052);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(22,0.4146611);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(23,0.3591071);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(24,0.3591071);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(25,0.2932097);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(26,0.2073306);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(29,0.2073306);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(31,0.3591071);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetEntries(512);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(1,5.358321);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(2,17.10541);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(3,18.34194);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(4,10.30446);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(5,8.449659);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(6,3.503517);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(7,4.533964);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(8,3.503517);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(9,3.503517);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(10,4.740053);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(11,3.709607);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(12,2.266982);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(13,3.915696);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(14,2.473071);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(15,2.88525);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(16,1.030446);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(17,2.473071);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(18,1.442625);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(19,1.236536);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(20,0.4121785);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(21,0.824357);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(22,0.6182678);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(23,1.030446);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(24,0.4121785);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(25,0.2060893);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(26,0.2060893);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(27,0.2060893);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(28,0.2060893);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(1,1.050853);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(2,1.877562);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(3,1.944242);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(4,1.457271);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(5,1.319615);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(6,0.8497278);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(7,0.9666443);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(8,0.8497278);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(9,0.8497278);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(10,0.9883693);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(11,0.8743626);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(12,0.6835207);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(13,0.8983222);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(14,0.7139141);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(15,0.7711154);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(16,0.4608296);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(17,0.7139141);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(18,0.5452609);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(19,0.5048135);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(20,0.2914542);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(21,0.4121785);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(22,0.3569571);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(23,0.4608296);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(24,0.2914542);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(25,0.2060893);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(26,0.2060893);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(27,0.2060893);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(28,0.2060893);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetEntries(509);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(1,4.354408);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(2,13.39009);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(3,11.70547);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(4,7.815077);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(5,5.563585);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(6,4.354408);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(7,3.485812);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(8,3.113231);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(9,2.70179);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(10,2.532643);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(11,2.434354);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(12,2.262921);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(13,1.972627);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(14,1.680047);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(15,1.48347);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(16,1.216034);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(17,0.9531697);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(18,0.7428781);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(19,0.5714447);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(20,0.4777277);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(21,0.3840108);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(22,0.3451526);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(23,0.2811508);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(24,0.2811508);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(25,0.2194347);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(26,0.1600045);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(27,0.1120032);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(28,0.05485869);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(29,0.03428668);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(30,0.01828623);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(31,0.03428668);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(1,0.09976579);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(2,0.1749479);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(3,0.163573);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(4,0.1336545);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(5,0.1127702);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(6,0.09976579);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(7,0.08926251);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(8,0.08435731);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(9,0.07858559);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(10,0.07608588);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(11,0.07459487);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(12,0.07192035);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(13,0.067149);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(14,0.06196948);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(15,0.0582313);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(16,0.05272177);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(17,0.04667692);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(18,0.04120746);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(19,0.03614133);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(20,0.03304512);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(21,0.02962708);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(22,0.02808812);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(23,0.02535051);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(24,0.02535051);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(25,0.02239597);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(26,0.0191242);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(27,0.01600045);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(28,0.01119798);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(29,0.008852783);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(30,0.006465158);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(31,0.008852783);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetEntries(32696);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(1,3.261507);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(2,11.08352);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(3,11.61588);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(4,8.750807);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(5,6.139098);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(6,4.519969);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(7,3.736635);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(8,3.220969);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(9,2.814995);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(10,2.507384);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(11,2.366098);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(12,2.157447);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(13,1.980392);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(14,1.769357);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(15,1.531496);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(16,1.337152);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(17,1.064118);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(18,0.9049476);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(19,0.7332579);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(20,0.626548);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(21,0.5287803);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(22,0.4143205);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(23,0.3988208);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(24,0.2748227);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(25,0.2324964);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(26,0.1704974);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(27,0.1150559);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(28,0.06080675);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(29,0.05186458);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(30,0.03040338);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(31,0.05007615);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(1,0.04409456);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(2,0.0812858);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(3,0.08321504);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(4,0.07222705);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(5,0.0604962);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(6,0.0519091);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(7,0.04719719);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(8,0.04381967);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(9,0.04096516);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(10,0.03866217);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(11,0.03755711);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(12,0.03586294);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(13,0.03435987);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(14,0.03247757);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(15,0.03021577);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(16,0.0282336);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(17,0.02518667);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(18,0.0232267);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(19,0.0209076);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(20,0.01932649);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(21,0.0177547);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(22,0.01571607);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(23,0.0154193);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(24,0.01279977);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(25,0.01177291);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(26,0.01008172);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(27,0.008281906);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(28,0.006020766);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(29,0.005560467);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(30,0.004257324);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(31,0.005463756);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.08875471);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.3618461);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.3368128);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.3186067);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.1888882);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.13427);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.08647895);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.08192743);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.05916981);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(10,0.03868795);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(11,0.05234252);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(12,0.03868795);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.03413643);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(14,0.05006676);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(15,0.04323948);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(16,0.02048186);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(17,0.02275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(18,0.01365457);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(19,0.0182061);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(20,0.006827286);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(21,0.01365457);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(22,0.009103048);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(23,0.01137881);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(24,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(25,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(26,0.009103048);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(27,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(29,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(31,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.01421213);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.02869627);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.02768584);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.02692718);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.02073318);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.01748046);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.01402874);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.01365457);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.01160415);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(10,0.009383207);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(11,0.01091417);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(12,0.009383207);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.008813988);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(14,0.01067427);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(15,0.009919816);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(16,0.006827286);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(17,0.007196591);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(18,0.005574455);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(19,0.006436827);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(20,0.003941735);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(21,0.005574455);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(22,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(23,0.005088758);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(24,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(25,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(26,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(27,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(29,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(31,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(903);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(1,0.02966602);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(2,0.1492291);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(3,0.1776965);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(4,0.142337);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(5,0.1042806);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(6,0.06532518);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(7,0.05034234);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(8,0.0353595);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(9,0.02577048);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(10,0.02607014);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(11,0.02756843);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(12,0.02547083);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(13,0.02487151);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(14,0.01498284);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(15,0.01468318);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(16,0.01258559);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(17,0.01378421);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(18,0.01018833);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(19,0.008690047);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(20,0.007191763);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(21,0.00839039);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(22,0.003895538);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(23,0.006292793);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(24,0.003595882);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(25,0.003595882);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(26,0.003296225);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(27,0.001797941);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(28,0.001198627);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(29,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(30,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(31,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(1,0.002981547);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(2,0.006687115);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(3,0.00729712);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(4,0.006530868);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(5,0.005590025);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(6,0.00442438);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(7,0.003883996);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(8,0.003255106);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(9,0.002778903);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(10,0.002795013);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(11,0.002874207);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(12,0.002762699);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(13,0.002730003);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(14,0.002118894);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(15,0.002097598);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(16,0.001941998);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(17,0.002032371);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(18,0.001747284);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(19,0.001613701);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(20,0.001468013);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(21,0.001585635);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(22,0.001080428);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(23,0.0013732);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(24,0.001038042);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(25,0.001038042);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(26,0.0009938492);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(27,0.0007340063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(28,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(29,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(30,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(31,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetEntries(3336);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1__93 = new TH1D("VbbHcc_tags_H_dR_Bj1__93","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(1,108522);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(2,357199);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(3,355446);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(4,290703);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(5,239717);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(6,201821);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(7,172649);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(8,150233);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(9,133580);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(10,120979);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(11,110630);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(12,101771);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(13,93716);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(14,85565);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(15,77619);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(16,69716);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(17,56052);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(18,46818);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(19,39602);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(20,33397);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(21,27920);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(22,23205);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(23,18846);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(24,15123);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(25,11829);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(26,9087);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(27,6650);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(28,4642);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(29,3212);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(30,2169);
   VbbHcc_tags_H_dR_Bj1__93->SetBinContent(31,3688);
   VbbHcc_tags_H_dR_Bj1__93->SetEntries(2972135);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1__93->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1__93->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1__93->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1__93->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1__93->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1__93->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__93->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__93->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__93->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__93->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__93->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__93->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__93->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1__93->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__93->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__93->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__93->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__93->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__93->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fx1093[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fy1093[30] = {
   87517.88,
   257340.6,
   259643.9,
   197297.2,
   160919.7,
   132048.4,
   112030.3,
   102481.3,
   88269.2,
   79274.05,
   74005.52,
   73257.66,
   61226.9,
   59529.54,
   52945.41,
   49228.01,
   39355.74,
   30922.2,
   24808.8,
   24353.29,
   18597.19,
   14774.73,
   12081.05,
   9865.106,
   9950.292,
   6447.563,
   5305.521,
   2836.332,
   2927.71,
   1264.681};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fex1093[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fey1093[30] = {
   2160.781,
   4969.537,
   6512.515,
   4769.671,
   4674.838,
   4099.914,
   3723.663,
   3737.069,
   3074.216,
   2863.299,
   3170.772,
   3577.625,
   2427.882,
   2496.137,
   2266.354,
   3176.958,
   2145.682,
   1739,
   1502.811,
   1679.436,
   1974.47,
   1204.508,
   1089.142,
   905.1792,
   1944.566,
   807.453,
   801.5925,
   389.1525,
   702.9959,
   136.3994};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_fx1093,Graph_from_VbbHcc_tags_H_dR_Bj1_fy1093,Graph_from_VbbHcc_tags_H_dR_Bj1_fex1093,Graph_from_VbbHcc_tags_H_dR_Bj1_fey1093);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetMinimum(1015.454);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetMaximum(292659.3);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__94 = new TH1D("data_mc_ratio__94","",30,0,6);
   data_mc_ratio__94->SetBinContent(1,1.239998);
   data_mc_ratio__94->SetBinContent(2,1.38804);
   data_mc_ratio__94->SetBinContent(3,1.368975);
   data_mc_ratio__94->SetBinContent(4,1.473427);
   data_mc_ratio__94->SetBinContent(5,1.489668);
   data_mc_ratio__94->SetBinContent(6,1.528386);
   data_mc_ratio__94->SetBinContent(7,1.541092);
   data_mc_ratio__94->SetBinContent(8,1.465956);
   data_mc_ratio__94->SetBinContent(9,1.513325);
   data_mc_ratio__94->SetBinContent(10,1.526086);
   data_mc_ratio__94->SetBinContent(11,1.494888);
   data_mc_ratio__94->SetBinContent(12,1.38922);
   data_mc_ratio__94->SetBinContent(13,1.530634);
   data_mc_ratio__94->SetBinContent(14,1.437354);
   data_mc_ratio__94->SetBinContent(15,1.466019);
   data_mc_ratio__94->SetBinContent(16,1.416186);
   data_mc_ratio__94->SetBinContent(17,1.424239);
   data_mc_ratio__94->SetBinContent(18,1.514058);
   data_mc_ratio__94->SetBinContent(19,1.596289);
   data_mc_ratio__94->SetBinContent(20,1.371355);
   data_mc_ratio__94->SetBinContent(21,1.501302);
   data_mc_ratio__94->SetBinContent(22,1.570587);
   data_mc_ratio__94->SetBinContent(23,1.559963);
   data_mc_ratio__94->SetBinContent(24,1.532979);
   data_mc_ratio__94->SetBinContent(25,1.188809);
   data_mc_ratio__94->SetBinContent(26,1.40937);
   data_mc_ratio__94->SetBinContent(27,1.253411);
   data_mc_ratio__94->SetBinContent(28,1.636621);
   data_mc_ratio__94->SetBinContent(29,1.097103);
   data_mc_ratio__94->SetBinContent(30,1.715057);
   data_mc_ratio__94->SetBinContent(31,0.8450858);
   data_mc_ratio__94->SetBinError(1,0.003764108);
   data_mc_ratio__94->SetBinError(2,0.002322452);
   data_mc_ratio__94->SetBinError(3,0.002296194);
   data_mc_ratio__94->SetBinError(4,0.002732774);
   data_mc_ratio__94->SetBinError(5,0.003042567);
   data_mc_ratio__94->SetBinError(6,0.003402122);
   data_mc_ratio__94->SetBinError(7,0.003708911);
   data_mc_ratio__94->SetBinError(8,0.003782146);
   data_mc_ratio__94->SetBinError(9,0.004140583);
   data_mc_ratio__94->SetBinError(10,0.004387569);
   data_mc_ratio__94->SetBinError(11,0.004494406);
   data_mc_ratio__94->SetBinError(12,0.004354708);
   data_mc_ratio__94->SetBinError(13,0.004999938);
   data_mc_ratio__94->SetBinError(14,0.004913778);
   data_mc_ratio__94->SetBinError(15,0.005262059);
   data_mc_ratio__94->SetBinError(16,0.00536357);
   data_mc_ratio__94->SetBinError(17,0.006015718);
   data_mc_ratio__94->SetBinError(18,0.00699739);
   data_mc_ratio__94->SetBinError(19,0.00802145);
   data_mc_ratio__94->SetBinError(20,0.007504057);
   data_mc_ratio__94->SetBinError(21,0.008984841);
   data_mc_ratio__94->SetBinError(22,0.0103103);
   data_mc_ratio__94->SetBinError(23,0.01136331);
   data_mc_ratio__94->SetBinError(24,0.01246572);
   data_mc_ratio__94->SetBinError(25,0.01093045);
   data_mc_ratio__94->SetBinError(26,0.01478477);
   data_mc_ratio__94->SetBinError(27,0.01537031);
   data_mc_ratio__94->SetBinError(28,0.02402124);
   data_mc_ratio__94->SetBinError(29,0.01935797);
   data_mc_ratio__94->SetBinError(30,0.0368255);
   data_mc_ratio__94->SetBinError(31,0.3371562);
   data_mc_ratio__94->SetMinimum(0.4);
   data_mc_ratio__94->SetMaximum(1.6);
   data_mc_ratio__94->SetEntries(4332.079);
   data_mc_ratio__94->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__94->SetLineColor(ci);
   data_mc_ratio__94->SetLineWidth(2);
   data_mc_ratio__94->SetMarkerStyle(20);
   data_mc_ratio__94->SetMarkerSize(1.2);
   data_mc_ratio__94->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__94->GetXaxis()->SetRange(1,30);
   data_mc_ratio__94->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__94->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__94->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__94->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__94->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__94->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__94->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__94->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1094[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1094[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1094[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1094[30] = {
   0.0246896,
   0.01931113,
   0.02508248,
   0.02417505,
   0.02905075,
   0.03104856,
   0.033238,
   0.03646588,
   0.03482773,
   0.03611899,
   0.04284507,
   0.0488362,
   0.03965385,
   0.04193106,
   0.04280548,
   0.06453557,
   0.05452018,
   0.05623793,
   0.06057573,
   0.06896136,
   0.1061704,
   0.08152483,
   0.0901529,
   0.09175565,
   0.195428,
   0.1252338,
   0.1510865,
   0.1372027,
   0.240118,
   0.1078528};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1094,Graph_from_mc_statistical_error_fy1094,Graph_from_mc_statistical_error_fex1094,Graph_from_mc_statistical_error_fey1094);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1094 = new TH1F("Graph_Graph_from_mc_statistical_error1094","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1094->SetMinimum(0.7118584);
   Graph_Graph_from_mc_statistical_error1094->SetMaximum(1.288142);
   Graph_Graph_from_mc_statistical_error1094->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1094->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1094);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->SetSelected(H_dR_Bj1_tags_18);
}
