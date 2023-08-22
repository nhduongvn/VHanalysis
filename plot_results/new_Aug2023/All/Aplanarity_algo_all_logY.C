void Aplanarity_algo_all_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Tue Aug 22 09:17:36 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(0,0,1,1);
   Aplanarity_algo_all->SetFillColor(0);
   Aplanarity_algo_all->SetFillStyle(4000);
   Aplanarity_algo_all->SetBorderMode(0);
   Aplanarity_algo_all->SetBorderSize(2);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1.483623,1.052419,17.47673);
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
   st->SetMinimum(0.3);
   st->SetMaximum(9.291779e+14);
   
   TH1F *st_stack_160 = new TH1F("st_stack_160","",50,0,1);
   st_stack_160->SetMinimum(0.0343034);
   st_stack_160->SetMaximum(3.807953e+15);
   st_stack_160->SetDirectory(0);
   st_stack_160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_160->SetLineColor(ci);
   st_stack_160->GetXaxis()->SetRange(1,50);
   st_stack_160->GetXaxis()->SetLabelFont(42);
   st_stack_160->GetXaxis()->SetLabelSize(0.035);
   st_stack_160->GetXaxis()->SetTitleSize(0.035);
   st_stack_160->GetXaxis()->SetTitleFont(42);
   st_stack_160->GetYaxis()->SetTitle("Events/0.02");
   st_stack_160->GetYaxis()->SetLabelFont(42);
   st_stack_160->GetYaxis()->SetLabelSize(0.05);
   st_stack_160->GetYaxis()->SetTitleSize(0.057);
   st_stack_160->GetYaxis()->SetTitleOffset(1.2);
   st_stack_160->GetYaxis()->SetTitleFont(42);
   st_stack_160->GetZaxis()->SetLabelFont(42);
   st_stack_160->GetZaxis()->SetLabelSize(0.035);
   st_stack_160->GetZaxis()->SetTitleSize(0.035);
   st_stack_160->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_160);
   
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,4759697);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,668786.6);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,149157.7);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,36901.82);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,10012.95);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,2212.958);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,690.7189);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,188.9273);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,61.69613);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(10,13.66969);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,28.61001);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(12,14.20916);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(13,266.7417);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(15,6.025153);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,57419.88);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,17616.45);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,6362.703);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,3561.831);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,1960.052);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,627.3824);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,303.3154);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,61.54529);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,25.81348);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(10,13.66969);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,20.66191);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(12,8.404454);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(13,237.3673);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(15,3.563766);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(333044);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,32286.82);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,4432.19);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,1003.444);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,269.2078);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,95.97193);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,33.03906);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,14.21602);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,6.216212);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,4.411122);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,2.008733);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,1.913072);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,0.9138949);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,0.04378787);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,0.3242681);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(15,0.08475669);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(16,0.02187584);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(18,0.01849631);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,72.92001);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,26.38654);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,13.04865);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,6.519401);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,4.891122);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,2.213912);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,1.362356);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,0.9665939);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,0.953195);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,0.5178511);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,0.6180195);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,0.3208122);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,0.06685903);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,0.244597);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(15,0.106548);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(16,0.02187584);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(18,0.01849631);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(631310);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(0,0.08717088);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(1,609754.2);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(2,78868.09);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(3,16134.07);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(4,4419.625);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(5,1451.481);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(6,574.8676);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(7,251.7608);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(8,118.43);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(9,63.36121);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(10,32.1759);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(11,20.22413);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(12,11.01388);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(13,7.387799);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(14,3.757073);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(15,1.845527);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(16,0.9862522);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(17,0.6165508);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(18,0.8120904);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(19,0.4646078);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(20,0.06584265);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(21,0.0358719);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinContent(22,0.08109651);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(0,0.08717088);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(1,201.0025);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(2,71.17563);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(3,31.91757);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(4,16.51513);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(5,9.145833);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(6,5.808021);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(7,3.87848);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(8,2.625612);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(9,1.876789);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(10,1.303528);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(11,1.053578);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(12,0.7708286);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(13,0.6226483);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(14,0.4557492);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(15,0.2991706);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(16,0.2304064);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(17,0.1741602);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(18,0.2159204);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(19,0.1729576);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(20,0.06584265);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(21,0.0358719);
   VbbHcc_algo_Aplanarity_all_stack_3->SetBinError(22,0.05800673);
   VbbHcc_algo_Aplanarity_all_stack_3->SetEntries(1.291274e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(1,27130.95);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(2,3305.773);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(3,727.0365);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(4,160.2692);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(5,46.24851);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(6,11.41124);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(7,6.060699);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(8,2.945523);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(9,0.4808745);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(10,0.4833142);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(11,0.7680649);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(12,0.4484253);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(13,0.2371321);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinContent(18,0.02783533);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(1,123.6164);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(2,48.59091);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(3,23.59381);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(4,10.84373);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(5,7.961505);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(6,2.396178);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(7,2.369566);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(8,1.804474);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(9,0.2780907);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(10,0.2703172);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(11,0.3322525);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(12,0.305904);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(13,0.2371321);
   VbbHcc_algo_Aplanarity_all_stack_4->SetBinError(18,0.02783533);
   VbbHcc_algo_Aplanarity_all_stack_4->SetEntries(198969);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(1,10770.74);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(2,1259.885);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(3,248.5847);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(4,64.96312);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(5,7.783021);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(6,5.073564);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(7,7.272293);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(8,0.5435233);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(9,0.546096);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(10,0.2876023);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinContent(11,0.1062127);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(1,131.3614);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(2,49.29425);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(3,21.11807);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(4,9.793712);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(5,1.979486);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(6,1.777297);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(7,5.565613);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(8,0.3238267);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(9,0.3664638);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(10,0.2506983);
   VbbHcc_algo_Aplanarity_all_stack_5->SetBinError(11,0.08696119);
   VbbHcc_algo_Aplanarity_all_stack_5->SetEntries(95654);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(1,110.6162);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(2,9.531155);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(3,2.622411);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(4,0.5821885);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(5,0.1103859);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinContent(7,0.08262463);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(1,6.489588);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(2,1.81975);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(3,0.8911525);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(4,0.306769);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(5,0.1103859);
   VbbHcc_algo_Aplanarity_all_stack_6->SetBinError(7,0.08262463);
   VbbHcc_algo_Aplanarity_all_stack_6->SetEntries(653);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(1,141.0365);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(2,14.51151);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(3,3.274862);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(4,0.5233847);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(5,0.3302794);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(6,0.1627677);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinContent(7,0.08998196);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(1,6.561648);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(2,1.898553);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(3,0.9000505);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(4,0.2757833);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(5,0.1663747);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(6,0.1152427);
   VbbHcc_algo_Aplanarity_all_stack_7->SetBinError(7,0.08998196);
   VbbHcc_algo_Aplanarity_all_stack_7->SetEntries(1264);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(1,339.8702);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(2,34.82063);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(3,6.447969);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(4,1.508793);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(5,0.5351692);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinContent(6,0.1997829);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(1,9.368402);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(2,2.943835);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(3,1.288343);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(4,0.6296932);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(5,0.3785794);
   VbbHcc_algo_Aplanarity_all_stack_8->SetBinError(6,0.1997829);
   VbbHcc_algo_Aplanarity_all_stack_8->SetEntries(1595);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(1,234.8244);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(2,18.57022);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(3,2.92408);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(4,0.6370602);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(5,0.1951885);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(6,0.04893961);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(7,0.01702278);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(8,0.008837949);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(9,0.003151516);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(10,0.002569237);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinContent(13,0.002940734);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(1,0.7525449);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(2,0.1975117);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(3,0.0792674);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(4,0.03456475);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(5,0.01993163);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(6,0.008992688);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(7,0.005927726);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(8,0.003139483);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(9,0.001855418);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(10,0.001828406);
   VbbHcc_algo_Aplanarity_all_stack_9->SetBinError(13,0.002940734);
   VbbHcc_algo_Aplanarity_all_stack_9->SetEntries(160336);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(1,101.9746);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(2,11.34432);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(3,2.217061);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(4,0.4684394);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(5,0.1666684);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(6,0.04153351);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(7,0.01597204);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(8,0.008923266);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(9,0.005670538);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(10,0.002534368);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(11,0.0009022692);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinContent(12,0.0004566288);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(1,0.2122723);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(2,0.07009533);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(3,0.03097026);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(4,0.01412123);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(5,0.008427188);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(6,0.004187851);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(7,0.002544283);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(8,0.001882229);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(9,0.00151756);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(10,0.0009602812);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(11,0.0005336755);
   VbbHcc_algo_Aplanarity_all_stack_10->SetBinError(12,0.0002700875);
   VbbHcc_algo_Aplanarity_all_stack_10->SetEntries(282471);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(1,1.918516);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(2,0.1599222);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(3,0.02771142);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(4,0.007404755);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinContent(6,0.001869605);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(1,0.06403561);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(2,0.01945035);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(3,0.007651086);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(4,0.003896068);
   VbbHcc_algo_Aplanarity_all_stack_11->SetBinError(6,0.001869605);
   VbbHcc_algo_Aplanarity_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(1,0.8694525);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(2,0.09286677);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(3,0.0178184);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(4,0.00547274);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinContent(5,0.001756087);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(1,0.01621088);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(2,0.005009816);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(3,0.002151503);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(4,0.001280001);
   VbbHcc_algo_Aplanarity_all_stack_12->SetBinError(5,0.0007001894);
   VbbHcc_algo_Aplanarity_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity_all__439 = new TH1D("VbbHcc_algo_Aplanarity_all__439","",50,0,1);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(0,1);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(1,2695033);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(2,360662);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(3,78822);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(4,19821);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(5,5449);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(6,1770);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(7,679);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(8,310);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(9,158);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(10,90);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(11,55);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(12,29);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(13,24);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(14,15);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(15,11);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(16,5);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(17,2);
   VbbHcc_algo_Aplanarity_all__439->SetBinContent(18,4);
   VbbHcc_algo_Aplanarity_all__439->SetEntries(3162989);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all__439->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all__439->SetLineWidth(2);
   VbbHcc_algo_Aplanarity_all__439->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity_all__439->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_all__439->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all__439->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_all__439->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all__439->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_all_fx1319[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_all_fy1319[50] = {
   5440571,
   756741.5,
   167288.4,
   41819.62,
   11615.77,
   2837.804,
   970.2344,
   317.0803,
   130.5043,
   48.63034,
   51.62239,
   26.58582,
   274.4133,
   4.081341,
   7.955437,
   1.008128,
   0.6165508,
   0.858422,
   0.4646078,
   0.06584265,
   0.0358719,
   0.08109651,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_all_fex1319[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_all_fey1319[50] = {
   57420.56,
   17616.75,
   6362.875,
   3561.906,
   1960.097,
   627.4203,
   303.4036,
   61.63613,
   25.90325,
   13.7464,
   20.70084,
   8.451362,
   237.3682,
   0.5172379,
   3.577888,
   0.2314425,
   0.1741602,
   0.2184915,
   0.1729576,
   0.06584265,
   0.0358719,
   0.05800673,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_all_fx1319,Graph_from_VbbHcc_algo_Aplanarity_all_fy1319,Graph_from_VbbHcc_algo_Aplanarity_all_fex1319,Graph_from_VbbHcc_algo_Aplanarity_all_fey1319);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetMinimum(6047.791);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetMaximum(6047791);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity_all1319);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_algo_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__440 = new TH1D("data_mc_ratio__440","",50,0,1);
   data_mc_ratio__440->SetBinContent(0,11.47172);
   data_mc_ratio__440->SetBinContent(1,0.4953585);
   data_mc_ratio__440->SetBinContent(2,0.4765987);
   data_mc_ratio__440->SetBinContent(3,0.4711744);
   data_mc_ratio__440->SetBinContent(4,0.4739641);
   data_mc_ratio__440->SetBinContent(5,0.4691035);
   data_mc_ratio__440->SetBinContent(6,0.6237216);
   data_mc_ratio__440->SetBinContent(7,0.6998309);
   data_mc_ratio__440->SetBinContent(8,0.9776705);
   data_mc_ratio__440->SetBinContent(9,1.210688);
   data_mc_ratio__440->SetBinContent(10,1.850697);
   data_mc_ratio__440->SetBinContent(11,1.065429);
   data_mc_ratio__440->SetBinContent(12,1.090807);
   data_mc_ratio__440->SetBinContent(13,0.08745931);
   data_mc_ratio__440->SetBinContent(14,3.675262);
   data_mc_ratio__440->SetBinContent(15,1.382702);
   data_mc_ratio__440->SetBinContent(16,4.959688);
   data_mc_ratio__440->SetBinContent(17,3.243853);
   data_mc_ratio__440->SetBinContent(18,4.659713);
   data_mc_ratio__440->SetBinError(0,16.22346);
   data_mc_ratio__440->SetBinError(1,0.0003017432);
   data_mc_ratio__440->SetBinError(2,0.0007936018);
   data_mc_ratio__440->SetBinError(3,0.001678255);
   data_mc_ratio__440->SetBinError(4,0.003366532);
   data_mc_ratio__440->SetBinError(5,0.006354923);
   data_mc_ratio__440->SetBinError(6,0.01482532);
   data_mc_ratio__440->SetBinError(7,0.02685705);
   data_mc_ratio__440->SetBinError(8,0.05552795);
   data_mc_ratio__440->SetBinError(9,0.0963172);
   data_mc_ratio__440->SetBinError(10,0.1950806);
   data_mc_ratio__440->SetBinError(11,0.1436624);
   data_mc_ratio__440->SetBinError(12,0.2025578);
   data_mc_ratio__440->SetBinError(13,0.01785256);
   data_mc_ratio__440->SetBinError(14,0.9489486);
   data_mc_ratio__440->SetBinError(15,0.4169004);
   data_mc_ratio__440->SetBinError(16,2.21804);
   data_mc_ratio__440->SetBinError(17,2.29375);
   data_mc_ratio__440->SetBinError(18,2.329856);
   data_mc_ratio__440->SetMinimum(0.4);
   data_mc_ratio__440->SetMaximum(1.6);
   data_mc_ratio__440->SetEntries(35.91559);
   data_mc_ratio__440->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__440->SetLineColor(ci);
   data_mc_ratio__440->SetLineWidth(2);
   data_mc_ratio__440->SetMarkerStyle(20);
   data_mc_ratio__440->SetMarkerSize(1.2);
   data_mc_ratio__440->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__440->GetXaxis()->SetRange(1,50);
   data_mc_ratio__440->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__440->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__440->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__440->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__440->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__440->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__440->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__440->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__440->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__440->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__440->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__440->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__440->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__440->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__440->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__440->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__440->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1320[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1320[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1320[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1320[50] = {
   0.01055414,
   0.02327975,
   0.03803537,
   0.08517307,
   0.1687444,
   0.2210936,
   0.3127116,
   0.1943865,
   0.1984859,
   0.2826714,
   0.401005,
   0.3178898,
   0.8650025,
   0.1267323,
   0.4497413,
   0.2295765,
   0.2824751,
   0.2545269,
   0.3722658,
   1,
   1,
   0.7152803,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1320,Graph_from_mc_statistical_error_fy1320,Graph_from_mc_statistical_error_fex1320,Graph_from_mc_statistical_error_fey1320);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1320 = new TH1F("Graph_Graph_from_mc_statistical_error1320","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1320->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1320->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1320->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1320->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1320->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1320);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->SetSelected(Aplanarity_algo_all);
}
