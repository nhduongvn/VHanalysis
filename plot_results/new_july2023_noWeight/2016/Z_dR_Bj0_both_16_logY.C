void Z_dR_Bj0_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Thu Aug 10 12:32:58 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(0,0,1,1);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetFillStyle(4000);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.861877,6.314516,12.08699);
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
   st->SetMaximum(1.145818e+10);
   
   TH1F *st_stack_241 = new TH1F("st_stack_241","",30,0,6);
   st_stack_241->SetMinimum(0.001422565);
   st_stack_241->SetMaximum(3.909327e+10);
   st_stack_241->SetDirectory(0);
   st_stack_241->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_241->SetLineColor(ci);
   st_stack_241->GetXaxis()->SetRange(1,30);
   st_stack_241->GetXaxis()->SetLabelFont(42);
   st_stack_241->GetXaxis()->SetLabelSize(0.035);
   st_stack_241->GetXaxis()->SetTitleSize(0.035);
   st_stack_241->GetXaxis()->SetTitleFont(42);
   st_stack_241->GetYaxis()->SetTitle("Events/0.2");
   st_stack_241->GetYaxis()->SetLabelFont(42);
   st_stack_241->GetYaxis()->SetLabelSize(0.05);
   st_stack_241->GetYaxis()->SetTitleSize(0.057);
   st_stack_241->GetYaxis()->SetTitleOffset(1.2);
   st_stack_241->GetYaxis()->SetTitleFont(42);
   st_stack_241->GetZaxis()->SetLabelFont(42);
   st_stack_241->GetZaxis()->SetLabelSize(0.035);
   st_stack_241->GetZaxis()->SetTitleSize(0.035);
   st_stack_241->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_241);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,7245.02);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,31292.39);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,28196.34);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,21709.51);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,14900.55);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,12333.42);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,6524.601);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,8582.1);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,6240.024);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,7521.801);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,4712.424);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,5574.086);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,3081.16);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,2803.591);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,2708.982);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,1744.99);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,2073.426);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,2706.543);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,2488.314);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,671.1483);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,391.2986);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,829.4814);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,345.15);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,774.1119);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,452.3585);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,140.0295);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,113.1186);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,57.52605);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,51.11718);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(30,5.879633);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,48.12534);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,957.9211);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,2913.134);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,2869.65);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,3017.669);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,2113.688);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,2352.921);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,959.3382);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,2220.762);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,1643.805);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,1768.787);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,868.8521);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,1660.923);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,676.5301);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,672.4412);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,618.5847);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,481.7661);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,609.7311);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,1472.731);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,717.2966);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,278.8182);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,75.99314);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,386.0041);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,72.15147);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,385.1386);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,273.3183);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,42.56143);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,36.84842);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,26.06281);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,31.95067);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(30,5.879633);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,31.59917);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(10203);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,32.58993);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,103.1865);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,112.1947);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,91.39262);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,77.60018);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,62.29369);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,46.54611);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,40.24794);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,33.44821);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,29.40502);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,23.35142);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,23.33413);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,16.7237);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,16.80317);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,14.76374);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,13.99126);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,8.650489);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,10.66848);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,5.840143);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,6.315406);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,4.396597);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,4.386014);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,4.346538);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,2.201008);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,2.664012);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,1.914145);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,0.9730549);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,1.343878);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,0.1819279);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,0.1819279);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,0.1381939);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,2.408215);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,4.035826);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,4.115909);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,3.734805);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,3.413548);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,3.168743);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,2.707992);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,2.505657);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,2.31864);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,2.17223);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,1.866605);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,1.942754);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,1.631129);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,1.649416);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,1.48567);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,1.493967);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.9949819);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,1.314451);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.9571216);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,1.08152);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.8176541);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.8216158);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.8542683);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.5304336);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.731092);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.5157953);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.4690308);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.490232);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.09116527);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,0.09116527);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,0.07999024);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(10096);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(1,406.2248);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(2,1858.417);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(3,2253.037);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(4,1978.946);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(5,1520.896);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(6,1145.729);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(7,894.2496);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(8,719.0165);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(9,595.4783);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(10,510.8521);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(11,446.0332);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(12,391.0868);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(13,342.6122);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(14,305.2542);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(15,262.3818);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(16,235.8402);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(17,189.6358);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(18,164.9213);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(19,140.8042);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(20,117.3757);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(21,97.22299);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(22,69.28782);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(23,57.44198);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(24,42.01564);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(25,30.66193);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(26,22.24095);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(27,14.90057);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(28,9.017802);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(29,5.540781);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(30,3.309953);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(31,4.972455);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(1,5.064472);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(2,10.8131);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(3,11.91872);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(4,11.17695);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(5,9.79951);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(6,8.499356);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(7,7.510166);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(8,6.724628);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(9,6.118878);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(10,5.66564);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(11,5.300079);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(12,4.967584);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(13,4.645497);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(14,4.390538);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(15,4.064039);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(16,3.859006);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(17,3.458488);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(18,3.218387);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(19,2.980218);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(20,2.711454);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(21,2.46302);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(22,2.069344);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(23,1.898858);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(24,1.619933);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(25,1.390444);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(26,1.174858);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(27,0.9640603);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(28,0.7428321);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(29,0.5878855);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(30,0.4533863);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(31,0.5347569);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetEntries(243289);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(1,78.17621);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(2,306.5548);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(3,348.6929);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(4,267.2957);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(5,173.9327);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(6,137.7629);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(7,101.9957);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(8,91.77756);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(9,76.6025);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(10,62.99515);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(11,60.02516);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(12,52.66011);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(13,48.87627);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(14,49.02035);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(15,33.56053);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(16,27.57538);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(17,26.44496);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(18,24.73267);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(19,25.01765);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(20,16.86709);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(21,14.91196);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(22,5.986759);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(23,6.490134);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(24,7.499184);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(25,4.856829);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(26,2.442443);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(27,2.105778);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(28,0.8340829);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(29,1.058753);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(31,0.4111776);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(1,2.853094);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(2,10.13895);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(3,14.68603);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(4,13.98695);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(5,11.1971);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(6,10.26315);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(7,8.025321);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(8,8.341186);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(9,7.784226);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(10,6.617672);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(11,7.125996);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(12,6.54157);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(13,5.963469);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(14,6.52484);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(15,5.072574);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(16,4.230541);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(17,4.261785);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(18,4.205822);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(19,4.923047);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(20,3.136157);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(21,3.057332);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(22,0.8496385);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(23,0.9935056);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(24,1.210144);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(25,0.8304529);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(26,0.5418353);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(27,0.5154242);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(28,0.2414208);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(29,0.3656236);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(31,0.1682036);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetEntries(15464);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(1,13.33799);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(2,41.81852);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(3,28.23839);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(4,26.29216);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(5,13.20623);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(6,11.08568);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(7,6.146374);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(8,8.921888);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(9,5.703639);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(10,5.279828);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(11,3.376186);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(12,8.326313);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(13,4.090153);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(14,2.752798);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(15,3.650326);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(16,2.678265);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(17,1.726871);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(18,3.085637);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(19,2.26069);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(20,1.493293);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(21,0.903079);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(22,0.9133062);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(23,3.82788);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(24,0.5942531);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(25,1.056012);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(26,0.5930617);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(27,0.1585641);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(28,0.1507869);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(29,0.1241852);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(30,0.0004273076);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(31,0.146767);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(1,1.446124);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(2,6.850122);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(3,3.132113);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(4,6.692826);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(5,2.084319);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(6,1.800681);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(7,0.8215151);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(8,1.971025);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(9,1.253587);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(10,1.556384);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(11,0.609222);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(12,2.189588);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(13,1.204692);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(14,0.596426);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(15,1.161889);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(16,1.101882);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(17,0.3794893);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(18,1.160572);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(19,1.075743);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(20,0.4727844);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(21,0.3064977);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(22,0.2857087);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(23,1.804528);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(24,0.2516936);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(25,0.3244681);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(26,0.2230991);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(27,0.1009697);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(28,0.1006697);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(29,0.08428628);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(30,0.0003021521);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(31,0.146767);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetEntries(3789);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(1,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(2,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(5,0.2687386);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(7,0.2687386);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(12,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(19,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(1,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(2,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(5,0.1900269);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(7,0.1900269);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(8,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(11,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(12,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(19,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(21,0.1343693);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,1.090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,1.308704);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,0.4362346);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(6,0.2181173);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(7,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,0.2181173);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(9,0.4362346);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(10,0.4362346);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(11,0.2181173);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,0.2181173);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(13,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(15,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(16,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(17,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(20,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,0.3448737);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,0.3777902);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,0.2181173);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(6,0.1542322);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(7,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.1542322);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(9,0.2181173);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(10,0.2181173);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(11,0.1542322);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.1542322);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(13,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(14,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(15,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(16,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(17,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(19,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(20,0.1090586);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(1,0.7296215);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(2,7.053007);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(3,9.728286);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(4,3.891314);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(5,3.4049);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(6,2.188864);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(7,1.459243);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(8,1.70245);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(9,1.459243);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(10,1.945657);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(11,1.459243);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(12,1.459243);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(13,1.216036);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(14,0.4864143);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(15,0.4864143);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(17,0.4864143);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(18,0.4864143);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(21,0.4864143);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(23,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(24,0.7296215);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(25,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(26,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(28,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(1,0.4212471);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(2,1.309711);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(3,1.538177);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(4,0.9728286);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(5,0.9099978);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(6,0.7296215);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(7,0.5957334);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(8,0.6434656);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(9,0.5957334);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(10,0.6878937);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(11,0.5957334);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(12,0.5957334);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(13,0.5438277);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(14,0.3439469);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(15,0.3439469);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(16,0.3439469);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(17,0.3439469);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(18,0.3439469);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(20,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(21,0.3439469);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(23,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(24,0.4212471);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(25,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(26,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(28,0.2432072);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(1,1.492111);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(2,6.747472);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(3,7.552607);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(4,5.53977);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(5,3.594255);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(6,2.301368);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(7,1.782014);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(8,1.430283);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(9,1.320367);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(10,1.22419);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(11,1.115648);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(12,1.00848);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(13,0.9013117);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(14,0.7433074);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(15,0.6402611);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(16,0.502866);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(17,0.419055);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(18,0.3118868);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(19,0.2528069);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(20,0.1827355);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(21,0.1744917);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(22,0.1456388);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(23,0.1002984);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(24,0.0810631);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(25,0.07007149);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(26,0.05770593);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(27,0.02885297);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(28,0.01648741);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(29,0.006869754);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(30,0.001373951);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(31,0.001373951);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(1,0.04527788);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(2,0.09628445);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(3,0.1018671);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(4,0.08724317);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(5,0.07027325);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(6,0.05623136);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(7,0.04948131);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(8,0.04432988);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(9,0.04259247);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(10,0.04101191);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(11,0.03915157);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(12,0.03722367);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(13,0.03519031);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(14,0.03195728);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(15,0.02965952);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(16,0.02628523);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(17,0.02399502);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(18,0.02070066);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(19,0.01863718);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(20,0.01584517);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(21,0.01548364);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(22,0.01414569);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(23,0.01173904);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(24,0.01055352);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(25,0.009811971);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(26,0.008904219);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(27,0.006296233);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(28,0.004759505);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(29,0.003072247);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(30,0.001373951);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(31,0.001373951);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(1,0.5939987);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(2,2.903755);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(3,3.476629);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(4,2.548931);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(5,1.696423);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(6,1.143242);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(7,0.8403345);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(8,0.6853004);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(9,0.5646389);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(10,0.5352791);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(11,0.4862268);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(12,0.4024439);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(13,0.3533916);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(14,0.3125743);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(15,0.2796341);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(16,0.2309398);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(17,0.1883323);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(18,0.1575403);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(19,0.1192294);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(20,0.1052656);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(21,0.08414086);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(22,0.07841212);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(23,0.06623855);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(24,0.04153336);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(25,0.0325822);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(26,0.0193345);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(27,0.01539599);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(28,0.006086786);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(29,0.004654601);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(30,0.001074139);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(31,0.0003580462);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(1,0.01458352);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(2,0.03224404);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(3,0.03528163);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(4,0.03020985);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(5,0.02464544);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(6,0.02023199);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(7,0.01734585);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(8,0.01566427);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(9,0.01421854);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(10,0.01384394);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(11,0.01319438);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(12,0.0120039);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(13,0.01124858);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(14,0.01057904);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(15,0.01000609);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(16,0.009093246);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(17,0.008211679);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(18,0.007510441);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(19,0.00653373);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(20,0.006139214);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(21,0.005488744);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(22,0.0052986);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(23,0.004869955);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(24,0.003856276);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(25,0.003415543);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(26,0.002631092);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(27,0.002347866);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(28,0.001476262);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(29,0.001290954);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(30,0.0006201542);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(31,0.0003580462);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.01914505);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.01914505);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.01367504);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(14,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.00723615);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.00723615);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.006115663);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.003867885);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(11,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(12,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(14,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(1,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(2,0.01143251);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(3,0.01143251);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(4,0.009646178);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(5,0.003215393);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(6,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(7,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(8,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(9,0.001786329);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(11,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(12,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(13,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(16,0.001429063);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(17,0.001071798);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(19,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(1,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(2,0.002021001);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(3,0.002021001);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(4,0.001856408);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(5,0.001071798);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(6,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(7,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(8,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(9,0.0007988707);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(11,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(12,0.0005052502);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(13,0.0005052502);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(16,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(17,0.0006188026);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(19,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0__661 = new TH1D("VbbHcc_both_Z_dR_Bj0__661","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(1,5172);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(2,16984);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(3,15598);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(4,11596);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(5,8835);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(6,6961);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(7,5419);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(8,4551);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(9,3806);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(10,3159);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(11,2775);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(12,2569);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(13,2165);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(14,2016);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(15,1758);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(16,1539);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(17,1300);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(18,1132);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(19,974);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(20,794);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(21,660);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(22,559);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(23,403);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(24,354);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(25,314);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(26,246);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(27,145);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(28,98);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(29,61);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(30,34);
   VbbHcc_both_Z_dR_Bj0__661->SetBinContent(31,41);
   VbbHcc_both_Z_dR_Bj0__661->SetEntries(102047);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0__661->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0__661->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0__661->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0__661->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0__661->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__661->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__661->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__661->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fx1481[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fy1481[30] = {
   7778.412,
   33620.33,
   30960.6,
   24085.88,
   16695.27,
   13696.15,
   7578,
   9446.242,
   6955.042,
   8134.477,
   5248.627,
   6052.72,
   3496.043,
   3179.083,
   3024.854,
   2026.406,
   2301.088,
   2910.907,
   2662.853,
   813.8404,
   509.613,
   910.2793,
   417.669,
   827.2742,
   491.9435,
   167.5403,
   131.3008,
   69.13838,
   58.03436,
   9.374389};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fex1481[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fey1481[30] = {
   957.9429,
   2913.183,
   2869.717,
   3017.732,
   2113.744,
   2352.962,
   959.4055,
   2220.79,
   1643.837,
   1768.81,
   868.8999,
   1660.946,
   676.5756,
   672.4896,
   618.6218,
   481.8038,
   609.7569,
   1472.741,
   717.3211,
   278.8517,
   76.10039,
   386.0116,
   72.21131,
   385.1446,
   273.3244,
   42.58549,
   36.86775,
   26.08045,
   31.95841,
   5.897793};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_fx1481,Graph_from_VbbHcc_both_Z_dR_Bj0_fy1481,Graph_from_VbbHcc_both_Z_dR_Bj0_fex1481,Graph_from_VbbHcc_both_Z_dR_Bj0_fey1481);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetMinimum(3.128937);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetMaximum(40186.51);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj01481);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__662 = new TH1D("data_mc_ratio__662","",30,0,6);
   data_mc_ratio__662->SetBinContent(1,0.6649172);
   data_mc_ratio__662->SetBinContent(2,0.5051706);
   data_mc_ratio__662->SetBinContent(3,0.5038016);
   data_mc_ratio__662->SetBinContent(4,0.481444);
   data_mc_ratio__662->SetBinContent(5,0.5291917);
   data_mc_ratio__662->SetBinContent(6,0.5082451);
   data_mc_ratio__662->SetBinContent(7,0.7150964);
   data_mc_ratio__662->SetBinContent(8,0.4817789);
   data_mc_ratio__662->SetBinContent(9,0.5472289);
   data_mc_ratio__662->SetBinContent(10,0.388347);
   data_mc_ratio__662->SetBinContent(11,0.5287097);
   data_mc_ratio__662->SetBinContent(12,0.4244373);
   data_mc_ratio__662->SetBinContent(13,0.6192716);
   data_mc_ratio__662->SetBinContent(14,0.634145);
   data_mc_ratio__662->SetBinContent(15,0.5811851);
   data_mc_ratio__662->SetBinContent(16,0.7594726);
   data_mc_ratio__662->SetBinContent(17,0.5649501);
   data_mc_ratio__662->SetBinContent(18,0.3888822);
   data_mc_ratio__662->SetBinContent(19,0.3657731);
   data_mc_ratio__662->SetBinContent(20,0.9756213);
   data_mc_ratio__662->SetBinContent(21,1.2951);
   data_mc_ratio__662->SetBinContent(22,0.6140972);
   data_mc_ratio__662->SetBinContent(23,0.9648788);
   data_mc_ratio__662->SetBinContent(24,0.4279113);
   data_mc_ratio__662->SetBinContent(25,0.6382847);
   data_mc_ratio__662->SetBinContent(26,1.468303);
   data_mc_ratio__662->SetBinContent(27,1.104334);
   data_mc_ratio__662->SetBinContent(28,1.417447);
   data_mc_ratio__662->SetBinContent(29,1.051102);
   data_mc_ratio__662->SetBinContent(30,3.626903);
   data_mc_ratio__662->SetBinContent(31,0.7621432);
   data_mc_ratio__662->SetBinError(1,0.009245669);
   data_mc_ratio__662->SetBinError(2,0.003876306);
   data_mc_ratio__662->SetBinError(3,0.0040339);
   data_mc_ratio__662->SetBinError(4,0.004470866);
   data_mc_ratio__662->SetBinError(5,0.005630017);
   data_mc_ratio__662->SetBinError(6,0.006091684);
   data_mc_ratio__662->SetBinError(7,0.009714154);
   data_mc_ratio__662->SetBinError(8,0.007141581);
   data_mc_ratio__662->SetBinError(9,0.008870226);
   data_mc_ratio__662->SetBinError(10,0.006909477);
   data_mc_ratio__662->SetBinError(11,0.01003658);
   data_mc_ratio__662->SetBinError(12,0.008373972);
   data_mc_ratio__662->SetBinError(13,0.01330921);
   data_mc_ratio__662->SetBinError(14,0.01412353);
   data_mc_ratio__662->SetBinError(15,0.01386133);
   data_mc_ratio__662->SetBinError(16,0.01935944);
   data_mc_ratio__662->SetBinError(17,0.0156689);
   data_mc_ratio__662->SetBinError(18,0.01155833);
   data_mc_ratio__662->SetBinError(19,0.01172013);
   data_mc_ratio__662->SetBinError(20,0.0346235);
   data_mc_ratio__662->SetBinError(21,0.05041172);
   data_mc_ratio__662->SetBinError(22,0.02597355);
   data_mc_ratio__662->SetBinError(23,0.04806404);
   data_mc_ratio__662->SetBinError(24,0.02274323);
   data_mc_ratio__662->SetBinError(25,0.03602049);
   data_mc_ratio__662->SetBinError(26,0.09361558);
   data_mc_ratio__662->SetBinError(27,0.09170997);
   data_mc_ratio__662->SetBinError(28,0.1431838);
   data_mc_ratio__662->SetBinError(29,0.1345798);
   data_mc_ratio__662->SetBinError(30,0.6220087);
   data_mc_ratio__662->SetBinError(31,0.4633044);
   data_mc_ratio__662->SetMinimum(0.4);
   data_mc_ratio__662->SetMaximum(1.6);
   data_mc_ratio__662->SetEntries(78.8505);
   data_mc_ratio__662->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__662->SetLineColor(ci);
   data_mc_ratio__662->SetLineWidth(2);
   data_mc_ratio__662->SetMarkerStyle(20);
   data_mc_ratio__662->SetMarkerSize(1.2);
   data_mc_ratio__662->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__662->GetXaxis()->SetRange(1,30);
   data_mc_ratio__662->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__662->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__662->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__662->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__662->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__662->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__662->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__662->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__662->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__662->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__662->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__662->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__662->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__662->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1482[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1482[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1482[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1482[30] = {
   0.1231541,
   0.08664944,
   0.09268934,
   0.1252905,
   0.1266073,
   0.1717973,
   0.1266041,
   0.2350977,
   0.2363519,
   0.2174461,
   0.1655481,
   0.2744132,
   0.1935261,
   0.2115357,
   0.204513,
   0.2377627,
   0.2649863,
   0.505939,
   0.2693807,
   0.3426368,
   0.1493298,
   0.4240584,
   0.1728912,
   0.4655585,
   0.5556012,
   0.2541805,
   0.2807884,
   0.3772211,
   0.5506809,
   0.6291388};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1482,Graph_from_mc_statistical_error_fy1482,Graph_from_mc_statistical_error_fex1482,Graph_from_mc_statistical_error_fey1482);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1482 = new TH1F("Graph_Graph_from_mc_statistical_error1482","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1482->SetMinimum(0.2450334);
   Graph_Graph_from_mc_statistical_error1482->SetMaximum(1.754967);
   Graph_Graph_from_mc_statistical_error1482->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1482->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1482->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1482);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}
