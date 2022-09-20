void ZMass_VbbHcc_17()
{
//=========Macro generated from canvas: ZMass_VbbHcc_17/ZMass_VbbHcc_17
//=========  (Tue Sep 20 10:39:21 2022) by ROOT version 6.14/09
   TCanvas *ZMass_VbbHcc_17 = new TCanvas("ZMass_VbbHcc_17", "ZMass_VbbHcc_17",0,0,600,600);
   ZMass_VbbHcc_17->SetHighLightColor(2);
   ZMass_VbbHcc_17->Range(0,0,1,1);
   ZMass_VbbHcc_17->SetFillColor(0);
   ZMass_VbbHcc_17->SetFillStyle(4000);
   ZMass_VbbHcc_17->SetBorderMode(0);
   ZMass_VbbHcc_17->SetBorderSize(2);
   ZMass_VbbHcc_17->SetFrameFillStyle(1000);
   ZMass_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-213.9918,315.7258,213787.8);
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
   st->SetMaximum(183226.3);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",30,0,300);
   st_stack_2->SetMinimum(0.01);
   st_stack_2->SetMaximum(192387.7);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetRange(1,30);
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetLabelSize(0.035);
   st_stack_2->GetXaxis()->SetTitleSize(0.035);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/10.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetLabelSize(0.05);
   st_stack_2->GetYaxis()->SetTitleSize(0.057);
   st_stack_2->GetYaxis()->SetTitleOffset(1.2);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetLabelSize(0.035);
   st_stack_2->GetZaxis()->SetTitleSize(0.035);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *VbbHcc_ZMass_stack_1 = new TH1D("VbbHcc_ZMass_stack_1","",30,0,300);
   VbbHcc_ZMass_stack_1->SetBinContent(2,33.45974);
   VbbHcc_ZMass_stack_1->SetBinContent(3,9844.75);
   VbbHcc_ZMass_stack_1->SetBinContent(4,50160.89);
   VbbHcc_ZMass_stack_1->SetBinContent(5,76607.39);
   VbbHcc_ZMass_stack_1->SetBinContent(6,75648.68);
   VbbHcc_ZMass_stack_1->SetBinContent(7,66314.95);
   VbbHcc_ZMass_stack_1->SetBinContent(8,61878.92);
   VbbHcc_ZMass_stack_1->SetBinContent(9,50963.1);
   VbbHcc_ZMass_stack_1->SetBinContent(10,43405.89);
   VbbHcc_ZMass_stack_1->SetBinContent(11,45818.28);
   VbbHcc_ZMass_stack_1->SetBinContent(12,38079.17);
   VbbHcc_ZMass_stack_1->SetBinContent(13,42266.73);
   VbbHcc_ZMass_stack_1->SetBinContent(14,38433.87);
   VbbHcc_ZMass_stack_1->SetBinContent(15,40907.4);
   VbbHcc_ZMass_stack_1->SetBinContent(16,30792.13);
   VbbHcc_ZMass_stack_1->SetBinContent(17,33110.36);
   VbbHcc_ZMass_stack_1->SetBinContent(18,41268.67);
   VbbHcc_ZMass_stack_1->SetBinContent(19,31172.48);
   VbbHcc_ZMass_stack_1->SetBinContent(20,30122.76);
   VbbHcc_ZMass_stack_1->SetBinContent(21,24661.83);
   VbbHcc_ZMass_stack_1->SetBinContent(22,22678.02);
   VbbHcc_ZMass_stack_1->SetBinContent(23,20896.38);
   VbbHcc_ZMass_stack_1->SetBinContent(24,16292.12);
   VbbHcc_ZMass_stack_1->SetBinContent(25,16023.04);
   VbbHcc_ZMass_stack_1->SetBinContent(26,13727.55);
   VbbHcc_ZMass_stack_1->SetBinContent(27,13701.09);
   VbbHcc_ZMass_stack_1->SetBinContent(28,10226.8);
   VbbHcc_ZMass_stack_1->SetBinContent(29,11390.04);
   VbbHcc_ZMass_stack_1->SetBinContent(30,9307.035);
   VbbHcc_ZMass_stack_1->SetBinContent(31,125231.2);
   VbbHcc_ZMass_stack_1->SetBinError(2,23.66753);
   VbbHcc_ZMass_stack_1->SetBinError(3,1539.847);
   VbbHcc_ZMass_stack_1->SetBinError(4,3631.475);
   VbbHcc_ZMass_stack_1->SetBinError(5,4428.014);
   VbbHcc_ZMass_stack_1->SetBinError(6,4274.289);
   VbbHcc_ZMass_stack_1->SetBinError(7,3972.559);
   VbbHcc_ZMass_stack_1->SetBinError(8,3805.978);
   VbbHcc_ZMass_stack_1->SetBinError(9,3464.423);
   VbbHcc_ZMass_stack_1->SetBinError(10,3125.26);
   VbbHcc_ZMass_stack_1->SetBinError(11,3312.529);
   VbbHcc_ZMass_stack_1->SetBinError(12,2939.719);
   VbbHcc_ZMass_stack_1->SetBinError(13,3164.981);
   VbbHcc_ZMass_stack_1->SetBinError(14,3041.933);
   VbbHcc_ZMass_stack_1->SetBinError(15,3152.374);
   VbbHcc_ZMass_stack_1->SetBinError(16,2624.559);
   VbbHcc_ZMass_stack_1->SetBinError(17,2759.836);
   VbbHcc_ZMass_stack_1->SetBinError(18,3159.752);
   VbbHcc_ZMass_stack_1->SetBinError(19,2675.262);
   VbbHcc_ZMass_stack_1->SetBinError(20,2613.478);
   VbbHcc_ZMass_stack_1->SetBinError(21,2337.135);
   VbbHcc_ZMass_stack_1->SetBinError(22,2212.36);
   VbbHcc_ZMass_stack_1->SetBinError(23,2125.819);
   VbbHcc_ZMass_stack_1->SetBinError(24,1818.563);
   VbbHcc_ZMass_stack_1->SetBinError(25,1823.406);
   VbbHcc_ZMass_stack_1->SetBinError(26,1681.993);
   VbbHcc_ZMass_stack_1->SetBinError(27,1645.301);
   VbbHcc_ZMass_stack_1->SetBinError(28,1345.551);
   VbbHcc_ZMass_stack_1->SetBinError(29,1468.262);
   VbbHcc_ZMass_stack_1->SetBinError(30,1286.08);
   VbbHcc_ZMass_stack_1->SetBinError(31,4545.762);
   VbbHcc_ZMass_stack_1->SetEntries(21518);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_ZMass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_1->SetLineColor(ci);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_1,"");
   
   TH1D *VbbHcc_ZMass_stack_2 = new TH1D("VbbHcc_ZMass_stack_2","",30,0,300);
   VbbHcc_ZMass_stack_2->SetBinContent(2,0.7321223);
   VbbHcc_ZMass_stack_2->SetBinContent(3,48.42868);
   VbbHcc_ZMass_stack_2->SetBinContent(4,173.6795);
   VbbHcc_ZMass_stack_2->SetBinContent(5,299.8766);
   VbbHcc_ZMass_stack_2->SetBinContent(6,362.31);
   VbbHcc_ZMass_stack_2->SetBinContent(7,409.3998);
   VbbHcc_ZMass_stack_2->SetBinContent(8,436.5469);
   VbbHcc_ZMass_stack_2->SetBinContent(9,490.2189);
   VbbHcc_ZMass_stack_2->SetBinContent(10,513.2604);
   VbbHcc_ZMass_stack_2->SetBinContent(11,515.9505);
   VbbHcc_ZMass_stack_2->SetBinContent(12,506.9999);
   VbbHcc_ZMass_stack_2->SetBinContent(13,484.5976);
   VbbHcc_ZMass_stack_2->SetBinContent(14,474.2702);
   VbbHcc_ZMass_stack_2->SetBinContent(15,447.1942);
   VbbHcc_ZMass_stack_2->SetBinContent(16,387.6035);
   VbbHcc_ZMass_stack_2->SetBinContent(17,351.3761);
   VbbHcc_ZMass_stack_2->SetBinContent(18,307.3594);
   VbbHcc_ZMass_stack_2->SetBinContent(19,303.5865);
   VbbHcc_ZMass_stack_2->SetBinContent(20,288.3562);
   VbbHcc_ZMass_stack_2->SetBinContent(21,238.3083);
   VbbHcc_ZMass_stack_2->SetBinContent(22,238.0623);
   VbbHcc_ZMass_stack_2->SetBinContent(23,217.6334);
   VbbHcc_ZMass_stack_2->SetBinContent(24,191.0956);
   VbbHcc_ZMass_stack_2->SetBinContent(25,172.5171);
   VbbHcc_ZMass_stack_2->SetBinContent(26,165.7907);
   VbbHcc_ZMass_stack_2->SetBinContent(27,152.7637);
   VbbHcc_ZMass_stack_2->SetBinContent(28,147.3714);
   VbbHcc_ZMass_stack_2->SetBinContent(29,123.1466);
   VbbHcc_ZMass_stack_2->SetBinContent(30,113.9373);
   VbbHcc_ZMass_stack_2->SetBinContent(31,1639.297);
   VbbHcc_ZMass_stack_2->SetBinError(2,0.2352291);
   VbbHcc_ZMass_stack_2->SetBinError(3,2.786168);
   VbbHcc_ZMass_stack_2->SetBinError(4,5.232892);
   VbbHcc_ZMass_stack_2->SetBinError(5,7.122105);
   VbbHcc_ZMass_stack_2->SetBinError(6,7.798894);
   VbbHcc_ZMass_stack_2->SetBinError(7,8.272129);
   VbbHcc_ZMass_stack_2->SetBinError(8,8.625894);
   VbbHcc_ZMass_stack_2->SetBinError(9,9.338752);
   VbbHcc_ZMass_stack_2->SetBinError(10,9.631841);
   VbbHcc_ZMass_stack_2->SetBinError(11,9.628114);
   VbbHcc_ZMass_stack_2->SetBinError(12,9.592219);
   VbbHcc_ZMass_stack_2->SetBinError(13,9.240264);
   VbbHcc_ZMass_stack_2->SetBinError(14,9.438566);
   VbbHcc_ZMass_stack_2->SetBinError(15,9.200824);
   VbbHcc_ZMass_stack_2->SetBinError(16,8.460734);
   VbbHcc_ZMass_stack_2->SetBinError(17,8.063089);
   VbbHcc_ZMass_stack_2->SetBinError(18,7.552787);
   VbbHcc_ZMass_stack_2->SetBinError(19,7.697863);
   VbbHcc_ZMass_stack_2->SetBinError(20,7.560192);
   VbbHcc_ZMass_stack_2->SetBinError(21,6.745898);
   VbbHcc_ZMass_stack_2->SetBinError(22,6.797637);
   VbbHcc_ZMass_stack_2->SetBinError(23,6.514693);
   VbbHcc_ZMass_stack_2->SetBinError(24,6.219608);
   VbbHcc_ZMass_stack_2->SetBinError(25,5.810791);
   VbbHcc_ZMass_stack_2->SetBinError(26,5.858058);
   VbbHcc_ZMass_stack_2->SetBinError(27,5.542073);
   VbbHcc_ZMass_stack_2->SetBinError(28,5.548126);
   VbbHcc_ZMass_stack_2->SetBinError(29,5.059347);
   VbbHcc_ZMass_stack_2->SetBinError(30,4.801086);
   VbbHcc_ZMass_stack_2->SetBinError(31,19.05102);
   VbbHcc_ZMass_stack_2->SetEntries(128128);

   ci = TColor::GetColor("#660066");
   VbbHcc_ZMass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_2->SetLineColor(ci);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_2,"");
   
   TH1D *VbbHcc_ZMass_stack_3 = new TH1D("VbbHcc_ZMass_stack_3","",30,0,300);
   VbbHcc_ZMass_stack_3->SetBinContent(2,10.38339);
   VbbHcc_ZMass_stack_3->SetBinContent(3,690.6408);
   VbbHcc_ZMass_stack_3->SetBinContent(4,3015.35);
   VbbHcc_ZMass_stack_3->SetBinContent(5,4896.084);
   VbbHcc_ZMass_stack_3->SetBinContent(6,6068.984);
   VbbHcc_ZMass_stack_3->SetBinContent(7,7003.049);
   VbbHcc_ZMass_stack_3->SetBinContent(8,7781.17);
   VbbHcc_ZMass_stack_3->SetBinContent(9,8432.318);
   VbbHcc_ZMass_stack_3->SetBinContent(10,8921.456);
   VbbHcc_ZMass_stack_3->SetBinContent(11,9287.816);
   VbbHcc_ZMass_stack_3->SetBinContent(12,9450.912);
   VbbHcc_ZMass_stack_3->SetBinContent(13,9285.118);
   VbbHcc_ZMass_stack_3->SetBinContent(14,8729.705);
   VbbHcc_ZMass_stack_3->SetBinContent(15,8027.633);
   VbbHcc_ZMass_stack_3->SetBinContent(16,7170.176);
   VbbHcc_ZMass_stack_3->SetBinContent(17,6444.808);
   VbbHcc_ZMass_stack_3->SetBinContent(18,5750.95);
   VbbHcc_ZMass_stack_3->SetBinContent(19,5216.341);
   VbbHcc_ZMass_stack_3->SetBinContent(20,4663.758);
   VbbHcc_ZMass_stack_3->SetBinContent(21,4224.125);
   VbbHcc_ZMass_stack_3->SetBinContent(22,3792.352);
   VbbHcc_ZMass_stack_3->SetBinContent(23,3436.82);
   VbbHcc_ZMass_stack_3->SetBinContent(24,3103.079);
   VbbHcc_ZMass_stack_3->SetBinContent(25,2804.394);
   VbbHcc_ZMass_stack_3->SetBinContent(26,2523.324);
   VbbHcc_ZMass_stack_3->SetBinContent(27,2264.674);
   VbbHcc_ZMass_stack_3->SetBinContent(28,2084.628);
   VbbHcc_ZMass_stack_3->SetBinContent(29,1879.117);
   VbbHcc_ZMass_stack_3->SetBinContent(30,1697.535);
   VbbHcc_ZMass_stack_3->SetBinContent(31,18219.67);
   VbbHcc_ZMass_stack_3->SetBinError(2,0.8739126);
   VbbHcc_ZMass_stack_3->SetBinError(3,7.155587);
   VbbHcc_ZMass_stack_3->SetBinError(4,15.00735);
   VbbHcc_ZMass_stack_3->SetBinError(5,19.09912);
   VbbHcc_ZMass_stack_3->SetBinError(6,21.22661);
   VbbHcc_ZMass_stack_3->SetBinError(7,22.84669);
   VbbHcc_ZMass_stack_3->SetBinError(8,24.09763);
   VbbHcc_ZMass_stack_3->SetBinError(9,25.08994);
   VbbHcc_ZMass_stack_3->SetBinError(10,25.82278);
   VbbHcc_ZMass_stack_3->SetBinError(11,26.36243);
   VbbHcc_ZMass_stack_3->SetBinError(12,26.62138);
   VbbHcc_ZMass_stack_3->SetBinError(13,26.40548);
   VbbHcc_ZMass_stack_3->SetBinError(14,25.56372);
   VbbHcc_ZMass_stack_3->SetBinError(15,24.49783);
   VbbHcc_ZMass_stack_3->SetBinError(16,23.11739);
   VbbHcc_ZMass_stack_3->SetBinError(17,21.8879);
   VbbHcc_ZMass_stack_3->SetBinError(18,20.66819);
   VbbHcc_ZMass_stack_3->SetBinError(19,19.66685);
   VbbHcc_ZMass_stack_3->SetBinError(20,18.57558);
   VbbHcc_ZMass_stack_3->SetBinError(21,17.67879);
   VbbHcc_ZMass_stack_3->SetBinError(22,16.75713);
   VbbHcc_ZMass_stack_3->SetBinError(23,15.92637);
   VbbHcc_ZMass_stack_3->SetBinError(24,15.1456);
   VbbHcc_ZMass_stack_3->SetBinError(25,14.39768);
   VbbHcc_ZMass_stack_3->SetBinError(26,13.65639);
   VbbHcc_ZMass_stack_3->SetBinError(27,12.91575);
   VbbHcc_ZMass_stack_3->SetBinError(28,12.4017);
   VbbHcc_ZMass_stack_3->SetBinError(29,11.76429);
   VbbHcc_ZMass_stack_3->SetBinError(30,11.19404);
   VbbHcc_ZMass_stack_3->SetBinError(31,36.70135);
   VbbHcc_ZMass_stack_3->SetEntries(2474398);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_ZMass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_3->SetLineColor(ci);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_3,"");
   
   TH1D *VbbHcc_ZMass_stack_4 = new TH1D("VbbHcc_ZMass_stack_4","",30,0,300);
   VbbHcc_ZMass_stack_4->SetBinContent(2,0.1211915);
   VbbHcc_ZMass_stack_4->SetBinContent(3,18.71653);
   VbbHcc_ZMass_stack_4->SetBinContent(4,69.08272);
   VbbHcc_ZMass_stack_4->SetBinContent(5,145.775);
   VbbHcc_ZMass_stack_4->SetBinContent(6,222.0913);
   VbbHcc_ZMass_stack_4->SetBinContent(7,355.1217);
   VbbHcc_ZMass_stack_4->SetBinContent(8,583.5609);
   VbbHcc_ZMass_stack_4->SetBinContent(9,804.4733);
   VbbHcc_ZMass_stack_4->SetBinContent(10,756.0516);
   VbbHcc_ZMass_stack_4->SetBinContent(11,407.711);
   VbbHcc_ZMass_stack_4->SetBinContent(12,278.3537);
   VbbHcc_ZMass_stack_4->SetBinContent(13,230.4328);
   VbbHcc_ZMass_stack_4->SetBinContent(14,212.9448);
   VbbHcc_ZMass_stack_4->SetBinContent(15,214.0791);
   VbbHcc_ZMass_stack_4->SetBinContent(16,214.6931);
   VbbHcc_ZMass_stack_4->SetBinContent(17,206.3739);
   VbbHcc_ZMass_stack_4->SetBinContent(18,203.5175);
   VbbHcc_ZMass_stack_4->SetBinContent(19,182.6418);
   VbbHcc_ZMass_stack_4->SetBinContent(20,173.1422);
   VbbHcc_ZMass_stack_4->SetBinContent(21,172.8534);
   VbbHcc_ZMass_stack_4->SetBinContent(22,152.8853);
   VbbHcc_ZMass_stack_4->SetBinContent(23,150.3073);
   VbbHcc_ZMass_stack_4->SetBinContent(24,143.519);
   VbbHcc_ZMass_stack_4->SetBinContent(25,142.0382);
   VbbHcc_ZMass_stack_4->SetBinContent(26,124.863);
   VbbHcc_ZMass_stack_4->SetBinContent(27,110.6884);
   VbbHcc_ZMass_stack_4->SetBinContent(28,118.0993);
   VbbHcc_ZMass_stack_4->SetBinContent(29,109.2757);
   VbbHcc_ZMass_stack_4->SetBinContent(30,93.5656);
   VbbHcc_ZMass_stack_4->SetBinContent(31,1308.039);
   VbbHcc_ZMass_stack_4->SetBinError(2,0.1211915);
   VbbHcc_ZMass_stack_4->SetBinError(3,2.468712);
   VbbHcc_ZMass_stack_4->SetBinError(4,4.732384);
   VbbHcc_ZMass_stack_4->SetBinError(5,6.928582);
   VbbHcc_ZMass_stack_4->SetBinError(6,8.427737);
   VbbHcc_ZMass_stack_4->SetBinError(7,10.55314);
   VbbHcc_ZMass_stack_4->SetBinError(8,13.29613);
   VbbHcc_ZMass_stack_4->SetBinError(9,15.4311);
   VbbHcc_ZMass_stack_4->SetBinError(10,14.57594);
   VbbHcc_ZMass_stack_4->SetBinError(11,10.76966);
   VbbHcc_ZMass_stack_4->SetBinError(12,9.193773);
   VbbHcc_ZMass_stack_4->SetBinError(13,8.401983);
   VbbHcc_ZMass_stack_4->SetBinError(14,8.030613);
   VbbHcc_ZMass_stack_4->SetBinError(15,8.184683);
   VbbHcc_ZMass_stack_4->SetBinError(16,8.304439);
   VbbHcc_ZMass_stack_4->SetBinError(17,7.9923);
   VbbHcc_ZMass_stack_4->SetBinError(18,7.953562);
   VbbHcc_ZMass_stack_4->SetBinError(19,7.520932);
   VbbHcc_ZMass_stack_4->SetBinError(20,7.18061);
   VbbHcc_ZMass_stack_4->SetBinError(21,7.207509);
   VbbHcc_ZMass_stack_4->SetBinError(22,6.662066);
   VbbHcc_ZMass_stack_4->SetBinError(23,6.58822);
   VbbHcc_ZMass_stack_4->SetBinError(24,6.310272);
   VbbHcc_ZMass_stack_4->SetBinError(25,6.421765);
   VbbHcc_ZMass_stack_4->SetBinError(26,5.897157);
   VbbHcc_ZMass_stack_4->SetBinError(27,5.450634);
   VbbHcc_ZMass_stack_4->SetBinError(28,5.745553);
   VbbHcc_ZMass_stack_4->SetBinError(29,5.466277);
   VbbHcc_ZMass_stack_4->SetBinError(30,5.009549);
   VbbHcc_ZMass_stack_4->SetBinError(31,16.29504);
   VbbHcc_ZMass_stack_4->SetEntries(45331);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_ZMass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_4->SetLineColor(ci);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_4,"");
   
   TH1D *VbbHcc_ZMass_stack_5 = new TH1D("VbbHcc_ZMass_stack_5","",30,0,300);
   VbbHcc_ZMass_stack_5->SetBinContent(3,19.66039);
   VbbHcc_ZMass_stack_5->SetBinContent(4,67.30835);
   VbbHcc_ZMass_stack_5->SetBinContent(5,113.2351);
   VbbHcc_ZMass_stack_5->SetBinContent(6,123.288);
   VbbHcc_ZMass_stack_5->SetBinContent(7,106.1841);
   VbbHcc_ZMass_stack_5->SetBinContent(8,122.5429);
   VbbHcc_ZMass_stack_5->SetBinContent(9,135.5677);
   VbbHcc_ZMass_stack_5->SetBinContent(10,100.842);
   VbbHcc_ZMass_stack_5->SetBinContent(11,84.99061);
   VbbHcc_ZMass_stack_5->SetBinContent(12,79.25762);
   VbbHcc_ZMass_stack_5->SetBinContent(13,77.8958);
   VbbHcc_ZMass_stack_5->SetBinContent(14,72.27253);
   VbbHcc_ZMass_stack_5->SetBinContent(15,62.9812);
   VbbHcc_ZMass_stack_5->SetBinContent(16,66.65617);
   VbbHcc_ZMass_stack_5->SetBinContent(17,53.38722);
   VbbHcc_ZMass_stack_5->SetBinContent(18,48.0254);
   VbbHcc_ZMass_stack_5->SetBinContent(19,51.51797);
   VbbHcc_ZMass_stack_5->SetBinContent(20,56.44978);
   VbbHcc_ZMass_stack_5->SetBinContent(21,49.80167);
   VbbHcc_ZMass_stack_5->SetBinContent(22,41.84513);
   VbbHcc_ZMass_stack_5->SetBinContent(23,37.13783);
   VbbHcc_ZMass_stack_5->SetBinContent(24,32.07914);
   VbbHcc_ZMass_stack_5->SetBinContent(25,42.98723);
   VbbHcc_ZMass_stack_5->SetBinContent(26,35.84167);
   VbbHcc_ZMass_stack_5->SetBinContent(27,37.12158);
   VbbHcc_ZMass_stack_5->SetBinContent(28,33.78026);
   VbbHcc_ZMass_stack_5->SetBinContent(29,24.23917);
   VbbHcc_ZMass_stack_5->SetBinContent(30,25.54616);
   VbbHcc_ZMass_stack_5->SetBinContent(31,446.384);
   VbbHcc_ZMass_stack_5->SetBinError(3,4.171308);
   VbbHcc_ZMass_stack_5->SetBinError(4,8.316806);
   VbbHcc_ZMass_stack_5->SetBinError(5,10.54689);
   VbbHcc_ZMass_stack_5->SetBinError(6,10.38937);
   VbbHcc_ZMass_stack_5->SetBinError(7,9.071013);
   VbbHcc_ZMass_stack_5->SetBinError(8,9.705427);
   VbbHcc_ZMass_stack_5->SetBinError(9,10.79678);
   VbbHcc_ZMass_stack_5->SetBinError(10,8.470897);
   VbbHcc_ZMass_stack_5->SetBinError(11,7.703163);
   VbbHcc_ZMass_stack_5->SetBinError(12,7.672);
   VbbHcc_ZMass_stack_5->SetBinError(13,7.711691);
   VbbHcc_ZMass_stack_5->SetBinError(14,7.444413);
   VbbHcc_ZMass_stack_5->SetBinError(15,6.861023);
   VbbHcc_ZMass_stack_5->SetBinError(16,7.382605);
   VbbHcc_ZMass_stack_5->SetBinError(17,6.446195);
   VbbHcc_ZMass_stack_5->SetBinError(18,5.533697);
   VbbHcc_ZMass_stack_5->SetBinError(19,6.491192);
   VbbHcc_ZMass_stack_5->SetBinError(20,6.961104);
   VbbHcc_ZMass_stack_5->SetBinError(21,6.494066);
   VbbHcc_ZMass_stack_5->SetBinError(22,5.388038);
   VbbHcc_ZMass_stack_5->SetBinError(23,4.935925);
   VbbHcc_ZMass_stack_5->SetBinError(24,4.275328);
   VbbHcc_ZMass_stack_5->SetBinError(25,6.03415);
   VbbHcc_ZMass_stack_5->SetBinError(26,5.231993);
   VbbHcc_ZMass_stack_5->SetBinError(27,5.344371);
   VbbHcc_ZMass_stack_5->SetBinError(28,4.88036);
   VbbHcc_ZMass_stack_5->SetBinError(29,3.602947);
   VbbHcc_ZMass_stack_5->SetBinError(30,4.145699);
   VbbHcc_ZMass_stack_5->SetBinError(31,14.20633);
   VbbHcc_ZMass_stack_5->SetEntries(11695);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_ZMass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_5->SetLineColor(ci);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_5,"");
   
   TH1D *VbbHcc_ZMass_stack_6 = new TH1D("VbbHcc_ZMass_stack_6","",30,0,300);
   VbbHcc_ZMass_stack_6->SetBinContent(2,0.2125611);
   VbbHcc_ZMass_stack_6->SetBinContent(3,0.4547885);
   VbbHcc_ZMass_stack_6->SetBinContent(4,0.9472999);
   VbbHcc_ZMass_stack_6->SetBinContent(5,1.923243);
   VbbHcc_ZMass_stack_6->SetBinContent(6,2.319971);
   VbbHcc_ZMass_stack_6->SetBinContent(7,1.562394);
   VbbHcc_ZMass_stack_6->SetBinContent(8,0.8988272);
   VbbHcc_ZMass_stack_6->SetBinContent(9,1.477077);
   VbbHcc_ZMass_stack_6->SetBinContent(10,1.10794);
   VbbHcc_ZMass_stack_6->SetBinContent(11,1.018691);
   VbbHcc_ZMass_stack_6->SetBinContent(12,0.7673083);
   VbbHcc_ZMass_stack_6->SetBinContent(13,1.420725);
   VbbHcc_ZMass_stack_6->SetBinContent(14,1.827701);
   VbbHcc_ZMass_stack_6->SetBinContent(15,1.031853);
   VbbHcc_ZMass_stack_6->SetBinContent(16,1.427014);
   VbbHcc_ZMass_stack_6->SetBinContent(17,0.8691338);
   VbbHcc_ZMass_stack_6->SetBinContent(18,0.2502743);
   VbbHcc_ZMass_stack_6->SetBinContent(19,0.5484695);
   VbbHcc_ZMass_stack_6->SetBinContent(20,0.4815573);
   VbbHcc_ZMass_stack_6->SetBinContent(21,1.093026);
   VbbHcc_ZMass_stack_6->SetBinContent(22,0.9570594);
   VbbHcc_ZMass_stack_6->SetBinContent(23,0.6608855);
   VbbHcc_ZMass_stack_6->SetBinContent(24,1.390093);
   VbbHcc_ZMass_stack_6->SetBinContent(26,0.3791294);
   VbbHcc_ZMass_stack_6->SetBinContent(27,0.2773818);
   VbbHcc_ZMass_stack_6->SetBinContent(28,0.6705923);
   VbbHcc_ZMass_stack_6->SetBinContent(29,0.1390433);
   VbbHcc_ZMass_stack_6->SetBinContent(30,0.2494577);
   VbbHcc_ZMass_stack_6->SetBinContent(31,6.362079);
   VbbHcc_ZMass_stack_6->SetBinError(2,0.2125611);
   VbbHcc_ZMass_stack_6->SetBinError(3,0.3322616);
   VbbHcc_ZMass_stack_6->SetBinError(4,0.4803646);
   VbbHcc_ZMass_stack_6->SetBinError(5,0.6822314);
   VbbHcc_ZMass_stack_6->SetBinError(6,0.7392603);
   VbbHcc_ZMass_stack_6->SetBinError(7,0.6034159);
   VbbHcc_ZMass_stack_6->SetBinError(8,0.4502302);
   VbbHcc_ZMass_stack_6->SetBinError(9,0.5742912);
   VbbHcc_ZMass_stack_6->SetBinError(10,0.5047414);
   VbbHcc_ZMass_stack_6->SetBinError(11,0.4631249);
   VbbHcc_ZMass_stack_6->SetBinError(12,0.4430061);
   VbbHcc_ZMass_stack_6->SetBinError(13,0.580665);
   VbbHcc_ZMass_stack_6->SetBinError(14,0.6550938);
   VbbHcc_ZMass_stack_6->SetBinError(15,0.471251);
   VbbHcc_ZMass_stack_6->SetBinError(16,0.584739);
   VbbHcc_ZMass_stack_6->SetBinError(17,0.4387514);
   VbbHcc_ZMass_stack_6->SetBinError(18,0.2502743);
   VbbHcc_ZMass_stack_6->SetBinError(19,0.3889135);
   VbbHcc_ZMass_stack_6->SetBinError(20,0.3406061);
   VbbHcc_ZMass_stack_6->SetBinError(21,0.4998577);
   VbbHcc_ZMass_stack_6->SetBinError(22,0.4813103);
   VbbHcc_ZMass_stack_6->SetBinError(23,0.3842129);
   VbbHcc_ZMass_stack_6->SetBinError(24,0.5786844);
   VbbHcc_ZMass_stack_6->SetBinError(26,0.2692634);
   VbbHcc_ZMass_stack_6->SetBinError(27,0.2773818);
   VbbHcc_ZMass_stack_6->SetBinError(28,0.3945186);
   VbbHcc_ZMass_stack_6->SetBinError(29,0.1390433);
   VbbHcc_ZMass_stack_6->SetBinError(30,0.2494577);
   VbbHcc_ZMass_stack_6->SetBinError(31,1.206278);
   VbbHcc_ZMass_stack_6->SetEntries(145);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_ZMass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_6->SetLineColor(ci);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_6,"");
   
   TH1D *VbbHcc_ZMass_stack_7 = new TH1D("VbbHcc_ZMass_stack_7","",30,0,300);
   VbbHcc_ZMass_stack_7->SetBinContent(2,0.181765);
   VbbHcc_ZMass_stack_7->SetBinContent(3,0.8238667);
   VbbHcc_ZMass_stack_7->SetBinContent(4,2.364947);
   VbbHcc_ZMass_stack_7->SetBinContent(5,1.523395);
   VbbHcc_ZMass_stack_7->SetBinContent(6,3.584442);
   VbbHcc_ZMass_stack_7->SetBinContent(7,6.349153);
   VbbHcc_ZMass_stack_7->SetBinContent(8,8.445488);
   VbbHcc_ZMass_stack_7->SetBinContent(9,14.66136);
   VbbHcc_ZMass_stack_7->SetBinContent(10,14.2243);
   VbbHcc_ZMass_stack_7->SetBinContent(11,7.246726);
   VbbHcc_ZMass_stack_7->SetBinContent(12,2.546196);
   VbbHcc_ZMass_stack_7->SetBinContent(13,2.183919);
   VbbHcc_ZMass_stack_7->SetBinContent(14,0.6985635);
   VbbHcc_ZMass_stack_7->SetBinContent(15,1.780966);
   VbbHcc_ZMass_stack_7->SetBinContent(16,0.9401);
   VbbHcc_ZMass_stack_7->SetBinContent(17,1.001643);
   VbbHcc_ZMass_stack_7->SetBinContent(18,0.5316961);
   VbbHcc_ZMass_stack_7->SetBinContent(19,1.00406);
   VbbHcc_ZMass_stack_7->SetBinContent(20,0.5376186);
   VbbHcc_ZMass_stack_7->SetBinContent(21,0.7530358);
   VbbHcc_ZMass_stack_7->SetBinContent(22,0.8696674);
   VbbHcc_ZMass_stack_7->SetBinContent(23,0.1828711);
   VbbHcc_ZMass_stack_7->SetBinContent(24,0.3672263);
   VbbHcc_ZMass_stack_7->SetBinContent(26,0.4327563);
   VbbHcc_ZMass_stack_7->SetBinContent(27,0.2403067);
   VbbHcc_ZMass_stack_7->SetBinContent(28,0.1399057);
   VbbHcc_ZMass_stack_7->SetBinContent(29,0.2879786);
   VbbHcc_ZMass_stack_7->SetBinContent(30,0.3052212);
   VbbHcc_ZMass_stack_7->SetBinContent(31,4.227008);
   VbbHcc_ZMass_stack_7->SetBinError(2,0.181765);
   VbbHcc_ZMass_stack_7->SetBinError(3,0.3721496);
   VbbHcc_ZMass_stack_7->SetBinError(4,0.6230404);
   VbbHcc_ZMass_stack_7->SetBinError(5,0.5151139);
   VbbHcc_ZMass_stack_7->SetBinError(6,0.760818);
   VbbHcc_ZMass_stack_7->SetBinError(7,1.026008);
   VbbHcc_ZMass_stack_7->SetBinError(8,1.1872);
   VbbHcc_ZMass_stack_7->SetBinError(9,1.596535);
   VbbHcc_ZMass_stack_7->SetBinError(10,1.548767);
   VbbHcc_ZMass_stack_7->SetBinError(11,1.112484);
   VbbHcc_ZMass_stack_7->SetBinError(12,0.6647233);
   VbbHcc_ZMass_stack_7->SetBinError(13,0.6367051);
   VbbHcc_ZMass_stack_7->SetBinError(14,0.3495197);
   VbbHcc_ZMass_stack_7->SetBinError(15,0.5429289);
   VbbHcc_ZMass_stack_7->SetBinError(16,0.4038779);
   VbbHcc_ZMass_stack_7->SetBinError(17,0.4153035);
   VbbHcc_ZMass_stack_7->SetBinError(18,0.3071519);
   VbbHcc_ZMass_stack_7->SetBinError(19,0.4195466);
   VbbHcc_ZMass_stack_7->SetBinError(20,0.3110459);
   VbbHcc_ZMass_stack_7->SetBinError(21,0.3414836);
   VbbHcc_ZMass_stack_7->SetBinError(22,0.3612391);
   VbbHcc_ZMass_stack_7->SetBinError(23,0.1828711);
   VbbHcc_ZMass_stack_7->SetBinError(24,0.2616179);
   VbbHcc_ZMass_stack_7->SetBinError(26,0.2543609);
   VbbHcc_ZMass_stack_7->SetBinError(27,0.1701168);
   VbbHcc_ZMass_stack_7->SetBinError(28,0.1399057);
   VbbHcc_ZMass_stack_7->SetBinError(29,0.2053864);
   VbbHcc_ZMass_stack_7->SetBinError(30,0.2200815);
   VbbHcc_ZMass_stack_7->SetBinError(31,0.8398458);
   VbbHcc_ZMass_stack_7->SetEntries(480);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_ZMass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_7->SetLineColor(ci);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_7,"");
   
   TH1D *VbbHcc_ZMass_stack_8 = new TH1D("VbbHcc_ZMass_stack_8","",30,0,300);
   VbbHcc_ZMass_stack_8->SetBinContent(2,0.228284);
   VbbHcc_ZMass_stack_8->SetBinContent(3,1.731392);
   VbbHcc_ZMass_stack_8->SetBinContent(4,5.496444);
   VbbHcc_ZMass_stack_8->SetBinContent(5,13.26532);
   VbbHcc_ZMass_stack_8->SetBinContent(6,13.95438);
   VbbHcc_ZMass_stack_8->SetBinContent(7,20.12954);
   VbbHcc_ZMass_stack_8->SetBinContent(8,35.76713);
   VbbHcc_ZMass_stack_8->SetBinContent(9,57.20894);
   VbbHcc_ZMass_stack_8->SetBinContent(10,41.3328);
   VbbHcc_ZMass_stack_8->SetBinContent(11,23.72353);
   VbbHcc_ZMass_stack_8->SetBinContent(12,11.7258);
   VbbHcc_ZMass_stack_8->SetBinContent(13,7.935861);
   VbbHcc_ZMass_stack_8->SetBinContent(14,8.013168);
   VbbHcc_ZMass_stack_8->SetBinContent(15,5.103637);
   VbbHcc_ZMass_stack_8->SetBinContent(16,4.971477);
   VbbHcc_ZMass_stack_8->SetBinContent(17,6.580598);
   VbbHcc_ZMass_stack_8->SetBinContent(18,4.787594);
   VbbHcc_ZMass_stack_8->SetBinContent(19,2.110165);
   VbbHcc_ZMass_stack_8->SetBinContent(20,3.668352);
   VbbHcc_ZMass_stack_8->SetBinContent(21,2.938271);
   VbbHcc_ZMass_stack_8->SetBinContent(22,3.641884);
   VbbHcc_ZMass_stack_8->SetBinContent(23,2.659184);
   VbbHcc_ZMass_stack_8->SetBinContent(24,3.042063);
   VbbHcc_ZMass_stack_8->SetBinContent(25,1.119772);
   VbbHcc_ZMass_stack_8->SetBinContent(26,1.126402);
   VbbHcc_ZMass_stack_8->SetBinContent(27,2.139755);
   VbbHcc_ZMass_stack_8->SetBinContent(28,1.886597);
   VbbHcc_ZMass_stack_8->SetBinContent(29,0.5649094);
   VbbHcc_ZMass_stack_8->SetBinContent(30,1.938387);
   VbbHcc_ZMass_stack_8->SetBinContent(31,18.72013);
   VbbHcc_ZMass_stack_8->SetBinError(2,0.228284);
   VbbHcc_ZMass_stack_8->SetBinError(3,0.6132612);
   VbbHcc_ZMass_stack_8->SetBinError(4,1.088802);
   VbbHcc_ZMass_stack_8->SetBinError(5,1.711844);
   VbbHcc_ZMass_stack_8->SetBinError(6,1.739528);
   VbbHcc_ZMass_stack_8->SetBinError(7,2.117366);
   VbbHcc_ZMass_stack_8->SetBinError(8,2.824402);
   VbbHcc_ZMass_stack_8->SetBinError(9,3.513735);
   VbbHcc_ZMass_stack_8->SetBinError(10,3.026972);
   VbbHcc_ZMass_stack_8->SetBinError(11,2.28234);
   VbbHcc_ZMass_stack_8->SetBinError(12,1.601577);
   VbbHcc_ZMass_stack_8->SetBinError(13,1.32725);
   VbbHcc_ZMass_stack_8->SetBinError(14,1.313278);
   VbbHcc_ZMass_stack_8->SetBinError(15,1.064885);
   VbbHcc_ZMass_stack_8->SetBinError(16,1.04455);
   VbbHcc_ZMass_stack_8->SetBinError(17,1.209707);
   VbbHcc_ZMass_stack_8->SetBinError(18,1.009482);
   VbbHcc_ZMass_stack_8->SetBinError(19,0.6814969);
   VbbHcc_ZMass_stack_8->SetBinError(20,0.8792818);
   VbbHcc_ZMass_stack_8->SetBinError(21,0.8210353);
   VbbHcc_ZMass_stack_8->SetBinError(22,0.88983);
   VbbHcc_ZMass_stack_8->SetBinError(23,0.7457997);
   VbbHcc_ZMass_stack_8->SetBinError(24,0.8193263);
   VbbHcc_ZMass_stack_8->SetBinError(25,0.4673813);
   VbbHcc_ZMass_stack_8->SetBinError(26,0.5062676);
   VbbHcc_ZMass_stack_8->SetBinError(27,0.6595766);
   VbbHcc_ZMass_stack_8->SetBinError(28,0.6372053);
   VbbHcc_ZMass_stack_8->SetBinError(29,0.3415253);
   VbbHcc_ZMass_stack_8->SetBinError(30,0.6499386);
   VbbHcc_ZMass_stack_8->SetBinError(31,2.030778);
   VbbHcc_ZMass_stack_8->SetEntries(1459);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_ZMass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_8->SetLineColor(ci);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_8,"");
   
   TH1D *VbbHcc_ZMass_stack_9 = new TH1D("VbbHcc_ZMass_stack_9","",30,0,300);
   VbbHcc_ZMass_stack_9->SetBinContent(2,0.01622995);
   VbbHcc_ZMass_stack_9->SetBinContent(3,0.8476794);
   VbbHcc_ZMass_stack_9->SetBinContent(4,3.052767);
   VbbHcc_ZMass_stack_9->SetBinContent(5,4.421631);
   VbbHcc_ZMass_stack_9->SetBinContent(6,5.816927);
   VbbHcc_ZMass_stack_9->SetBinContent(7,8.5169);
   VbbHcc_ZMass_stack_9->SetBinContent(8,12.76404);
   VbbHcc_ZMass_stack_9->SetBinContent(9,18.4777);
   VbbHcc_ZMass_stack_9->SetBinContent(10,20.49696);
   VbbHcc_ZMass_stack_9->SetBinContent(11,21.03573);
   VbbHcc_ZMass_stack_9->SetBinContent(12,22.27687);
   VbbHcc_ZMass_stack_9->SetBinContent(13,20.52915);
   VbbHcc_ZMass_stack_9->SetBinContent(14,12.98335);
   VbbHcc_ZMass_stack_9->SetBinContent(15,7.167561);
   VbbHcc_ZMass_stack_9->SetBinContent(16,4.864108);
   VbbHcc_ZMass_stack_9->SetBinContent(17,4.192368);
   VbbHcc_ZMass_stack_9->SetBinContent(18,3.479344);
   VbbHcc_ZMass_stack_9->SetBinContent(19,3.224429);
   VbbHcc_ZMass_stack_9->SetBinContent(20,2.961099);
   VbbHcc_ZMass_stack_9->SetBinContent(21,2.523239);
   VbbHcc_ZMass_stack_9->SetBinContent(22,2.319184);
   VbbHcc_ZMass_stack_9->SetBinContent(23,2.016248);
   VbbHcc_ZMass_stack_9->SetBinContent(24,1.734145);
   VbbHcc_ZMass_stack_9->SetBinContent(25,1.627529);
   VbbHcc_ZMass_stack_9->SetBinContent(26,1.318115);
   VbbHcc_ZMass_stack_9->SetBinContent(27,1.310936);
   VbbHcc_ZMass_stack_9->SetBinContent(28,1.185272);
   VbbHcc_ZMass_stack_9->SetBinContent(29,1.036627);
   VbbHcc_ZMass_stack_9->SetBinContent(30,0.9562132);
   VbbHcc_ZMass_stack_9->SetBinContent(31,8.679962);
   VbbHcc_ZMass_stack_9->SetBinError(2,0.005557318);
   VbbHcc_ZMass_stack_9->SetBinError(3,0.04131266);
   VbbHcc_ZMass_stack_9->SetBinError(4,0.07771197);
   VbbHcc_ZMass_stack_9->SetBinError(5,0.09324707);
   VbbHcc_ZMass_stack_9->SetBinError(6,0.1072262);
   VbbHcc_ZMass_stack_9->SetBinError(7,0.130142);
   VbbHcc_ZMass_stack_9->SetBinError(8,0.1587007);
   VbbHcc_ZMass_stack_9->SetBinError(9,0.1907334);
   VbbHcc_ZMass_stack_9->SetBinError(10,0.2005942);
   VbbHcc_ZMass_stack_9->SetBinError(11,0.2034999);
   VbbHcc_ZMass_stack_9->SetBinError(12,0.2098344);
   VbbHcc_ZMass_stack_9->SetBinError(13,0.2012854);
   VbbHcc_ZMass_stack_9->SetBinError(14,0.1594551);
   VbbHcc_ZMass_stack_9->SetBinError(15,0.1183176);
   VbbHcc_ZMass_stack_9->SetBinError(16,0.09744671);
   VbbHcc_ZMass_stack_9->SetBinError(17,0.09053282);
   VbbHcc_ZMass_stack_9->SetBinError(18,0.08274224);
   VbbHcc_ZMass_stack_9->SetBinError(19,0.07928079);
   VbbHcc_ZMass_stack_9->SetBinError(20,0.07639171);
   VbbHcc_ZMass_stack_9->SetBinError(21,0.07043623);
   VbbHcc_ZMass_stack_9->SetBinError(22,0.06720696);
   VbbHcc_ZMass_stack_9->SetBinError(23,0.06320125);
   VbbHcc_ZMass_stack_9->SetBinError(24,0.05893763);
   VbbHcc_ZMass_stack_9->SetBinError(25,0.0565921);
   VbbHcc_ZMass_stack_9->SetBinError(26,0.05139131);
   VbbHcc_ZMass_stack_9->SetBinError(27,0.05116798);
   VbbHcc_ZMass_stack_9->SetBinError(28,0.04837123);
   VbbHcc_ZMass_stack_9->SetBinError(29,0.04533221);
   VbbHcc_ZMass_stack_9->SetBinError(30,0.04295254);
   VbbHcc_ZMass_stack_9->SetBinError(31,0.1310075);
   VbbHcc_ZMass_stack_9->SetEntries(115171);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_ZMass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_9->SetLineColor(ci);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_9,"");
   
   TH1D *VbbHcc_ZMass_stack_10 = new TH1D("VbbHcc_ZMass_stack_10","",30,0,300);
   VbbHcc_ZMass_stack_10->SetBinContent(2,0.0004349723);
   VbbHcc_ZMass_stack_10->SetBinContent(3,0.01884692);
   VbbHcc_ZMass_stack_10->SetBinContent(4,0.1259893);
   VbbHcc_ZMass_stack_10->SetBinContent(5,0.2589794);
   VbbHcc_ZMass_stack_10->SetBinContent(6,0.5024476);
   VbbHcc_ZMass_stack_10->SetBinContent(7,0.9929028);
   VbbHcc_ZMass_stack_10->SetBinContent(8,1.942803);
   VbbHcc_ZMass_stack_10->SetBinContent(9,2.9681);
   VbbHcc_ZMass_stack_10->SetBinContent(10,3.312478);
   VbbHcc_ZMass_stack_10->SetBinContent(11,3.273681);
   VbbHcc_ZMass_stack_10->SetBinContent(12,3.56201);
   VbbHcc_ZMass_stack_10->SetBinContent(13,3.19753);
   VbbHcc_ZMass_stack_10->SetBinContent(14,2.079107);
   VbbHcc_ZMass_stack_10->SetBinContent(15,1.152975);
   VbbHcc_ZMass_stack_10->SetBinContent(16,0.8588465);
   VbbHcc_ZMass_stack_10->SetBinContent(17,0.7482821);
   VbbHcc_ZMass_stack_10->SetBinContent(18,0.7232058);
   VbbHcc_ZMass_stack_10->SetBinContent(19,0.6382687);
   VbbHcc_ZMass_stack_10->SetBinContent(20,0.6128213);
   VbbHcc_ZMass_stack_10->SetBinContent(21,0.5658881);
   VbbHcc_ZMass_stack_10->SetBinContent(22,0.5094249);
   VbbHcc_ZMass_stack_10->SetBinContent(23,0.4573891);
   VbbHcc_ZMass_stack_10->SetBinContent(24,0.4129415);
   VbbHcc_ZMass_stack_10->SetBinContent(25,0.3604461);
   VbbHcc_ZMass_stack_10->SetBinContent(26,0.3102782);
   VbbHcc_ZMass_stack_10->SetBinContent(27,0.2935503);
   VbbHcc_ZMass_stack_10->SetBinContent(28,0.2536069);
   VbbHcc_ZMass_stack_10->SetBinContent(29,0.2222283);
   VbbHcc_ZMass_stack_10->SetBinContent(30,0.2107226);
   VbbHcc_ZMass_stack_10->SetBinContent(31,1.775659);
   VbbHcc_ZMass_stack_10->SetBinError(2,0.0004349723);
   VbbHcc_ZMass_stack_10->SetBinError(3,0.002927409);
   VbbHcc_ZMass_stack_10->SetBinError(4,0.007519831);
   VbbHcc_ZMass_stack_10->SetBinError(5,0.0107859);
   VbbHcc_ZMass_stack_10->SetBinError(6,0.01505203);
   VbbHcc_ZMass_stack_10->SetBinError(7,0.02113349);
   VbbHcc_ZMass_stack_10->SetBinError(8,0.02952557);
   VbbHcc_ZMass_stack_10->SetBinError(9,0.03653922);
   VbbHcc_ZMass_stack_10->SetBinError(10,0.03860099);
   VbbHcc_ZMass_stack_10->SetBinError(11,0.03832095);
   VbbHcc_ZMass_stack_10->SetBinError(12,0.03999309);
   VbbHcc_ZMass_stack_10->SetBinError(13,0.03791215);
   VbbHcc_ZMass_stack_10->SetBinError(14,0.03060154);
   VbbHcc_ZMass_stack_10->SetBinError(15,0.0227819);
   VbbHcc_ZMass_stack_10->SetBinError(16,0.01966002);
   VbbHcc_ZMass_stack_10->SetBinError(17,0.01830542);
   VbbHcc_ZMass_stack_10->SetBinError(18,0.01801186);
   VbbHcc_ZMass_stack_10->SetBinError(19,0.01691908);
   VbbHcc_ZMass_stack_10->SetBinError(20,0.01661853);
   VbbHcc_ZMass_stack_10->SetBinError(21,0.01592248);
   VbbHcc_ZMass_stack_10->SetBinError(22,0.01513394);
   VbbHcc_ZMass_stack_10->SetBinError(23,0.01433975);
   VbbHcc_ZMass_stack_10->SetBinError(24,0.01363715);
   VbbHcc_ZMass_stack_10->SetBinError(25,0.01272777);
   VbbHcc_ZMass_stack_10->SetBinError(26,0.01181297);
   VbbHcc_ZMass_stack_10->SetBinError(27,0.01147292);
   VbbHcc_ZMass_stack_10->SetBinError(28,0.01065996);
   VbbHcc_ZMass_stack_10->SetBinError(29,0.01000122);
   VbbHcc_ZMass_stack_10->SetBinError(30,0.009726392);
   VbbHcc_ZMass_stack_10->SetBinError(31,0.02818609);
   VbbHcc_ZMass_stack_10->SetEntries(72910);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_ZMass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_10->SetLineColor(ci);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_10,"");
   
   TH1D *VbbHcc_ZMass_stack_11 = new TH1D("VbbHcc_ZMass_stack_11","",30,0,300);
   VbbHcc_ZMass_stack_11->SetBinContent(3,0.02397708);
   VbbHcc_ZMass_stack_11->SetBinContent(4,0.1047012);
   VbbHcc_ZMass_stack_11->SetBinContent(5,0.1813676);
   VbbHcc_ZMass_stack_11->SetBinContent(6,0.2485702);
   VbbHcc_ZMass_stack_11->SetBinContent(7,0.4572157);
   VbbHcc_ZMass_stack_11->SetBinContent(8,0.8713662);
   VbbHcc_ZMass_stack_11->SetBinContent(9,1.234046);
   VbbHcc_ZMass_stack_11->SetBinContent(10,0.958412);
   VbbHcc_ZMass_stack_11->SetBinContent(11,0.4648617);
   VbbHcc_ZMass_stack_11->SetBinContent(12,0.3965876);
   VbbHcc_ZMass_stack_11->SetBinContent(13,0.2712893);
   VbbHcc_ZMass_stack_11->SetBinContent(14,0.1815726);
   VbbHcc_ZMass_stack_11->SetBinContent(15,0.143275);
   VbbHcc_ZMass_stack_11->SetBinContent(16,0.11559);
   VbbHcc_ZMass_stack_11->SetBinContent(17,0.09200148);
   VbbHcc_ZMass_stack_11->SetBinContent(18,0.05370387);
   VbbHcc_ZMass_stack_11->SetBinContent(19,0.07671198);
   VbbHcc_ZMass_stack_11->SetBinContent(20,0.05042085);
   VbbHcc_ZMass_stack_11->SetBinContent(21,0.05818558);
   VbbHcc_ZMass_stack_11->SetBinContent(22,0.04737656);
   VbbHcc_ZMass_stack_11->SetBinContent(23,0.01692697);
   VbbHcc_ZMass_stack_11->SetBinContent(24,0.02262134);
   VbbHcc_ZMass_stack_11->SetBinContent(25,0.03087344);
   VbbHcc_ZMass_stack_11->SetBinContent(26,0.01875541);
   VbbHcc_ZMass_stack_11->SetBinContent(27,0.03548984);
   VbbHcc_ZMass_stack_11->SetBinContent(28,0.01875839);
   VbbHcc_ZMass_stack_11->SetBinContent(29,0.01425811);
   VbbHcc_ZMass_stack_11->SetBinContent(30,0.01683184);
   VbbHcc_ZMass_stack_11->SetBinContent(31,0.2418958);
   VbbHcc_ZMass_stack_11->SetBinError(3,0.007718782);
   VbbHcc_ZMass_stack_11->SetBinError(4,0.01633585);
   VbbHcc_ZMass_stack_11->SetBinError(5,0.0214216);
   VbbHcc_ZMass_stack_11->SetBinError(6,0.02568399);
   VbbHcc_ZMass_stack_11->SetBinError(7,0.03507662);
   VbbHcc_ZMass_stack_11->SetBinError(8,0.04847408);
   VbbHcc_ZMass_stack_11->SetBinError(9,0.05702133);
   VbbHcc_ZMass_stack_11->SetBinError(10,0.05046755);
   VbbHcc_ZMass_stack_11->SetBinError(11,0.03448411);
   VbbHcc_ZMass_stack_11->SetBinError(12,0.03231686);
   VbbHcc_ZMass_stack_11->SetBinError(13,0.0260127);
   VbbHcc_ZMass_stack_11->SetBinError(14,0.0217346);
   VbbHcc_ZMass_stack_11->SetBinError(15,0.01906695);
   VbbHcc_ZMass_stack_11->SetBinError(16,0.01795415);
   VbbHcc_ZMass_stack_11->SetBinError(17,0.01504614);
   VbbHcc_ZMass_stack_11->SetBinError(18,0.01231932);
   VbbHcc_ZMass_stack_11->SetBinError(19,0.01393788);
   VbbHcc_ZMass_stack_11->SetBinError(20,0.0110895);
   VbbHcc_ZMass_stack_11->SetBinError(21,0.01212006);
   VbbHcc_ZMass_stack_11->SetBinError(22,0.0106399);
   VbbHcc_ZMass_stack_11->SetBinError(23,0.006358831);
   VbbHcc_ZMass_stack_11->SetBinError(24,0.007181798);
   VbbHcc_ZMass_stack_11->SetBinError(25,0.008677092);
   VbbHcc_ZMass_stack_11->SetBinError(26,0.007954908);
   VbbHcc_ZMass_stack_11->SetBinError(27,0.009835754);
   VbbHcc_ZMass_stack_11->SetBinError(28,0.006786351);
   VbbHcc_ZMass_stack_11->SetBinError(29,0.00599787);
   VbbHcc_ZMass_stack_11->SetBinError(30,0.006805847);
   VbbHcc_ZMass_stack_11->SetBinError(31,0.02481644);
   VbbHcc_ZMass_stack_11->SetEntries(2979);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_ZMass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_11->SetLineColor(ci);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_11,"");
   
   TH1D *VbbHcc_ZMass_stack_12 = new TH1D("VbbHcc_ZMass_stack_12","",30,0,300);
   VbbHcc_ZMass_stack_12->SetBinContent(2,0.00076961);
   VbbHcc_ZMass_stack_12->SetBinContent(3,0.002702414);
   VbbHcc_ZMass_stack_12->SetBinContent(4,0.01558222);
   VbbHcc_ZMass_stack_12->SetBinContent(5,0.02554297);
   VbbHcc_ZMass_stack_12->SetBinContent(6,0.06988274);
   VbbHcc_ZMass_stack_12->SetBinContent(7,0.1382283);
   VbbHcc_ZMass_stack_12->SetBinContent(8,0.2672536);
   VbbHcc_ZMass_stack_12->SetBinContent(9,0.3935289);
   VbbHcc_ZMass_stack_12->SetBinContent(10,0.3276389);
   VbbHcc_ZMass_stack_12->SetBinContent(11,0.1303929);
   VbbHcc_ZMass_stack_12->SetBinContent(12,0.0773873);
   VbbHcc_ZMass_stack_12->SetBinContent(13,0.07551198);
   VbbHcc_ZMass_stack_12->SetBinContent(14,0.05322186);
   VbbHcc_ZMass_stack_12->SetBinContent(15,0.03510616);
   VbbHcc_ZMass_stack_12->SetBinContent(16,0.0261488);
   VbbHcc_ZMass_stack_12->SetBinContent(17,0.03250684);
   VbbHcc_ZMass_stack_12->SetBinContent(18,0.02296897);
   VbbHcc_ZMass_stack_12->SetBinContent(19,0.0212924);
   VbbHcc_ZMass_stack_12->SetBinContent(20,0.02020608);
   VbbHcc_ZMass_stack_12->SetBinContent(21,0.01593323);
   VbbHcc_ZMass_stack_12->SetBinContent(22,0.01992672);
   VbbHcc_ZMass_stack_12->SetBinContent(23,0.01693367);
   VbbHcc_ZMass_stack_12->SetBinContent(24,0.01486788);
   VbbHcc_ZMass_stack_12->SetBinContent(25,0.01401198);
   VbbHcc_ZMass_stack_12->SetBinContent(26,0.01496468);
   VbbHcc_ZMass_stack_12->SetBinContent(27,0.01286721);
   VbbHcc_ZMass_stack_12->SetBinContent(28,0.009461425);
   VbbHcc_ZMass_stack_12->SetBinContent(29,0.00770134);
   VbbHcc_ZMass_stack_12->SetBinContent(30,0.005483123);
   VbbHcc_ZMass_stack_12->SetBinContent(31,0.08729257);
   VbbHcc_ZMass_stack_12->SetBinError(2,0.0005441965);
   VbbHcc_ZMass_stack_12->SetBinError(3,0.0009168546);
   VbbHcc_ZMass_stack_12->SetBinError(4,0.002346);
   VbbHcc_ZMass_stack_12->SetBinError(5,0.002904669);
   VbbHcc_ZMass_stack_12->SetBinError(6,0.004890487);
   VbbHcc_ZMass_stack_12->SetBinError(7,0.00679956);
   VbbHcc_ZMass_stack_12->SetBinError(8,0.009487715);
   VbbHcc_ZMass_stack_12->SetBinError(9,0.01155686);
   VbbHcc_ZMass_stack_12->SetBinError(10,0.01052938);
   VbbHcc_ZMass_stack_12->SetBinError(11,0.006605766);
   VbbHcc_ZMass_stack_12->SetBinError(12,0.004997181);
   VbbHcc_ZMass_stack_12->SetBinError(13,0.005038319);
   VbbHcc_ZMass_stack_12->SetBinError(14,0.004174252);
   VbbHcc_ZMass_stack_12->SetBinError(15,0.003455305);
   VbbHcc_ZMass_stack_12->SetBinError(16,0.002921738);
   VbbHcc_ZMass_stack_12->SetBinError(17,0.003275211);
   VbbHcc_ZMass_stack_12->SetBinError(18,0.002747966);
   VbbHcc_ZMass_stack_12->SetBinError(19,0.002652696);
   VbbHcc_ZMass_stack_12->SetBinError(20,0.002623756);
   VbbHcc_ZMass_stack_12->SetBinError(21,0.002271316);
   VbbHcc_ZMass_stack_12->SetBinError(22,0.002564162);
   VbbHcc_ZMass_stack_12->SetBinError(23,0.002423068);
   VbbHcc_ZMass_stack_12->SetBinError(24,0.00225242);
   VbbHcc_ZMass_stack_12->SetBinError(25,0.002151839);
   VbbHcc_ZMass_stack_12->SetBinError(26,0.002206321);
   VbbHcc_ZMass_stack_12->SetBinError(27,0.002081706);
   VbbHcc_ZMass_stack_12->SetBinError(28,0.001667395);
   VbbHcc_ZMass_stack_12->SetBinError(29,0.001584746);
   VbbHcc_ZMass_stack_12->SetBinError(30,0.001364173);
   VbbHcc_ZMass_stack_12->SetBinError(31,0.005402407);
   VbbHcc_ZMass_stack_12->SetEntries(6613);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_ZMass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_12->SetLineColor(ci);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_ZMass__3 = new TH1D("VbbHcc_ZMass__3","",30,0,300);
   VbbHcc_ZMass__3->SetBinContent(2,11);
   VbbHcc_ZMass__3->SetBinContent(3,696);
   VbbHcc_ZMass__3->SetBinContent(4,3373);
   VbbHcc_ZMass__3->SetBinContent(5,5918);
   VbbHcc_ZMass__3->SetBinContent(6,7251);
   VbbHcc_ZMass__3->SetBinContent(7,7643);
   VbbHcc_ZMass__3->SetBinContent(8,7665);
   VbbHcc_ZMass__3->SetBinContent(9,7522);
   VbbHcc_ZMass__3->SetBinContent(10,7432);
   VbbHcc_ZMass__3->SetBinContent(11,6998);
   VbbHcc_ZMass__3->SetBinContent(12,6620);
   VbbHcc_ZMass__3->SetBinContent(13,6396);
   VbbHcc_ZMass__3->SetBinContent(14,6005);
   VbbHcc_ZMass__3->SetBinContent(15,5732);
   VbbHcc_ZMass__3->SetBinContent(16,5648);
   VbbHcc_ZMass__3->SetBinContent(17,5180);
   VbbHcc_ZMass__3->SetBinContent(18,4982);
   VbbHcc_ZMass__3->SetBinContent(19,4569);
   VbbHcc_ZMass__3->SetBinContent(20,4269);
   VbbHcc_ZMass__3->SetBinContent(21,4084);
   VbbHcc_ZMass__3->SetBinContent(22,3807);
   VbbHcc_ZMass__3->SetBinContent(23,3625);
   VbbHcc_ZMass__3->SetBinContent(24,3366);
   VbbHcc_ZMass__3->SetBinContent(25,3240);
   VbbHcc_ZMass__3->SetBinContent(26,2905);
   VbbHcc_ZMass__3->SetBinContent(27,2807);
   VbbHcc_ZMass__3->SetBinContent(28,2635);
   VbbHcc_ZMass__3->SetBinContent(29,2427);
   VbbHcc_ZMass__3->SetBinContent(30,2226);
   VbbHcc_ZMass__3->SetBinContent(31,38345);
   VbbHcc_ZMass__3->SetBinError(2,3.316625);
   VbbHcc_ZMass__3->SetBinError(3,26.38181);
   VbbHcc_ZMass__3->SetBinError(4,58.07753);
   VbbHcc_ZMass__3->SetBinError(5,76.92854);
   VbbHcc_ZMass__3->SetBinError(6,85.1528);
   VbbHcc_ZMass__3->SetBinError(7,87.42425);
   VbbHcc_ZMass__3->SetBinError(8,87.54999);
   VbbHcc_ZMass__3->SetBinError(9,86.72946);
   VbbHcc_ZMass__3->SetBinError(10,86.20905);
   VbbHcc_ZMass__3->SetBinError(11,83.65405);
   VbbHcc_ZMass__3->SetBinError(12,81.36338);
   VbbHcc_ZMass__3->SetBinError(13,79.975);
   VbbHcc_ZMass__3->SetBinError(14,77.49194);
   VbbHcc_ZMass__3->SetBinError(15,75.70997);
   VbbHcc_ZMass__3->SetBinError(16,75.15318);
   VbbHcc_ZMass__3->SetBinError(17,71.97222);
   VbbHcc_ZMass__3->SetBinError(18,70.58328);
   VbbHcc_ZMass__3->SetBinError(19,67.59438);
   VbbHcc_ZMass__3->SetBinError(20,65.33758);
   VbbHcc_ZMass__3->SetBinError(21,63.90618);
   VbbHcc_ZMass__3->SetBinError(22,61.70089);
   VbbHcc_ZMass__3->SetBinError(23,60.20797);
   VbbHcc_ZMass__3->SetBinError(24,58.01724);
   VbbHcc_ZMass__3->SetBinError(25,56.921);
   VbbHcc_ZMass__3->SetBinError(26,53.89805);
   VbbHcc_ZMass__3->SetBinError(27,52.98113);
   VbbHcc_ZMass__3->SetBinError(28,51.33225);
   VbbHcc_ZMass__3->SetBinError(29,49.26459);
   VbbHcc_ZMass__3->SetBinError(30,47.1805);
   VbbHcc_ZMass__3->SetBinError(31,195.8188);
   VbbHcc_ZMass__3->SetEntries(173377);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass__3->SetLineColor(ci);
   VbbHcc_ZMass__3->SetLineWidth(2);
   VbbHcc_ZMass__3->SetMarkerStyle(20);
   VbbHcc_ZMass__3->SetMarkerSize(1.2);
   VbbHcc_ZMass__3->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass__3->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass__3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass__3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass__3->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass__3->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass__3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass__3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass__3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass__3->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass__3->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass__3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass__3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass__3->GetZaxis()->SetTitleFont(42);
   VbbHcc_ZMass__3->Draw("same E");
   
   Double_t Graph_from_VbbHcc_ZMass_fx1003[30] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295};
   Double_t Graph_from_VbbHcc_ZMass_fy1003[30] = {
   0,
   45.33649,
   10626.1,
   53498.42,
   82083.96,
   82451.85,
   74226.85,
   70863.7,
   60922.1,
   53779.26,
   56171.64,
   48436.05,
   52380.39,
   47948.9,
   49675.71,
   38644.46,
   40179.82,
   47588.37,
   36934.2,
   35312.8,
   29354.86,
   26911.53,
   24744.29,
   19768.88,
   19188.12,
   16580.97,
   16270.65,
   12614.84,
   13528.09,
   11241.3};
   Double_t Graph_from_VbbHcc_ZMass_fex1003[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_ZMass_fey1003[30] = {
   0,
   23.68789,
   1539.874,
   3631.522,
   4428.079,
   4274.37,
   3972.658,
   3806.1,
   3464.58,
   3125.429,
   3312.676,
   2939.88,
   3165.126,
   3042.075,
   3152.501,
   2624.699,
   2759.954,
   3159.844,
   2675.364,
   2613.575,
   2337.232,
   2212.45,
   2125.905,
   1818.653,
   1823.494,
   1682.077,
   1645.379,
   1345.641,
   1468.333,
   1286.154};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_ZMass_fx1003,Graph_from_VbbHcc_ZMass_fy1003,Graph_from_VbbHcc_ZMass_fex1003,Graph_from_VbbHcc_ZMass_fey1003);
   gre->SetName("Graph_from_VbbHcc_ZMass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_ZMass1003 = new TH1F("Graph_Graph_from_VbbHcc_ZMass1003","",100,0,330);
   Graph_Graph_from_VbbHcc_ZMass1003->SetMinimum(0);
   Graph_Graph_from_VbbHcc_ZMass1003->SetMaximum(95398.84);
   Graph_Graph_from_VbbHcc_ZMass1003->SetDirectory(0);
   Graph_Graph_from_VbbHcc_ZMass1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_ZMass1003->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_ZMass1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZMass1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZMass1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZMass1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_ZMass1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZMass1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZMass1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_ZMass1003);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_ZMass","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_ZMass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_ZMass","MC unc. (stat.)","fl");

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
   ZMass_VbbHcc_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__4 = new TH1D("data_mc_ratio__4","",30,0,300);
   data_mc_ratio__4->SetBinContent(2,0.2426302);
   data_mc_ratio__4->SetBinContent(3,0.06549911);
   data_mc_ratio__4->SetBinContent(4,0.06304859);
   data_mc_ratio__4->SetBinContent(5,0.07209691);
   data_mc_ratio__4->SetBinContent(6,0.08794223);
   data_mc_ratio__4->SetBinContent(7,0.1029681);
   data_mc_ratio__4->SetBinContent(8,0.1081654);
   data_mc_ratio__4->SetBinContent(9,0.1234692);
   data_mc_ratio__4->SetBinContent(10,0.1381945);
   data_mc_ratio__4->SetBinContent(11,0.1245824);
   data_mc_ratio__4->SetBinContent(12,0.1366751);
   data_mc_ratio__4->SetBinContent(13,0.1221068);
   data_mc_ratio__4->SetBinContent(14,0.1252375);
   data_mc_ratio__4->SetBinContent(15,0.1153884);
   data_mc_ratio__4->SetBinContent(16,0.1461529);
   data_mc_ratio__4->SetBinContent(17,0.1289204);
   data_mc_ratio__4->SetBinContent(18,0.1046894);
   data_mc_ratio__4->SetBinContent(19,0.1237065);
   data_mc_ratio__4->SetBinContent(20,0.120891);
   data_mc_ratio__4->SetBinContent(21,0.1391252);
   data_mc_ratio__4->SetBinContent(22,0.1414635);
   data_mc_ratio__4->SetBinContent(23,0.1464984);
   data_mc_ratio__4->SetBinContent(24,0.1702676);
   data_mc_ratio__4->SetBinContent(25,0.1688544);
   data_mc_ratio__4->SetBinContent(26,0.1752009);
   data_mc_ratio__4->SetBinContent(27,0.1725192);
   data_mc_ratio__4->SetBinContent(28,0.2088809);
   data_mc_ratio__4->SetBinContent(29,0.1794045);
   data_mc_ratio__4->SetBinContent(30,0.1980198);
   data_mc_ratio__4->SetBinContent(31,0.2610551);
   data_mc_ratio__4->SetBinError(2,0.07315575);
   data_mc_ratio__4->SetBinError(3,0.002482737);
   data_mc_ratio__4->SetBinError(4,0.001085593);
   data_mc_ratio__4->SetBinError(5,0.0009371933);
   data_mc_ratio__4->SetBinError(6,0.001032758);
   data_mc_ratio__4->SetBinError(7,0.001177798);
   data_mc_ratio__4->SetBinError(8,0.00123547);
   data_mc_ratio__4->SetBinError(9,0.001423613);
   data_mc_ratio__4->SetBinError(10,0.001603017);
   data_mc_ratio__4->SetBinError(11,0.001489258);
   data_mc_ratio__4->SetBinError(12,0.00167981);
   data_mc_ratio__4->SetBinError(13,0.001526812);
   data_mc_ratio__4->SetBinError(14,0.001616136);
   data_mc_ratio__4->SetBinError(15,0.001524084);
   data_mc_ratio__4->SetBinError(16,0.001944734);
   data_mc_ratio__4->SetBinError(17,0.001791253);
   data_mc_ratio__4->SetBinError(18,0.001483204);
   data_mc_ratio__4->SetBinError(19,0.00183013);
   data_mc_ratio__4->SetBinError(20,0.001850252);
   data_mc_ratio__4->SetBinError(21,0.002177022);
   data_mc_ratio__4->SetBinError(22,0.002292731);
   data_mc_ratio__4->SetBinError(23,0.002433207);
   data_mc_ratio__4->SetBinError(24,0.002934776);
   data_mc_ratio__4->SetBinError(25,0.00296647);
   data_mc_ratio__4->SetBinError(26,0.003250597);
   data_mc_ratio__4->SetBinError(27,0.00325624);
   data_mc_ratio__4->SetBinError(28,0.004069194);
   data_mc_ratio__4->SetBinError(29,0.003641651);
   data_mc_ratio__4->SetBinError(30,0.004197068);
   data_mc_ratio__4->SetBinError(31,0.008188765);
   data_mc_ratio__4->SetMinimum(0.4);
   data_mc_ratio__4->SetMaximum(1.6);
   data_mc_ratio__4->SetEntries(612.663);
   data_mc_ratio__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__4->SetLineColor(ci);
   data_mc_ratio__4->SetLineWidth(2);
   data_mc_ratio__4->SetMarkerStyle(20);
   data_mc_ratio__4->SetMarkerSize(1.2);
   data_mc_ratio__4->GetXaxis()->SetTitle("M_{Z}");
   data_mc_ratio__4->GetXaxis()->SetRange(1,30);
   data_mc_ratio__4->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__4->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__4->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__4->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__4->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__4->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__4->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__4->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__4->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__4->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__4->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__4->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__4->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__4->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__4->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__4->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__4->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1004[30] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295};
   Double_t Graph_from_mc_statistical_error_fy1004[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1004[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1004[30] = {
   0,
   0.5224907,
   0.1449143,
   0.06788092,
   0.05394573,
   0.0518408,
   0.0535205,
   0.05371016,
   0.05686902,
   0.05811588,
   0.05897416,
   0.06069612,
   0.06042578,
   0.0634441,
   0.06346162,
   0.06791915,
   0.06869005,
   0.0663995,
   0.07243596,
   0.07401211,
   0.07961993,
   0.08221199,
   0.08591498,
   0.09199576,
   0.0950324,
   0.1014463,
   0.1011256,
   0.1066712,
   0.1085395,
   0.1144133};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1004,Graph_from_mc_statistical_error_fy1004,Graph_from_mc_statistical_error_fex1004,Graph_from_mc_statistical_error_fey1004);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1004 = new TH1F("Graph_Graph_from_mc_statistical_error1004","",100,0,330);
   Graph_Graph_from_mc_statistical_error1004->SetMinimum(0.3730112);
   Graph_Graph_from_mc_statistical_error1004->SetMaximum(1.626989);
   Graph_Graph_from_mc_statistical_error1004->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1004->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1004);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   ZMass_VbbHcc_17->cd();
   ZMass_VbbHcc_17->Modified();
   ZMass_VbbHcc_17->cd();
   ZMass_VbbHcc_17->SetSelected(ZMass_VbbHcc_17);
}
