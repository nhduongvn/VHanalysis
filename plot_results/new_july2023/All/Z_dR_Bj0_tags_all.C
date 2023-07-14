void Z_dR_Bj0_tags_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_all/Z_dR_Bj0_tags_all
//=========  (Fri Jul 14 13:38:02 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_all = new TCanvas("Z_dR_Bj0_tags_all", "Z_dR_Bj0_tags_all",0,0,600,600);
   Z_dR_Bj0_tags_all->SetHighLightColor(2);
   Z_dR_Bj0_tags_all->Range(0,0,1,1);
   Z_dR_Bj0_tags_all->SetFillColor(0);
   Z_dR_Bj0_tags_all->SetFillStyle(4000);
   Z_dR_Bj0_tags_all->SetBorderMode(0);
   Z_dR_Bj0_tags_all->SetBorderSize(2);
   Z_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2982.278,6.314516,2979596);
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
   st->SetMinimum(0.3);
   st->SetMaximum(2553655);
   
   TH1F *st_stack_52 = new TH1F("st_stack_52","",30,0,6);
   st_stack_52->SetMinimum(0.3);
   st_stack_52->SetMaximum(2681338);
   st_stack_52->SetDirectory(0);
   st_stack_52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_52->SetLineColor(ci);
   st_stack_52->GetXaxis()->SetRange(1,30);
   st_stack_52->GetXaxis()->SetLabelFont(42);
   st_stack_52->GetXaxis()->SetLabelSize(0.035);
   st_stack_52->GetXaxis()->SetTitleSize(0.035);
   st_stack_52->GetXaxis()->SetTitleFont(42);
   st_stack_52->GetYaxis()->SetTitle("Events/0.2");
   st_stack_52->GetYaxis()->SetLabelFont(42);
   st_stack_52->GetYaxis()->SetLabelSize(0.05);
   st_stack_52->GetYaxis()->SetTitleSize(0.057);
   st_stack_52->GetYaxis()->SetTitleOffset(1.2);
   st_stack_52->GetYaxis()->SetTitleFont(42);
   st_stack_52->GetZaxis()->SetLabelFont(42);
   st_stack_52->GetZaxis()->SetLabelSize(0.035);
   st_stack_52->GetZaxis()->SetTitleSize(0.035);
   st_stack_52->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_52);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(1,252255.2);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(2,1049630);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(3,935381.4);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(4,649786.4);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(5,467543);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(6,359583.1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(7,296701.3);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(8,235887.2);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(9,192741);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(10,171221.1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(11,162771.2);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(12,139949.8);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(13,149066.1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(14,115169.8);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(15,128772.5);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(16,87738.86);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(17,71081.24);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(18,64145.19);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(19,50137.61);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(20,43739.38);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(21,46249.79);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(22,33962.1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(23,26223.93);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(24,25462.39);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(25,17126.34);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(26,13047.11);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(27,6993.054);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(28,7332.679);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(29,4407.606);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(30,2197.845);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(31,2810.853);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(1,4170.838);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(2,12902.01);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(3,28693.46);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(4,23552.28);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(5,10394.54);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(6,9796.315);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(7,16630.81);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(8,7592.063);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(9,6264.068);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(10,6184.025);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(11,6982.636);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(12,5159.572);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(13,21091.07);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(14,4952.531);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(15,21013);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(16,4090.933);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(17,3846.171);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(18,3755.511);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(19,2631.405);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(20,2419.832);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(21,3213.262);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(22,2437.565);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(23,1907.282);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(24,2310.148);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(25,1911.043);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(26,1952.888);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(27,643.3762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(28,1866.627);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(29,1536.657);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(30,490.3257);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(31,640.4565);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetEntries(488683);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(1,1131.525);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(2,6092.762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(3,8222.049);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(4,7764.529);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(5,6592.999);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(6,5389.476);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(7,4553.957);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(8,3819.727);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(9,3289.81);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(10,2893.565);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(11,2607.25);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(12,2364.713);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(13,2120.255);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(14,1868.157);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(15,1629.89);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(16,1407.939);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(17,1150.738);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(18,963.658);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(19,776.9446);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(20,633.9365);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(21,530.3995);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(22,398.2827);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(23,304.2422);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(24,228.2409);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(25,167.3986);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(26,123.3592);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(27,86.6423);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(28,60.2042);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(29,41.88761);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(30,26.94887);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(31,43.84567);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(1,13.99754);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(2,31.02902);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(3,35.82536);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(4,34.83135);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(5,32.08043);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(6,28.95969);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(7,26.74259);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(8,24.38561);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(9,22.6244);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(10,21.17162);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(11,20.04323);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(12,19.1333);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(13,18.08718);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(14,17.05306);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(15,16.00735);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(16,14.96013);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(17,13.53256);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(18,12.4084);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(19,11.15401);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(20,10.09651);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(21,9.45224);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(22,8.129265);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(23,7.141757);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(24,6.145244);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(25,5.282138);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(26,4.654997);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(27,3.915344);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(28,3.360082);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(29,2.728671);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(30,2.22874);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(31,2.832149);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetEntries(822483);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(1,10989.98);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(2,80263.86);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(3,130395.8);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(4,135098.7);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(5,116705.4);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(6,93690.97);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(7,76052.37);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(8,63777.71);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(9,55839.89);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(10,50632.09);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(11,46596.45);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(12,42794.9);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(13,38277.84);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(14,33178.96);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(15,28071.22);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(16,23546.06);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(17,19023.71);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(18,15232.12);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(19,12085.46);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(20,9417.088);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(21,7185.091);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(22,5366.618);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(23,3937.263);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(24,2841.838);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(25,1998.61);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(26,1371.364);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(27,921.1796);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(28,597.7797);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(29,388.9696);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(30,242.1187);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(31,422.1235);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(1,26.3297);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(2,71.16307);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(3,90.85626);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(4,92.58452);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(5,86.07256);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(6,77.10299);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(7,69.45555);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(8,63.60458);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(9,59.53849);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(10,56.7025);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(11,54.43159);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(12,52.18344);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(13,49.35852);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(14,45.94132);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(15,42.24012);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(16,38.68655);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(17,34.76168);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(18,31.08969);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(19,27.68498);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(20,24.42864);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(21,21.31874);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(22,18.42645);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(23,15.76646);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(24,13.38024);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(25,11.21901);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(26,9.29056);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(27,7.610821);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(28,6.127543);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(29,4.937942);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(30,3.894919);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(31,5.146978);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetEntries(1.800198e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(1,2371.161);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(2,8202.443);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(3,8384.087);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(4,5805.631);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(5,3567.064);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(6,2538.467);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(7,1909.867);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(8,1508.069);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(9,1316.344);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(10,1165.972);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(11,1046.298);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(12,969.6374);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(13,879.746);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(14,775.2372);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(15,713.4234);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(16,632.4739);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(17,540.5425);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(18,482.8921);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(19,407.0548);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(20,360.3606);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(21,293.6684);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(22,252.3145);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(23,205.9577);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(24,165.2092);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(25,134.3181);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(26,108.1776);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(27,75.81436);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(28,46.77242);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(29,21.06177);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(30,11.33355);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(31,24.09983);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(1,18.19086);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(2,53.76588);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(3,62.18783);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(4,60.42829);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(5,49.08119);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(6,41.12948);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(7,33.01079);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(8,27.37813);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(9,26.94627);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(10,24.14776);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(11,21.61445);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(12,22.59199);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(13,20.35737);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(14,20.24034);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(15,18.88836);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(16,17.66685);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(17,15.94631);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(18,15.88221);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(19,14.33929);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(20,12.95109);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(21,12.01146);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(22,10.17406);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(23,8.583681);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(24,7.725866);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(25,6.163101);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(26,6.686062);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(27,4.26222);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(28,4.597547);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(29,1.816038);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(30,1.355304);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(31,4.959592);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetEntries(340933);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(1,1525.304);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(2,4750.849);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(3,3904.879);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(4,2643.91);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(5,1979.964);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(6,1539.747);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(7,1179.549);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(8,1015.496);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(9,879.4391);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(10,747.145);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(11,734.5161);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(12,663.6997);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(13,593.9674);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(14,509.864);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(15,475.092);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(16,448.4381);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(17,337.4036);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(18,289.5371);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(19,240.6221);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(20,218.3611);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(21,218.1912);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(22,135.5932);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(23,140.526);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(24,100.8024);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(25,79.37081);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(26,54.13705);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(27,50.68174);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(28,28.66369);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(29,13.63654);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(30,9.38354);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(31,14.99633);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(1,33.69153);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(2,72.84436);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(3,71.02785);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(4,60.96544);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(5,54.00209);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(6,45.89923);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(7,40.47089);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(8,39.18272);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(9,36.42613);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(10,28.31902);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(11,31.14488);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(12,32.00397);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(13,27.67946);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(14,24.34625);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(15,23.78487);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(16,27.5244);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(17,20.45388);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(18,19.21095);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(19,17.6984);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(20,17.36731);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(21,19.15178);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(22,9.104807);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(23,13.17965);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(24,9.357916);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(25,6.603544);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(26,4.877873);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(27,7.810858);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(28,4.107762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(29,1.625817);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(30,1.842764);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(31,2.977291);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetEntries(194636);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(1,6.207403);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(2,21.66801);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(3,19.21015);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(4,14.94799);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(5,10.57618);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(6,10.55436);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(7,8.280829);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(8,7.796221);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(9,6.386062);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(10,5.751058);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(11,4.860574);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(12,4.857546);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(13,4.057905);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(14,3.310997);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(15,4.86247);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(16,2.585915);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(17,1.178018);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(18,3.139159);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(19,1.379634);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(20,1.034442);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(21,0.5155163);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(22,1.552986);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(23,1.123389);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(24,0.3436775);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(25,0.2875345);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(26,0.3734539);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(27,0.2577581);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(28,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(30,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(31,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(1,0.9950823);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(2,2.019105);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(3,1.830094);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(4,1.570565);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(5,1.30112);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(6,1.357886);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(7,1.189309);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(8,1.196801);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(9,1.070278);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(10,0.9992147);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(11,0.9290888);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(12,0.8900392);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(13,0.8775632);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(14,0.8119675);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(15,0.947607);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(16,0.6304953);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(17,0.4280826);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(18,0.8028244);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(19,0.4731843);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(20,0.3985683);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(21,0.2104586);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(22,0.5236275);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(23,0.4871089);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(24,0.1718388);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(25,0.2191593);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(26,0.2353995);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(27,0.1488167);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(28,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(30,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(31,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetEntries(1108);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(1,11.96766);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(2,49.62866);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(3,46.40333);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(4,28.84233);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(5,16.90886);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(6,12.41355);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(7,9.234524);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(8,8.456452);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(9,6.933373);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(10,5.95179);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(11,5.599027);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(12,4.404735);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(13,5.827391);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(14,4.149879);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(15,5.097014);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(16,3.208547);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(17,2.210944);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(18,4.022451);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(19,1.456848);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(20,1.751699);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(21,0.637141);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(22,1.671709);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(23,1.607995);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(24,0.637141);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(25,0.5201856);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(26,0.3927574);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(27,0.1911423);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(28,0.1274282);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(29,0.0637141);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(30,0.1911423);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(31,0.0637141);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(1,1.132604);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(2,2.38145);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(3,2.211139);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(4,1.787061);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(5,1.406452);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(6,1.363557);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(7,1.177904);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(8,1.180791);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(9,1.062476);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(10,0.9728063);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(11,0.9266842);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(12,0.8414222);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(13,0.9242513);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(14,0.8317171);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(15,0.9342578);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(16,0.6392002);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(17,0.4835326);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(18,0.8268219);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(19,0.4621256);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(20,0.441607);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(21,0.2014817);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(22,0.5143728);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(23,0.5104115);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(24,0.2014817);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(25,0.2468726);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(26,0.2298415);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(27,0.1103561);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(28,0.09010534);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(29,0.0637141);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(30,0.1103561);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(31,0.0637141);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetEntries(2838);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(1,19.36315);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(2,69.38289);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(3,67.04067);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(4,49.17623);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(5,24.33551);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(6,16.50931);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(7,10.87436);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(8,12.04824);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(9,9.141158);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(10,8.337802);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(11,9.022409);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(12,6.4059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(13,5.234702);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(14,5.233017);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(15,3.697348);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(16,3.372676);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(17,3.629324);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(18,2.480295);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(19,2.335006);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(20,2.022094);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(21,2.434273);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(22,1.968849);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(23,0.957719);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(24,1.491333);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(25,0.3928623);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(26,0.1867731);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(27,0.3661568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(28,0.1793837);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(1,1.920823);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(2,3.623207);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(3,3.564558);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(4,3.049224);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(5,2.146549);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(6,1.773299);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(7,1.443199);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(8,1.50849);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(9,1.3218);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(10,1.259564);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(11,1.304261);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(12,1.100486);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(13,0.9908096);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(14,0.9899771);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(15,0.8278138);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(16,0.7961901);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(17,0.8345367);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(18,0.6893499);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(19,0.675296);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(20,0.6102253);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(21,0.6762547);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(22,0.6236682);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(23,0.4291699);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(24,0.5277737);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(25,0.2781312);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(26,0.1867731);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(27,0.2589647);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(28,0.1793837);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetEntries(1788);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(1,7.13659);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(2,34.71591);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(3,41.96986);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(4,34.17476);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(5,22.85515);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(6,14.76088);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(7,10.28025);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(8,7.829078);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(9,6.836142);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(10,6.250459);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(11,5.842935);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(12,5.444756);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(13,4.879734);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(14,3.985858);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(15,3.303876);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(16,2.810567);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(17,2.240793);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(18,1.975178);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(19,1.547715);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(20,1.202634);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(21,1.14442);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(22,1.007598);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(23,0.8942482);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(24,0.6888963);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(25,0.5279648);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(26,0.3599325);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(27,0.2105468);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(28,0.08748364);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(29,0.04362319);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(30,0.01540899);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(31,0.01950755);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(1,0.1124361);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(2,0.2471621);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(3,0.2702799);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(4,0.2432309);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(5,0.1985571);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(6,0.1596514);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(7,0.1334918);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(8,0.1163102);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(9,0.109313);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(10,0.1043162);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(11,0.1009652);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(12,0.09724034);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(13,0.09205094);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(14,0.08304445);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(15,0.07588463);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(16,0.07002443);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(17,0.06223065);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(18,0.05881707);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(19,0.05225405);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(20,0.04563041);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(21,0.04451213);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(22,0.04213985);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(23,0.03949789);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(24,0.03489932);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(25,0.0303773);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(26,0.02500746);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(27,0.0193779);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(28,0.01232053);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(29,0.008772704);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(30,0.004651419);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(31,0.005788319);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetEntries(135628);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(1,6.412905);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(2,27.13815);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(3,32.82695);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(4,26.43595);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(5,17.75081);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(6,11.32422);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(7,7.383396);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(8,5.695645);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(9,4.785382);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(10,4.044852);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(11,3.818998);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(12,3.370026);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(13,2.968963);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(14,2.800598);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(15,2.288661);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(16,1.984784);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(17,1.71102);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(18,1.501592);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(19,1.292163);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(20,1.108741);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(21,1.025243);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(22,0.819921);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(23,0.7870694);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(24,0.5488954);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(25,0.4352836);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(26,0.3161966);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(27,0.1820526);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(28,0.09444833);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(29,0.04927739);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(30,0.02874514);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(31,0.01368816);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(1,0.05541676);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(2,0.1139997);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(3,0.1253802);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(4,0.1125152);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(5,0.09219828);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(6,0.07364068);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(7,0.05946231);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(8,0.05222581);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(9,0.04787095);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(10,0.04401139);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(11,0.04276499);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(12,0.04017264);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(13,0.03770649);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(14,0.03662175);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(15,0.03310583);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(16,0.03082977);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(17,0.02862472);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(18,0.02681573);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(19,0.02487553);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(20,0.02304246);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(21,0.02215783);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(22,0.01981526);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(23,0.01941423);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(24,0.01621282);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(25,0.01443776);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(26,0.0123053);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(27,0.009337102);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(28,0.006725287);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(29,0.004857777);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(30,0.003710188);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(31,0.002560273);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetEntries(374655);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(1,0.3886002);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(2,1.541881);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(3,1.282806);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(4,0.7767157);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(5,0.4347241);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(6,0.2279507);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(7,0.19582);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(8,0.1729335);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(9,0.1408427);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(10,0.13727);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(11,0.1217314);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(12,0.1355209);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(13,0.1109131);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(14,0.08607501);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(15,0.08673677);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(16,0.08071953);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(17,0.05074288);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(18,0.03110484);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(19,0.02162333);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(20,0.04405061);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(21,0.03222584);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(22,0.02660035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(23,0.01792279);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(24,0.01591705);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(25,0.02566857);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(26,0.008171272);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(27,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(1,0.02981726);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(2,0.05851898);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(3,0.05394958);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(4,0.04198881);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(5,0.03157062);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(6,0.02286917);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(7,0.0211027);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(8,0.01995263);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(9,0.01777113);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(10,0.01765686);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(11,0.01637798);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(12,0.01784547);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(13,0.01609363);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(14,0.01377542);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(15,0.0136988);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(16,0.01369756);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(17,0.01129459);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(18,0.00825335);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(19,0.00728935);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(20,0.009902028);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(21,0.008265217);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(22,0.007810693);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(23,0.006148551);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(24,0.006147631);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(25,0.007612116);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(26,0.004201636);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(27,0.003867885);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(28,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetEntries(2879);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(1,0.1451478);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(2,0.7075427);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(3,0.702844);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(4,0.3971572);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(5,0.1826522);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(6,0.1222246);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(7,0.09174428);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(8,0.07949156);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(9,0.06400982);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(10,0.05246075);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(11,0.0513558);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(12,0.0455094);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(13,0.04160102);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(14,0.03659857);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(15,0.03484769);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(16,0.03272525);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(17,0.02221353);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(18,0.02370054);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(19,0.01658826);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(20,0.01528502);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(21,0.01355664);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(22,0.01470826);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(23,0.01160808);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(24,0.01147031);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(25,0.01067467);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(26,0.005844429);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(27,0.002386316);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(28,0.001613838);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(29,0.001878717);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(1,0.006443066);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(2,0.01441814);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(3,0.01437639);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(4,0.01081837);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(5,0.007353449);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(6,0.006042917);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(7,0.005256717);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(8,0.004880756);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(9,0.004408727);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(10,0.003948908);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(11,0.003887522);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(12,0.003695853);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(13,0.003528861);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(14,0.003324505);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(15,0.003191416);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(16,0.003150238);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(17,0.002540683);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(18,0.002631385);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(19,0.002219289);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(20,0.002151464);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(21,0.001987251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(22,0.002099742);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(23,0.001826433);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(24,0.001816717);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(25,0.001748607);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(26,0.001304358);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(27,0.0008119212);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(28,0.0006673657);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(29,0.0007782064);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetEntries(10461);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all__103 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all__103","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(1,210482);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(2,814358);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(3,734466);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(4,543778);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(5,418540);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(6,328995);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(7,266025);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(8,221276);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(9,189156);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(10,166960);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(11,150841);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(12,136974);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(13,123972);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(14,111175);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(15,98348);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(16,86546);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(17,71995);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(18,60066);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(19,51016);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(20,43508);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(21,36448);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(22,30238);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(23,24980);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(24,20080);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(25,15409);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(26,11514);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(27,7706);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(28,5043);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(29,3169);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(30,1866);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetBinContent(31,3021);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetEntries(4987951);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all__103->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0_all__103->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__103->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__103->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fx1103[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fy1103[30] = {
   268324.8,
   1149145,
   1086498,
   801254,
   596481.4,
   462807.6,
   380443.4,
   306050.3,
   254100.7,
   226690.4,
   213785,
   186767.4,
   190961,
   151521.6,
   159681.5,
   113787.9,
   92144.67,
   81126.57,
   63655.74,
   54376.3,
   54482.94,
   40121.97,
   30817.32,
   28802.22,
   19508.24,
   14705.79,
   8128.587,
   8066.678,
   4873.32,
   2487.951};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fex1103[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fey1103[30] = {
   4171.121,
   12902.57,
   28693.78,
   23552.64,
   10395.2,
   9796.855,
   16631.06,
   7592.519,
   6264.556,
   6184.434,
   6982.98,
   5160.02,
   21091.17,
   4952.875,
   21013.07,
   4091.274,
   3846.44,
   3755.743,
   2631.673,
   2420.073,
   3213.426,
   2437.687,
   1907.426,
   2310.227,
   1911.104,
   1952.933,
   643.4947,
   1866.651,
   1536.669,
   490.3516};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fx1103,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fy1103,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fex1103,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fey1103);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetMinimum(1797.839);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetMaximum(1278052);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__104 = new TH1D("data_mc_ratio__104","",30,0,6);
   data_mc_ratio__104->SetBinContent(1,0.78443);
   data_mc_ratio__104->SetBinContent(2,0.7086643);
   data_mc_ratio__104->SetBinContent(3,0.675994);
   data_mc_ratio__104->SetBinContent(4,0.6786587);
   data_mc_ratio__104->SetBinContent(5,0.7016816);
   data_mc_ratio__104->SetBinContent(6,0.7108677);
   data_mc_ratio__104->SetBinContent(7,0.6992498);
   data_mc_ratio__104->SetBinContent(8,0.7230054);
   data_mc_ratio__104->SetBinContent(9,0.7444135);
   data_mc_ratio__104->SetBinContent(10,0.7365111);
   data_mc_ratio__104->SetBinContent(11,0.7055732);
   data_mc_ratio__104->SetBinContent(12,0.7333936);
   data_mc_ratio__104->SetBinContent(13,0.6492007);
   data_mc_ratio__104->SetBinContent(14,0.7337237);
   data_mc_ratio__104->SetBinContent(15,0.6159009);
   data_mc_ratio__104->SetBinContent(16,0.7605909);
   data_mc_ratio__104->SetBinContent(17,0.7813257);
   data_mc_ratio__104->SetBinContent(18,0.7403986);
   data_mc_ratio__104->SetBinContent(19,0.8014359);
   data_mc_ratio__104->SetBinContent(20,0.8001279);
   data_mc_ratio__104->SetBinContent(21,0.6689801);
   data_mc_ratio__104->SetBinContent(22,0.7536519);
   data_mc_ratio__104->SetBinContent(23,0.8105832);
   data_mc_ratio__104->SetBinContent(24,0.6971685);
   data_mc_ratio__104->SetBinContent(25,0.7898714);
   data_mc_ratio__104->SetBinContent(26,0.7829567);
   data_mc_ratio__104->SetBinContent(27,0.9480122);
   data_mc_ratio__104->SetBinContent(28,0.6251644);
   data_mc_ratio__104->SetBinContent(29,0.6502754);
   data_mc_ratio__104->SetBinContent(30,0.7500148);
   data_mc_ratio__104->SetBinContent(31,0.9110096);
   data_mc_ratio__104->SetBinError(1,0.001709806);
   data_mc_ratio__104->SetBinError(2,0.0007852951);
   data_mc_ratio__104->SetBinError(3,0.0007887821);
   data_mc_ratio__104->SetBinError(4,0.0009203237);
   data_mc_ratio__104->SetBinError(5,0.001084605);
   data_mc_ratio__104->SetBinError(6,0.00123935);
   data_mc_ratio__104->SetBinError(7,0.001355724);
   data_mc_ratio__104->SetBinError(8,0.001537002);
   data_mc_ratio__104->SetBinError(9,0.001711607);
   data_mc_ratio__104->SetBinError(10,0.001802491);
   data_mc_ratio__104->SetBinError(11,0.001816697);
   data_mc_ratio__104->SetBinError(12,0.001981609);
   data_mc_ratio__104->SetBinError(13,0.001843814);
   data_mc_ratio__104->SetBinError(14,0.002200539);
   data_mc_ratio__104->SetBinError(15,0.001963939);
   data_mc_ratio__104->SetBinError(16,0.002585399);
   data_mc_ratio__104->SetBinError(17,0.00291193);
   data_mc_ratio__104->SetBinError(18,0.003021004);
   data_mc_ratio__104->SetBinError(19,0.003548261);
   data_mc_ratio__104->SetBinError(20,0.003835967);
   data_mc_ratio__104->SetBinError(21,0.003504099);
   data_mc_ratio__104->SetBinError(22,0.004334053);
   data_mc_ratio__104->SetBinError(23,0.00512863);
   data_mc_ratio__104->SetBinError(24,0.004919896);
   data_mc_ratio__104->SetBinError(25,0.006363106);
   data_mc_ratio__104->SetBinError(26,0.007296669);
   data_mc_ratio__104->SetBinError(27,0.0107994);
   data_mc_ratio__104->SetBinError(28,0.008803386);
   data_mc_ratio__104->SetBinError(29,0.01155144);
   data_mc_ratio__104->SetBinError(30,0.01736257);
   data_mc_ratio__104->SetBinError(31,0.1767417);
   data_mc_ratio__104->SetMinimum(0.4);
   data_mc_ratio__104->SetMaximum(1.6);
   data_mc_ratio__104->SetEntries(3461.827);
   data_mc_ratio__104->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__104->SetLineColor(ci);
   data_mc_ratio__104->SetLineWidth(2);
   data_mc_ratio__104->SetMarkerStyle(20);
   data_mc_ratio__104->SetMarkerSize(1.2);
   data_mc_ratio__104->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__104->GetXaxis()->SetRange(1,30);
   data_mc_ratio__104->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__104->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__104->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__104->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__104->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__104->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__104->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__104->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__104->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__104->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__104->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__104->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__104->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__104->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__104->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__104->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__104->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1104[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1104[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1104[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1104[30] = {
   0.01554505,
   0.01122797,
   0.02640943,
   0.02939472,
   0.01742753,
   0.02116831,
   0.04371494,
   0.02480808,
   0.02465383,
   0.02728141,
   0.03266356,
   0.02762806,
   0.1104475,
   0.03268758,
   0.1315936,
   0.03595528,
   0.04174349,
   0.04629486,
   0.04134227,
   0.04450602,
   0.05898041,
   0.0607569,
   0.06189461,
   0.08021003,
   0.09796397,
   0.1328003,
   0.0791644,
   0.2314027,
   0.3153228,
   0.1970905};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1104,Graph_from_mc_statistical_error_fy1104,Graph_from_mc_statistical_error_fex1104,Graph_from_mc_statistical_error_fey1104);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1104 = new TH1F("Graph_Graph_from_mc_statistical_error1104","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1104->SetMinimum(0.6216126);
   Graph_Graph_from_mc_statistical_error1104->SetMaximum(1.378387);
   Graph_Graph_from_mc_statistical_error1104->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1104->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1104->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1104);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_all->cd();
   Z_dR_Bj0_tags_all->Modified();
   Z_dR_Bj0_tags_all->cd();
   Z_dR_Bj0_tags_all->SetSelected(Z_dR_Bj0_tags_all);
}
