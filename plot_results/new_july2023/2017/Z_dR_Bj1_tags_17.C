void Z_dR_Bj1_tags_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_17/Z_dR_Bj1_tags_17
//=========  (Fri Jul 14 13:38:02 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_17 = new TCanvas("Z_dR_Bj1_tags_17", "Z_dR_Bj1_tags_17",0,0,600,600);
   Z_dR_Bj1_tags_17->SetHighLightColor(2);
   Z_dR_Bj1_tags_17->Range(0,0,1,1);
   Z_dR_Bj1_tags_17->SetFillColor(0);
   Z_dR_Bj1_tags_17->SetFillStyle(4000);
   Z_dR_Bj1_tags_17->SetBorderMode(0);
   Z_dR_Bj1_tags_17->SetBorderSize(2);
   Z_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-749.5163,6.314516,748776.8);
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
   st->SetMaximum(641737.3);
   
   TH1F *st_stack_54 = new TH1F("st_stack_54","",30,0,6);
   st_stack_54->SetMinimum(0.01);
   st_stack_54->SetMaximum(673824.1);
   st_stack_54->SetDirectory(0);
   st_stack_54->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_54->SetLineColor(ci);
   st_stack_54->GetXaxis()->SetRange(1,30);
   st_stack_54->GetXaxis()->SetLabelFont(42);
   st_stack_54->GetXaxis()->SetLabelSize(0.035);
   st_stack_54->GetXaxis()->SetTitleSize(0.035);
   st_stack_54->GetXaxis()->SetTitleFont(42);
   st_stack_54->GetYaxis()->SetTitle("Events/0.2");
   st_stack_54->GetYaxis()->SetLabelFont(42);
   st_stack_54->GetYaxis()->SetLabelSize(0.05);
   st_stack_54->GetYaxis()->SetTitleSize(0.057);
   st_stack_54->GetYaxis()->SetTitleOffset(1.2);
   st_stack_54->GetYaxis()->SetTitleFont(42);
   st_stack_54->GetZaxis()->SetLabelFont(42);
   st_stack_54->GetZaxis()->SetLabelSize(0.035);
   st_stack_54->GetZaxis()->SetTitleSize(0.035);
   st_stack_54->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_54);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,70867.26);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,262605.6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,213062.4);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,150933);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,114462.2);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,82450.03);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,67556.45);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,58490.56);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,49185.31);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,48453.93);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,50848.58);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,34879.92);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,58916.88);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,30846.17);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,26499.86);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,22275.85);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,17216.27);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,17325.18);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,11645.94);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,25312.76);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,11500.82);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,8071.69);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,5538.281);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,5446.656);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,3635.034);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,2483.868);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,2970.339);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,1170.922);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,786.1598);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,464.4367);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,539.7447);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,1853.414);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,5336.208);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,5053.346);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,4964.068);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,4582.541);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,3801.016);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,3376.543);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,2888.581);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,2901.871);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,3158.043);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,14660.46);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,2737.721);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,20523.15);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,2242.069);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,2363.902);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,1947.329);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,1430.806);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,2114.201);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,1018.838);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,14477.04);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,1647.248);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,934.0717);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,694.4848);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,735.7785);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,580.4275);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,383.2956);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,623.876);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,267.6552);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,260.5461);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,252.9243);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,255.843);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(158509);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,302.433);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,1611.706);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,2096.164);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,1989.549);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,1696.433);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,1422.184);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,1164.118);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,976.565);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,862.9083);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,749.8692);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,673.1882);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,600.5229);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,537.9368);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,472.1491);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,406.4115);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,359.3379);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,296.4776);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,236.5959);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,185.2813);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,157.3035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,125.6775);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,96.71663);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,80.6973);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,58.80851);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,41.70486);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,29.68935);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,19.42041);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,13.79381);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,8.179088);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(30,6.685848);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,12.40763);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,7.265648);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,16.05687);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,18.13047);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,17.63961);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,16.2057);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,14.93713);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,13.48751);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,12.35907);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,11.62386);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,10.75959);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,10.23452);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,9.645183);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,9.212041);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,8.666793);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,7.94799);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,7.581827);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,6.884131);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,6.108601);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,5.429228);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,5.058516);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,4.532304);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,3.997296);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,3.721033);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,3.226247);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,2.653913);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,2.284755);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,1.788054);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,1.573034);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,1.189127);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(30,1.13222);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,1.51441);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(208682);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(1,3049.537);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(2,21172.1);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(3,34077.63);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(4,35163.65);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(5,30806);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(6,25052.15);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(7,20198.8);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(8,16899.38);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(9,14697.79);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(10,13191.59);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(11,12178.31);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(12,11143.65);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(13,9966.748);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(14,8637.339);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(15,7368.448);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(16,6188.271);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(17,4938.078);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(18,3919.903);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(19,3086.68);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(20,2394.656);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(21,1836.522);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(22,1369.5);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(23,1021.31);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(24,742.2801);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(25,507.2657);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(26,349.6114);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(27,230.6254);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(28,144.2979);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(29,94.35699);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(30,58.30044);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(31,102.0555);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(1,14.16464);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(2,37.2907);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(3,47.41543);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(4,48.22284);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(5,45.13103);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(6,40.69546);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(7,36.53419);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(8,33.40728);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(9,31.17052);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(10,29.53897);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(11,28.39322);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(12,27.18374);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(13,25.70518);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(14,23.93134);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(15,22.09135);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(16,20.24048);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(17,18.06873);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(18,16.08385);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(19,14.26678);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(20,12.5703);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(21,11.00026);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(22,9.497775);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(23,8.19269);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(24,6.981379);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(25,5.760822);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(26,4.786409);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(27,3.881715);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(28,3.069944);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(29,2.472397);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(30,1.951628);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(31,2.577905);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetEntries(4592799);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(1,632.9962);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(2,2089.412);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(3,2121.903);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(4,1413.728);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(5,866.4031);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(6,627.7749);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(7,493.3511);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(8,388.1282);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(9,346.4229);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(10,291.1495);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(11,255.4483);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(12,261.9575);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(13,213.3585);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(14,206.5616);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(15,173.1552);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(16,158.4189);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(17,120.1491);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(18,99.8364);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(19,92.38415);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(20,86.66472);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(21,70.60876);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(22,59.18841);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(23,45.86126);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(24,33.71382);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(25,30.96955);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(26,18.49924);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(27,18.13703);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(28,9.259767);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(29,9.863589);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(30,1.960873);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(31,8.067245);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(1,8.211588);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(2,25.74949);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(3,28.91881);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(4,26.06924);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(5,20.62415);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(6,18.91666);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(7,15.57088);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(8,13.82737);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(9,14.44312);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(10,10.96245);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(11,10.64781);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(12,12.25107);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(13,9.85947);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(14,9.574525);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(15,8.728601);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(16,8.619212);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(17,7.171117);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(18,5.159193);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(19,6.233914);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(20,5.594411);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(21,5.302828);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(22,4.334441);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(23,2.999468);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(24,2.43023);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(25,3.522854);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(26,1.653322);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(27,3.160335);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(28,1.139921);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(29,3.937689);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(30,0.4961355);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(31,2.940396);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetEntries(91213);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(1,405.3788);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(2,1240.506);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(3,970.709);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(4,641.1825);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(5,523.6098);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(6,375.8109);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(7,283.7784);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(8,275.0785);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(9,210.6544);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(10,213.5766);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(11,190.6131);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(12,150.0193);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(13,157.6688);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(14,171.2391);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(15,131.6696);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(16,104.5902);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(17,97.60168);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(18,57.72067);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(19,58.37387);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(20,49.326);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(21,51.98188);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(22,40.88014);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(23,22.46666);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(24,28.55895);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(25,16.53557);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(26,13.69545);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(27,10.12817);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(28,5.310439);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(29,2.022095);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(30,3.609411);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(31,1.116089);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(1,15.54575);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(2,34.22328);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(3,28.9484);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(4,27.25614);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(5,28.39518);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(6,20.20879);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(7,15.41735);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(8,22.41309);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(9,15.38959);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(10,19.83073);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(11,18.56338);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(12,10.97051);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(13,16.99045);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(14,20.38315);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(15,12.65402);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(16,11.64929);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(17,14.50526);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(18,5.293129);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(19,5.631318);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(20,7.932087);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(21,8.570094);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(22,7.780617);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(23,3.133089);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(24,3.964979);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(25,2.189593);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(26,2.378756);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(27,1.918966);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(28,1.387587);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(29,0.3874687);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(30,1.681131);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(31,0.3225051);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetEntries(43154);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(1,2.419382);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(2,5.846839);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(3,5.241994);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(4,5.645224);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(5,2.016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(6,2.620997);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(7,4.032303);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(8,2.016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(9,1.612921);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(10,1.411306);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(11,0.4032303);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(12,2.419382);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(13,1.209691);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(14,0.6048454);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(15,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(17,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(18,0.4032303);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(19,0.4032303);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(20,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(22,0.4032303);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(24,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(26,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(31,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(1,0.6984153);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(2,1.085731);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(3,1.02804);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(4,1.066847);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(5,0.6375631);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(6,0.7269337);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(7,0.9016503);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(8,0.6375631);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(9,0.5702537);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(10,0.5334235);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(11,0.2851269);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(12,0.6984153);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(13,0.4938542);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(14,0.3492077);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(15,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(17,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(18,0.2851269);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(19,0.2851269);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(20,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(22,0.2851269);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(24,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(26,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(31,0.2016151);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetEntries(198);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(1,6.530987);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(2,20.31863);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(3,21.76996);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(4,10.44958);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(5,6.240721);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(6,2.467262);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(7,2.467262);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(8,2.322129);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(9,2.031863);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(10,0.8707982);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(11,1.306197);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(12,1.306197);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(13,0.5805321);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(14,1.015931);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(15,0.7256652);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(16,1.741596);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(17,0.8707982);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(18,0.5805321);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(19,0.7256652);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(20,0.2902661);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(21,0.7256652);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(22,0.4353991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(23,0.145133);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(24,0.5805321);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(26,0.145133);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(27,0.145133);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(1,0.973582);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(2,1.717237);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(3,1.777509);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(4,1.231495);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(5,0.951701);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(6,0.5983988);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(7,0.5983988);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(8,0.5805321);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(9,0.5430381);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(10,0.3555019);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(11,0.4353991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(12,0.4353991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(13,0.2902661);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(14,0.3839859);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(15,0.3245273);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(16,0.5027556);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(17,0.3555019);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(18,0.2902661);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(19,0.3245273);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(20,0.2052491);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(21,0.3245273);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(22,0.2513778);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(23,0.145133);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(24,0.2902661);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(26,0.145133);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(27,0.145133);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetEntries(598);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(1,6.537057);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(2,18.49053);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(3,16.99635);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(4,8.031242);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(5,6.163511);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(6,5.042873);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(7,2.801596);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(8,1.867731);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(9,1.867731);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(10,2.801596);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(11,1.307411);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(12,2.054504);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(13,1.494185);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(14,1.494185);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(15,1.680958);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(16,0.7470923);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(17,0.5603192);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(18,1.307411);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(20,0.3735461);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(21,0.1867731);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(22,0.7470923);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(23,0.3735461);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(24,0.1867731);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(1,1.104964);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(2,1.858369);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(3,1.781702);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(4,1.224753);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(5,1.07293);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(6,0.9705013);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(7,0.723369);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(8,0.5906283);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(9,0.5906283);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(10,0.723369);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(11,0.4941551);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(12,0.6194562);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(13,0.528274);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(14,0.528274);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(15,0.5603192);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(16,0.3735461);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(17,0.3235004);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(18,0.4941551);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(20,0.264137);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(21,0.1867731);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(22,0.3735461);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(23,0.264137);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(24,0.1867731);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetEntries(445);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(1,2.018896);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(2,8.876682);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(3,10.63231);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(4,8.960668);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(5,5.828957);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(6,3.624322);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(7,2.547039);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(8,1.994669);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(9,1.691027);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(10,1.495598);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(11,1.418073);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(12,1.321166);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(13,1.158039);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(14,0.9981422);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(15,0.8317852);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(16,0.7348782);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(17,0.5475246);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(18,0.4506176);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(19,0.3601711);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(20,0.3472501);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(21,0.2939513);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(22,0.2535733);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(23,0.2115803);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(24,0.1437454);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(25,0.1211338);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(26,0.09044655);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(27,0.04037792);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(28,0.02745699);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(29,0.006460468);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(30,0.001615117);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(31,0.003230234);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(1,0.057103);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(2,0.1197367);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(3,0.1310436);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(4,0.1203018);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(5,0.09702807);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(6,0.0765095);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(7,0.06413865);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(8,0.05675935);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(9,0.05226095);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(10,0.04914841);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(11,0.04785763);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(12,0.04619347);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(13,0.04324775);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(14,0.04015117);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(15,0.03665283);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(16,0.03445162);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(17,0.02973746);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(18,0.02697777);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(19,0.02411884);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(20,0.02368226);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(21,0.02178912);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(22,0.02023736);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(23,0.01848586);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(24,0.01523698);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(25,0.01398732);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(26,0.01208643);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(27,0.008075584);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(28,0.006659297);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(29,0.003230234);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(30,0.001615117);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(31,0.00228412);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetEntries(35311);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(1,2.18715);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(2,8.321535);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(3,9.784748);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(4,7.991493);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(5,5.355718);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(6,3.38832);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(7,2.28127);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(8,1.709501);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(9,1.432117);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(10,1.250096);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(11,1.097099);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(12,0.9859795);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(13,0.9212979);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(14,0.8085198);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(15,0.6642301);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(16,0.5725979);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(17,0.5124772);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(18,0.4490395);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(19,0.4021868);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(20,0.3491147);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(21,0.3105545);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(22,0.2645311);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(23,0.2164345);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(24,0.178289);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(25,0.1451189);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(26,0.08168123);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(27,0.06551083);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(28,0.02902379);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(29,0.01326802);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(30,0.006219383);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(31,0.005390132);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(1,0.03011392);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(2,0.05873943);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(3,0.06369463);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(4,0.05756281);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(5,0.04712343);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(6,0.03748178);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(7,0.03075504);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(8,0.02662335);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(9,0.02436785);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(10,0.02276668);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(11,0.02132804);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(12,0.02021911);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(13,0.01954466);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(14,0.01830937);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(15,0.01659538);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(16,0.01540823);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(17,0.0145769);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(18,0.0136449);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(19,0.01291344);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(20,0.01203129);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(21,0.01134742);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(22,0.01047289);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(23,0.009473082);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(24,0.008597858);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(25,0.007756933);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(26,0.005819547);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(27,0.005211762);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(28,0.003469006);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(29,0.002345476);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(30,0.001605838);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(31,0.001494954);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(1,0.1216793);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(2,0.4187666);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(3,0.3745195);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(4,0.2133339);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(5,0.1311608);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(6,0.06004954);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(7,0.05530879);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(8,0.03476553);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(9,0.03634578);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(10,0.03792603);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(11,0.03002477);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(12,0.03160502);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(13,0.02844452);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(14,0.03002477);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(15,0.01738276);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(16,0.01896301);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(17,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(18,0.009481507);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(19,0.02370377);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(20,0.007901256);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(21,0.006321005);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(22,0.006321005);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(23,0.007901256);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(24,0.006321005);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(26,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(27,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(29,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(1,0.01386665);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(2,0.02572462);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(3,0.02432766);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(4,0.01836086);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(5,0.01439677);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(6,0.009741322);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(7,0.009348892);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(8,0.007412035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(9,0.007578618);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(10,0.007741618);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(11,0.006888155);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(12,0.007067098);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(13,0.006704438);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(14,0.006888155);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(15,0.0052411);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(16,0.005474151);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(17,0.002234813);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(18,0.003870809);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(19,0.006120286);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(20,0.003533549);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(21,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(22,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(23,0.003533549);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(24,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(25,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(26,0.002234813);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(27,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(29,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetEntries(1088);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(1,0.04422);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(2,0.2159099);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(3,0.2020003);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(4,0.1098234);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(5,0.0512786);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(6,0.02781916);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(7,0.02470507);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(8,0.01909972);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(9,0.01889211);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(10,0.01619324);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(11,0.0145324);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(12,0.009965071);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(13,0.01245634);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(14,0.01183352);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(15,0.007889015);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(16,0.006850987);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(17,0.007266198);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(18,0.00477493);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(19,0.007473804);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(20,0.005812958);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(21,0.003529296);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(22,0.004359719);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(23,0.003736902);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(24,0.002906479);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(25,0.002698874);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(26,0.001245634);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(27,0.001038028);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(28,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(29,0.0004152113);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(1,0.003029905);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(2,0.006695081);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(3,0.006475832);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(4,0.00477493);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(5,0.003262779);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(6,0.002403209);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(7,0.00226471);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(8,0.001991283);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(9,0.001980432);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(10,0.001833524);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(11,0.001736954);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(12,0.001438334);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(13,0.001608106);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(14,0.001567388);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(15,0.001279767);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(16,0.001192604);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(17,0.001228212);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(18,0.0009956417);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(19,0.001245634);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(20,0.001098546);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(21,0.00085598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(22,0.0009513686);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(23,0.0008807962);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(24,0.0007767892);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(25,0.0007485328);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(26,0.0005085279);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(27,0.0004642204);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(28,0.0003595835);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(29,0.0002935987);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetEntries(4044);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__107 = new TH1D("VbbHcc_tags_Z_dR_Bj1__107","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(1,24106);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(2,83573);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(3,74855);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(4,54966);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(5,42860);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(6,33757);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(7,27405);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(8,22647);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(9,19337);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(10,16733);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(11,15031);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(12,13820);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(13,12123);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(14,10941);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(15,9700);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(16,8442);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(17,7025);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(18,5906);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(19,4975);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(20,4051);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(21,3395);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(22,2878);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(23,2204);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(24,1844);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(25,1452);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(26,1069);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(27,757);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(28,490);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(29,312);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(30,199);
   VbbHcc_tags_Z_dR_Bj1__107->SetBinContent(31,317);
   VbbHcc_tags_Z_dR_Bj1__107->SetEntries(507170);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1__107->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1__107->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1__107->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1__107->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1__107->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1__107->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__107->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__107->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__107->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__107->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__107->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__107->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__107->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1__107->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__107->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__107->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__107->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__107->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__107->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1107[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1107[30] = {
   75277.46,
   288781.8,
   252393.8,
   190182.5,
   148380.4,
   109945.2,
   89710.71,
   77039.67,
   65311.77,
   62908,
   64151.71,
   47044.21,
   69798,
   40338.42,
   34583.67,
   29090.29,
   22671.28,
   21642.44,
   15070.58,
   28002.29,
   13587.14,
   9640.089,
   6709.575,
   6311.318,
   4231.78,
   2895.887,
   3248.904,
   1343.641,
   900.6033,
   535.0011};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1107[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1107[30] = {
   1853.567,
   5336.535,
   5053.767,
   4964.478,
   4582.927,
   3801.364,
   3376.839,
   2888.921,
   2902.139,
   3158.281,
   14660.51,
   2737.922,
   20523.17,
   2242.327,
   2364.068,
   1947.503,
   1431.029,
   2114.284,
   1018.987,
   14477.05,
   1647.322,
   934.1711,
   694.5567,
   735.8335,
   580.477,
   383.3434,
   623.9016,
   267.6835,
   260.5906,
   252.9404};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1107,Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1107,Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1107,Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1107);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetMinimum(253.8546);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetMaximum(323501.9);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__108 = new TH1D("data_mc_ratio__108","",30,0,6);
   data_mc_ratio__108->SetBinContent(1,0.3202286);
   data_mc_ratio__108->SetBinContent(2,0.2893985);
   data_mc_ratio__108->SetBinContent(3,0.2965802);
   data_mc_ratio__108->SetBinContent(4,0.2890171);
   data_mc_ratio__108->SetBinContent(5,0.2888521);
   data_mc_ratio__108->SetBinContent(6,0.3070348);
   data_mc_ratio__108->SetBinContent(7,0.3054819);
   data_mc_ratio__108->SetBinContent(8,0.2939654);
   data_mc_ratio__108->SetBinContent(9,0.2960722);
   data_mc_ratio__108->SetBinContent(10,0.2659916);
   data_mc_ratio__108->SetBinContent(11,0.234304);
   data_mc_ratio__108->SetBinContent(12,0.2937663);
   data_mc_ratio__108->SetBinContent(13,0.1736869);
   data_mc_ratio__108->SetBinContent(14,0.2712302);
   data_mc_ratio__108->SetBinContent(15,0.2804792);
   data_mc_ratio__108->SetBinContent(16,0.2901999);
   data_mc_ratio__108->SetBinContent(17,0.3098634);
   data_mc_ratio__108->SetBinContent(18,0.2728897);
   data_mc_ratio__108->SetBinContent(19,0.3301133);
   data_mc_ratio__108->SetBinContent(20,0.1446667);
   data_mc_ratio__108->SetBinContent(21,0.2498687);
   data_mc_ratio__108->SetBinContent(22,0.298545);
   data_mc_ratio__108->SetBinContent(23,0.3284858);
   data_mc_ratio__108->SetBinContent(24,0.2921735);
   data_mc_ratio__108->SetBinContent(25,0.343118);
   data_mc_ratio__108->SetBinContent(26,0.3691442);
   data_mc_ratio__108->SetBinContent(27,0.2330017);
   data_mc_ratio__108->SetBinContent(28,0.3646808);
   data_mc_ratio__108->SetBinContent(29,0.3464344);
   data_mc_ratio__108->SetBinContent(30,0.3719619);
   data_mc_ratio__108->SetBinContent(31,0.4776962);
   data_mc_ratio__108->SetBinError(1,0.002062517);
   data_mc_ratio__108->SetBinError(2,0.001001067);
   data_mc_ratio__108->SetBinError(3,0.001084006);
   data_mc_ratio__108->SetBinError(4,0.001232754);
   data_mc_ratio__108->SetBinError(5,0.001395242);
   data_mc_ratio__108->SetBinError(6,0.001671113);
   data_mc_ratio__108->SetBinError(7,0.001845315);
   data_mc_ratio__108->SetBinError(8,0.001953399);
   data_mc_ratio__108->SetBinError(9,0.002129135);
   data_mc_ratio__108->SetBinError(10,0.002056274);
   data_mc_ratio__108->SetBinError(11,0.00191111);
   data_mc_ratio__108->SetBinError(12,0.002498894);
   data_mc_ratio__108->SetBinError(13,0.001577473);
   data_mc_ratio__108->SetBinError(14,0.002593042);
   data_mc_ratio__108->SetBinError(15,0.002847835);
   data_mc_ratio__108->SetBinError(16,0.003158455);
   data_mc_ratio__108->SetBinError(17,0.00369698);
   data_mc_ratio__108->SetBinError(18,0.003550917);
   data_mc_ratio__108->SetBinError(19,0.004680222);
   data_mc_ratio__108->SetBinError(20,0.002272938);
   data_mc_ratio__108->SetBinError(21,0.004288367);
   data_mc_ratio__108->SetBinError(22,0.005564989);
   data_mc_ratio__108->SetBinError(23,0.006996983);
   data_mc_ratio__108->SetBinError(24,0.006803939);
   data_mc_ratio__108->SetBinError(25,0.009004512);
   data_mc_ratio__108->SetBinError(26,0.01129035);
   data_mc_ratio__108->SetBinError(27,0.008468589);
   data_mc_ratio__108->SetBinError(28,0.0164746);
   data_mc_ratio__108->SetBinError(29,0.01961299);
   data_mc_ratio__108->SetBinError(30,0.02636768);
   data_mc_ratio__108->SetBinError(31,0.1861383);
   data_mc_ratio__108->SetMinimum(0.4);
   data_mc_ratio__108->SetMaximum(1.6);
   data_mc_ratio__108->SetEntries(1038.707);
   data_mc_ratio__108->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__108->SetLineColor(ci);
   data_mc_ratio__108->SetLineWidth(2);
   data_mc_ratio__108->SetMarkerStyle(20);
   data_mc_ratio__108->SetMarkerSize(1.2);
   data_mc_ratio__108->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__108->GetXaxis()->SetRange(1,30);
   data_mc_ratio__108->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__108->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__108->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__108->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__108->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__108->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__108->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__108->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__108->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__108->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__108->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__108->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__108->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__108->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__108->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__108->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__108->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1108[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1108[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1108[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1108[30] = {
   0.02462313,
   0.01847947,
   0.02002334,
   0.02610375,
   0.03088633,
   0.03457508,
   0.03764142,
   0.03749913,
   0.04443515,
   0.05020476,
   0.2285287,
   0.05819892,
   0.2940367,
   0.05558786,
   0.06835793,
   0.06694683,
   0.06312077,
   0.09769157,
   0.0676143,
   0.5169953,
   0.1212413,
   0.09690482,
   0.1035172,
   0.1165895,
   0.1371709,
   0.1323751,
   0.1920345,
   0.1992225,
   0.2893512,
   0.4727848};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1108,Graph_from_mc_statistical_error_fy1108,Graph_from_mc_statistical_error_fex1108,Graph_from_mc_statistical_error_fey1108);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1108 = new TH1F("Graph_Graph_from_mc_statistical_error1108","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1108->SetMinimum(0.3796056);
   Graph_Graph_from_mc_statistical_error1108->SetMaximum(1.620394);
   Graph_Graph_from_mc_statistical_error1108->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1108->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1108->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1108);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->SetSelected(Z_dR_Bj1_tags_17);
}
