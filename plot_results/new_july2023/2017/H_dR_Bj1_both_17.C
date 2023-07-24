void H_dR_Bj1_both_17()
{
//=========Macro generated from canvas: H_dR_Bj1_both_17/H_dR_Bj1_both_17
//=========  (Mon Jul 24 10:12:18 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_17 = new TCanvas("H_dR_Bj1_both_17", "H_dR_Bj1_both_17",0,0,600,600);
   H_dR_Bj1_both_17->SetHighLightColor(2);
   H_dR_Bj1_both_17->Range(0,0,1,1);
   H_dR_Bj1_both_17->SetFillColor(0);
   H_dR_Bj1_both_17->SetFillStyle(4000);
   H_dR_Bj1_both_17->SetBorderMode(0);
   H_dR_Bj1_both_17->SetBorderSize(2);
   H_dR_Bj1_both_17->SetFrameFillStyle(1000);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-629.3739,6.314516,628754.5);
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
   st->SetMaximum(538872.4);
   
   TH1F *st_stack_238 = new TH1F("st_stack_238","",30,0,6);
   st_stack_238->SetMinimum(0.01);
   st_stack_238->SetMaximum(565816.1);
   st_stack_238->SetDirectory(0);
   st_stack_238->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_238->SetLineColor(ci);
   st_stack_238->GetXaxis()->SetRange(1,30);
   st_stack_238->GetXaxis()->SetLabelFont(42);
   st_stack_238->GetXaxis()->SetLabelSize(0.035);
   st_stack_238->GetXaxis()->SetTitleSize(0.035);
   st_stack_238->GetXaxis()->SetTitleFont(42);
   st_stack_238->GetYaxis()->SetTitle("Events/0.2");
   st_stack_238->GetYaxis()->SetLabelFont(42);
   st_stack_238->GetYaxis()->SetLabelSize(0.05);
   st_stack_238->GetYaxis()->SetTitleSize(0.057);
   st_stack_238->GetYaxis()->SetTitleOffset(1.2);
   st_stack_238->GetYaxis()->SetTitleFont(42);
   st_stack_238->GetZaxis()->SetLabelFont(42);
   st_stack_238->GetZaxis()->SetLabelSize(0.035);
   st_stack_238->GetZaxis()->SetTitleSize(0.035);
   st_stack_238->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_238);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,74002.44);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,202357.4);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,187548.9);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,150441);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,124452.7);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,108484.5);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,85141.88);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,75777.5);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,59544.2);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,57943.06);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,54217.76);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,49600.12);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,42753.48);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,39202.17);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,42418.71);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,37620.31);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,26047.4);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,32105.12);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,12319.83);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,10589.22);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,7725.125);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,20023.08);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,2945.03);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,3247.724);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,2179.226);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,1319.512);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,456.9839);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,512.1141);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,70.59766);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(30,77.23504);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(31,78.36431);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,1945.86);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,4819.287);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,4903.81);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,4821.608);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,15024.73);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,14932.37);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,3640.272);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,3915.452);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,3013.27);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,3562.759);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,2822.792);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,3072.539);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,2965.373);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,2195.434);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,2408.778);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,2498.817);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,1971.206);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,14531.75);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,1017.507);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,1007.809);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,862.9148);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,14448.31);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,393.3373);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,579.7718);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,453.4984);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,366.3729);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,69.67096);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,256.7658);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,27.76113);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(30,33.16637);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(31,33.17107);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(166831);

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
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,803.0891);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,2441.055);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,2617.833);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,2101.622);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,1600.579);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,1270.834);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,1042.297);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,879.2513);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,764.0172);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,687.7382);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,589.6446);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,556.5625);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,512.5538);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,466.3008);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,444.6756);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,407.7299);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,268.0892);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,183.7198);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,130.1239);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,97.36341);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,68.91061);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,50.72186);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,35.22761);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,24.0437);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,15.32173);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,9.302717);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,5.248312);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,3.443819);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,1.436715);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(30,0.8917356);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,1.162861);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,12.04746);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,19.92427);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,20.25489);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,18.02152);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,15.81442);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,14.19782);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,12.91516);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,11.85676);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,11.06138);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,10.55052);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,9.642755);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,9.462097);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,8.936112);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,8.51508);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,8.336697);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,7.895523);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,6.238875);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,5.022489);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,4.102009);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,3.358216);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,2.823894);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,2.349101);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,2.021753);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,1.588413);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,1.194757);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.855991);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.7698432);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.6270737);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.3563239);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(30,0.3160607);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.237665);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(217888);

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
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(1,9538.152);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(2,34972.45);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(3,42888.75);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(4,37031.64);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(5,29229.52);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(6,23299.99);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(7,19343.24);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(8,16447.37);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(9,14101.96);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(10,12389.46);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(11,11039.54);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(12,9924.646);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(13,9075.299);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(14,8344.149);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(15,7844.099);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(16,7168.98);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(17,4434.432);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(18,2946.64);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(19,2037.663);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(20,1425.523);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(21,986.5821);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(22,672.2528);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(23,465.1486);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(24,298.8577);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(25,192.6995);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(26,120.7914);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(27,75.61194);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(28,41.85316);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(29,21.50166);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(30,13.03749);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(31,23.02423);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(1,24.90901);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(2,47.73194);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(3,53.0384);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(4,49.40258);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(5,43.96015);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(6,39.29814);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(7,35.8456);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(8,33.0783);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(9,30.63464);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(10,28.73215);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(11,27.12701);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(12,25.72466);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(13,24.5987);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(14,23.59232);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(15,22.87591);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(16,21.87294);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(17,17.18342);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(18,13.97936);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(19,11.6106);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(20,9.696345);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(21,8.052318);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(22,6.623711);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(23,5.507493);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(24,4.409457);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(25,3.529248);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(26,2.797244);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(27,2.21622);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(28,1.649814);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(29,1.176737);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(30,0.9220407);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(31,1.221768);
   VbbHcc_both_H_dR_Bj1_stack_3->SetEntries(4843140);

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
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(1,689.6525);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(2,1664.545);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(3,1632.354);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(4,1323.088);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(5,1053.571);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(6,831.5342);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(7,705.8208);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(8,559.1286);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(9,488.3216);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(10,462.1722);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(11,396.8833);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(12,356.9474);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(13,372.0247);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(14,318.5138);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(15,306.984);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(16,271.8361);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(17,179.2677);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(18,138.0271);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(19,79.11565);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(20,73.7911);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(21,47.79603);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(22,34.84082);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(23,20.75645);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(24,13.84067);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(25,11.22796);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(26,5.544277);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(27,1.850862);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(28,1.592772);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(29,1.48991);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(30,0.1989294);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(31,0.6855285);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(1,10.59873);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(2,22.05135);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(3,25.22237);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(4,25.09066);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(5,24.12805);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(6,21.14085);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(7,18.41015);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(8,14.71163);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(9,13.41708);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(10,15.52565);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(11,12.86166);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(12,10.75572);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(13,13.44831);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(14,10.0391);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(15,9.829722);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(16,9.08251);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(17,7.27896);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(18,8.983579);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(19,5.197189);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(20,5.296292);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(21,3.955677);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(22,2.515741);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(23,1.818774);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(24,1.59568);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(25,2.91527);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(26,0.9531823);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(27,0.5837797);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(28,0.5639256);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(29,0.6383272);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(30,0.114852);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(31,0.232307);
   VbbHcc_both_H_dR_Bj1_stack_4->SetEntries(99118);

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
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(1,426.6594);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(2,999.9759);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(3,969.074);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(4,739.2941);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(5,551.6256);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(6,446.4094);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(7,332.2102);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(8,327.2946);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(9,264.9222);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(10,227.6147);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(11,203.0535);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(12,208.6918);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(13,165.2746);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(14,202.5157);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(15,175.8856);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(16,157.364);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(17,125.8438);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(18,71.779);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(19,44.60931);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(20,29.25226);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(21,19.48653);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(22,22.56176);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(23,11.76349);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(24,7.505792);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(25,5.593571);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(26,5.920174);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(27,0.8464708);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(28,0.6747812);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(29,0.1280815);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(30,0.2692911);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(31,0.2233464);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(1,10.4856);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(2,28.43643);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(3,36.21288);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(4,31.42265);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(5,25.20642);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(6,25.50789);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(7,17.27261);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(8,20.55133);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(9,18.49383);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(10,16.87542);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(11,15.01753);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(12,18.61447);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(13,13.9649);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(14,16.28055);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(15,11.52869);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(16,15.24718);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(17,16.18899);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(18,8.864971);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(19,4.488152);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(20,3.174665);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(21,3.085299);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(22,3.723932);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(23,1.714042);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(24,1.570679);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(25,1.447716);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(26,1.867336);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(27,0.2572717);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(28,0.2659044);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(29,0.09372478);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(30,0.1944755);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(31,0.1825139);
   VbbHcc_both_H_dR_Bj1_stack_5->SetEntries(45557);

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
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(1,2.217767);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(2,5.645224);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,7.05653);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(4,4.637148);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(5,3.225842);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(6,2.822612);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(7,1.612921);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(8,2.620997);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(9,1.612921);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(10,1.008076);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(11,0.8064606);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(12,1.209691);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(13,1.209691);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(14,1.411306);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(15,1.209691);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(16,1.411306);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(17,0.4032303);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(18,0.4032303);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(20,0.2016151);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(22,0.2016151);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(23,0.2016151);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(1,0.6686818);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(2,1.066847);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,1.192771);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(4,0.9669122);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(5,0.8064606);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(6,0.7543748);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(7,0.5702537);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(8,0.7269337);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(9,0.5702537);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(10,0.4508252);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(11,0.4032303);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(12,0.4938542);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(13,0.4938542);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(14,0.5334235);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(15,0.4938542);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(16,0.5334235);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(17,0.2851269);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(18,0.2851269);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(20,0.2016151);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(22,0.2016151);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(23,0.2016151);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(204);

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
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(1,5.369922);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,14.5133);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,14.65844);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,8.853115);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,8.272583);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,5.515055);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(7,5.224789);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,3.33806);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,3.628326);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(10,3.773459);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(11,4.063725);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(12,1.45133);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(13,1.741596);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(14,1.886729);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(15,2.757528);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(16,1.741596);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(17,1.161064);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(18,0.8707982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(19,0.2902661);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(20,0.4353991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(21,0.145133);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(22,0.2902661);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(1,0.8828098);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,1.45133);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,1.458569);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,1.133525);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,1.09573);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.8946601);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(7,0.8707982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.6960336);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.7256652);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(10,0.7400362);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(11,0.7679718);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(12,0.458951);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(13,0.5027556);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(14,0.5232846);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(15,0.6326202);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(16,0.5027556);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(17,0.4104982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(18,0.3555019);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(19,0.2052491);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(20,0.2513778);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(21,0.145133);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(22,0.2052491);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(620);

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
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,5.416419);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,15.68894);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,15.50216);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,11.95348);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,8.591561);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,4.295781);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,3.548688);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,4.669327);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,2.801596);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,3.361915);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,2.241277);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,1.680958);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,2.054504);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,1.680958);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,2.054504);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,1.680958);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,0.7470923);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(18,0.5603192);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(19,0.3735461);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(20,0.1867731);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(23,0.3735461);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(25,0.3735461);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,1.005804);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.711803);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,1.701584);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.494185);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,1.266757);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,0.8957322);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,0.8141249);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.9338654);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.723369);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.792411);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.6470009);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.5603192);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.6194562);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.5603192);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.6194562);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.5603192);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.3735461);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(18,0.3235004);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(19,0.264137);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(20,0.1867731);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(23,0.264137);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(25,0.264137);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(481);

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
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(1,3.769683);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(2,11.61431);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(3,10.84228);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(4,7.445689);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(5,4.814663);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(6,3.713154);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(7,3.017038);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(8,2.631025);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(9,2.256318);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(10,2.057659);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(11,1.960752);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(12,1.825082);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(13,1.556973);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(14,1.495598);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(15,1.359928);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(16,1.295324);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(17,0.7397235);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(18,0.4312362);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(19,0.2874908);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(20,0.2277315);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(21,0.1421303);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(22,0.08883143);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(23,0.05168374);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(24,0.06945003);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(25,0.02422675);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(26,0.02099652);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(27,0.01130582);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(28,0.006460468);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(29,0.004845351);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(30,0.001615117);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(31,0.004845351);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(1,0.0780287);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(2,0.1369615);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(3,0.1323312);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(4,0.1096616);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(5,0.08818302);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(6,0.07744144);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(7,0.06980594);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(8,0.06518753);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(9,0.06036736);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(10,0.05764859);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(11,0.05627471);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(12,0.05429292);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(13,0.05014671);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(14,0.04914841);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(15,0.04686623);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(16,0.04573947);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(17,0.03456501);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(18,0.02639123);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(19,0.02154835);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(20,0.01917845);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(21,0.01515114);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(22,0.01197803);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(23,0.009136481);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(24,0.01059103);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(25,0.006255321);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(26,0.005823387);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(27,0.004273198);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(28,0.003230234);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(29,0.002797464);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(30,0.001615117);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(31,0.002797464);
   VbbHcc_both_H_dR_Bj1_stack_9->SetEntries(39482);

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
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(1,3.10057);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(2,9.225418);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(3,9.429829);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(4,6.909735);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(5,4.659976);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(6,3.563292);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(7,2.949646);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(8,2.480705);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(9,2.123297);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(10,1.878254);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(11,1.69955);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(12,1.536188);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(13,1.442897);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(14,1.346289);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(15,1.30068);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(16,1.119074);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(17,0.7003025);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(18,0.4577466);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(19,0.3229933);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(20,0.1894839);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(21,0.1525822);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(22,0.1032418);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(23,0.07297409);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(24,0.04312106);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(25,0.02985304);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(26,0.0194874);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(27,0.007877885);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(28,0.004975506);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(29,0.00373163);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(30,0.001243877);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(31,0.001243877);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(1,0.03585492);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(2,0.06184734);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(3,0.06252878);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(4,0.05352525);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(5,0.04395617);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(6,0.03843737);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(7,0.0349714);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(8,0.03207122);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(9,0.02967109);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(10,0.02790649);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(11,0.02654575);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(12,0.02523772);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(13,0.02445939);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(14,0.02362638);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(15,0.02322273);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(16,0.02154058);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(17,0.01704005);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(18,0.01377655);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(19,0.01157244);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(20,0.008863682);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(21,0.007953897);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(22,0.006542681);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(23,0.005500629);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(24,0.004228367);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(25,0.003518214);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(26,0.002842529);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(27,0.001807311);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(28,0.001436305);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(29,0.001243877);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(30,0.0007181525);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(31,0.0007181525);
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
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(1,0.06953105);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(2,0.3492355);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(3,0.3113095);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(4,0.2639019);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(5,0.2054326);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(6,0.1359016);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(7,0.0711113);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(8,0.0679508);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(9,0.03792603);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(10,0.04582728);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(11,0.05056804);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(12,0.03476553);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(13,0.02528402);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(14,0.03002477);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(15,0.02686427);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(16,0.01422226);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(17,0.01422226);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(18,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(19,0.006321005);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(24,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(27,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(1,0.0104822);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(2,0.02349212);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(3,0.02217988);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(4,0.02042135);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(5,0.01801764);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(6,0.01465465);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(7,0.01060065);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(8,0.0103624);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(9,0.007741618);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(10,0.008509913);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(11,0.00893925);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(12,0.007412035);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(13,0.006321005);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(14,0.006888155);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(15,0.006515542);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(16,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(17,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(18,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(19,0.003160502);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(20,0.002234813);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(24,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(25,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(27,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetEntries(1123);

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
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.02844197);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.1386806);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.1777104);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.1432479);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.09757466);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.06082846);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.04442761);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.03342451);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.02657352);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.01909972);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.01681606);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.01889211);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.01930733);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(14,0.01121071);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.01411718);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.00954986);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(17,0.005397747);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(18,0.00477493);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(19,0.003529296);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(20,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(22,0.000622817);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(23,0.000622817);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(25,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.002429962);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.005365713);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.006074018);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.005453354);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.004500783);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.003553636);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.003037009);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.00263422);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.00234879);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.001991283);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.001868451);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.001980432);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.002002076);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(14,0.001525584);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.00171196);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.00140805);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(17,0.001058585);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(18,0.0009956417);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(19,0.00085598);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(20,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(22,0.0003595835);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(23,0.0003595835);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(25,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(4223);

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
   
   TH1D *VbbHcc_both_H_dR_Bj1__475 = new TH1D("VbbHcc_both_H_dR_Bj1__475","",30,0,6);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(1,30924);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(2,76050);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(3,73136);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(4,59008);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(5,47383);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(6,39224);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(7,33228);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(8,28091);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(9,24215);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(10,21491);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(11,19117);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(12,17493);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(13,16578);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(14,15499);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(15,14791);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(16,13684);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(17,8843);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(18,6399);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(19,4826);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(20,3490);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(21,2682);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(22,1843);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(23,1421);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(24,965);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(25,674);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(26,442);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(27,226);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(28,121);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(29,55);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(30,47);
   VbbHcc_both_H_dR_Bj1__475->SetBinContent(31,70);
   VbbHcc_both_H_dR_Bj1__475->SetEntries(562045);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1__475->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1__475->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1__475->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1__475->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1__475->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1__475->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__475->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__475->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__475->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__475->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__475->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__475->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__475->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1__475->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__475->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__475->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__475->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__475->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__475->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fx1475[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fy1475[30] = {
   85479.96,
   242492.6,
   235714.9,
   191676.8,
   156917.9,
   134353.4,
   106581.9,
   94006.39,
   75175.91,
   71722.19,
   66457.72,
   60654.72,
   52886.68,
   48541.51,
   51199.08,
   45633.49,
   31058.8,
   35448.01,
   14612.62,
   12216.39,
   8848.343,
   20804.14,
   3478.626,
   3592.086,
   2404.498,
   1461.111,
   540.5623,
   559.6901,
   95.1626,
   91.63535};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fex1475[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fey1475[30] = {
   1946.114,
   4819.699,
   4904.338,
   4822.063,
   15024.84,
   14932.47,
   3640.559,
   3915.692,
   3013.533,
   3562.965,
   2823.008,
   3072.737,
   2965.552,
   2195.66,
   2408.949,
   2498.988,
   1971.37,
   14531.76,
   1017.605,
   1007.88,
   862.9716,
   14448.31,
   393.3891,
   579.7951,
   453.5254,
   366.3906,
   69.71337,
   256.7726,
   27.79583,
   33.18145};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_fx1475,Graph_from_VbbHcc_both_H_dR_Bj1_fy1475,Graph_from_VbbHcc_both_H_dR_Bj1_fex1475,Graph_from_VbbHcc_both_H_dR_Bj1_fey1475);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj11475 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj11475","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetMinimum(52.6085);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetMaximum(272037.7);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj11475);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__476 = new TH1D("data_mc_ratio__476","",30,0,6);
   data_mc_ratio__476->SetBinContent(1,0.361769);
   data_mc_ratio__476->SetBinContent(2,0.3136178);
   data_mc_ratio__476->SetBinContent(3,0.3102731);
   data_mc_ratio__476->SetBinContent(4,0.3078515);
   data_mc_ratio__476->SetBinContent(5,0.3019604);
   data_mc_ratio__476->SetBinContent(6,0.2919466);
   data_mc_ratio__476->SetBinContent(7,0.3117602);
   data_mc_ratio__476->SetBinContent(8,0.2988201);
   data_mc_ratio__476->SetBinContent(9,0.3221112);
   data_mc_ratio__476->SetBinContent(10,0.2996423);
   data_mc_ratio__476->SetBinContent(11,0.2876566);
   data_mc_ratio__476->SetBinContent(12,0.2884029);
   data_mc_ratio__476->SetBinContent(13,0.3134627);
   data_mc_ratio__476->SetBinContent(14,0.3192937);
   data_mc_ratio__476->SetBinContent(15,0.2888919);
   data_mc_ratio__476->SetBinContent(16,0.2998675);
   data_mc_ratio__476->SetBinContent(17,0.284718);
   data_mc_ratio__476->SetBinContent(18,0.1805179);
   data_mc_ratio__476->SetBinContent(19,0.3302624);
   data_mc_ratio__476->SetBinContent(20,0.2856818);
   data_mc_ratio__476->SetBinContent(21,0.3031076);
   data_mc_ratio__476->SetBinContent(22,0.08858813);
   data_mc_ratio__476->SetBinContent(23,0.4084946);
   data_mc_ratio__476->SetBinContent(24,0.2686461);
   data_mc_ratio__476->SetBinContent(25,0.280308);
   data_mc_ratio__476->SetBinContent(26,0.3025096);
   data_mc_ratio__476->SetBinContent(27,0.4180832);
   data_mc_ratio__476->SetBinContent(28,0.2161911);
   data_mc_ratio__476->SetBinContent(29,0.5779581);
   data_mc_ratio__476->SetBinContent(30,0.5129025);
   data_mc_ratio__476->SetBinContent(31,0.6765484);
   data_mc_ratio__476->SetBinError(1,0.002057233);
   data_mc_ratio__476->SetBinError(2,0.001137237);
   data_mc_ratio__476->SetBinError(3,0.001147304);
   data_mc_ratio__476->SetBinError(4,0.001267319);
   data_mc_ratio__476->SetBinError(5,0.001387199);
   data_mc_ratio__476->SetBinError(6,0.001474102);
   data_mc_ratio__476->SetBinError(7,0.001710285);
   data_mc_ratio__476->SetBinError(8,0.001782897);
   data_mc_ratio__476->SetBinError(9,0.002069968);
   data_mc_ratio__476->SetBinError(10,0.002043971);
   data_mc_ratio__476->SetBinError(11,0.002080484);
   data_mc_ratio__476->SetBinError(12,0.002180557);
   data_mc_ratio__476->SetBinError(13,0.002434556);
   data_mc_ratio__476->SetBinError(14,0.002564712);
   data_mc_ratio__476->SetBinError(15,0.002375399);
   data_mc_ratio__476->SetBinError(16,0.002563438);
   data_mc_ratio__476->SetBinError(17,0.003027716);
   data_mc_ratio__476->SetBinError(18,0.00225665);
   data_mc_ratio__476->SetBinError(19,0.004754069);
   data_mc_ratio__476->SetBinError(20,0.004835816);
   data_mc_ratio__476->SetBinError(21,0.005852851);
   data_mc_ratio__476->SetBinError(22,0.00206354);
   data_mc_ratio__476->SetBinError(23,0.01083651);
   data_mc_ratio__476->SetBinError(24,0.008648024);
   data_mc_ratio__476->SetBinError(25,0.01079706);
   data_mc_ratio__476->SetBinError(26,0.01438891);
   data_mc_ratio__476->SetBinError(27,0.02781048);
   data_mc_ratio__476->SetBinError(28,0.01965373);
   data_mc_ratio__476->SetBinError(29,0.07793186);
   data_mc_ratio__476->SetBinError(30,0.07481452);
   data_mc_ratio__476->SetBinError(31,0.231634);
   data_mc_ratio__476->SetMinimum(0.4);
   data_mc_ratio__476->SetMaximum(1.6);
   data_mc_ratio__476->SetEntries(748.4292);
   data_mc_ratio__476->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__476->SetLineColor(ci);
   data_mc_ratio__476->SetLineWidth(2);
   data_mc_ratio__476->SetMarkerStyle(20);
   data_mc_ratio__476->SetMarkerSize(1.2);
   data_mc_ratio__476->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__476->GetXaxis()->SetRange(1,30);
   data_mc_ratio__476->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__476->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__476->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__476->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__476->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__476->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__476->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__476->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__476->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__476->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__476->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__476->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__476->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__476->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__476->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__476->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__476->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1476[30] = {
   0.02276691,
   0.01987565,
   0.02080623,
   0.02515726,
   0.09574971,
   0.1111432,
   0.03415738,
   0.04165347,
   0.04008642,
   0.0496773,
   0.04247825,
   0.05065948,
   0.05607369,
   0.04523263,
   0.04705063,
   0.05476215,
   0.0634722,
   0.4099457,
   0.06963878,
   0.08250231,
   0.09752918,
   0.6944921,
   0.1130875,
   0.161409,
   0.1886155,
   0.2507617,
   0.1289645,
   0.4587764,
   0.2920878,
   0.3621032};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1476,Graph_from_mc_statistical_error_fy1476,Graph_from_mc_statistical_error_fex1476,Graph_from_mc_statistical_error_fey1476);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1476 = new TH1F("Graph_Graph_from_mc_statistical_error1476","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1476->SetMinimum(0.1666095);
   Graph_Graph_from_mc_statistical_error1476->SetMaximum(1.83339);
   Graph_Graph_from_mc_statistical_error1476->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1476->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1476->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1476);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->SetSelected(H_dR_Bj1_both_17);
}
