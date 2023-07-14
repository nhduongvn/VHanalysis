void H_dR_tags_17()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Fri Jul 14 13:37:57 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(0,0,1,1);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-352.5715,6.525,352228.9);
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
   st->SetMaximum(301876.9);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(0.01);
   st_stack_22->SetMaximum(316970.8);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetLabelSize(0.035);
   st_stack_22->GetXaxis()->SetTitleSize(0.035);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetLabelSize(0.05);
   st_stack_22->GetYaxis()->SetTitleSize(0.057);
   st_stack_22->GetYaxis()->SetTitleOffset(1.2);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetLabelSize(0.035);
   st_stack_22->GetZaxis()->SetTitleSize(0.035);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,44.80413);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,72051.43);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,70036.18);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,55488.87);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,49818.39);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,46033.74);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,47715.54);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,45538.93);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,55070);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,62541.99);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,64337.73);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,72392.69);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,76936.38);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,97820.77);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,113161.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,85829);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,81535.42);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,71845.62);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,70316.24);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,49578.99);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,62666.05);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,45321);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,42640.27);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,22686.68);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,18968.34);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,16272.24);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,16581.53);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,12959.52);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(30,9975.61);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(31,8944.179);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,32.6375);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,2808.064);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,3139.378);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,2825.065);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,2660.469);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,2423.606);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,2496.738);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,2364.988);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,3187.956);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,3646.854);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,3614.827);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,3764.892);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,3325.381);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,4687.788);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,18184.35);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,3711.639);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,3672.875);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,2925.717);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,4352.856);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,2403.479);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,13973.15);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,10785.38);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,15041.31);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,1839.347);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,1587.207);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,1458.034);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,1966.429);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,1288.405);
   VbbHcc_tags_H_dR_stack_1->SetBinError(30,1152.389);
   VbbHcc_tags_H_dR_stack_1->SetBinError(31,1086.467);
   VbbHcc_tags_H_dR_stack_1->SetEntries(158509);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,0.3448584);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,660.1438);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,870.1732);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,796.6385);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,719.6043);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,605.1918);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,549.3175);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,561.425);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,602.387);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,658.7216);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,735.1786);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,851.887);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,915.8043);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,1002.29);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,1060.074);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,1010.076);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,938.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,864.421);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,720.544);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,613.7644);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,527.4178);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,411.1441);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,315.3983);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,268.6808);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,221.7129);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,194.1837);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,159.7536);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,138.0122);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(30,100.1778);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(31,79.83202);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,0.1411734);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,12.53963);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,14.12129);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,13.16838);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,12.16476);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,11.14388);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,10.72548);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,10.81972);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,11.18841);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,11.57751);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,12.27169);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,13.13068);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,13.4431);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,14.0004);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,14.23825);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,13.85542);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,13.27069);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,12.88738);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,11.55006);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,10.73932);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,9.958921);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,8.811708);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,7.509412);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,7.060736);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,6.526123);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,6.177889);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,5.730204);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,5.279288);
   VbbHcc_tags_H_dR_stack_2->SetBinError(30,4.512986);
   VbbHcc_tags_H_dR_stack_2->SetBinError(31,3.806272);
   VbbHcc_tags_H_dR_stack_2->SetEntries(208682);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,6.851713);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,7928.618);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,13236.05);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,14454.6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,14070.71);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,12203.27);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,10937.27);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,10784);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,11365.14);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,12525.31);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,14111.82);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,15950.75);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,17799.57);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,19477.72);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,20405.05);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,19525.28);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,18159.29);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,16111.61);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,13725.01);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,11359.37);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,9138.739);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,7230.323);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,5717.564);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,4619.133);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,3893.409);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,3347.964);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,2757.121);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,2163.793);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(30,1372.153);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(31,1224.173);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,0.7163256);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,24.59514);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,31.76115);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,33.22835);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,32.79867);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,30.55314);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,28.90263);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,28.71895);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,29.51065);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,31.02416);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,32.95502);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,35.07295);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,37.11314);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,38.85834);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,39.80607);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,38.98942);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,37.61666);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,35.42132);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,32.61131);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,29.6113);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,26.51648);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,23.52363);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,20.88078);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,18.75211);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,17.18377);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,15.91299);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,14.43723);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,12.7746);
   VbbHcc_tags_H_dR_stack_3->SetBinError(30,10.15971);
   VbbHcc_tags_H_dR_stack_3->SetBinError(31,9.530877);
   VbbHcc_tags_H_dR_stack_3->SetEntries(4592799);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(2,0.3353533);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,518.3462);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,578.3311);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,512.0997);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,499.9425);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,459.1287);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,436.387);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,441.4865);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,448.8536);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,445.8835);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,503.321);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,612.6558);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,648.1619);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,722.2409);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,755.9719);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,680.6299);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,678.8771);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,610.8883);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,535.7511);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,444.4453);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,343.9868);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,289.8547);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,249.6765);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,198.8095);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,155.4416);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,143.354);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,114.2844);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,93.94564);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(30,68.29057);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(31,67.94559);
   VbbHcc_tags_H_dR_stack_4->SetBinError(2,0.3353533);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,13.76752);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,13.712);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,13.33991);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,17.61852);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,16.53721);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,16.06575);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,15.77877);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,17.48892);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,12.86666);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,15.21516);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,19.00902);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,17.92921);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,19.34079);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,18.76543);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,14.84148);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,18.1005);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,16.68885);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,16.4761);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,14.63137);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,12.64661);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,12.23655);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,12.14883);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,10.26544);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,8.936495);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,8.788356);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,7.646877);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,4.616405);
   VbbHcc_tags_H_dR_stack_4->SetBinError(30,5.767097);
   VbbHcc_tags_H_dR_stack_4->SetBinError(31,5.858959);
   VbbHcc_tags_H_dR_stack_4->SetEntries(91213);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(2,0.07302196);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,345.3308);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,423.6633);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,346.0648);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,332.0825);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,260.6875);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,292.783);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,255.7101);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,258.4139);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,262.1831);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,248.1889);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,337.5976);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,347.0135);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,356.6233);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,441.5379);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,372.9629);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,335.6683);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,289.6824);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,292.0436);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,228.5195);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,201.8539);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,153.9782);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,137.5125);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,125.5359);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,81.40643);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,82.86593);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,71.20844);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,60.28489);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(30,50.30454);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(31,26.78247);
   VbbHcc_tags_H_dR_stack_5->SetBinError(2,0.05439093);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,15.45802);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,23.28388);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,21.62162);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,27.14924);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,18.48762);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,23.79909);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,17.52826);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,18.41257);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,17.67896);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,16.8055);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,22.50518);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,23.29276);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,20.22514);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,28.47621);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,21.85205);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,17.84439);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,15.79121);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,23.51204);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,14.70404);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,15.38676);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,12.05753);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,14.45538);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,15.25485);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,6.466724);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,11.88603);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,9.39374);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,6.146166);
   VbbHcc_tags_H_dR_stack_5->SetBinError(30,10.08919);
   VbbHcc_tags_H_dR_stack_5->SetBinError(31,3.525504);
   VbbHcc_tags_H_dR_stack_5->SetEntries(43154);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(3,2.774708);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(4,2.892005);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,2.538584);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(6,1.825212);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(7,2.420949);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(8,1.613331);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(9,0.4911802);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(10,1.875977);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(11,1.277986);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(12,1.182365);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(13,1.835709);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(14,1.618864);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(15,3.054562);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(16,2.128857);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(17,2.092595);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,2.278247);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(19,1.481334);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(20,1.683762);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(21,0.6741903);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(22,1.032288);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(23,1.322204);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(24,0.5927784);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(25,1.485314);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(26,0.4049614);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(27,0.6709972);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(28,0.6814846);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(29,0.1589286);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(30,0.5705853);
   VbbHcc_tags_H_dR_stack_6->SetBinError(3,0.7863948);
   VbbHcc_tags_H_dR_stack_6->SetBinError(4,0.8100093);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,0.7496375);
   VbbHcc_tags_H_dR_stack_6->SetBinError(6,0.6490786);
   VbbHcc_tags_H_dR_stack_6->SetBinError(7,0.7705179);
   VbbHcc_tags_H_dR_stack_6->SetBinError(8,0.6138723);
   VbbHcc_tags_H_dR_stack_6->SetBinError(9,0.3475894);
   VbbHcc_tags_H_dR_stack_6->SetBinError(10,0.6757121);
   VbbHcc_tags_H_dR_stack_6->SetBinError(11,0.5173941);
   VbbHcc_tags_H_dR_stack_6->SetBinError(12,0.5317458);
   VbbHcc_tags_H_dR_stack_6->SetBinError(13,0.6673441);
   VbbHcc_tags_H_dR_stack_6->SetBinError(14,0.6269248);
   VbbHcc_tags_H_dR_stack_6->SetBinError(15,0.8288424);
   VbbHcc_tags_H_dR_stack_6->SetBinError(16,0.6763145);
   VbbHcc_tags_H_dR_stack_6->SetBinError(17,0.7045527);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,0.7260532);
   VbbHcc_tags_H_dR_stack_6->SetBinError(19,0.5658188);
   VbbHcc_tags_H_dR_stack_6->SetBinError(20,0.6134203);
   VbbHcc_tags_H_dR_stack_6->SetBinError(21,0.3953587);
   VbbHcc_tags_H_dR_stack_6->SetBinError(22,0.4644897);
   VbbHcc_tags_H_dR_stack_6->SetBinError(23,0.5114491);
   VbbHcc_tags_H_dR_stack_6->SetBinError(24,0.3448474);
   VbbHcc_tags_H_dR_stack_6->SetBinError(25,0.5710034);
   VbbHcc_tags_H_dR_stack_6->SetBinError(26,0.2965335);
   VbbHcc_tags_H_dR_stack_6->SetBinError(27,0.3937825);
   VbbHcc_tags_H_dR_stack_6->SetBinError(28,0.4000029);
   VbbHcc_tags_H_dR_stack_6->SetBinError(29,0.1589286);
   VbbHcc_tags_H_dR_stack_6->SetBinError(30,0.3618826);
   VbbHcc_tags_H_dR_stack_6->SetEntries(198);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,5.320247);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,10.94567);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,6.44472);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(6,4.153181);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,2.278936);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(8,2.698951);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(9,4.423886);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,2.425719);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(11,2.753998);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,4.394572);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,3.323959);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,3.702093);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,5.783311);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,6.468529);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,6.176572);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,4.775864);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,3.689712);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,2.702373);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,3.444902);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(22,1.537543);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(23,2.530188);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,0.971039);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(25,0.9036303);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(26,0.9049744);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(27,0.9456701);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(28,1.353524);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(29,1.013608);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,0.6504913);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,0.9268973);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,1.369233);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,1.048094);
   VbbHcc_tags_H_dR_stack_7->SetBinError(6,0.8355283);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.6266172);
   VbbHcc_tags_H_dR_stack_7->SetBinError(8,0.6810779);
   VbbHcc_tags_H_dR_stack_7->SetBinError(9,0.8609326);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.634155);
   VbbHcc_tags_H_dR_stack_7->SetBinError(11,0.6865655);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.854601);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.7417439);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,0.7807901);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,0.9780964);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,1.051496);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,1.027133);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.9158754);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.7949332);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.6839704);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,0.8171171);
   VbbHcc_tags_H_dR_stack_7->SetBinError(22,0.5024663);
   VbbHcc_tags_H_dR_stack_7->SetBinError(23,0.6302107);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.4056791);
   VbbHcc_tags_H_dR_stack_7->SetBinError(25,0.3740523);
   VbbHcc_tags_H_dR_stack_7->SetBinError(26,0.4064288);
   VbbHcc_tags_H_dR_stack_7->SetBinError(27,0.3962721);
   VbbHcc_tags_H_dR_stack_7->SetBinError(28,0.4827209);
   VbbHcc_tags_H_dR_stack_7->SetBinError(29,0.4220234);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.3301753);
   VbbHcc_tags_H_dR_stack_7->SetEntries(598);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,5.68134);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,8.240333);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,11.00038);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,4.394585);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,3.150663);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,2.187595);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,2.615384);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,2.342514);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,3.225431);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,3.426622);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,3.461291);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,4.005255);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,4.819303);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,5.87612);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,3.604167);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,3.943851);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,2.860173);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,2.599921);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,2.775348);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,2.810953);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,1.659735);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,0.8867862);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(25,0.8185007);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,0.6666917);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,1.30047);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,1.650782);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(29,1.696926);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(30,1.268079);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(31,0.4382236);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,1.113079);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,1.339834);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,1.566916);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,0.9729458);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,0.8478507);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,0.6826332);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,0.792807);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,0.6667234);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,0.8401645);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,0.8911975);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,0.9007007);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,0.9038106);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,1.023046);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,1.134061);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,0.88872);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,0.9285868);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,0.7710475);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,0.7608723);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,0.7801227);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,0.7636062);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,0.5904317);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.444032);
   VbbHcc_tags_H_dR_stack_8->SetBinError(25,0.4108275);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.3855034);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.5358683);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.5888734);
   VbbHcc_tags_H_dR_stack_8->SetBinError(29,0.6449863);
   VbbHcc_tags_H_dR_stack_8->SetBinError(30,0.5264066);
   VbbHcc_tags_H_dR_stack_8->SetBinError(31,0.3108626);
   VbbHcc_tags_H_dR_stack_8->SetEntries(445);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,4.318699);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,6.238516);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,5.556074);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,3.860084);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,2.323391);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,1.629342);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,1.538045);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,1.574081);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,1.825539);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,2.168285);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,2.591927);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,2.820357);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,3.313018);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,3.356369);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,3.285373);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,2.808134);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,2.352702);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,1.873678);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,1.550258);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,1.152368);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,0.863111);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,0.7821892);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.645394);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.5939174);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.7271955);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.7762721);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.6494324);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(30,0.3803056);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(31,0.2745547);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.09182369);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.1095328);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.1037027);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.08643573);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.0666797);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.05536753);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.05397595);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.05372563);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.05871805);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.06382663);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.06982107);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.07308397);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.07926787);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.08014112);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.07900472);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.07292836);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.06663784);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.05928663);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.05466699);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.04682794);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.04000317);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.03789647);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.03475845);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.03357026);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.03708534);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.03861024);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.0350486);
   VbbHcc_tags_H_dR_stack_9->SetBinError(30,0.02729832);
   VbbHcc_tags_H_dR_stack_9->SetBinError(31,0.02270943);
   VbbHcc_tags_H_dR_stack_9->SetEntries(35311);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(2,0.0005007782);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,2.503718);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,4.086163);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,4.159607);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,3.618241);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,2.515663);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,1.776758);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,1.621056);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,1.648687);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,1.792251);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,2.036532);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,2.322479);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,2.641768);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,2.849173);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,2.944153);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,2.769106);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,2.602876);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,2.223664);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,1.917049);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,1.565575);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,1.231795);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,1.026327);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.8250365);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.6862012);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.6637725);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.6689798);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.5746766);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.4991769);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(30,0.3105593);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(31,0.2103202);
   VbbHcc_tags_H_dR_stack_10->SetBinError(2,0.0005007782);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.03333045);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.04260978);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.0430587);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.04016031);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.03346064);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.02806818);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.02675676);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.0270196);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.0281618);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.02997321);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.03205495);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.03416875);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.03550547);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.03607163);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.03501421);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.03389956);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.03132134);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.02907316);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.02626589);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.02327104);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.02124571);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.01905927);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.01741286);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.01711696);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.01721359);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.01593647);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.01488736);
   VbbHcc_tags_H_dR_stack_10->SetBinError(30,0.01171767);
   VbbHcc_tags_H_dR_stack_10->SetBinError(31,0.009623775);
   VbbHcc_tags_H_dR_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.05440426);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.1432361);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.1893295);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.227302);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.177567);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.1226853);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.05441048);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.05758424);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.05519433);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.0624358);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.05141096);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.08792445);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.06739103);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.07525051);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.06674659);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.05271741);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.06570743);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.03263968);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.02353836);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.01817099);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.0300578);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.02182393);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.02157695);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.03021258);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(27,0.02458572);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(28,0.03677932);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(29,0.01309397);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(30,0.003992481);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(31,0.009092701);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.01027014);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.01680402);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.01917181);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.02097191);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.01832485);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.01479514);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.009897641);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.01052008);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.009861727);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.01085336);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.009809452);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.01288792);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.01111881);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.01168833);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.01119304);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.009933935);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.01107866);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.007586161);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.006647456);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.005396356);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.007179745);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.006155837);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.006345394);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.007393256);
   VbbHcc_tags_H_dR_stack_11->SetBinError(27,0.006686487);
   VbbHcc_tags_H_dR_stack_11->SetBinError(28,0.008230348);
   VbbHcc_tags_H_dR_stack_11->SetBinError(29,0.005058873);
   VbbHcc_tags_H_dR_stack_11->SetBinError(30,0.002721308);
   VbbHcc_tags_H_dR_stack_11->SetBinError(31,0.003797126);
   VbbHcc_tags_H_dR_stack_11->SetEntries(1088);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,0.02410003);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,0.04908979);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,0.08158137);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,0.09659478);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,0.09031765);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,0.06395893);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,0.04102264);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,0.03332687);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,0.02903501);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,0.03101138);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,0.03217485);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,0.03019836);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,0.03810136);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,0.03483865);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,0.03029081);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,0.02449203);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,0.02685019);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,0.02308689);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,0.01749538);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,0.01675491);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,0.01568133);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(24,0.01621912);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,0.02090135);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,0.01738041);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,0.02045872);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,0.01080444);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(29,0.007050009);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(30,0.002798453);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(31,0.002059667);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,0.002438083);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,0.003425596);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,0.004419386);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,0.00479738);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,0.00468243);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,0.003922028);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,0.003151793);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,0.002818549);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,0.00265814);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,0.002735805);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,0.002777696);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,0.002653748);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,0.003029067);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,0.00287995);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,0.002707306);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,0.002431466);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,0.002541557);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,0.002349237);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,0.002001419);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,0.001995937);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,0.001877975);
   VbbHcc_tags_H_dR_stack_12->SetBinError(24,0.001979219);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,0.002235539);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,0.00207738);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,0.002220673);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,0.001611447);
   VbbHcc_tags_H_dR_stack_12->SetBinError(29,0.001274966);
   VbbHcc_tags_H_dR_stack_12->SetBinError(30,0.0008294579);
   VbbHcc_tags_H_dR_stack_12->SetBinError(31,0.0007330971);
   VbbHcc_tags_H_dR_stack_12->SetEntries(4044);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__43 = new TH1D("VbbHcc_tags_H_dR__43","",30,0,6);
   VbbHcc_tags_H_dR__43->SetBinContent(2,21);
   VbbHcc_tags_H_dR__43->SetBinContent(3,20592);
   VbbHcc_tags_H_dR__43->SetBinContent(4,23158);
   VbbHcc_tags_H_dR__43->SetBinContent(5,18817);
   VbbHcc_tags_H_dR__43->SetBinContent(6,17916);
   VbbHcc_tags_H_dR__43->SetBinContent(7,17082);
   VbbHcc_tags_H_dR__43->SetBinContent(8,17313);
   VbbHcc_tags_H_dR__43->SetBinContent(9,17938);
   VbbHcc_tags_H_dR__43->SetBinContent(10,19142);
   VbbHcc_tags_H_dR__43->SetBinContent(11,20238);
   VbbHcc_tags_H_dR__43->SetBinContent(12,22351);
   VbbHcc_tags_H_dR__43->SetBinContent(13,24784);
   VbbHcc_tags_H_dR__43->SetBinContent(14,26920);
   VbbHcc_tags_H_dR__43->SetBinContent(15,29442);
   VbbHcc_tags_H_dR__43->SetBinContent(16,31602);
   VbbHcc_tags_H_dR__43->SetBinContent(17,29509);
   VbbHcc_tags_H_dR__43->SetBinContent(18,27272);
   VbbHcc_tags_H_dR__43->SetBinContent(19,24997);
   VbbHcc_tags_H_dR__43->SetBinContent(20,21886);
   VbbHcc_tags_H_dR__43->SetBinContent(21,19091);
   VbbHcc_tags_H_dR__43->SetBinContent(22,15850);
   VbbHcc_tags_H_dR__43->SetBinContent(23,12997);
   VbbHcc_tags_H_dR__43->SetBinContent(24,10706);
   VbbHcc_tags_H_dR__43->SetBinContent(25,8787);
   VbbHcc_tags_H_dR__43->SetBinContent(26,7177);
   VbbHcc_tags_H_dR__43->SetBinContent(27,5750);
   VbbHcc_tags_H_dR__43->SetBinContent(28,5016);
   VbbHcc_tags_H_dR__43->SetBinContent(29,4512);
   VbbHcc_tags_H_dR__43->SetBinContent(30,3188);
   VbbHcc_tags_H_dR__43->SetBinContent(31,3116);
   VbbHcc_tags_H_dR__43->SetEntries(507170);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__43->SetLineColor(ci);
   VbbHcc_tags_H_dR__43->SetLineWidth(2);
   VbbHcc_tags_H_dR__43->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__43->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__43->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR__43->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__43->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__43->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__43->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__43->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__43->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__43->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__43->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__43->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__43->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__43->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__43->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__43->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__43->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1043[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1043[30] = {
   0,
   52.40958,
   81524.55,
   85176.99,
   71628.24,
   65458.9,
   59574.97,
   59941.39,
   57592.33,
   67754.75,
   76445.05,
   79949.54,
   90159.2,
   96661.83,
   119399.6,
   135844.6,
   107436,
   101664.2,
   89734.93,
   85600.42,
   62235.15,
   72885.84,
   53413.74,
   49064.52,
   27903.42,
   23323.59,
   20044.97,
   19688.98,
   15419.59,
   11569.72};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1043[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1043[30] = {
   0,
   32.64743,
   2808.276,
   3139.687,
   2825.406,
   2660.896,
   2423.951,
   2497.094,
   2365.305,
   3188.213,
   3647.07,
   3615.069,
   3765.194,
   3325.746,
   4688.053,
   18184.43,
   3711.964,
   3673.18,
   2926.05,
   4353.089,
   2403.775,
   13973.19,
   10785.42,
   15041.34,
   1839.548,
   1587.352,
   1458.209,
   1966.528,
   1288.503,
   1152.501};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_fx1043,Graph_from_VbbHcc_tags_H_dR_fy1043,Graph_from_VbbHcc_tags_H_dR_fex1043,Graph_from_VbbHcc_tags_H_dR_fey1043);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1043 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1043","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetMaximum(169432);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1043);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

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
   H_dR_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__44 = new TH1D("data_mc_ratio__44","",30,0,6);
   data_mc_ratio__44->SetBinContent(2,0.4006901);
   data_mc_ratio__44->SetBinContent(3,0.2525865);
   data_mc_ratio__44->SetBinContent(4,0.2718809);
   data_mc_ratio__44->SetBinContent(5,0.2627036);
   data_mc_ratio__44->SetBinContent(6,0.2736984);
   data_mc_ratio__44->SetBinContent(7,0.2867312);
   data_mc_ratio__44->SetBinContent(8,0.2888321);
   data_mc_ratio__44->SetBinContent(9,0.3114651);
   data_mc_ratio__44->SetBinContent(10,0.2825189);
   data_mc_ratio__44->SetBinContent(11,0.2647392);
   data_mc_ratio__44->SetBinContent(12,0.2795638);
   data_mc_ratio__44->SetBinContent(13,0.2748915);
   data_mc_ratio__44->SetBinContent(14,0.2784967);
   data_mc_ratio__44->SetBinContent(15,0.2465838);
   data_mc_ratio__44->SetBinContent(16,0.2326334);
   data_mc_ratio__44->SetBinContent(17,0.2746659);
   data_mc_ratio__44->SetBinContent(18,0.2682556);
   data_mc_ratio__44->SetBinContent(19,0.2785649);
   data_mc_ratio__44->SetBinContent(20,0.2556763);
   data_mc_ratio__44->SetBinContent(21,0.3067559);
   data_mc_ratio__44->SetBinContent(22,0.2174634);
   data_mc_ratio__44->SetBinContent(23,0.2433269);
   data_mc_ratio__44->SetBinContent(24,0.2182025);
   data_mc_ratio__44->SetBinContent(25,0.3149077);
   data_mc_ratio__44->SetBinContent(26,0.3077142);
   data_mc_ratio__44->SetBinContent(27,0.2868551);
   data_mc_ratio__44->SetBinContent(28,0.2547618);
   data_mc_ratio__44->SetBinContent(29,0.2926148);
   data_mc_ratio__44->SetBinContent(30,0.2755468);
   data_mc_ratio__44->SetBinContent(31,0.3012419);
   data_mc_ratio__44->SetBinError(2,0.08743775);
   data_mc_ratio__44->SetBinError(3,0.001760195);
   data_mc_ratio__44->SetBinError(4,0.001786604);
   data_mc_ratio__44->SetBinError(5,0.001915098);
   data_mc_ratio__44->SetBinError(6,0.002044805);
   data_mc_ratio__44->SetBinError(7,0.002193843);
   data_mc_ratio__44->SetBinError(8,0.002195125);
   data_mc_ratio__44->SetBinError(9,0.002325532);
   data_mc_ratio__44->SetBinError(10,0.002041991);
   data_mc_ratio__44->SetBinError(11,0.001860949);
   data_mc_ratio__44->SetBinError(12,0.001869961);
   data_mc_ratio__44->SetBinError(13,0.001746126);
   data_mc_ratio__44->SetBinError(14,0.001697393);
   data_mc_ratio__44->SetBinError(15,0.00143708);
   data_mc_ratio__44->SetBinError(16,0.001308624);
   data_mc_ratio__44->SetBinError(17,0.001598923);
   data_mc_ratio__44->SetBinError(18,0.00162439);
   data_mc_ratio__44->SetBinError(19,0.001761905);
   data_mc_ratio__44->SetBinError(20,0.001728253);
   data_mc_ratio__44->SetBinError(21,0.002220131);
   data_mc_ratio__44->SetBinError(22,0.001727315);
   data_mc_ratio__44->SetBinError(23,0.002134364);
   data_mc_ratio__44->SetBinError(24,0.002108852);
   data_mc_ratio__44->SetBinError(25,0.003359409);
   data_mc_ratio__44->SetBinError(26,0.003632253);
   data_mc_ratio__44->SetBinError(27,0.003782932);
   data_mc_ratio__44->SetBinError(28,0.003597124);
   data_mc_ratio__44->SetBinError(29,0.004356239);
   data_mc_ratio__44->SetBinError(30,0.004880184);
   data_mc_ratio__44->SetBinError(31,0.03209989);
   data_mc_ratio__44->SetMinimum(0.4);
   data_mc_ratio__44->SetMaximum(1.6);
   data_mc_ratio__44->SetEntries(751.2655);
   data_mc_ratio__44->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__44->SetLineColor(ci);
   data_mc_ratio__44->SetLineWidth(2);
   data_mc_ratio__44->SetMarkerStyle(20);
   data_mc_ratio__44->SetMarkerSize(1.2);
   data_mc_ratio__44->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__44->GetXaxis()->SetRange(1,31);
   data_mc_ratio__44->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__44->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__44->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__44->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__44->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__44->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__44->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__44->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__44->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__44->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__44->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__44->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__44->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__44->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__44->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__44->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__44->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1044[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1044[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1044[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1044[30] = {
   0,
   0.6229288,
   0.034447,
   0.03686074,
   0.03944542,
   0.04064988,
   0.04068741,
   0.04165892,
   0.04106979,
   0.0470552,
   0.04770839,
   0.04521688,
   0.04176162,
   0.03440599,
   0.03926357,
   0.133862,
   0.03455047,
   0.0361305,
   0.03260771,
   0.05085359,
   0.03862408,
   0.1917134,
   0.2019222,
   0.3065625,
   0.06592556,
   0.06805779,
   0.07274691,
   0.0998796,
   0.0835627,
   0.09961355};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1044,Graph_from_mc_statistical_error_fy1044,Graph_from_mc_statistical_error_fex1044,Graph_from_mc_statistical_error_fey1044);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1044 = new TH1F("Graph_Graph_from_mc_statistical_error1044","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1044->SetMinimum(0.2524855);
   Graph_Graph_from_mc_statistical_error1044->SetMaximum(1.747515);
   Graph_Graph_from_mc_statistical_error1044->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1044->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1044);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}
