void Z_dR_algo_all()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Mon Jul 24 10:11:42 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(0,0,1,1);
   Z_dR_algo_all->SetFillColor(0);
   Z_dR_algo_all->SetFillStyle(4000);
   Z_dR_algo_all->SetBorderMode(0);
   Z_dR_algo_all->SetBorderSize(2);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-271.5382,6.314516,271566.6);
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
   st->SetMaximum(232745.5);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(0.3);
   st_stack_116->SetMaximum(244382.8);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetLabelSize(0.035);
   st_stack_116->GetXaxis()->SetTitleSize(0.035);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetLabelSize(0.05);
   st_stack_116->GetYaxis()->SetTitleSize(0.057);
   st_stack_116->GetYaxis()->SetTitleOffset(1.2);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetLabelSize(0.035);
   st_stack_116->GetZaxis()->SetTitleSize(0.035);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(2,0.6376205);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,93216.82);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,99865.97);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,97493.36);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,61839.32);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,50109.95);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,40053.68);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,39989.83);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,34604.51);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,30402.29);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,23524.04);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,18912.79);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,20169.09);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,19338.18);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,18733.47);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,10882.23);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,12346.84);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,11093.24);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,11207.06);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(21,11884.96);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,11999.75);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(23,10717.96);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(24,11832.84);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(25,9667.454);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(26,10774.96);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(27,7056.358);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(28,12761.15);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(29,11988.21);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(30,8328.302);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(31,5574.752);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(2,0.3729774);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,4280.883);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,5832.071);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,22884.89);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,4336.737);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,3872.126);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,3023.715);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,3310.23);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,3235.569);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,3353.049);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,2626.309);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,1730.612);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,3009.39);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,2523.312);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,2906.343);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,1369.339);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,2458.81);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,1947.619);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,2065.439);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(21,1484.426);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,2798.543);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(23,1975.143);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(24,2528.2);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(25,1362.224);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(26,1436.781);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(27,1138.592);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(28,2090.797);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(29,2718.562);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(30,2328.643);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(31,968.7032);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(42544);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,0.04592541);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,153.084);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,280.145);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,321.4216);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,354.471);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,388.7971);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,380.8803);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,375.6759);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,343.09);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,342.1742);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,288.3727);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,268.7088);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,231.2117);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,196.1888);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,180.4909);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,158.8334);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,140.9672);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,131.7322);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,121.6183);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,124.3682);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,115.0647);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,114.0465);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(24,110.4751);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(25,95.21167);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(26,92.64636);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(27,72.33767);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(28,69.59839);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(29,56.32538);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(30,33.04748);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(31,27.88375);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.04592541);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,7.156305);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,7.47032);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,7.818068);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,8.043107);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,8.51715);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,8.222321);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,8.137567);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,7.952338);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,7.661644);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,6.791034);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,6.811699);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,6.155328);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,5.703018);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,5.476033);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,5.121003);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,4.833285);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,4.580785);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,4.375911);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,4.433993);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,4.266185);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,4.277097);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(24,4.723194);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(25,4.022842);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(26,4.019878);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(27,3.483391);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(28,3.666033);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(29,3.321566);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(30,2.457411);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(31,2.307882);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(80803);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_3 = new TH1D("VbbHcc_algo_Z_dR_all_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(2,1.71317);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(3,1671.686);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(4,3251.75);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(5,3965.562);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(6,4417.73);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(7,4574.364);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(8,4512.813);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(9,4309.849);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(10,4004.412);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(11,3656.452);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(12,3287.555);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(13,2902.345);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(14,2559.936);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(15,2260.649);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(16,2014.605);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(17,1784.25);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(18,1628.943);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(19,1568.153);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(20,1532.423);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(21,1490.723);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(22,1442.726);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(23,1362.798);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(24,1270.662);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(25,1152.19);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(26,1025.672);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(27,864.0379);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(28,700.1939);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(29,515.8855);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(30,318.6433);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(31,253.8617);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(2,0.3434565);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(3,11.12626);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(4,15.50426);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(5,17.02307);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(6,18.7049);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(7,18.07459);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(8,17.94179);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(9,17.7061);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(10,16.84948);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(11,16.01426);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(12,15.30516);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(13,14.20501);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(14,13.35101);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(15,12.56388);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(16,11.74507);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(17,11.06941);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(18,10.8077);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(19,10.50472);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(20,10.78532);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(21,10.20898);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(22,10.02553);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(23,9.88058);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(24,9.423493);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(25,8.938866);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(26,8.866181);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(27,8.047257);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(28,7.035869);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(29,6.170295);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(30,4.804963);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(31,4.174387);
   VbbHcc_algo_Z_dR_all_stack_3->SetEntries(1023998);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_4 = new TH1D("VbbHcc_algo_Z_dR_all_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(2,0.3552981);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(3,610.003);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(4,881.8025);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(5,747.2065);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(6,608.8827);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(7,422.8408);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(8,292.3437);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(9,215.724);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(10,199.1132);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(11,182.5348);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(12,146.8047);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(13,148.1606);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(14,118.3659);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(15,108.4427);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(16,92.57522);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(17,73.20204);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(18,80.1288);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(19,69.66629);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(20,64.24702);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(21,58.52634);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(22,46.2969);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(23,51.69472);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(24,65.77506);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(25,58.04538);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(26,66.37805);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(27,81.40795);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(28,86.19587);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(29,81.26511);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(30,51.12732);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(31,29.66611);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(2,0.1597932);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(3,12.82945);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(4,18.12876);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(5,22.96093);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(6,26.2562);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(7,24.64665);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(8,17.52707);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(9,12.95999);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(10,12.95152);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(11,13.29863);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(12,10.34642);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(13,13.2593);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(14,8.052166);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(15,8.228553);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(16,7.739748);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(17,5.621896);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(18,9.764346);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(19,7.899528);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(20,5.529558);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(21,5.458626);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(22,6.47782);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(23,3.722379);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(24,7.401329);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(25,5.288126);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(26,7.983322);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(27,8.47723);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(28,10.01407);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(29,7.13766);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(30,3.699804);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(31,2.675933);
   VbbHcc_algo_Z_dR_all_stack_4->SetEntries(32611);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_5 = new TH1D("VbbHcc_algo_Z_dR_all_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(2,0.073996);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(3,433.414);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(4,422.257);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(5,275.813);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(6,271.0405);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(7,198.4175);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(8,173.9173);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(9,99.10713);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(10,117.8634);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(11,100.2856);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(12,94.69159);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(13,81.05313);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(14,49.19269);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(15,88.09264);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(16,66.37448);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(17,35.10601);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(18,54.0049);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(19,50.24285);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(20,47.90178);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(21,29.97539);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(22,25.8222);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(23,29.65901);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(24,47.55777);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(25,28.04013);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(26,27.28045);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(27,48.69711);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(28,27.90427);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(29,47.45661);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(30,24.51401);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(31,16.2749);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(2,0.073996);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(3,24.96659);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(4,26.13639);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(5,17.31136);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(6,26.18906);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(7,22.10716);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(8,17.81681);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(9,8.41431);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(10,14.93606);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(11,11.49913);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(12,12.56498);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(13,15.02743);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(14,5.30163);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(15,15.57668);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(16,13.86438);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(17,5.105202);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(18,11.16417);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(19,8.97656);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(20,9.948628);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(21,4.459061);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(22,4.445982);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(23,5.092864);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(24,12.53672);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(25,4.229303);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(26,3.8894);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(27,11.86821);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(28,4.275074);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(29,11.39327);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(30,4.21567);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(31,3.011654);
   VbbHcc_algo_Z_dR_all_stack_5->SetEntries(16359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_6 = new TH1D("VbbHcc_algo_Z_dR_all_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(3,1.137479);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(4,1.490763);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(5,0.8473404);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(6,0.2678604);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(7,1.016473);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(8,0.5160411);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(9,0.6913828);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(10,0.2665432);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(11,0.3405829);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(12,0.4039369);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(13,0.0941619);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(14,0.5655393);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(15,0.4301003);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(16,0.4293626);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(17,0.5169149);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(18,0.2107148);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(19,0.179752);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(20,0.9039665);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(21,0.3406402);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(22,0.5258141);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(23,0.232992);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(24,0.1993032);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(26,0.08735924);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(27,0.09561468);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(29,0.09013394);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(30,0.2528531);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(31,0.09139225);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(3,0.5358307);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(4,0.4578661);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(5,0.3668255);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(6,0.1555939);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(7,0.410276);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(8,0.3597306);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(9,0.4481568);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(10,0.1964224);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(11,0.2661272);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(12,0.2108245);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(13,0.0941619);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(14,0.3453031);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(15,0.2803234);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(16,0.2800273);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(17,0.2930379);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(18,0.1237113);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(19,0.179752);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(20,0.4795051);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(21,0.204534);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(22,0.37198);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(23,0.232992);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(24,0.1409434);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(26,0.08735924);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(27,0.09561468);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(29,0.09013394);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(30,0.2528531);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(31,0.09139225);
   VbbHcc_algo_Z_dR_all_stack_6->SetEntries(87);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_7 = new TH1D("VbbHcc_algo_Z_dR_all_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(3,4.51534);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(4,8.768378);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(5,5.945418);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(6,3.578837);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(7,3.028659);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(8,1.637514);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(9,1.155144);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(10,0.3826325);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(11,0.5742575);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(12,0.584833);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(13,0.1788065);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(14,0.6082749);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(15,0.502279);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(16,0.3754509);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(17,0.3827021);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(18,0.1909957);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(19,0.3924134);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(20,0.9478737);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(21,0.2945164);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(22,0.6007805);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(23,0.4412317);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(24,0.07085605);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(25,0.2035055);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(26,0.4641778);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(27,0.07065601);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(28,0.5607953);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(29,0.4062136);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(30,0.8150656);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(31,0.3411587);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(3,0.714554);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(4,0.8252166);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(5,0.6908236);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(6,0.4947186);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(7,0.5509749);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(8,0.4527646);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(9,0.4749699);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(10,0.210992);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(11,0.2894829);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(12,0.2269708);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(13,0.1061481);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(14,0.3458314);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(15,0.280548);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(16,0.2649262);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(17,0.2660761);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(18,0.1105613);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(19,0.2177999);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(20,0.4803225);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(21,0.1858701);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(22,0.3794589);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(23,0.2622552);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(24,0.07085605);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(25,0.1121925);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(26,0.1758321);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(27,0.07065601);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(28,0.1987426);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(29,0.1658627);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(30,0.3217278);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(31,0.1529038);
   VbbHcc_algo_Z_dR_all_stack_7->SetEntries(488);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_8 = new TH1D("VbbHcc_algo_Z_dR_all_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(3,11.92715);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(4,14.31115);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(5,11.77526);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(6,8.603963);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(7,4.594008);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(8,1.127965);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(9,1.691131);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(10,1.342779);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(11,1.232135);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(12,1.443857);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(13,0.9892538);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(14,0.8822094);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(15,0.7080317);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(17,0.9930309);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(18,1.123504);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(19,0.3631451);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(20,0.4845444);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(21,0.3910422);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(22,0.4033942);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(23,0.5720498);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(24,0.5484667);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(26,0.1274866);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(27,1.433569);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(28,1.857659);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(29,1.025385);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(30,0.4150733);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(31,0.1416166);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(3,1.59734);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(4,1.771108);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(5,1.590764);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(6,1.344472);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(7,0.9855747);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(8,0.4737853);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(9,0.6031839);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(10,0.5551939);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(11,0.5177164);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(12,0.5977581);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(13,0.4446115);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(14,0.4446579);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(15,0.4111198);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(17,0.4465244);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(18,0.510219);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(19,0.2569602);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(20,0.342715);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(21,0.2782509);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(22,0.2860252);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(23,0.3302814);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(24,0.3199732);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(26,0.1274866);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(27,0.5567009);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(28,0.5918333);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(29,0.4624578);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(30,0.29407);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(31,0.1416166);
   VbbHcc_algo_Z_dR_all_stack_8->SetEntries(341);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_9 = new TH1D("VbbHcc_algo_Z_dR_all_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(3,2.714625);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(4,5.82187);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(5,6.038847);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(6,5.388281);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(7,3.871166);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(8,2.178448);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(9,1.411978);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(10,0.9220872);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(11,0.733305);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(12,0.6361147);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(13,0.5218717);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(14,0.5963746);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(15,0.4317912);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(16,0.4482759);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(17,0.457184);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(18,0.4032632);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(19,0.3399825);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(20,0.3006336);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(21,0.2743488);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(22,0.2915843);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(23,0.3041447);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(24,0.3665786);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(25,0.3986167);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(26,0.5362416);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(27,0.6518725);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(28,0.6715133);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(29,0.559022);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(30,0.3853602);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(31,0.1731806);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(3,0.07752179);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(4,0.1109916);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(5,0.1138634);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(6,0.1058386);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(7,0.09172072);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(8,0.06485708);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(9,0.05183763);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(10,0.04198733);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(11,0.03792126);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(12,0.03573126);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(13,0.03261514);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(14,0.05293954);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(15,0.02888976);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(16,0.03025959);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(17,0.03064835);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(18,0.02878363);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(19,0.0261813);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(20,0.02706273);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(21,0.02570309);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(22,0.02384557);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(23,0.02416352);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(24,0.03782053);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(25,0.02840363);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(26,0.0331982);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(27,0.03694679);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(28,0.03745998);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(29,0.03362309);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(30,0.0485102);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(31,0.01888266);
   VbbHcc_algo_Z_dR_all_stack_9->SetEntries(21433);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_10 = new TH1D("VbbHcc_algo_Z_dR_all_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(2,0.001644857);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(3,1.297611);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(4,2.628273);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(5,3.257551);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(6,3.230188);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(7,2.736685);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(8,1.791881);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(9,1.151536);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(10,0.7640298);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(11,0.5830989);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(12,0.4784905);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(13,0.4189262);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(14,0.3385227);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(15,0.2863878);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(16,0.2877682);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(17,0.2426393);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(18,0.2047217);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(19,0.2315871);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(20,0.221889);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(21,0.2454157);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(22,0.2580028);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(23,0.2421375);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(24,0.3281728);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(25,0.3005535);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(26,0.3798207);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(27,0.3506089);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(28,0.3866007);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(29,0.2662662);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(30,0.1845655);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(31,0.1237543);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(2,0.0009729021);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(3,0.02568592);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(4,0.03669703);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(5,0.04088674);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(6,0.04069531);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(7,0.03754378);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(8,0.03035374);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(9,0.02423023);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(10,0.0197966);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(11,0.01725554);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(12,0.01559472);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(13,0.01453387);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(14,0.01310775);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(15,0.0120131);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(16,0.01210888);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(17,0.01111739);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(18,0.01015092);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(19,0.01088475);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(20,0.01060018);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(21,0.01117265);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(22,0.01145238);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(23,0.01111531);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(24,0.01293244);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(25,0.01240934);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(26,0.01398207);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(27,0.01344822);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(28,0.01409201);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(29,0.01173313);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(30,0.009713466);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(31,0.007967787);
   VbbHcc_algo_Z_dR_all_stack_10->SetEntries(48501);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_11 = new TH1D("VbbHcc_algo_Z_dR_all_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(3,0.2891176);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(4,0.4072817);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(5,0.3492069);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(6,0.2180869);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(7,0.08362845);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(8,0.04663171);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(9,0.03088495);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(10,0.02584713);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(11,0.004761269);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(12,0.01408816);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(13,0.01613423);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(14,0.002434505);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(15,0.007782264);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(16,0.007219437);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(17,0.007762958);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(18,0.008491332);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(19,0.006639638);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(20,0.00298544);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(22,0.01112199);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(24,0.007058025);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(25,0.01316572);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(26,0.01582767);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(27,0.02916769);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(28,0.01968882);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(29,0.03012585);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(30,0.009766634);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(31,0.01621397);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(3,0.02728953);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(4,0.03329929);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(5,0.03020352);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(6,0.02358564);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(7,0.01505312);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(8,0.01058856);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(9,0.009203635);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(10,0.008028891);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(11,0.003575178);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(12,0.005959139);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(13,0.006394872);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(14,0.002434505);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(15,0.003988176);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(16,0.004339082);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(17,0.004010753);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(18,0.004559888);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(19,0.003862664);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(20,0.002613919);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(22,0.005148559);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(24,0.004211036);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(25,0.006133372);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(26,0.006620909);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(27,0.008755636);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(28,0.006722888);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(29,0.009008586);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(30,0.005701781);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(31,0.006807784);
   VbbHcc_algo_Z_dR_all_stack_11->SetEntries(747);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_12 = new TH1D("VbbHcc_algo_Z_dR_all_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(3,0.05647563);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(4,0.1408421);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(5,0.1497024);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(6,0.1048141);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(7,0.04531004);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(8,0.02235956);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(9,0.01211586);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(10,0.006250591);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(11,0.00785129);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(12,0.006551233);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(13,0.005125725);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(14,0.004635773);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(15,0.003949252);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(16,0.0028432);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(17,0.003358949);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(18,0.004923289);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(19,0.001884108);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(20,0.002808728);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(21,0.002171161);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(22,0.003233816);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(23,0.001952382);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(24,0.001596522);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(25,0.003507481);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(26,0.005219211);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(27,0.01005468);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(28,0.01181781);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(29,0.01162999);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(30,0.006762553);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(31,0.002988523);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(3,0.004277741);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(4,0.007306065);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(5,0.006965128);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(6,0.005888834);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(7,0.00394687);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(8,0.002782832);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(9,0.002155777);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(10,0.001427538);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(11,0.001584662);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(12,0.001476755);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(13,0.001298391);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(14,0.001174153);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(15,0.001184605);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(16,0.001000234);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(17,0.001098274);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(18,0.001259856);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(19,0.0007850709);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(20,0.0009046217);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(21,0.0008347069);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(22,0.001106824);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(23,0.000834934);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(24,0.0006832446);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(25,0.001062264);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(26,0.001260531);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(27,0.001798162);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(28,0.001943418);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(29,0.001936145);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(30,0.001538028);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(31,0.0009645833);
   VbbHcc_algo_Z_dR_all_stack_12->SetEntries(2089);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_all__231 = new TH1D("VbbHcc_algo_Z_dR_all__231","",30,0,6);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(2,26);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(3,41763);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(4,48143);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(5,36610);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(6,31532);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(7,27735);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(8,24843);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(9,22785);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(10,20557);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(11,18719);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(12,16815);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(13,15311);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(14,13309);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(15,12235);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(16,11407);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(17,9630);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(18,8580);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(19,7942);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(20,7310);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(21,7225);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(22,6830);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(23,6617);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(24,6502);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(25,6272);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(26,6030);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(27,5970);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(28,5960);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(29,5951);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(30,4080);
   VbbHcc_algo_Z_dR_all__231->SetBinContent(31,3158);
   VbbHcc_algo_Z_dR_all__231->SetEntries(439876);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all__231->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all__231->SetLineWidth(2);
   VbbHcc_algo_Z_dR_all__231->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_all__231->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_all__231->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all__231->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all__231->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all__231->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all__231->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all__231->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all__231->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all__231->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all__231->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all__231->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all__231->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all__231->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all__231->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all__231->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all__231->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fx1231[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fy1231[30] = {
   0,
   2.827655,
   96106.94,
   104735.5,
   102831.7,
   67512.83,
   55709.74,
   45420.96,
   44996.33,
   39272.7,
   34687.21,
   27345.03,
   22315.29,
   23130.79,
   21993.93,
   21089.07,
   12936.23,
   14253.03,
   12914.55,
   12976.12,
   13590.11,
   13631.75,
   12277.95,
   13328.83,
   11001.86,
   11988.55,
   8125.48,
   13648.55,
   12691.53,
   8757.703};
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fex1231[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fey1231[30] = {
   0,
   0.5386965,
   4280.996,
   5832.184,
   22884.92,
   4336.944,
   3872.32,
   3023.883,
   3310.324,
   3235.683,
   3353.142,
   2626.413,
   1730.8,
   3009.441,
   2523.411,
   2906.416,
   1369.414,
   2458.883,
   1947.69,
   2065.503,
   1484.485,
   2798.576,
   1975.182,
   2528.264,
   1362.276,
   1436.841,
   1138.719,
   2090.84,
   2718.604,
   2328.656};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_all_fx1231,Graph_from_VbbHcc_algo_Z_dR_all_fy1231,Graph_from_VbbHcc_algo_Z_dR_all_fex1231,Graph_from_VbbHcc_algo_Z_dR_all_fey1231);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_all1231 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_all1231","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetMaximum(138288.3);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_all1231);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_all","MC unc. (stat.)","fl");

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
   Z_dR_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__232 = new TH1D("data_mc_ratio__232","",30,0,6);
   data_mc_ratio__232->SetBinContent(2,9.194898);
   data_mc_ratio__232->SetBinContent(3,0.4345472);
   data_mc_ratio__232->SetBinContent(4,0.4596627);
   data_mc_ratio__232->SetBinContent(5,0.3560185);
   data_mc_ratio__232->SetBinContent(6,0.4670519);
   data_mc_ratio__232->SetBinContent(7,0.4978483);
   data_mc_ratio__232->SetBinContent(8,0.5469502);
   data_mc_ratio__232->SetBinContent(9,0.5063747);
   data_mc_ratio__232->SetBinContent(10,0.5234425);
   data_mc_ratio__232->SetBinContent(11,0.5396513);
   data_mc_ratio__232->SetBinContent(12,0.6149198);
   data_mc_ratio__232->SetBinContent(13,0.6861216);
   data_mc_ratio__232->SetBinContent(14,0.5753802);
   data_mc_ratio__232->SetBinContent(15,0.55629);
   data_mc_ratio__232->SetBinContent(16,0.5408964);
   data_mc_ratio__232->SetBinContent(17,0.7444211);
   data_mc_ratio__232->SetBinContent(18,0.6019772);
   data_mc_ratio__232->SetBinContent(19,0.6149655);
   data_mc_ratio__232->SetBinContent(20,0.5633427);
   data_mc_ratio__232->SetBinContent(21,0.5316368);
   data_mc_ratio__232->SetBinContent(22,0.501036);
   data_mc_ratio__232->SetBinContent(23,0.5389335);
   data_mc_ratio__232->SetBinContent(24,0.4878146);
   data_mc_ratio__232->SetBinContent(25,0.5700854);
   data_mc_ratio__232->SetBinContent(26,0.5029797);
   data_mc_ratio__232->SetBinContent(27,0.7347259);
   data_mc_ratio__232->SetBinContent(28,0.4366763);
   data_mc_ratio__232->SetBinContent(29,0.4688953);
   data_mc_ratio__232->SetBinContent(30,0.4658756);
   data_mc_ratio__232->SetBinContent(31,0.5349524);
   data_mc_ratio__232->SetBinError(2,1.803268);
   data_mc_ratio__232->SetBinError(3,0.002126381);
   data_mc_ratio__232->SetBinError(4,0.002094945);
   data_mc_ratio__232->SetBinError(5,0.001860685);
   data_mc_ratio__232->SetBinError(6,0.002630204);
   data_mc_ratio__232->SetBinError(7,0.002989392);
   data_mc_ratio__232->SetBinError(8,0.00347013);
   data_mc_ratio__232->SetBinError(9,0.003354652);
   data_mc_ratio__232->SetBinError(10,0.003650809);
   data_mc_ratio__232->SetBinError(11,0.003944318);
   data_mc_ratio__232->SetBinError(12,0.004742093);
   data_mc_ratio__232->SetBinError(13,0.005544972);
   data_mc_ratio__232->SetBinError(14,0.004987492);
   data_mc_ratio__232->SetBinError(15,0.005029204);
   data_mc_ratio__232->SetBinError(16,0.005064404);
   data_mc_ratio__232->SetBinError(17,0.007585873);
   data_mc_ratio__232->SetBinError(18,0.006498848);
   data_mc_ratio__232->SetBinError(19,0.006900583);
   data_mc_ratio__232->SetBinError(20,0.006588916);
   data_mc_ratio__232->SetBinError(21,0.00625455);
   data_mc_ratio__232->SetBinError(22,0.006062595);
   data_mc_ratio__232->SetBinError(23,0.006625285);
   data_mc_ratio__232->SetBinError(24,0.006049665);
   data_mc_ratio__232->SetBinError(25,0.007198415);
   data_mc_ratio__232->SetBinError(26,0.006477267);
   data_mc_ratio__232->SetBinError(27,0.009509072);
   data_mc_ratio__232->SetBinError(28,0.005656352);
   data_mc_ratio__232->SetBinError(29,0.006078283);
   data_mc_ratio__232->SetBinError(30,0.007293565);
   data_mc_ratio__232->SetBinError(31,0.08829916);
   data_mc_ratio__232->SetMinimum(0.4);
   data_mc_ratio__232->SetMaximum(1.6);
   data_mc_ratio__232->SetEntries(90.96019);
   data_mc_ratio__232->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__232->SetLineColor(ci);
   data_mc_ratio__232->SetLineWidth(2);
   data_mc_ratio__232->SetMarkerStyle(20);
   data_mc_ratio__232->SetMarkerSize(1.2);
   data_mc_ratio__232->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__232->GetXaxis()->SetRange(1,30);
   data_mc_ratio__232->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__232->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__232->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__232->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__232->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__232->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__232->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__232->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1232[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1232[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1232[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1232[30] = {
   0,
   0.19051,
   0.04454409,
   0.05568489,
   0.2225473,
   0.06423881,
   0.06950884,
   0.06657462,
   0.07356876,
   0.08239013,
   0.09666797,
   0.09604719,
   0.07756117,
   0.1301054,
   0.1147322,
   0.1378162,
   0.1058589,
   0.1725165,
   0.1508136,
   0.1591773,
   0.1092328,
   0.2052983,
   0.1608723,
   0.1896838,
   0.1238224,
   0.1198511,
   0.1401418,
   0.1531913,
   0.2142061,
   0.265898};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1232,Graph_from_mc_statistical_error_fy1232,Graph_from_mc_statistical_error_fex1232,Graph_from_mc_statistical_error_fey1232);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1232 = new TH1F("Graph_Graph_from_mc_statistical_error1232","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1232->SetMinimum(0.6809224);
   Graph_Graph_from_mc_statistical_error1232->SetMaximum(1.319078);
   Graph_Graph_from_mc_statistical_error1232->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1232->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1232->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1232);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->SetSelected(Z_dR_algo_all);
}
