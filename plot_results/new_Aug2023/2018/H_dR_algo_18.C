void H_dR_algo_18()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Tue Aug 22 09:21:29 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9499975,-343.2278,6.525,342894.5);
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
   st->SetMaximum(293876.9);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",30,0,6);
   st_stack_119->SetMinimum(0.01);
   st_stack_119->SetMaximum(308570.8);
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
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,47941.26);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,67473.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,51003.48);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,47407.01);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,56506.87);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,58649.51);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,63256.37);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,64611.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,84649.81);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,90922.22);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,98906.57);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,106128.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,116492.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,119315.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,122139.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,93816.87);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,89756.94);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,90232.89);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,94492.45);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,64274.39);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,45660.24);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,36318.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,28602.06);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,18159.67);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,15857.79);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,8996.723);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(29,10602.12);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(30,6995.483);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(31,3554.677);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,2986.783);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,4718.575);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,3336.234);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,3152.353);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,3922.706);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,3701.065);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,4307.366);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,3859.591);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,5704.487);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,4583.893);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,4887.496);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,4683.95);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,5634.398);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,6286.989);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,5862.763);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,4255.767);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,4136.072);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,5119.219);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,22825.13);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,3939.275);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,3211.318);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,3375.942);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,2769.892);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,1923.155);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,2015.835);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,1315.981);
   VbbHcc_algo_H_dR_stack_1->SetBinError(29,1664.666);
   VbbHcc_algo_H_dR_stack_1->SetBinError(30,1326.989);
   VbbHcc_algo_H_dR_stack_1->SetBinError(31,840.5918);
   VbbHcc_algo_H_dR_stack_1->SetEntries(105593);

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
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.2960038);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,252.2669);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,436.8897);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,441.004);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,451.864);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,468.9819);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,474.6404);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,522.4029);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,578.1202);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,638.0052);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,673.7005);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,729.3351);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,753.6439);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,739.0512);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,717.4504);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,670.3855);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,621.3342);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,599.3219);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,521.6232);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,451.8839);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,364.6235);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,291.2104);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,231.0892);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,180.7888);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,152.7695);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,113.643);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,90.88081);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,64.25176);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(30,42.85845);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(31,32.86028);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.2648024);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,7.18716);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,9.797042);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,9.348811);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,10.42449);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,10.67576);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,9.823783);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,11.28374);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,11.37483);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,16.04428);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,11.56181);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,11.88237);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,11.99221);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,12.10866);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,11.7678);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,11.33817);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,11.41941);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,10.94494);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,10.03278);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,9.343694);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,8.878154);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,7.648653);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,6.602871);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,6.042244);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,5.866038);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,4.848373);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,4.734814);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,3.465796);
   VbbHcc_algo_H_dR_stack_2->SetBinError(30,2.940143);
   VbbHcc_algo_H_dR_stack_2->SetBinError(31,2.482141);
   VbbHcc_algo_H_dR_stack_2->SetEntries(152694);

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
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,3.340206);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,7780.246);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,15459.26);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,17757.28);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,17230.01);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,15007.69);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,12473.43);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,10689.65);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,10051.82);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,10142.92);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,10671.71);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,10900.1);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,10696);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,9963.362);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,9269.116);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,8548.594);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,8078.554);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,7909.129);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,7517.562);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,6779.557);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,5826.62);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,4988.78);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,4380.795);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,3891.225);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,3515.249);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,3095.27);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,2579.563);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,1860.864);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(30,1049.589);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(31,685.2527);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.5091722);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,26.27277);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,36.26855);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,39.81136);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,38.75067);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,36.4877);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,33.16474);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,30.83401);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,29.91715);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,29.164);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,29.97839);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,30.08066);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,30.16745);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,28.97634);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,28.24404);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,26.44006);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,25.52025);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,25.93928);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,25.21714);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,23.94087);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,21.78231);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,20.65553);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,19.80389);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,18.58958);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,17.76882);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,16.06745);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,15.21871);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,13.2663);
   VbbHcc_algo_H_dR_stack_3->SetBinError(30,9.252319);
   VbbHcc_algo_H_dR_stack_3->SetBinError(31,7.359064);
   VbbHcc_algo_H_dR_stack_3->SetEntries(3537992);

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
   VbbHcc_algo_H_dR_stack_4->SetBinContent(2,0.09131603);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,362.4181);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,569.1417);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,506.7442);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,434.9752);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,380.8371);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,409.2651);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,462.2742);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,450.7148);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,593.773);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,600.3407);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,702.1677);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,773.351);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,684.6474);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,711.3528);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,645.2427);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,651.9542);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,569.1953);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,573.6796);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,428.916);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,371.1373);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,274.9296);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,178.4364);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,149.2364);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,102.9827);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,103.3601);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(28,92.12903);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(29,76.44862);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(30,41.85098);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(31,24.89075);
   VbbHcc_algo_H_dR_stack_4->SetBinError(2,0.09131603);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,14.07629);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,16.20079);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,20.97932);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,19.56939);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,18.20958);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,17.3273);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,20.77545);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,16.69216);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,23.94675);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,17.58301);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,24.03591);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,25.23278);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,20.03745);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,23.46461);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,19.36066);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,20.08329);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,16.88479);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,27.49439);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,15.35311);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,17.84061);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,17.14672);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,8.137904);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,11.06281);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,8.209084);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,14.77184);
   VbbHcc_algo_H_dR_stack_4->SetBinError(28,8.426366);
   VbbHcc_algo_H_dR_stack_4->SetBinError(29,8.122574);
   VbbHcc_algo_H_dR_stack_4->SetBinError(30,4.01267);
   VbbHcc_algo_H_dR_stack_4->SetBinError(31,3.14337);
   VbbHcc_algo_H_dR_stack_4->SetEntries(53670);

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
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,115.4926);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,144.8694);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,102.4001);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,96.45738);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,83.0551);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,147.3725);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,134.4425);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,161.3531);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,169.0559);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,186.7403);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,231.3571);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,243.2436);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,232.8232);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,206.8678);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,215.3743);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,208.0586);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,185.2422);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,207.6071);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,161.8697);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,139.852);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,69.5315);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,66.35085);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,46.82469);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(26,32.63892);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,21.81023);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(28,16.20538);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(29,14.03976);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(30,9.937753);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(31,7.272193);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,9.987654);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,14.72482);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,15.48441);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,14.72756);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,9.203633);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,24.42989);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,17.1139);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,18.24062);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,17.11975);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,24.48207);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,26.07254);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,34.60746);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,23.57678);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,18.82535);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,20.46982);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,18.82141);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,16.46293);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,25.80294);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,22.29214);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,22.9125);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,11.9997);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,13.81666);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,8.459865);
   VbbHcc_algo_H_dR_stack_5->SetBinError(26,6.007955);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,4.714024);
   VbbHcc_algo_H_dR_stack_5->SetBinError(28,3.507269);
   VbbHcc_algo_H_dR_stack_5->SetBinError(29,3.942772);
   VbbHcc_algo_H_dR_stack_5->SetBinError(30,3.364503);
   VbbHcc_algo_H_dR_stack_5->SetBinError(31,2.457241);
   VbbHcc_algo_H_dR_stack_5->SetEntries(13622);

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
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,1.677165);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,1.228621);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,2.744998);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,1.857721);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,1.455056);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,1.004731);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,1.751837);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(11,1.401868);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,1.277965);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,3.568982);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,0.9932979);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,2.768877);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,2.421512);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,2.202205);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,0.6783453);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,2.058606);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,1.715457);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(21,3.077445);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.563917);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(23,0.5234306);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(24,2.255174);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.6060574);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(29,1.319442);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(31,0.5354066);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.9683492);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.8688448);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,1.403823);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,1.080216);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,1.455056);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.7258973);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,1.01188);
   VbbHcc_algo_H_dR_stack_6->SetBinError(11,0.9944214);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.9266566);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,1.493538);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.7635089);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,1.419513);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,1.265643);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,1.10658);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.6783453);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,1.201392);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.995217);
   VbbHcc_algo_H_dR_stack_6->SetBinError(21,2.59781);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.563917);
   VbbHcc_algo_H_dR_stack_6->SetBinError(23,0.5234306);
   VbbHcc_algo_H_dR_stack_6->SetBinError(24,1.30364);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.6060574);
   VbbHcc_algo_H_dR_stack_6->SetBinError(29,0.9446466);
   VbbHcc_algo_H_dR_stack_6->SetBinError(31,0.5354066);
   VbbHcc_algo_H_dR_stack_6->SetEntries(60);

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
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,9.060175);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,15.50954);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,5.212531);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,3.763712);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,2.401647);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,2.021651);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,2.178493);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,1.184231);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,2.511653);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,0.2447034);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,5.301806);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,2.47759);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,4.190369);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,4.94349);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,7.715508);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,4.905711);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,3.001008);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,2.591608);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,2.572372);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,2.439804);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,0.7761816);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(24,1.85466);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(25,0.3409185);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(26,0.3503577);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(28,1.257332);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(29,2.874537);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(30,0.7786162);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,1.838871);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,2.551993);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,1.500955);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,1.22516);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,0.9895768);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,0.9571044);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.8965877);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.691146);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,0.9178214);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,0.2447034);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,1.47349);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,0.9511781);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,1.274069);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,1.338599);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,1.772476);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,1.343612);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,1.081082);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.9973125);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.977238);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,1.02119);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.54887);
   VbbHcc_algo_H_dR_stack_7->SetBinError(24,0.9353407);
   VbbHcc_algo_H_dR_stack_7->SetBinError(25,0.3409185);
   VbbHcc_algo_H_dR_stack_7->SetBinError(26,0.3503577);
   VbbHcc_algo_H_dR_stack_7->SetBinError(28,0.7341207);
   VbbHcc_algo_H_dR_stack_7->SetBinError(29,1.029363);
   VbbHcc_algo_H_dR_stack_7->SetBinError(30,0.5540561);
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
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,9.696448);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,21.04078);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,19.21059);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,6.098621);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,4.092248);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,3.589808);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,3.493506);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,4.455591);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,4.418779);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,2.865988);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,6.310265);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,6.826324);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,10.45989);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,5.886494);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,9.912562);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,6.647909);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,6.118089);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,4.35631);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,4.492851);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,2.591813);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(23,4.131726);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,1.495162);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(25,1.206226);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(26,1.023448);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(27,1.462092);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,2.403879);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(29,1.573938);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(30,1.116651);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(31,0.694477);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,1.67215);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,2.538399);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,2.475424);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,1.383602);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,1.183615);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,1.091713);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,1.011234);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,1.176024);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,1.13072);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,0.9149917);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,1.377861);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,1.433722);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,1.849546);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,1.269799);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,1.721296);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,1.418646);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,1.387697);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,1.142871);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,1.162929);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,0.8647978);
   VbbHcc_algo_H_dR_stack_8->SetBinError(23,1.111749);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.6786564);
   VbbHcc_algo_H_dR_stack_8->SetBinError(25,0.6082494);
   VbbHcc_algo_H_dR_stack_8->SetBinError(26,0.5176334);
   VbbHcc_algo_H_dR_stack_8->SetBinError(27,0.6676434);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.8554141);
   VbbHcc_algo_H_dR_stack_8->SetBinError(29,0.647303);
   VbbHcc_algo_H_dR_stack_8->SetBinError(30,0.5811131);
   VbbHcc_algo_H_dR_stack_8->SetBinError(31,0.4937719);
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
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,6.59148);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,13.66211);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,13.79171);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,11.2544);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,6.924718);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,3.50138);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,2.771802);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,2.490275);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,3.062901);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,3.705396);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,4.252968);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,4.75379);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,4.069648);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,3.881997);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,3.716379);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,3.767916);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,3.617459);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,2.965521);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,2.329323);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,1.586012);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,1.307725);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,1.141059);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,1.212914);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,1.403201);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,1.565135);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(28,1.598593);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(29,1.132614);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(30,0.8077291);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(31,0.3887513);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.1503846);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.2189461);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.2293696);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.2072493);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.1598472);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.1205547);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.09823772);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.08986863);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.1009782);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.1183352);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.1179757);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.1273997);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.1160528);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.1142993);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.1155945);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.1652693);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.1209291);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.101453);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.08898978);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.07086284);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.06427452);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.07257747);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.06499079);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.07123811);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.07284225);
   VbbHcc_algo_H_dR_stack_9->SetBinError(28,0.07205129);
   VbbHcc_algo_H_dR_stack_9->SetBinError(29,0.06928121);
   VbbHcc_algo_H_dR_stack_9->SetBinError(30,0.05222554);
   VbbHcc_algo_H_dR_stack_9->SetBinError(31,0.03472296);
   VbbHcc_algo_H_dR_stack_9->SetEntries(38365);

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
   VbbHcc_algo_H_dR_stack_10->SetBinContent(2,0.0005278756);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,1.327745);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,3.357496);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,4.199006);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,4.212407);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,3.352313);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,2.393859);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,1.797542);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,1.725407);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,1.915749);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,2.217725);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,2.433918);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,2.413978);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,2.159998);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,2.069636);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,1.839987);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,1.852514);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,1.817075);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,1.745569);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,1.475197);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,1.245101);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.8927774);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.8016647);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.7860268);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.7106939);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.6416353);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(28,0.5305674);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(29,0.3808341);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(30,0.2059274);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(31,0.124859);
   VbbHcc_algo_H_dR_stack_10->SetBinError(2,0.0005278756);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.02753865);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.04344873);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.04800796);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.04761446);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.04212622);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.03545156);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.03095726);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.03061176);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.03234522);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.03487807);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.03666603);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.03663984);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.03474345);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.03416659);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.03216038);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.03229538);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.03186571);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.03109489);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.02854315);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.02622594);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.02211284);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.02081192);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.02048217);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.01948609);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.01853455);
   VbbHcc_algo_H_dR_stack_10->SetBinError(28,0.01704578);
   VbbHcc_algo_H_dR_stack_10->SetBinError(29,0.01443629);
   VbbHcc_algo_H_dR_stack_10->SetBinError(30,0.01066683);
   VbbHcc_algo_H_dR_stack_10->SetBinError(31,0.008249309);
   VbbHcc_algo_H_dR_stack_10->SetEntries(94157);

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
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.05338864);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.07715679);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.08307867);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.07899619);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.02509567);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.03057378);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.02469786);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.01744687);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.02131469);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.0219603);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.04284341);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.05008813);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.02337409);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.02111691);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.04048612);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.03355846);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.0189564);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.02077284);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.02263573);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.007575335);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.01761996);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(24,0.006669254);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(25,0.004269001);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(26,0.003912842);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.01656791);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(28,0.01188579);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(29,0.002783479);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(30,0.006243823);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(31,0.0030169);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.01203784);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.01364548);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.01411705);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.01395446);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.008744873);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.008704447);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.00749805);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.006839371);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.007226386);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.007405208);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.010015);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.01120997);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.008937111);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.00837831);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.009979969);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.008988346);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.006968743);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.007759979);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.009558471);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.004418485);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.006383226);
   VbbHcc_algo_H_dR_stack_11->SetBinError(24,0.003850753);
   VbbHcc_algo_H_dR_stack_11->SetBinError(25,0.003023028);
   VbbHcc_algo_H_dR_stack_11->SetBinError(26,0.002786519);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.006355751);
   VbbHcc_algo_H_dR_stack_11->SetBinError(28,0.007346588);
   VbbHcc_algo_H_dR_stack_11->SetBinError(29,0.002783479);
   VbbHcc_algo_H_dR_stack_11->SetBinError(30,0.003617691);
   VbbHcc_algo_H_dR_stack_11->SetBinError(31,0.0030169);
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
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,0.01441559);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,0.03664064);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,0.03416696);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,0.03038323);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,0.0253624);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,0.01440265);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,0.01098161);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,0.01193313);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,0.01689445);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,0.01866045);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,0.01767779);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,0.01791452);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,0.01950016);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,0.02228084);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,0.01421099);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,0.01519353);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,0.01646473);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,0.01242677);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,0.008275415);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,0.00604253);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(23,0.006526133);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(24,0.004477624);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(25,0.006144035);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(26,0.004236228);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(27,0.00453599);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(28,0.004391196);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(29,0.003932855);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(30,0.001495333);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(31,0.001792679);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,0.002160071);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,0.004762649);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,0.003334674);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,0.003135167);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,0.003199005);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,0.002219263);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,0.001852978);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,0.001943386);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,0.002328003);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,0.002461215);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,0.002384886);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,0.002408959);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,0.002549798);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,0.004121785);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,0.002136511);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,0.002194005);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,0.002336223);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,0.001972864);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,0.001678876);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,0.001398418);
   VbbHcc_algo_H_dR_stack_12->SetBinError(23,0.001471644);
   VbbHcc_algo_H_dR_stack_12->SetBinError(24,0.001257675);
   VbbHcc_algo_H_dR_stack_12->SetBinError(25,0.001462722);
   VbbHcc_algo_H_dR_stack_12->SetBinError(26,0.001165329);
   VbbHcc_algo_H_dR_stack_12->SetBinError(27,0.00121764);
   VbbHcc_algo_H_dR_stack_12->SetBinError(28,0.001227833);
   VbbHcc_algo_H_dR_stack_12->SetBinError(29,0.001226605);
   VbbHcc_algo_H_dR_stack_12->SetBinError(30,0.0007502755);
   VbbHcc_algo_H_dR_stack_12->SetBinError(31,0.0007422219);
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
   VbbHcc_algo_H_dR__326->SetBinContent(3,57203);
   VbbHcc_algo_H_dR__326->SetBinContent(4,78223);
   VbbHcc_algo_H_dR__326->SetBinContent(5,70094);
   VbbHcc_algo_H_dR__326->SetBinContent(6,70331);
   VbbHcc_algo_H_dR__326->SetBinContent(7,71535);
   VbbHcc_algo_H_dR__326->SetBinContent(8,73568);
   VbbHcc_algo_H_dR__326->SetBinContent(9,78728);
   VbbHcc_algo_H_dR__326->SetBinContent(10,85379);
   VbbHcc_algo_H_dR__326->SetBinContent(11,95283);
   VbbHcc_algo_H_dR__326->SetBinContent(12,108350);
   VbbHcc_algo_H_dR__326->SetBinContent(13,119912);
   VbbHcc_algo_H_dR__326->SetBinContent(14,127636);
   VbbHcc_algo_H_dR__326->SetBinContent(15,129388);
   VbbHcc_algo_H_dR__326->SetBinContent(16,128593);
   VbbHcc_algo_H_dR__326->SetBinContent(17,123171);
   VbbHcc_algo_H_dR__326->SetBinContent(18,117076);
   VbbHcc_algo_H_dR__326->SetBinContent(19,108257);
   VbbHcc_algo_H_dR__326->SetBinContent(20,97185);
   VbbHcc_algo_H_dR__326->SetBinContent(21,82965);
   VbbHcc_algo_H_dR__326->SetBinContent(22,66686);
   VbbHcc_algo_H_dR__326->SetBinContent(23,53087);
   VbbHcc_algo_H_dR__326->SetBinContent(24,41190);
   VbbHcc_algo_H_dR__326->SetBinContent(25,31646);
   VbbHcc_algo_H_dR__326->SetBinContent(26,24090);
   VbbHcc_algo_H_dR__326->SetBinContent(27,18777);
   VbbHcc_algo_H_dR__326->SetBinContent(28,14885);
   VbbHcc_algo_H_dR__326->SetBinContent(29,11767);
   VbbHcc_algo_H_dR__326->SetBinContent(30,7353);
   VbbHcc_algo_H_dR__326->SetBinContent(31,5578);
   VbbHcc_algo_H_dR__326->SetEntries(2097992);

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
   3.728053,
   56480.11,
   84138.57,
   69856.19,
   65645.76,
   72466.11,
   72167.23,
   75076.42,
   75864.74,
   96206.91,
   103065.1,
   111491.5,
   118612.7,
   128136.5,
   130239.3,
   132244.6,
   103394.7,
   99036.48,
   99066.77,
   102328.7,
   70985.06,
   51292.35,
   41183.13,
   32873.69,
   21967.41,
   19195.56,
   11781.31,
   12625.02,
   8142.635};
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
   0.581133,
   2986.958,
   4718.776,
   3336.589,
   3152.704,
   3922.944,
   3701.349,
   4307.575,
   3859.803,
   5704.661,
   4584.105,
   4887.733,
   4684.259,
   5634.571,
   6287.136,
   5862.902,
   4255.949,
   4136.235,
   5119.43,
   22825.16,
   3939.453,
   3211.462,
   3376.045,
   2769.996,
   1923.273,
   2015.965,
   1316.11,
   1664.747,
   1327.035};
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
   Graph_Graph_from_VbbHcc_algo_H_dR1237->SetMaximum(151918.3);
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
   data_mc_ratio__327->SetBinContent(2,7.242386);
   data_mc_ratio__327->SetBinContent(3,1.012799);
   data_mc_ratio__327->SetBinContent(4,0.9296925);
   data_mc_ratio__327->SetBinContent(5,1.003404);
   data_mc_ratio__327->SetBinContent(6,1.071372);
   data_mc_ratio__327->SetBinContent(7,0.9871511);
   data_mc_ratio__327->SetBinContent(8,1.01941);
   data_mc_ratio__327->SetBinContent(9,1.048638);
   data_mc_ratio__327->SetBinContent(10,1.125411);
   data_mc_ratio__327->SetBinContent(11,0.9903966);
   data_mc_ratio__327->SetBinContent(12,1.051278);
   data_mc_ratio__327->SetBinContent(13,1.075526);
   data_mc_ratio__327->SetBinContent(14,1.076073);
   data_mc_ratio__327->SetBinContent(15,1.009767);
   data_mc_ratio__327->SetBinContent(16,0.9873598);
   data_mc_ratio__327->SetBinContent(17,0.9313876);
   data_mc_ratio__327->SetBinContent(18,1.132321);
   data_mc_ratio__327->SetBinContent(19,1.093102);
   data_mc_ratio__327->SetBinContent(20,0.9810051);
   data_mc_ratio__327->SetBinContent(21,0.81077);
   data_mc_ratio__327->SetBinContent(22,0.9394371);
   data_mc_ratio__327->SetBinContent(23,1.034989);
   data_mc_ratio__327->SetBinContent(24,1.000167);
   data_mc_ratio__327->SetBinContent(25,0.9626544);
   data_mc_ratio__327->SetBinContent(26,1.096624);
   data_mc_ratio__327->SetBinContent(27,0.9781948);
   data_mc_ratio__327->SetBinContent(28,1.263442);
   data_mc_ratio__327->SetBinContent(29,0.9320385);
   data_mc_ratio__327->SetBinContent(30,0.9030246);
   data_mc_ratio__327->SetBinContent(31,1.295191);
   data_mc_ratio__327->SetBinError(2,1.393798);
   data_mc_ratio__327->SetBinError(3,0.004234615);
   data_mc_ratio__327->SetBinError(4,0.003324085);
   data_mc_ratio__327->SetBinError(5,0.003789968);
   data_mc_ratio__327->SetBinError(6,0.004039864);
   data_mc_ratio__327->SetBinError(7,0.003690833);
   data_mc_ratio__327->SetBinError(8,0.003758412);
   data_mc_ratio__327->SetBinError(9,0.003737327);
   data_mc_ratio__327->SetBinError(10,0.00385155);
   data_mc_ratio__327->SetBinError(11,0.003208495);
   data_mc_ratio__327->SetBinError(12,0.003193765);
   data_mc_ratio__327->SetBinError(13,0.003105916);
   data_mc_ratio__327->SetBinError(14,0.003012003);
   data_mc_ratio__327->SetBinError(15,0.002807206);
   data_mc_ratio__327->SetBinError(16,0.002753384);
   data_mc_ratio__327->SetBinError(17,0.002653849);
   data_mc_ratio__327->SetBinError(18,0.003309297);
   data_mc_ratio__327->SetBinError(19,0.003322254);
   data_mc_ratio__327->SetBinError(20,0.003146818);
   data_mc_ratio__327->SetBinError(21,0.002814817);
   data_mc_ratio__327->SetBinError(22,0.003637897);
   data_mc_ratio__327->SetBinError(23,0.004492018);
   data_mc_ratio__327->SetBinError(24,0.004928066);
   data_mc_ratio__327->SetBinError(25,0.005411417);
   data_mc_ratio__327->SetBinError(26,0.007065444);
   data_mc_ratio__327->SetBinError(27,0.007138587);
   data_mc_ratio__327->SetBinError(28,0.01035574);
   data_mc_ratio__327->SetBinError(29,0.008592133);
   data_mc_ratio__327->SetBinError(30,0.01053094);
   data_mc_ratio__327->SetBinError(31,0.2534061);
   data_mc_ratio__327->SetMinimum(0.4);
   data_mc_ratio__327->SetMaximum(1.6);
   data_mc_ratio__327->SetEntries(375.4379);
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
   0.1558811,
   0.05288514,
   0.05608339,
   0.04776368,
   0.04802601,
   0.05413487,
   0.05128849,
   0.05737588,
   0.05087743,
   0.05929575,
   0.04447778,
   0.04383953,
   0.03949204,
   0.0439732,
   0.04827374,
   0.04433376,
   0.04116217,
   0.04176476,
   0.05167657,
   0.2230574,
   0.05549693,
   0.06261094,
   0.0819764,
   0.08426179,
   0.0875512,
   0.1050224,
   0.1117117,
   0.131861,
   0.1629736};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1238,Graph_from_mc_statistical_error_fy1238,Graph_from_mc_statistical_error_fex1238,Graph_from_mc_statistical_error_fey1238);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1238 = new TH1F("Graph_Graph_from_mc_statistical_error1238","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1238->SetMinimum(0.7323311);
   Graph_Graph_from_mc_statistical_error1238->SetMaximum(1.267669);
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
