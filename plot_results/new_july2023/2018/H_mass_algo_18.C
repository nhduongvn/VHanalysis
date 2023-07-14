void H_mass_algo_18()
{
//=========Macro generated from canvas: H_mass_algo_18/H_mass_algo_18
//=========  (Fri Jul 14 13:38:12 2023) by ROOT version 6.14/09
   TCanvas *H_mass_algo_18 = new TCanvas("H_mass_algo_18", "H_mass_algo_18",0,0,600,600);
   H_mass_algo_18->SetHighLightColor(2);
   H_mass_algo_18->Range(0,0,1,1);
   H_mass_algo_18->SetFillColor(0);
   H_mass_algo_18->SetFillStyle(4000);
   H_mass_algo_18->SetBorderMode(0);
   H_mass_algo_18->SetBorderSize(2);
   H_mass_algo_18->SetFrameFillStyle(1000);
   H_mass_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-17.23434,315.7258,17227.1);
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
   st->SetMaximum(14764.44);
   
   TH1F *st_stack_103 = new TH1F("st_stack_103","",40,0,400);
   st_stack_103->SetMinimum(0.01);
   st_stack_103->SetMaximum(15502.67);
   st_stack_103->SetDirectory(0);
   st_stack_103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_103->SetLineColor(ci);
   st_stack_103->GetXaxis()->SetRange(1,30);
   st_stack_103->GetXaxis()->SetLabelFont(42);
   st_stack_103->GetXaxis()->SetLabelSize(0.035);
   st_stack_103->GetXaxis()->SetTitleSize(0.035);
   st_stack_103->GetXaxis()->SetTitleFont(42);
   st_stack_103->GetYaxis()->SetTitle("Events/10.0");
   st_stack_103->GetYaxis()->SetLabelFont(42);
   st_stack_103->GetYaxis()->SetLabelSize(0.05);
   st_stack_103->GetYaxis()->SetTitleSize(0.057);
   st_stack_103->GetYaxis()->SetTitleOffset(1.2);
   st_stack_103->GetYaxis()->SetTitleFont(42);
   st_stack_103->GetZaxis()->SetLabelFont(42);
   st_stack_103->GetZaxis()->SetLabelSize(0.035);
   st_stack_103->GetZaxis()->SetTitleSize(0.035);
   st_stack_103->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_103);
   
   
   TH1D *VbbHcc_algo_H_mass_stack_1 = new TH1D("VbbHcc_algo_H_mass_stack_1","",40,0,400);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(5,1399.07);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(6,3717.638);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(7,3609.134);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(8,5195.51);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(9,4059.973);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(10,3858.382);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(11,3829.466);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(12,4080.191);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(13,4100.973);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(14,2775.662);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(15,2358.694);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(16,3444.049);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(17,2831.926);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(18,5970.83);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(19,2501.235);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(20,2936.533);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(21,3395.963);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(22,2300.413);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(23,2734.266);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(24,1950.643);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(25,2311.03);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(26,3674.417);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(27,2229.358);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(28,3828.433);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(29,2609.588);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(30,5706.533);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(31,1591.587);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(32,1992.717);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(33,1764.867);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(34,1160.847);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(35,2526.853);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(36,2044.576);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(37,3909.041);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(38,2703.058);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(39,1922.12);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(40,2082.701);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(41,94580.37);
   VbbHcc_algo_H_mass_stack_1->SetBinError(5,814.912);
   VbbHcc_algo_H_mass_stack_1->SetBinError(6,1134.199);
   VbbHcc_algo_H_mass_stack_1->SetBinError(7,972.3457);
   VbbHcc_algo_H_mass_stack_1->SetBinError(8,1131.885);
   VbbHcc_algo_H_mass_stack_1->SetBinError(9,803.2295);
   VbbHcc_algo_H_mass_stack_1->SetBinError(10,751.2395);
   VbbHcc_algo_H_mass_stack_1->SetBinError(11,831.6174);
   VbbHcc_algo_H_mass_stack_1->SetBinError(12,841.0647);
   VbbHcc_algo_H_mass_stack_1->SetBinError(13,839.5668);
   VbbHcc_algo_H_mass_stack_1->SetBinError(14,598.2541);
   VbbHcc_algo_H_mass_stack_1->SetBinError(15,527.065);
   VbbHcc_algo_H_mass_stack_1->SetBinError(16,803.4086);
   VbbHcc_algo_H_mass_stack_1->SetBinError(17,655.6553);
   VbbHcc_algo_H_mass_stack_1->SetBinError(18,1293.823);
   VbbHcc_algo_H_mass_stack_1->SetBinError(19,669.7483);
   VbbHcc_algo_H_mass_stack_1->SetBinError(20,939.4692);
   VbbHcc_algo_H_mass_stack_1->SetBinError(21,841.9548);
   VbbHcc_algo_H_mass_stack_1->SetBinError(22,572.747);
   VbbHcc_algo_H_mass_stack_1->SetBinError(23,684.8147);
   VbbHcc_algo_H_mass_stack_1->SetBinError(24,420.2352);
   VbbHcc_algo_H_mass_stack_1->SetBinError(25,561.0252);
   VbbHcc_algo_H_mass_stack_1->SetBinError(26,987.1329);
   VbbHcc_algo_H_mass_stack_1->SetBinError(27,656.0612);
   VbbHcc_algo_H_mass_stack_1->SetBinError(28,2417.097);
   VbbHcc_algo_H_mass_stack_1->SetBinError(29,732.1119);
   VbbHcc_algo_H_mass_stack_1->SetBinError(30,3184.639);
   VbbHcc_algo_H_mass_stack_1->SetBinError(31,416.2587);
   VbbHcc_algo_H_mass_stack_1->SetBinError(32,615.5065);
   VbbHcc_algo_H_mass_stack_1->SetBinError(33,584.3182);
   VbbHcc_algo_H_mass_stack_1->SetBinError(34,164.8312);
   VbbHcc_algo_H_mass_stack_1->SetBinError(35,721.5732);
   VbbHcc_algo_H_mass_stack_1->SetBinError(36,568.0373);
   VbbHcc_algo_H_mass_stack_1->SetBinError(37,1884.907);
   VbbHcc_algo_H_mass_stack_1->SetBinError(38,894.7006);
   VbbHcc_algo_H_mass_stack_1->SetBinError(39,611.1125);
   VbbHcc_algo_H_mass_stack_1->SetBinError(40,679.334);
   VbbHcc_algo_H_mass_stack_1->SetBinError(41,3462.207);
   VbbHcc_algo_H_mass_stack_1->SetEntries(13324);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_1,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_2 = new TH1D("VbbHcc_algo_H_mass_stack_2","",40,0,400);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(5,1.153806);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(6,5.29915);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(7,10.86304);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(8,34.58762);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(9,71.66011);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(10,49.39766);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(11,19.46303);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(12,20.29595);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(13,14.16459);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(14,16.39632);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(15,17.39284);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(16,17.20913);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(17,22.07068);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(18,16.87175);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(19,17.97203);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(20,22.80853);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(21,20.17935);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(22,22.23326);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(23,19.02024);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(24,18.88929);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(25,18.6996);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(26,23.17226);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(27,21.09826);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(28,17.54476);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(29,17.53138);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(30,23.11084);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(31,19.9668);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(32,20.93045);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(33,20.44471);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(34,20.42115);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(35,16.41586);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(36,21.3554);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(37,15.11363);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(38,15.79205);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(39,15.24604);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(40,17.2181);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(41,1001.097);
   VbbHcc_algo_H_mass_stack_2->SetBinError(5,0.3537483);
   VbbHcc_algo_H_mass_stack_2->SetBinError(6,1.030246);
   VbbHcc_algo_H_mass_stack_2->SetBinError(7,1.520853);
   VbbHcc_algo_H_mass_stack_2->SetBinError(8,3.147291);
   VbbHcc_algo_H_mass_stack_2->SetBinError(9,4.49659);
   VbbHcc_algo_H_mass_stack_2->SetBinError(10,3.642514);
   VbbHcc_algo_H_mass_stack_2->SetBinError(11,2.115643);
   VbbHcc_algo_H_mass_stack_2->SetBinError(12,4.999247);
   VbbHcc_algo_H_mass_stack_2->SetBinError(13,1.632955);
   VbbHcc_algo_H_mass_stack_2->SetBinError(14,1.805323);
   VbbHcc_algo_H_mass_stack_2->SetBinError(15,1.793877);
   VbbHcc_algo_H_mass_stack_2->SetBinError(16,1.689447);
   VbbHcc_algo_H_mass_stack_2->SetBinError(17,2.095603);
   VbbHcc_algo_H_mass_stack_2->SetBinError(18,1.959702);
   VbbHcc_algo_H_mass_stack_2->SetBinError(19,1.867664);
   VbbHcc_algo_H_mass_stack_2->SetBinError(20,2.218279);
   VbbHcc_algo_H_mass_stack_2->SetBinError(21,2.030781);
   VbbHcc_algo_H_mass_stack_2->SetBinError(22,2.053928);
   VbbHcc_algo_H_mass_stack_2->SetBinError(23,1.72922);
   VbbHcc_algo_H_mass_stack_2->SetBinError(24,1.806809);
   VbbHcc_algo_H_mass_stack_2->SetBinError(25,1.776224);
   VbbHcc_algo_H_mass_stack_2->SetBinError(26,2.299723);
   VbbHcc_algo_H_mass_stack_2->SetBinError(27,2.054893);
   VbbHcc_algo_H_mass_stack_2->SetBinError(28,1.634524);
   VbbHcc_algo_H_mass_stack_2->SetBinError(29,1.792954);
   VbbHcc_algo_H_mass_stack_2->SetBinError(30,2.012833);
   VbbHcc_algo_H_mass_stack_2->SetBinError(31,1.865153);
   VbbHcc_algo_H_mass_stack_2->SetBinError(32,1.98191);
   VbbHcc_algo_H_mass_stack_2->SetBinError(33,1.976557);
   VbbHcc_algo_H_mass_stack_2->SetBinError(34,1.971596);
   VbbHcc_algo_H_mass_stack_2->SetBinError(35,1.550437);
   VbbHcc_algo_H_mass_stack_2->SetBinError(36,2.103717);
   VbbHcc_algo_H_mass_stack_2->SetBinError(37,1.444571);
   VbbHcc_algo_H_mass_stack_2->SetBinError(38,1.627517);
   VbbHcc_algo_H_mass_stack_2->SetBinError(39,1.59963);
   VbbHcc_algo_H_mass_stack_2->SetBinError(40,1.699951);
   VbbHcc_algo_H_mass_stack_2->SetBinError(41,13.9743);
   VbbHcc_algo_H_mass_stack_2->SetEntries(21685);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_2,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_3 = new TH1D("VbbHcc_algo_H_mass_stack_3","",40,0,400);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(2,0.06991783);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(3,0.08380103);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(4,1.612452);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(5,16.24227);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(6,62.11113);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(7,158.3762);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(8,437.7195);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(9,785.1096);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(10,634.1636);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(11,447.324);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(12,436.8711);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(13,436.9666);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(14,442.7595);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(15,432.2875);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(16,414.3801);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(17,385.5093);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(18,371.6413);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(19,345.7492);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(20,325.3974);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(21,311.8564);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(22,295.0475);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(23,286.0099);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(24,275.8982);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(25,265.4283);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(26,257.9326);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(27,251.7787);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(28,242.1745);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(29,227.3116);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(30,234.4107);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(31,228.3261);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(32,226.6155);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(33,221.0122);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(34,213.314);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(35,200.7084);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(36,202.1003);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(37,196.9993);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(38,192.2498);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(39,194.5443);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(40,179.3315);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(41,9634.486);
   VbbHcc_algo_H_mass_stack_3->SetBinError(2,0.06991783);
   VbbHcc_algo_H_mass_stack_3->SetBinError(3,0.05946634);
   VbbHcc_algo_H_mass_stack_3->SetBinError(4,0.3134929);
   VbbHcc_algo_H_mass_stack_3->SetBinError(5,1.075349);
   VbbHcc_algo_H_mass_stack_3->SetBinError(6,2.157833);
   VbbHcc_algo_H_mass_stack_3->SetBinError(7,3.391753);
   VbbHcc_algo_H_mass_stack_3->SetBinError(8,5.762625);
   VbbHcc_algo_H_mass_stack_3->SetBinError(9,7.95665);
   VbbHcc_algo_H_mass_stack_3->SetBinError(10,7.592115);
   VbbHcc_algo_H_mass_stack_3->SetBinError(11,5.752446);
   VbbHcc_algo_H_mass_stack_3->SetBinError(12,6.015992);
   VbbHcc_algo_H_mass_stack_3->SetBinError(13,5.938372);
   VbbHcc_algo_H_mass_stack_3->SetBinError(14,5.808037);
   VbbHcc_algo_H_mass_stack_3->SetBinError(15,5.750259);
   VbbHcc_algo_H_mass_stack_3->SetBinError(16,5.626626);
   VbbHcc_algo_H_mass_stack_3->SetBinError(17,5.460072);
   VbbHcc_algo_H_mass_stack_3->SetBinError(18,5.384207);
   VbbHcc_algo_H_mass_stack_3->SetBinError(19,5.283831);
   VbbHcc_algo_H_mass_stack_3->SetBinError(20,5.410276);
   VbbHcc_algo_H_mass_stack_3->SetBinError(21,5.707571);
   VbbHcc_algo_H_mass_stack_3->SetBinError(22,4.831366);
   VbbHcc_algo_H_mass_stack_3->SetBinError(23,4.91687);
   VbbHcc_algo_H_mass_stack_3->SetBinError(24,4.635643);
   VbbHcc_algo_H_mass_stack_3->SetBinError(25,4.646638);
   VbbHcc_algo_H_mass_stack_3->SetBinError(26,4.390375);
   VbbHcc_algo_H_mass_stack_3->SetBinError(27,4.298548);
   VbbHcc_algo_H_mass_stack_3->SetBinError(28,4.228376);
   VbbHcc_algo_H_mass_stack_3->SetBinError(29,4.019402);
   VbbHcc_algo_H_mass_stack_3->SetBinError(30,4.151834);
   VbbHcc_algo_H_mass_stack_3->SetBinError(31,4.349192);
   VbbHcc_algo_H_mass_stack_3->SetBinError(32,4.154638);
   VbbHcc_algo_H_mass_stack_3->SetBinError(33,3.993849);
   VbbHcc_algo_H_mass_stack_3->SetBinError(34,4.154793);
   VbbHcc_algo_H_mass_stack_3->SetBinError(35,3.806393);
   VbbHcc_algo_H_mass_stack_3->SetBinError(36,3.874599);
   VbbHcc_algo_H_mass_stack_3->SetBinError(37,4.495153);
   VbbHcc_algo_H_mass_stack_3->SetBinError(38,4.891448);
   VbbHcc_algo_H_mass_stack_3->SetBinError(39,5.003908);
   VbbHcc_algo_H_mass_stack_3->SetBinError(40,3.570912);
   VbbHcc_algo_H_mass_stack_3->SetBinError(41,27.59454);
   VbbHcc_algo_H_mass_stack_3->SetEntries(319331);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_3,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_4 = new TH1D("VbbHcc_algo_H_mass_stack_4","",40,0,400);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(4,0.5886523);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(5,3.188961);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(6,17.2822);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(7,33.1883);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(8,38.60094);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(9,52.59339);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(10,62.83876);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(11,50.07342);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(12,37.92596);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(13,39.64555);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(14,31.26671);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(15,35.10023);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(16,27.11972);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(17,38.39346);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(18,25.55593);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(19,23.95123);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(20,25.14042);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(21,26.74825);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(22,25.11816);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(23,21.14099);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(24,23.10773);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(25,17.75868);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(26,24.36815);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(27,21.09353);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(28,16.51012);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(29,22.186);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(30,17.57594);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(31,21.83928);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(32,15.97817);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(33,18.60794);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(34,14.7288);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(35,17.2768);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(36,20.6834);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(37,14.87319);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(38,17.59178);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(39,13.47061);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(40,13.40788);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(41,813.8934);
   VbbHcc_algo_H_mass_stack_4->SetBinError(4,0.5886523);
   VbbHcc_algo_H_mass_stack_4->SetBinError(5,1.350069);
   VbbHcc_algo_H_mass_stack_4->SetBinError(6,5.992337);
   VbbHcc_algo_H_mass_stack_4->SetBinError(7,5.98495);
   VbbHcc_algo_H_mass_stack_4->SetBinError(8,6.851833);
   VbbHcc_algo_H_mass_stack_4->SetBinError(9,8.371057);
   VbbHcc_algo_H_mass_stack_4->SetBinError(10,5.09241);
   VbbHcc_algo_H_mass_stack_4->SetBinError(11,4.648977);
   VbbHcc_algo_H_mass_stack_4->SetBinError(12,3.930397);
   VbbHcc_algo_H_mass_stack_4->SetBinError(13,7.590548);
   VbbHcc_algo_H_mass_stack_4->SetBinError(14,3.468608);
   VbbHcc_algo_H_mass_stack_4->SetBinError(15,6.609678);
   VbbHcc_algo_H_mass_stack_4->SetBinError(16,3.242987);
   VbbHcc_algo_H_mass_stack_4->SetBinError(17,7.322654);
   VbbHcc_algo_H_mass_stack_4->SetBinError(18,3.196801);
   VbbHcc_algo_H_mass_stack_4->SetBinError(19,2.940531);
   VbbHcc_algo_H_mass_stack_4->SetBinError(20,2.958092);
   VbbHcc_algo_H_mass_stack_4->SetBinError(21,3.322095);
   VbbHcc_algo_H_mass_stack_4->SetBinError(22,3.029925);
   VbbHcc_algo_H_mass_stack_4->SetBinError(23,2.711367);
   VbbHcc_algo_H_mass_stack_4->SetBinError(24,3.076694);
   VbbHcc_algo_H_mass_stack_4->SetBinError(25,2.425727);
   VbbHcc_algo_H_mass_stack_4->SetBinError(26,6.348692);
   VbbHcc_algo_H_mass_stack_4->SetBinError(27,2.860766);
   VbbHcc_algo_H_mass_stack_4->SetBinError(28,2.962206);
   VbbHcc_algo_H_mass_stack_4->SetBinError(29,4.788624);
   VbbHcc_algo_H_mass_stack_4->SetBinError(30,2.45905);
   VbbHcc_algo_H_mass_stack_4->SetBinError(31,3.838425);
   VbbHcc_algo_H_mass_stack_4->SetBinError(32,2.523428);
   VbbHcc_algo_H_mass_stack_4->SetBinError(33,2.655925);
   VbbHcc_algo_H_mass_stack_4->SetBinError(34,2.326647);
   VbbHcc_algo_H_mass_stack_4->SetBinError(35,2.568388);
   VbbHcc_algo_H_mass_stack_4->SetBinError(36,5.476605);
   VbbHcc_algo_H_mass_stack_4->SetBinError(37,2.266709);
   VbbHcc_algo_H_mass_stack_4->SetBinError(38,2.65242);
   VbbHcc_algo_H_mass_stack_4->SetBinError(39,2.124805);
   VbbHcc_algo_H_mass_stack_4->SetBinError(40,2.170731);
   VbbHcc_algo_H_mass_stack_4->SetBinError(41,23.2333);
   VbbHcc_algo_H_mass_stack_4->SetEntries(8300);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_4,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_5 = new TH1D("VbbHcc_algo_H_mass_stack_5","",40,0,400);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(6,0.2398104);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(7,9.72477);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(8,18.45946);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(9,51.80681);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(10,39.29332);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(11,22.36076);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(12,14.1193);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(13,15.30302);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(14,13.33682);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(15,20.84782);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(16,24.00718);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(17,5.899069);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(18,7.394926);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(19,13.8185);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(20,10.23613);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(21,17.96216);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(22,12.88705);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(23,11.95396);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(24,15.42661);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(25,16.70051);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(26,14.48872);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(27,14.81677);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(28,19.07349);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(29,12.09049);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(30,5.607644);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(31,6.718959);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(32,8.243443);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(33,7.64153);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(34,7.004872);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(35,6.333026);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(36,6.481589);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(37,6.591425);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(38,8.9915);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(39,7.333875);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(40,8.176136);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(41,399.8699);
   VbbHcc_algo_H_mass_stack_5->SetBinError(6,0.1696427);
   VbbHcc_algo_H_mass_stack_5->SetBinError(7,4.320274);
   VbbHcc_algo_H_mass_stack_5->SetBinError(8,5.452794);
   VbbHcc_algo_H_mass_stack_5->SetBinError(9,9.407127);
   VbbHcc_algo_H_mass_stack_5->SetBinError(10,8.01136);
   VbbHcc_algo_H_mass_stack_5->SetBinError(11,6.162379);
   VbbHcc_algo_H_mass_stack_5->SetBinError(12,4.311981);
   VbbHcc_algo_H_mass_stack_5->SetBinError(13,3.931162);
   VbbHcc_algo_H_mass_stack_5->SetBinError(14,3.82065);
   VbbHcc_algo_H_mass_stack_5->SetBinError(15,5.707773);
   VbbHcc_algo_H_mass_stack_5->SetBinError(16,11.67954);
   VbbHcc_algo_H_mass_stack_5->SetBinError(17,1.209261);
   VbbHcc_algo_H_mass_stack_5->SetBinError(18,3.128543);
   VbbHcc_algo_H_mass_stack_5->SetBinError(19,4.127663);
   VbbHcc_algo_H_mass_stack_5->SetBinError(20,3.130675);
   VbbHcc_algo_H_mass_stack_5->SetBinError(21,5.224474);
   VbbHcc_algo_H_mass_stack_5->SetBinError(22,3.795497);
   VbbHcc_algo_H_mass_stack_5->SetBinError(23,4.101571);
   VbbHcc_algo_H_mass_stack_5->SetBinError(24,6.205543);
   VbbHcc_algo_H_mass_stack_5->SetBinError(25,5.226333);
   VbbHcc_algo_H_mass_stack_5->SetBinError(26,4.202882);
   VbbHcc_algo_H_mass_stack_5->SetBinError(27,4.903778);
   VbbHcc_algo_H_mass_stack_5->SetBinError(28,7.586481);
   VbbHcc_algo_H_mass_stack_5->SetBinError(29,3.894454);
   VbbHcc_algo_H_mass_stack_5->SetBinError(30,1.347659);
   VbbHcc_algo_H_mass_stack_5->SetBinError(31,3.237813);
   VbbHcc_algo_H_mass_stack_5->SetBinError(32,2.628035);
   VbbHcc_algo_H_mass_stack_5->SetBinError(33,3.239079);
   VbbHcc_algo_H_mass_stack_5->SetBinError(34,2.550967);
   VbbHcc_algo_H_mass_stack_5->SetBinError(35,2.896014);
   VbbHcc_algo_H_mass_stack_5->SetBinError(36,2.432794);
   VbbHcc_algo_H_mass_stack_5->SetBinError(37,1.30755);
   VbbHcc_algo_H_mass_stack_5->SetBinError(38,2.561292);
   VbbHcc_algo_H_mass_stack_5->SetBinError(39,3.251542);
   VbbHcc_algo_H_mass_stack_5->SetBinError(40,3.410096);
   VbbHcc_algo_H_mass_stack_5->SetBinError(41,26.79139);
   VbbHcc_algo_H_mass_stack_5->SetEntries(3417);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_5,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_6 = new TH1D("VbbHcc_algo_H_mass_stack_6","",40,0,400);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(15,0.3366028);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(18,0.4233786);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(36,0.3044658);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(38,0.419823);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(39,0.1594108);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(41,0.6304374);
   VbbHcc_algo_H_mass_stack_6->SetBinError(15,0.3366028);
   VbbHcc_algo_H_mass_stack_6->SetBinError(18,0.4233786);
   VbbHcc_algo_H_mass_stack_6->SetBinError(36,0.3044658);
   VbbHcc_algo_H_mass_stack_6->SetBinError(38,0.419823);
   VbbHcc_algo_H_mass_stack_6->SetBinError(39,0.1594108);
   VbbHcc_algo_H_mass_stack_6->SetBinError(41,0.3715191);
   VbbHcc_algo_H_mass_stack_6->SetEntries(8);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_6,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_7 = new TH1D("VbbHcc_algo_H_mass_stack_7","",40,0,400);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(7,0.1839564);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(8,1.60753);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(9,3.788028);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(10,1.750209);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(11,1.617059);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(15,0.2205047);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(16,0.356611);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(17,0.4580334);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(19,0.2588144);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(20,0.4514739);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(22,0.2217927);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(24,0.2183893);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(25,0.05508534);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(27,0.425076);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(29,0.8086329);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(32,0.312846);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(34,0.2276773);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(36,0.4422973);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(38,0.2905367);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(41,6.65492);
   VbbHcc_algo_H_mass_stack_7->SetBinError(7,0.1839564);
   VbbHcc_algo_H_mass_stack_7->SetBinError(8,0.6350668);
   VbbHcc_algo_H_mass_stack_7->SetBinError(9,0.962091);
   VbbHcc_algo_H_mass_stack_7->SetBinError(10,0.6271734);
   VbbHcc_algo_H_mass_stack_7->SetBinError(11,0.6200415);
   VbbHcc_algo_H_mass_stack_7->SetBinError(15,0.2205047);
   VbbHcc_algo_H_mass_stack_7->SetBinError(16,0.2616503);
   VbbHcc_algo_H_mass_stack_7->SetBinError(17,0.3240002);
   VbbHcc_algo_H_mass_stack_7->SetBinError(19,0.2588144);
   VbbHcc_algo_H_mass_stack_7->SetBinError(20,0.3200118);
   VbbHcc_algo_H_mass_stack_7->SetBinError(22,0.2217927);
   VbbHcc_algo_H_mass_stack_7->SetBinError(24,0.2183893);
   VbbHcc_algo_H_mass_stack_7->SetBinError(25,0.05508534);
   VbbHcc_algo_H_mass_stack_7->SetBinError(27,0.3008589);
   VbbHcc_algo_H_mass_stack_7->SetBinError(29,0.4702075);
   VbbHcc_algo_H_mass_stack_7->SetBinError(32,0.312846);
   VbbHcc_algo_H_mass_stack_7->SetBinError(34,0.2276773);
   VbbHcc_algo_H_mass_stack_7->SetBinError(36,0.3127528);
   VbbHcc_algo_H_mass_stack_7->SetBinError(38,0.2905367);
   VbbHcc_algo_H_mass_stack_7->SetBinError(41,1.23469);
   VbbHcc_algo_H_mass_stack_7->SetEntries(92);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_7,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_8 = new TH1D("VbbHcc_algo_H_mass_stack_8","",40,0,400);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(7,0.2191845);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(8,0.4426614);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(9,2.993677);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(10,3.738532);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(11,4.131721);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(12,0.7112967);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(13,0.4385557);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(15,0.2293122);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(16,0.298964);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(18,0.519589);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(19,0.2293122);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(20,0.2399952);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(22,0.5223305);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(26,0.298964);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(29,0.2214053);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(30,0.3008871);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(33,0.2478375);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(34,0.3448662);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(38,0.2263142);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(41,6.433673);
   VbbHcc_algo_H_mass_stack_8->SetBinError(7,0.2191845);
   VbbHcc_algo_H_mass_stack_8->SetBinError(8,0.3135121);
   VbbHcc_algo_H_mass_stack_8->SetBinError(9,0.8385676);
   VbbHcc_algo_H_mass_stack_8->SetBinError(10,0.9204954);
   VbbHcc_algo_H_mass_stack_8->SetBinError(11,0.9911567);
   VbbHcc_algo_H_mass_stack_8->SetBinError(12,0.4124481);
   VbbHcc_algo_H_mass_stack_8->SetBinError(13,0.317638);
   VbbHcc_algo_H_mass_stack_8->SetBinError(15,0.2293122);
   VbbHcc_algo_H_mass_stack_8->SetBinError(16,0.298964);
   VbbHcc_algo_H_mass_stack_8->SetBinError(18,0.3723374);
   VbbHcc_algo_H_mass_stack_8->SetBinError(19,0.2293122);
   VbbHcc_algo_H_mass_stack_8->SetBinError(20,0.2399952);
   VbbHcc_algo_H_mass_stack_8->SetBinError(22,0.3738016);
   VbbHcc_algo_H_mass_stack_8->SetBinError(26,0.298964);
   VbbHcc_algo_H_mass_stack_8->SetBinError(29,0.2214053);
   VbbHcc_algo_H_mass_stack_8->SetBinError(30,0.3008871);
   VbbHcc_algo_H_mass_stack_8->SetBinError(33,0.2478375);
   VbbHcc_algo_H_mass_stack_8->SetBinError(34,0.247432);
   VbbHcc_algo_H_mass_stack_8->SetBinError(38,0.2263142);
   VbbHcc_algo_H_mass_stack_8->SetBinError(41,1.236497);
   VbbHcc_algo_H_mass_stack_8->SetEntries(99);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_8,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_9 = new TH1D("VbbHcc_algo_H_mass_stack_9","",40,0,400);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(5,0.01372001);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(6,0.03896486);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(7,0.08921689);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(8,0.4015092);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(9,1.329754);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(10,2.340859);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(11,1.412419);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(12,0.6087861);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(13,0.3858355);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(14,0.2469043);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(15,0.1749916);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(16,0.1783924);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(17,0.1236072);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(18,0.1340274);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(19,0.1080935);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(20,0.09985017);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(21,0.09221388);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(22,0.09901554);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(23,0.0622225);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(24,0.09381494);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(25,0.1048152);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(26,0.08581137);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(27,0.1533625);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(28,0.1105664);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(29,0.1471435);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(30,0.07977114);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(31,0.08329753);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(32,0.05142448);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(33,0.08548667);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(34,0.08333552);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(35,0.06194742);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(36,0.08626157);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(37,0.06284317);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(38,0.06779126);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(39,0.07142975);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(40,0.07019193);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(41,3.692153);
   VbbHcc_algo_H_mass_stack_9->SetBinError(5,0.006195447);
   VbbHcc_algo_H_mass_stack_9->SetBinError(6,0.0125669);
   VbbHcc_algo_H_mass_stack_9->SetBinError(7,0.01679554);
   VbbHcc_algo_H_mass_stack_9->SetBinError(8,0.03345516);
   VbbHcc_algo_H_mass_stack_9->SetBinError(9,0.06669132);
   VbbHcc_algo_H_mass_stack_9->SetBinError(10,0.08208055);
   VbbHcc_algo_H_mass_stack_9->SetBinError(11,0.0631626);
   VbbHcc_algo_H_mass_stack_9->SetBinError(12,0.0412445);
   VbbHcc_algo_H_mass_stack_9->SetBinError(13,0.03280969);
   VbbHcc_algo_H_mass_stack_9->SetBinError(14,0.02652704);
   VbbHcc_algo_H_mass_stack_9->SetBinError(15,0.02217573);
   VbbHcc_algo_H_mass_stack_9->SetBinError(16,0.02226176);
   VbbHcc_algo_H_mass_stack_9->SetBinError(17,0.01847434);
   VbbHcc_algo_H_mass_stack_9->SetBinError(18,0.0192167);
   VbbHcc_algo_H_mass_stack_9->SetBinError(19,0.0183485);
   VbbHcc_algo_H_mass_stack_9->SetBinError(20,0.01626991);
   VbbHcc_algo_H_mass_stack_9->SetBinError(21,0.01530739);
   VbbHcc_algo_H_mass_stack_9->SetBinError(22,0.01698207);
   VbbHcc_algo_H_mass_stack_9->SetBinError(23,0.01264546);
   VbbHcc_algo_H_mass_stack_9->SetBinError(24,0.0159309);
   VbbHcc_algo_H_mass_stack_9->SetBinError(25,0.01747433);
   VbbHcc_algo_H_mass_stack_9->SetBinError(26,0.01520673);
   VbbHcc_algo_H_mass_stack_9->SetBinError(27,0.0476225);
   VbbHcc_algo_H_mass_stack_9->SetBinError(28,0.01719746);
   VbbHcc_algo_H_mass_stack_9->SetBinError(29,0.04347595);
   VbbHcc_algo_H_mass_stack_9->SetBinError(30,0.01456747);
   VbbHcc_algo_H_mass_stack_9->SetBinError(31,0.01516924);
   VbbHcc_algo_H_mass_stack_9->SetBinError(32,0.01162811);
   VbbHcc_algo_H_mass_stack_9->SetBinError(33,0.01467162);
   VbbHcc_algo_H_mass_stack_9->SetBinError(34,0.01540749);
   VbbHcc_algo_H_mass_stack_9->SetBinError(35,0.01336518);
   VbbHcc_algo_H_mass_stack_9->SetBinError(36,0.01545868);
   VbbHcc_algo_H_mass_stack_9->SetBinError(37,0.01301407);
   VbbHcc_algo_H_mass_stack_9->SetBinError(38,0.01410891);
   VbbHcc_algo_H_mass_stack_9->SetBinError(39,0.01353867);
   VbbHcc_algo_H_mass_stack_9->SetBinError(40,0.01377707);
   VbbHcc_algo_H_mass_stack_9->SetBinError(41,0.1021074);
   VbbHcc_algo_H_mass_stack_9->SetEntries(5213);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_9,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_10 = new TH1D("VbbHcc_algo_H_mass_stack_10","",40,0,400);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(4,0.0007014158);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(5,0.008729611);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(6,0.02808743);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(7,0.08541676);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(8,0.2863864);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(9,0.8141088);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(10,1.245074);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(11,0.8097571);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(12,0.4631871);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(13,0.2828073);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(14,0.2045842);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(15,0.1764511);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(16,0.1151709);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(17,0.1159734);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(18,0.1227823);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(19,0.1050645);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(20,0.1058517);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(21,0.1067354);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(22,0.09452245);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(23,0.09113959);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(24,0.08707841);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(25,0.08031242);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(26,0.09012077);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(27,0.09135781);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(28,0.0838666);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(29,0.07397257);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(30,0.07536644);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(31,0.07226469);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(32,0.0754186);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(33,0.05842015);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(34,0.07595963);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(35,0.06936556);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(36,0.06847596);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(37,0.04765841);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(38,0.0640431);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(39,0.0522079);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(40,0.05448756);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(41,3.629536);
   VbbHcc_algo_H_mass_stack_10->SetBinError(4,0.0007014158);
   VbbHcc_algo_H_mass_stack_10->SetBinError(5,0.002390575);
   VbbHcc_algo_H_mass_stack_10->SetBinError(6,0.004252486);
   VbbHcc_algo_H_mass_stack_10->SetBinError(7,0.007354521);
   VbbHcc_algo_H_mass_stack_10->SetBinError(8,0.01357579);
   VbbHcc_algo_H_mass_stack_10->SetBinError(9,0.0228379);
   VbbHcc_algo_H_mass_stack_10->SetBinError(10,0.02828443);
   VbbHcc_algo_H_mass_stack_10->SetBinError(11,0.02281504);
   VbbHcc_algo_H_mass_stack_10->SetBinError(12,0.01725017);
   VbbHcc_algo_H_mass_stack_10->SetBinError(13,0.01344494);
   VbbHcc_algo_H_mass_stack_10->SetBinError(14,0.01140807);
   VbbHcc_algo_H_mass_stack_10->SetBinError(15,0.01059219);
   VbbHcc_algo_H_mass_stack_10->SetBinError(16,0.008502395);
   VbbHcc_algo_H_mass_stack_10->SetBinError(17,0.00860543);
   VbbHcc_algo_H_mass_stack_10->SetBinError(18,0.008825259);
   VbbHcc_algo_H_mass_stack_10->SetBinError(19,0.008169422);
   VbbHcc_algo_H_mass_stack_10->SetBinError(20,0.008266075);
   VbbHcc_algo_H_mass_stack_10->SetBinError(21,0.008222423);
   VbbHcc_algo_H_mass_stack_10->SetBinError(22,0.007747201);
   VbbHcc_algo_H_mass_stack_10->SetBinError(23,0.00758629);
   VbbHcc_algo_H_mass_stack_10->SetBinError(24,0.007421182);
   VbbHcc_algo_H_mass_stack_10->SetBinError(25,0.00713098);
   VbbHcc_algo_H_mass_stack_10->SetBinError(26,0.007561039);
   VbbHcc_algo_H_mass_stack_10->SetBinError(27,0.007614617);
   VbbHcc_algo_H_mass_stack_10->SetBinError(28,0.007311858);
   VbbHcc_algo_H_mass_stack_10->SetBinError(29,0.006783212);
   VbbHcc_algo_H_mass_stack_10->SetBinError(30,0.006918942);
   VbbHcc_algo_H_mass_stack_10->SetBinError(31,0.006763084);
   VbbHcc_algo_H_mass_stack_10->SetBinError(32,0.006892027);
   VbbHcc_algo_H_mass_stack_10->SetBinError(33,0.006107394);
   VbbHcc_algo_H_mass_stack_10->SetBinError(34,0.006938904);
   VbbHcc_algo_H_mass_stack_10->SetBinError(35,0.006604753);
   VbbHcc_algo_H_mass_stack_10->SetBinError(36,0.006567669);
   VbbHcc_algo_H_mass_stack_10->SetBinError(37,0.005457636);
   VbbHcc_algo_H_mass_stack_10->SetBinError(38,0.006397079);
   VbbHcc_algo_H_mass_stack_10->SetBinError(39,0.005814141);
   VbbHcc_algo_H_mass_stack_10->SetBinError(40,0.005876012);
   VbbHcc_algo_H_mass_stack_10->SetBinError(41,0.04798754);
   VbbHcc_algo_H_mass_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_10,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_11 = new TH1D("VbbHcc_algo_H_mass_stack_11","",40,0,400);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(6,0.002305427);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(7,0.006038112);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(8,0.002093521);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(9,0.002444891);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(10,0.01764251);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(11,0.03290973);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(12,0.04215389);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(13,0.1315712);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(14,0.08586556);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(15,0.07257823);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(16,0.03172564);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(17,0.006524223);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(18,0.004692652);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(19,0.007643939);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(22,0.00141524);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(23,0.002305427);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(25,0.002532203);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(26,0.005017212);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(28,0.002434505);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(29,0.002736771);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(31,0.002434505);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(35,0.003340468);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(41,0.1143402);
   VbbHcc_algo_H_mass_stack_11->SetBinError(6,0.002305427);
   VbbHcc_algo_H_mass_stack_11->SetBinError(7,0.004288213);
   VbbHcc_algo_H_mass_stack_11->SetBinError(8,0.004198421);
   VbbHcc_algo_H_mass_stack_11->SetBinError(9,0.002444891);
   VbbHcc_algo_H_mass_stack_11->SetBinError(10,0.006681118);
   VbbHcc_algo_H_mass_stack_11->SetBinError(11,0.009225205);
   VbbHcc_algo_H_mass_stack_11->SetBinError(12,0.01139722);
   VbbHcc_algo_H_mass_stack_11->SetBinError(13,0.01922724);
   VbbHcc_algo_H_mass_stack_11->SetBinError(14,0.01542132);
   VbbHcc_algo_H_mass_stack_11->SetBinError(15,0.01409482);
   VbbHcc_algo_H_mass_stack_11->SetBinError(16,0.009348123);
   VbbHcc_algo_H_mass_stack_11->SetBinError(17,0.003806054);
   VbbHcc_algo_H_mass_stack_11->SetBinError(18,0.003322188);
   VbbHcc_algo_H_mass_stack_11->SetBinError(19,0.00442821);
   VbbHcc_algo_H_mass_stack_11->SetBinError(22,0.00141524);
   VbbHcc_algo_H_mass_stack_11->SetBinError(23,0.002305427);
   VbbHcc_algo_H_mass_stack_11->SetBinError(25,0.002532203);
   VbbHcc_algo_H_mass_stack_11->SetBinError(26,0.003549252);
   VbbHcc_algo_H_mass_stack_11->SetBinError(28,0.002434505);
   VbbHcc_algo_H_mass_stack_11->SetBinError(29,0.002736771);
   VbbHcc_algo_H_mass_stack_11->SetBinError(31,0.002434505);
   VbbHcc_algo_H_mass_stack_11->SetBinError(35,0.003340468);
   VbbHcc_algo_H_mass_stack_11->SetBinError(41,0.01809339);
   VbbHcc_algo_H_mass_stack_11->SetEntries(246);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_11,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_12 = new TH1D("VbbHcc_algo_H_mass_stack_12","",40,0,400);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(6,0.000320559);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(7,0.0009988827);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(8,0.002520072);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(9,0.001743032);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(10,0.008190097);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(11,0.01620301);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(12,0.03355554);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(13,0.03074853);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(14,0.03372328);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(15,0.01474211);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(16,0.004024231);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(17,0.00255199);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(18,0.001311585);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(19,0.002830344);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(20,0.001480583);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(21,0.0009827142);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(22,0.001159339);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(23,0.001536343);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(24,0.0002938073);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(25,0.001259596);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(27,0.0006734966);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(28,0.0003186975);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(29,0.001561538);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(31,0.0003156401);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(32,0.001536993);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(33,0.001326486);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(34,0.0006496231);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(35,0.001651635);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(36,0.0003400733);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(37,0.0003186975);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(39,0.0004346981);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(40,0.001089224);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(41,0.05034856);
   VbbHcc_algo_H_mass_stack_12->SetBinError(6,0.000320559);
   VbbHcc_algo_H_mass_stack_12->SetBinError(7,0.0005777033);
   VbbHcc_algo_H_mass_stack_12->SetBinError(8,0.000893076);
   VbbHcc_algo_H_mass_stack_12->SetBinError(9,0.0007983867);
   VbbHcc_algo_H_mass_stack_12->SetBinError(10,0.001720373);
   VbbHcc_algo_H_mass_stack_12->SetBinError(11,0.002994198);
   VbbHcc_algo_H_mass_stack_12->SetBinError(12,0.003457401);
   VbbHcc_algo_H_mass_stack_12->SetBinError(13,0.003307872);
   VbbHcc_algo_H_mass_stack_12->SetBinError(14,0.003840097);
   VbbHcc_algo_H_mass_stack_12->SetBinError(15,0.002205157);
   VbbHcc_algo_H_mass_stack_12->SetBinError(16,0.001114267);
   VbbHcc_algo_H_mass_stack_12->SetBinError(17,0.0009767522);
   VbbHcc_algo_H_mass_stack_12->SetBinError(18,0.0006223196);
   VbbHcc_algo_H_mass_stack_12->SetBinError(19,0.001081545);
   VbbHcc_algo_H_mass_stack_12->SetBinError(20,0.0006660993);
   VbbHcc_algo_H_mass_stack_12->SetBinError(21,0.000536952);
   VbbHcc_algo_H_mass_stack_12->SetBinError(22,0.0006780651);
   VbbHcc_algo_H_mass_stack_12->SetBinError(23,0.0007124749);
   VbbHcc_algo_H_mass_stack_12->SetBinError(24,0.0002938073);
   VbbHcc_algo_H_mass_stack_12->SetBinError(25,0.0007275318);
   VbbHcc_algo_H_mass_stack_12->SetBinError(27,0.0004762572);
   VbbHcc_algo_H_mass_stack_12->SetBinError(28,0.0003186975);
   VbbHcc_algo_H_mass_stack_12->SetBinError(29,0.0007009007);
   VbbHcc_algo_H_mass_stack_12->SetBinError(31,0.0003156401);
   VbbHcc_algo_H_mass_stack_12->SetBinError(32,0.0007734553);
   VbbHcc_algo_H_mass_stack_12->SetBinError(33,0.0006667491);
   VbbHcc_algo_H_mass_stack_12->SetBinError(34,0.0004593923);
   VbbHcc_algo_H_mass_stack_12->SetBinError(35,0.0007658357);
   VbbHcc_algo_H_mass_stack_12->SetBinError(36,0.0003400733);
   VbbHcc_algo_H_mass_stack_12->SetBinError(37,0.0003186975);
   VbbHcc_algo_H_mass_stack_12->SetBinError(39,0.0004346981);
   VbbHcc_algo_H_mass_stack_12->SetBinError(40,0.000635451);
   VbbHcc_algo_H_mass_stack_12->SetBinError(41,0.004260372);
   VbbHcc_algo_H_mass_stack_12->SetEntries(653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_mass__205 = new TH1D("VbbHcc_algo_H_mass__205","",40,0,400);
   VbbHcc_algo_H_mass__205->SetBinContent(4,11);
   VbbHcc_algo_H_mass__205->SetBinContent(5,429);
   VbbHcc_algo_H_mass__205->SetBinContent(6,2411);
   VbbHcc_algo_H_mass__205->SetBinContent(7,4509);
   VbbHcc_algo_H_mass__205->SetBinContent(8,6166);
   VbbHcc_algo_H_mass__205->SetBinContent(9,6644);
   VbbHcc_algo_H_mass__205->SetBinContent(10,6299);
   VbbHcc_algo_H_mass__205->SetBinContent(11,5949);
   VbbHcc_algo_H_mass__205->SetBinContent(12,5699);
   VbbHcc_algo_H_mass__205->SetBinContent(13,5605);
   VbbHcc_algo_H_mass__205->SetBinContent(14,5514);
   VbbHcc_algo_H_mass__205->SetBinContent(15,5478);
   VbbHcc_algo_H_mass__205->SetBinContent(16,5259);
   VbbHcc_algo_H_mass__205->SetBinContent(17,5174);
   VbbHcc_algo_H_mass__205->SetBinContent(18,5170);
   VbbHcc_algo_H_mass__205->SetBinContent(19,5131);
   VbbHcc_algo_H_mass__205->SetBinContent(20,4803);
   VbbHcc_algo_H_mass__205->SetBinContent(21,4770);
   VbbHcc_algo_H_mass__205->SetBinContent(22,4610);
   VbbHcc_algo_H_mass__205->SetBinContent(23,4518);
   VbbHcc_algo_H_mass__205->SetBinContent(24,4413);
   VbbHcc_algo_H_mass__205->SetBinContent(25,4239);
   VbbHcc_algo_H_mass__205->SetBinContent(26,4058);
   VbbHcc_algo_H_mass__205->SetBinContent(27,3965);
   VbbHcc_algo_H_mass__205->SetBinContent(28,3940);
   VbbHcc_algo_H_mass__205->SetBinContent(29,3903);
   VbbHcc_algo_H_mass__205->SetBinContent(30,3845);
   VbbHcc_algo_H_mass__205->SetBinContent(31,3655);
   VbbHcc_algo_H_mass__205->SetBinContent(32,3626);
   VbbHcc_algo_H_mass__205->SetBinContent(33,3523);
   VbbHcc_algo_H_mass__205->SetBinContent(34,3595);
   VbbHcc_algo_H_mass__205->SetBinContent(35,3373);
   VbbHcc_algo_H_mass__205->SetBinContent(36,3384);
   VbbHcc_algo_H_mass__205->SetBinContent(37,3282);
   VbbHcc_algo_H_mass__205->SetBinContent(38,3189);
   VbbHcc_algo_H_mass__205->SetBinContent(39,3147);
   VbbHcc_algo_H_mass__205->SetBinContent(40,3085);
   VbbHcc_algo_H_mass__205->SetBinContent(41,146700);
   VbbHcc_algo_H_mass__205->SetEntries(303071);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass__205->SetLineColor(ci);
   VbbHcc_algo_H_mass__205->SetLineWidth(2);
   VbbHcc_algo_H_mass__205->SetMarkerStyle(20);
   VbbHcc_algo_H_mass__205->SetMarkerSize(1.2);
   VbbHcc_algo_H_mass__205->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass__205->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__205->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass__205->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass__205->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__205->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__205->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass__205->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass__205->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass__205->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__205->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__205->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass__205->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass__205->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__205->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_mass_fx1205[40] = {
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
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_algo_H_mass_fy1205[40] = {
   0,
   0.06991783,
   0.08380103,
   2.201806,
   1419.678,
   3802.64,
   3821.872,
   5727.621,
   5030.073,
   4653.176,
   4376.707,
   4591.262,
   4608.322,
   3279.993,
   2865.548,
   3927.75,
   3284.506,
   6393.499,
   2903.438,
   3321.014,
   3772.909,
   2656.639,
   3072.548,
   2284.364,
   2629.861,
   3994.858,
   2538.816,
   4123.933,
   2889.963,
   5987.694,
   1868.596,
   2264.925,
   2032.966,
   1417.048,
   2767.723,
   2296.098,
   4142.729,
   2938.752,
   2152.998,
   2300.96};
   Double_t Graph_from_VbbHcc_algo_H_mass_fex1205[40] = {
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
   Double_t Graph_from_VbbHcc_algo_H_mass_fey1205[40] = {
   0,
   0.06991783,
   0.05946634,
   0.6669257,
   814.9139,
   1134.218,
   972.3809,
   1131.938,
   803.3812,
   751.3475,
   831.6767,
   841.1214,
   839.6329,
   598.3073,
   527.172,
   803.5216,
   655.7235,
   1293.844,
   669.7911,
   939.4974,
   841.9993,
   572.7918,
   684.8522,
   420.3218,
   561.0769,
   987.1748,
   656.1031,
   2417.115,
   732.1513,
   3184.643,
   416.3158,
   615.5345,
   584.3503,
   164.9318,
   721.5953,
   568.0862,
   1884.915,
   894.7232,
   611.1474,
   679.3576};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_algo_H_mass_fx1205,Graph_from_VbbHcc_algo_H_mass_fy1205,Graph_from_VbbHcc_algo_H_mass_fex1205,Graph_from_VbbHcc_algo_H_mass_fey1205);
   gre->SetName("Graph_from_VbbHcc_algo_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_mass1205 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_mass1205","",100,0,440);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->SetMaximum(10089.57);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_mass1205->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_mass1205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_mass1205);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_mass","MC unc. (stat.)","fl");

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
   H_mass_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__206 = new TH1D("data_mc_ratio__206","",40,0,400);
   data_mc_ratio__206->SetBinContent(4,4.995899);
   data_mc_ratio__206->SetBinContent(5,0.3021812);
   data_mc_ratio__206->SetBinContent(6,0.6340332);
   data_mc_ratio__206->SetBinContent(7,1.179788);
   data_mc_ratio__206->SetBinContent(8,1.076538);
   data_mc_ratio__206->SetBinContent(9,1.320856);
   data_mc_ratio__206->SetBinContent(10,1.353699);
   data_mc_ratio__206->SetBinContent(11,1.359241);
   data_mc_ratio__206->SetBinContent(12,1.241271);
   data_mc_ratio__206->SetBinContent(13,1.216278);
   data_mc_ratio__206->SetBinContent(14,1.681101);
   data_mc_ratio__206->SetBinContent(15,1.911676);
   data_mc_ratio__206->SetBinContent(16,1.338934);
   data_mc_ratio__206->SetBinContent(17,1.575275);
   data_mc_ratio__206->SetBinContent(18,0.8086338);
   data_mc_ratio__206->SetBinContent(19,1.767215);
   data_mc_ratio__206->SetBinContent(20,1.446245);
   data_mc_ratio__206->SetBinContent(21,1.264277);
   data_mc_ratio__206->SetBinContent(22,1.735275);
   data_mc_ratio__206->SetBinContent(23,1.470441);
   data_mc_ratio__206->SetBinContent(24,1.931829);
   data_mc_ratio__206->SetBinContent(25,1.611872);
   data_mc_ratio__206->SetBinContent(26,1.015806);
   data_mc_ratio__206->SetBinContent(27,1.561752);
   data_mc_ratio__206->SetBinContent(28,0.9553987);
   data_mc_ratio__206->SetBinContent(29,1.350536);
   data_mc_ratio__206->SetBinContent(30,0.6421504);
   data_mc_ratio__206->SetBinContent(31,1.956014);
   data_mc_ratio__206->SetBinContent(32,1.600936);
   data_mc_ratio__206->SetBinContent(33,1.732936);
   data_mc_ratio__206->SetBinContent(34,2.536964);
   data_mc_ratio__206->SetBinContent(35,1.218691);
   data_mc_ratio__206->SetBinContent(36,1.473805);
   data_mc_ratio__206->SetBinContent(37,0.7922313);
   data_mc_ratio__206->SetBinContent(38,1.085155);
   data_mc_ratio__206->SetBinContent(39,1.461683);
   data_mc_ratio__206->SetBinContent(40,1.340745);
   data_mc_ratio__206->SetBinContent(41,1.3781);
   data_mc_ratio__206->SetBinError(4,1.50632);
   data_mc_ratio__206->SetBinError(5,0.01458945);
   data_mc_ratio__206->SetBinError(6,0.01291259);
   data_mc_ratio__206->SetBinError(7,0.01756969);
   data_mc_ratio__206->SetBinError(8,0.01370969);
   data_mc_ratio__206->SetBinError(9,0.01620468);
   data_mc_ratio__206->SetBinError(10,0.01705636);
   data_mc_ratio__206->SetBinError(11,0.01762278);
   data_mc_ratio__206->SetBinError(12,0.01644248);
   data_mc_ratio__206->SetBinError(13,0.01624595);
   data_mc_ratio__206->SetBinError(14,0.02263917);
   data_mc_ratio__206->SetBinError(15,0.02582875);
   data_mc_ratio__206->SetBinError(16,0.01846323);
   data_mc_ratio__206->SetBinError(17,0.02189995);
   data_mc_ratio__206->SetBinError(18,0.01124622);
   data_mc_ratio__206->SetBinError(19,0.0246711);
   data_mc_ratio__206->SetBinError(20,0.02086823);
   data_mc_ratio__206->SetBinError(21,0.01830555);
   data_mc_ratio__206->SetBinError(22,0.02555748);
   data_mc_ratio__206->SetBinError(23,0.02187633);
   data_mc_ratio__206->SetBinError(24,0.02908049);
   data_mc_ratio__206->SetBinError(25,0.02475705);
   data_mc_ratio__206->SetBinError(26,0.01594611);
   data_mc_ratio__206->SetBinError(27,0.02480221);
   data_mc_ratio__206->SetBinError(28,0.01522077);
   data_mc_ratio__206->SetBinError(29,0.02161758);
   data_mc_ratio__206->SetBinError(30,0.01035592);
   data_mc_ratio__206->SetBinError(31,0.03235402);
   data_mc_ratio__206->SetBinError(32,0.02658643);
   data_mc_ratio__206->SetBinError(33,0.02919619);
   data_mc_ratio__206->SetBinError(34,0.04231213);
   data_mc_ratio__206->SetBinError(35,0.02098386);
   data_mc_ratio__206->SetBinError(36,0.02533522);
   data_mc_ratio__206->SetBinError(37,0.01382874);
   data_mc_ratio__206->SetBinError(38,0.01921606);
   data_mc_ratio__206->SetBinError(39,0.02605582);
   data_mc_ratio__206->SetBinError(40,0.02413895);
   data_mc_ratio__206->SetBinError(41,0.0449696);
   data_mc_ratio__206->SetMinimum(0.4);
   data_mc_ratio__206->SetMaximum(1.6);
   data_mc_ratio__206->SetEntries(336.4325);
   data_mc_ratio__206->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__206->SetLineColor(ci);
   data_mc_ratio__206->SetLineWidth(2);
   data_mc_ratio__206->SetMarkerStyle(20);
   data_mc_ratio__206->SetMarkerSize(1.2);
   data_mc_ratio__206->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__206->GetXaxis()->SetRange(1,30);
   data_mc_ratio__206->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__206->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__206->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__206->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__206->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__206->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__206->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__206->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__206->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__206->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__206->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__206->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__206->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__206->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__206->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__206->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__206->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1206[40] = {
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
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1206[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1206[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1206[40] = {
   0,
   1,
   0.7096134,
   0.3028994,
   0.5740133,
   0.2982711,
   0.2544253,
   0.197628,
   0.1597156,
   0.1614698,
   0.1900234,
   0.1832005,
   0.1821993,
   0.1824112,
   0.183969,
   0.2045755,
   0.1996415,
   0.2023686,
   0.2306889,
   0.2828948,
   0.2231698,
   0.2156077,
   0.2228939,
   0.1839995,
   0.2133485,
   0.2471113,
   0.2584288,
   0.5861189,
   0.2533428,
   0.5318648,
   0.2227961,
   0.2717681,
   0.2874373,
   0.1163911,
   0.260718,
   0.2474137,
   0.4549934,
   0.3044569,
   0.2838588,
   0.2952496};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1206,Graph_from_mc_statistical_error_fy1206,Graph_from_mc_statistical_error_fex1206,Graph_from_mc_statistical_error_fey1206);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1206 = new TH1F("Graph_Graph_from_mc_statistical_error1206","",100,0,440);
   Graph_Graph_from_mc_statistical_error1206->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1206->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1206->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1206->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1206->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1206->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1206->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1206->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1206->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1206->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1206->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1206->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1206->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1206->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1206->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1206->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1206->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1206->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1206);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_algo_18->cd();
   H_mass_algo_18->Modified();
   H_mass_algo_18->cd();
   H_mass_algo_18->SetSelected(H_mass_algo_18);
}
