void Z_dR_VbbHcc_18()
{
//=========Macro generated from canvas: Z_dR_VbbHcc_18/Z_dR_VbbHcc_18
//=========  (Mon Nov 21 13:06:14 2022) by ROOT version 6.14/09
   TCanvas *Z_dR_VbbHcc_18 = new TCanvas("Z_dR_VbbHcc_18", "Z_dR_VbbHcc_18",0,0,600,600);
   Z_dR_VbbHcc_18->SetHighLightColor(2);
   Z_dR_VbbHcc_18->Range(0,0,1,1);
   Z_dR_VbbHcc_18->SetFillColor(0);
   Z_dR_VbbHcc_18->SetFillStyle(4000);
   Z_dR_VbbHcc_18->SetBorderMode(0);
   Z_dR_VbbHcc_18->SetBorderSize(2);
   Z_dR_VbbHcc_18->SetFrameFillStyle(1000);
   Z_dR_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-1439.622,10.52419,1438192);
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
   st->SetMaximum(1232599);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",50,0,10);
   st_stack_19->SetMinimum(0.01);
   st_stack_19->SetMaximum(1294229);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetRange(1,50);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetLabelSize(0.035);
   st_stack_19->GetXaxis()->SetTitleSize(0.035);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetLabelSize(0.05);
   st_stack_19->GetYaxis()->SetTitleSize(0.057);
   st_stack_19->GetYaxis()->SetTitleOffset(1.2);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetLabelSize(0.035);
   st_stack_19->GetZaxis()->SetTitleSize(0.035);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",50,0,10);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,1630.667);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,384714.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,540944.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,382921.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,335620.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,315062.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,302649.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,247146.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,247548.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,201529.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,197588.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,175386.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,157394.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,118846.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,152138.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,90400.19);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,58558.01);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,23156.43);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,23473.85);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,14589.98);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,5056.528);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,2444.424);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,1630.667);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,27175.35);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,31035.64);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,26018.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,25401.48);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,34732.51);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,23394.26);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,20690.45);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,23641.89);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,18766.19);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,18560.52);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,17836.09);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,16578.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,14434.69);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,16287.79);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,12687.73);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,10157.95);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,6314.698);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,6185.846);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,5196.447);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,2840.034);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,1814.631);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(2374);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",50,0,10);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.1225428);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,508.0168);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,1061.14);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,1416.262);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,1756.467);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,2022.983);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,2164.084);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,2194.536);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,2084.837);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,1943.834);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,1706.416);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,1499.746);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,1349.809);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,1193.675);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,1040.486);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,542.8329);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,318.0342);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,189.5083);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,107.6432);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,59.46315);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,28.19796);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,15.42012);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,9.265687);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,3.422514);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,0.3984084);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.2442847);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.0879443);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,10.46861);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,13.49078);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,16.59841);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,17.07048);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,18.71909);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,19.28907);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,20.43606);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,18.87077);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,18.27712);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,16.22396);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,16.2218);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,15.08918);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,13.58529);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,13.33138);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,9.281575);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,7.254509);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,5.538623);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,4.19405);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,3.063144);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,2.000249);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.540583);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,1.30413);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.6426246);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.1532665);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.1490145);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(331043);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",50,0,10);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,3.503477);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,4254.032);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,9569.763);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,12736.36);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,16010.84);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,18313.38);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,19302.34);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,19290.21);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,18083.37);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,16503.38);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,14551.16);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,12751.49);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,11242.32);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,10097.05);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,8676.006);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,4047.03);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,2009.97);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,1031.657);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,540.033);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,267.6351);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,123.9536);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,56.52894);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,24.05784);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,10.3663);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,3.411764);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,0.9101605);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,0.1602353);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.5218394);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,18.30976);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,27.44781);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,31.64738);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,36.47451);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,38.52086);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,39.04646);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,39.10242);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,37.74853);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,35.97892);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,33.48414);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,31.14183);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,29.58125);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,28.47956);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,25.74914);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,17.47552);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,12.74335);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,8.587154);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,6.147067);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,4.511104);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,3.094936);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,2.084718);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,1.276584);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,0.8200659);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,0.4726144);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,0.265313);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,0.1343666);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(3142446);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",50,0,10);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,314.9557);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,1218.999);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,1623.593);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,1118.495);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,609.338);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,379.3744);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,306.6511);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,242.8603);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,239.4333);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,200.6237);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,163.5145);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,169.8828);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,150.5424);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,131.8758);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,85.30352);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,49.64343);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,36.31512);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,17.36132);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,20.62332);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,7.42913);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,4.618158);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,0.9301835);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,0.714014);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,2.397149);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,13.49231);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,28.47188);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,32.24676);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,26.16886);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,18.79046);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,14.93714);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,13.28346);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,11.83002);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,11.85703);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,10.62101);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,9.607023);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,9.999207);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,9.434956);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,8.664289);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,7.279322);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,5.512164);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,4.614796);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,3.071969);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,3.456771);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,2.188001);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,1.751031);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,0.6591782);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,0.714014);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,1.203797);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(12998);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",50,0,10);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,457.8972);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,488.1329);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,310.4403);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,240.6912);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,219.524);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,180.615);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,195.0847);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,157.1045);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,165.5319);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,127.1255);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,97.688);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,103.1134);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,112.1681);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,106.9091);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,81.58375);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,40.74261);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,36.79037);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,31.80461);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,18.27072);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,5.501512);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,4.929143);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,2.330415);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,1.348975);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,35.52015);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,35.46233);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,27.97216);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,25.02114);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,23.81115);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,21.37465);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,22.48559);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,19.78055);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,20.65272);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,17.84596);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,15.52167);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,16.05121);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,16.58133);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,16.48882);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,23.43529);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,9.453042);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,9.238949);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,9.2492);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,6.600326);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,3.933846);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,3.491379);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,2.330415);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,1.348975);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(1311);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",50,0,10);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,4.951616);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,7.697381);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,7.669956);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,8.044682);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,10.69711);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,8.438543);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,8.515535);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,9.086169);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,8.065806);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,5.071085);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,5.818097);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,7.018767);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,5.606489);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,2.567962);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,2.273907);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(18,2.244302);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,0.9932021);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,1.443716);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,1.33455);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,1.729753);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,1.711851);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,1.731119);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,2.061408);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,1.796196);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,1.832117);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,1.836303);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,1.789324);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,1.970837);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,1.502207);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,1.632641);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,1.389116);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,1.1776);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.9350547);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(18,1.34395);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.551315);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.7361247);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(289);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",50,0,10);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,23.20532);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,34.67251);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,41.68428);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,47.33413);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,43.82886);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,37.99713);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,37.57925);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,28.31952);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,16.24207);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,17.74491);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,13.13519);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,9.823032);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,6.717705);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,9.219815);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,4.197576);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,2.715364);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,0.4154768);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,0.7506935);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(21,0.5270682);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,0.3243784);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,0.2276773);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,2.381888);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,2.893821);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,3.151);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,3.367504);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,3.263589);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,3.006217);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,3.058927);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,2.584046);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,1.98684);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,2.065301);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,1.759432);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,1.517978);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,1.246111);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,1.521256);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,1.053404);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.7931221);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,0.3221115);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,0.4209078);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(21,0.3771325);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.2455811);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.2276773);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(1657);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",50,0,10);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,16.49961);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,32.05428);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,38.0991);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,43.66598);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,46.43951);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,39.82494);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,38.14797);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,35.54426);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,24.54487);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,17.30844);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,17.44772);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,15.24191);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,8.501112);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(16,7.034817);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,4.599975);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,1.311001);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,0.4279197);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,0.2020662);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,0.298964);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(22,0.7236706);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,1.966642);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,2.735869);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,3.853136);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,3.228751);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,3.321216);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,3.196283);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,3.059988);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,2.948767);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,2.396993);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,2.020261);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,2.093518);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,1.929517);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,1.425265);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(16,1.335941);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,1.071295);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,0.5582971);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.3087204);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,0.2020662);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.298964);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(22,0.4309737);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(1688);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",50,0,10);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,3.824854);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,8.556777);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,10.79965);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,12.10534);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,12.54104);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,11.90464);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,10.10449);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,8.201072);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,6.318573);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,5.205317);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,3.917568);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,2.955772);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,2.578352);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,2.081686);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,0.6887987);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,0.2824992);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,0.08329225);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,0.04824338);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,0.02979781);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,0.01627058);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,0.01683384);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.01130063);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,0.0008280429);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.1522613);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.1610395);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.2071759);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.1937493);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.1943009);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.2177543);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.1699547);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.1608618);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.140562);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.1295153);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.1038552);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.09872548);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.1366552);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.07658674);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.04328161);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.02743094);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.01483172);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.01106689);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.008481228);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.006327064);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.006370199);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.005244123);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.0008280429);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(40744);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",50,0,10);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.00405264);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,0.9418913);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,2.001793);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,2.835764);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,3.41903);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,3.550131);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,3.081129);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,2.431398);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,1.663918);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,1.19418);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,0.906519);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,0.7149698);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,0.6123131);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,0.5184307);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,0.4259732);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,0.1552684);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,0.08182217);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,0.02811293);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.01925479);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.01003498);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.004991096);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.001909474);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.001206544);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.001325018);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.00165662);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.02446312);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.03569334);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.04259213);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.04675542);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.04771717);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.04440306);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.03942347);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.03264395);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.02757611);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.0239627);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.02129486);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.01969365);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.01809617);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.0164682);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.009881234);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.007165553);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.004209208);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.003407504);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.002513136);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.001769693);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.001102641);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.0008531786);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.0009391712);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(39248);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",50,0,10);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.1356137);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.1679758);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.4427628);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.50019);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.516284);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.4186649);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.3105297);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.2696759);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.1726634);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.1035383);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.06187511);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.04005187);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.05235833);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.04135959);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.01428088);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.008313037);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(19,0.006630474);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(22,0.002278067);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01902177);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.02150592);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.034928);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.03700681);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.03757418);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.03331919);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.02907872);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.02715749);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.02084887);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.01748311);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.01232307);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.009997434);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.01125645);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.0100966);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.006464235);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.00431426);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(19,0.004689205);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(22,0.002278067);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(1458);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",50,0,10);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,526.4313);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,1301.642);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,3327.445);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,3914.024);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,3118.876);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,1908.463);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,1130.577);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,832.5477);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,617.8297);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,349.6593);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,320.9419);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,293.117);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,216.8491);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,196.8903);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,106.7143);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,57.67784);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,59.81097);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,6.815423);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,9.09646);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,10.82978);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,60.12862);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,96.31508);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,153.9902);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,169.4251);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,147.1841);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,116.2688);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,89.6763);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,76.06397);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,65.82659);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,49.88326);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,46.66319);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,46.47695);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,38.72398);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,37.48851);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,27.38745);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,20.58279);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,20.86927);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,6.815423);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,9.09646);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,9.079041);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(2917);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__37 = new TH1D("VbbHcc_algo_Z_dR__37","",50,0,10);
   VbbHcc_algo_Z_dR__37->SetBinContent(2,78);
   VbbHcc_algo_Z_dR__37->SetBinContent(3,98492);
   VbbHcc_algo_Z_dR__37->SetBinContent(4,107504);
   VbbHcc_algo_Z_dR__37->SetBinContent(5,80548);
   VbbHcc_algo_Z_dR__37->SetBinContent(6,69460);
   VbbHcc_algo_Z_dR__37->SetBinContent(7,62547);
   VbbHcc_algo_Z_dR__37->SetBinContent(8,57226);
   VbbHcc_algo_Z_dR__37->SetBinContent(9,52754);
   VbbHcc_algo_Z_dR__37->SetBinContent(10,47793);
   VbbHcc_algo_Z_dR__37->SetBinContent(11,43971);
   VbbHcc_algo_Z_dR__37->SetBinContent(12,39864);
   VbbHcc_algo_Z_dR__37->SetBinContent(13,36719);
   VbbHcc_algo_Z_dR__37->SetBinContent(14,33937);
   VbbHcc_algo_Z_dR__37->SetBinContent(15,30623);
   VbbHcc_algo_Z_dR__37->SetBinContent(16,27270);
   VbbHcc_algo_Z_dR__37->SetBinContent(17,17102);
   VbbHcc_algo_Z_dR__37->SetBinContent(18,11221);
   VbbHcc_algo_Z_dR__37->SetBinContent(19,7493);
   VbbHcc_algo_Z_dR__37->SetBinContent(20,4577);
   VbbHcc_algo_Z_dR__37->SetBinContent(21,2939);
   VbbHcc_algo_Z_dR__37->SetBinContent(22,1802);
   VbbHcc_algo_Z_dR__37->SetBinContent(23,940);
   VbbHcc_algo_Z_dR__37->SetBinContent(24,532);
   VbbHcc_algo_Z_dR__37->SetBinContent(25,245);
   VbbHcc_algo_Z_dR__37->SetBinContent(26,88);
   VbbHcc_algo_Z_dR__37->SetBinContent(27,34);
   VbbHcc_algo_Z_dR__37->SetBinContent(28,2);
   VbbHcc_algo_Z_dR__37->SetEntries(835761);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__37->SetLineColor(ci);
   VbbHcc_algo_Z_dR__37->SetLineWidth(2);
   VbbHcc_algo_Z_dR__37->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__37->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__37->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR__37->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__37->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__37->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__37->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__37->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__37->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__37->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__37->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__37->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__37->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__37->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__37->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__37->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__37->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1037[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1037[50] = {
   0,
   1634.297,
   390825.7,
   554669.7,
   402436.8,
   358776.1,
   339464.6,
   326685.8,
   270360.6,
   269032.6,
   221056.5,
   214570,
   190261.4,
   170588.2,
   130640.4,
   162311.9,
   95275.58,
   61040.73,
   24512.46,
   24179.97,
   14956.84,
   5231.779,
   92.34489,
   34.49389,
   16.83539,
   2450.632,
   2.50342,
   0.1602353,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1037[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1037[50] = {
   0,
   1630.667,
   27175.45,
   31035.84,
   26019.21,
   25402.11,
   34732.86,
   23394.6,
   20690.71,
   23642.06,
   18766.36,
   18560.63,
   17836.19,
   16578.99,
   14434.79,
   16287.87,
   12687.8,
   10157.99,
   6314.75,
   6185.862,
   5196.455,
   2840.055,
   10.21784,
   1.953664,
   2.650684,
   1814.632,
   1.38287,
   0.1343666,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Z_dR_fx1037,Graph_from_VbbHcc_algo_Z_dR_fy1037,Graph_from_VbbHcc_algo_Z_dR_fex1037,Graph_from_VbbHcc_algo_Z_dR_fey1037);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1037 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1037","",100,0,11);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->SetMaximum(644276.1);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1037);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_VbbHcc_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__38 = new TH1D("data_mc_ratio__38","",50,0,10);
   data_mc_ratio__38->SetBinContent(2,0.04772695);
   data_mc_ratio__38->SetBinContent(3,0.25201);
   data_mc_ratio__38->SetBinContent(4,0.1938163);
   data_mc_ratio__38->SetBinContent(5,0.2001507);
   data_mc_ratio__38->SetBinContent(6,0.1936026);
   data_mc_ratio__38->SetBinContent(7,0.1842519);
   data_mc_ratio__38->SetBinContent(8,0.1751714);
   data_mc_ratio__38->SetBinContent(9,0.1951246);
   data_mc_ratio__38->SetBinContent(10,0.1776476);
   data_mc_ratio__38->SetBinContent(11,0.198913);
   data_mc_ratio__38->SetBinContent(12,0.1857855);
   data_mc_ratio__38->SetBinContent(13,0.1929924);
   data_mc_ratio__38->SetBinContent(14,0.1989411);
   data_mc_ratio__38->SetBinContent(15,0.2344068);
   data_mc_ratio__38->SetBinContent(16,0.1680098);
   data_mc_ratio__38->SetBinContent(17,0.1795004);
   data_mc_ratio__38->SetBinContent(18,0.1838281);
   data_mc_ratio__38->SetBinContent(19,0.3056812);
   data_mc_ratio__38->SetBinContent(20,0.1892889);
   data_mc_ratio__38->SetBinContent(21,0.1964988);
   data_mc_ratio__38->SetBinContent(22,0.3444335);
   data_mc_ratio__38->SetBinContent(23,10.17923);
   data_mc_ratio__38->SetBinContent(24,15.42302);
   data_mc_ratio__38->SetBinContent(25,14.55267);
   data_mc_ratio__38->SetBinContent(26,0.03590911);
   data_mc_ratio__38->SetBinContent(27,13.58142);
   data_mc_ratio__38->SetBinContent(28,12.48164);
   data_mc_ratio__38->SetBinError(2,0.005404013);
   data_mc_ratio__38->SetBinError(3,0.0008030033);
   data_mc_ratio__38->SetBinError(4,0.000591123);
   data_mc_ratio__38->SetBinError(5,0.0007052282);
   data_mc_ratio__38->SetBinError(6,0.000734588);
   data_mc_ratio__38->SetBinError(7,0.0007367307);
   data_mc_ratio__38->SetBinError(8,0.000732262);
   data_mc_ratio__38->SetBinError(9,0.000849541);
   data_mc_ratio__38->SetBinError(10,0.0008126009);
   data_mc_ratio__38->SetBinError(11,0.0009485931);
   data_mc_ratio__38->SetBinError(12,0.0009305109);
   data_mc_ratio__38->SetBinError(13,0.001007151);
   data_mc_ratio__38->SetBinError(14,0.00107991);
   data_mc_ratio__38->SetBinError(15,0.001339511);
   data_mc_ratio__38->SetBinError(16,0.001017401);
   data_mc_ratio__38->SetBinError(17,0.001372593);
   data_mc_ratio__38->SetBinError(18,0.001735386);
   data_mc_ratio__38->SetBinError(19,0.003531351);
   data_mc_ratio__38->SetBinError(20,0.002797916);
   data_mc_ratio__38->SetBinError(21,0.003624599);
   data_mc_ratio__38->SetBinError(22,0.00811387);
   data_mc_ratio__38->SetBinError(23,0.3320099);
   data_mc_ratio__38->SetBinError(24,0.6686727);
   data_mc_ratio__38->SetBinError(25,0.9297363);
   data_mc_ratio__38->SetBinError(26,0.003827924);
   data_mc_ratio__38->SetBinError(27,2.329195);
   data_mc_ratio__38->SetBinError(28,8.825855);
   data_mc_ratio__38->SetMinimum(0.4);
   data_mc_ratio__38->SetMaximum(1.6);
   data_mc_ratio__38->SetEntries(19.24452);
   data_mc_ratio__38->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__38->SetLineColor(ci);
   data_mc_ratio__38->SetLineWidth(2);
   data_mc_ratio__38->SetMarkerStyle(20);
   data_mc_ratio__38->SetMarkerSize(1.2);
   data_mc_ratio__38->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__38->GetXaxis()->SetRange(1,50);
   data_mc_ratio__38->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__38->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__38->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__38->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__38->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__38->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__38->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__38->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1038[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1038[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1038[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1038[50] = {
   0,
   0.9977789,
   0.06953342,
   0.05595373,
   0.06465415,
   0.07080211,
   0.1023166,
   0.07161195,
   0.07653004,
   0.08787805,
   0.08489398,
   0.08650153,
   0.09374574,
   0.09718718,
   0.1104925,
   0.1003492,
   0.1331695,
   0.1664133,
   0.2576138,
   0.2558258,
   0.3474301,
   0.5428469,
   0.1106487,
   0.05663797,
   0.1574471,
   0.7404751,
   0.5523923,
   0.8385579,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1038,Graph_from_mc_statistical_error_fy1038,Graph_from_mc_statistical_error_fex1038,Graph_from_mc_statistical_error_fey1038);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1038 = new TH1F("Graph_Graph_from_mc_statistical_error1038","",100,0,11);
   Graph_Graph_from_mc_statistical_error1038->SetMinimum(0.001999017);
   Graph_Graph_from_mc_statistical_error1038->SetMaximum(2.197335);
   Graph_Graph_from_mc_statistical_error1038->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1038->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1038);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_VbbHcc_18->cd();
   Z_dR_VbbHcc_18->Modified();
   Z_dR_VbbHcc_18->cd();
   Z_dR_VbbHcc_18->SetSelected(Z_dR_VbbHcc_18);
}
