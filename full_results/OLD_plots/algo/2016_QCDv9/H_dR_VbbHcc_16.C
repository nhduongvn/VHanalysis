void H_dR_VbbHcc_16()
{
//=========Macro generated from canvas: H_dR_VbbHcc_16/H_dR_VbbHcc_16
//=========  (Tue Nov 22 09:16:00 2022) by ROOT version 6.14/09
   TCanvas *H_dR_VbbHcc_16 = new TCanvas("H_dR_VbbHcc_16", "H_dR_VbbHcc_16",0,0,600,600);
   H_dR_VbbHcc_16->SetHighLightColor(2);
   H_dR_VbbHcc_16->Range(0,0,1,1);
   H_dR_VbbHcc_16->SetFillColor(0);
   H_dR_VbbHcc_16->SetFillStyle(4000);
   H_dR_VbbHcc_16->SetBorderMode(0);
   H_dR_VbbHcc_16->SetBorderSize(2);
   H_dR_VbbHcc_16->SetFrameFillStyle(1000);
   H_dR_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-464.5369,10.52419,464082.3);
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
   st->SetMaximum(397740.6);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",50,0,10);
   st_stack_21->SetMinimum(0.01);
   st_stack_21->SetMaximum(417627.6);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetRange(1,50);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetLabelSize(0.035);
   st_stack_21->GetXaxis()->SetTitleSize(0.035);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetLabelSize(0.05);
   st_stack_21->GetYaxis()->SetTitleSize(0.057);
   st_stack_21->GetYaxis()->SetTitleOffset(1.2);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetLabelSize(0.035);
   st_stack_21->GetZaxis()->SetTitleSize(0.035);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",50,0,10);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,107982.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,118975.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,92991.21);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,105723.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,83364.13);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,118914.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,130291.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,112217.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,137786.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,170026.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,118062.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,135998.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,113150.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,143853.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,92253.33);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,48951.15);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,38689.09);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,15864.33);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,8917.698);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,5421.916);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,4063.362);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,1279.845);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,2700.41);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,12212.03);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,12840.42);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,11336.57);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,12120.86);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,10767.59);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,12770.42);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,13390.2);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,12425.33);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,13668.48);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,15252.01);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,12770.89);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,13614.38);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,12459.84);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,14029.69);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,11182.26);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,8127.423);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,7224.051);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,4650.389);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,3417.059);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,2718.388);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,2357.97);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,1279.845);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,1909.578);
   VbbHcc_algo_H_dR_stack_1->SetEntries(1415);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,100);
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
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",50,0,10);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.05224173);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,219.8305);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,392.0901);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,494.4966);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,656.493);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,796.5359);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,843.1107);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,820.907);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,768.79);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,790.9206);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,832.7825);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,873.2878);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,872.2085);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,846.0817);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,804.759);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,523.5294);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,366.0024);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,240.4696);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,158.562);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,95.41302);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,54.51166);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,29.74683);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,14.8166);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,7.774381);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,2.562304);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,0.5757273);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.191769);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.05224173);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,6.550451);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,8.724273);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,9.237525);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,9.85626);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,10.14945);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,10.37059);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,10.15059);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,10.09594);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,10.42352);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,10.57555);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,10.80011);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,10.75034);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,10.46815);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,10.05952);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,7.627935);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,6.139293);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,4.705143);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,3.773739);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,2.914148);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,2.101985);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,1.519228);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,1.034815);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,0.7671711);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.389707);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.1846027);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1122944);
   VbbHcc_algo_H_dR_stack_2->SetEntries(198303);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,100);
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
   
   TH1D *VbbHcc_algo_H_dR_stack_3 = new TH1D("VbbHcc_algo_H_dR_stack_3","",50,0,10);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,1.283536);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,1944.306);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,4166.379);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,6032.898);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,7750.986);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,8513.756);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,8367.094);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,7951.35);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,7646.538);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,7446.893);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,7260.254);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,6865.583);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,6291.518);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,5744.556);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,5007.088);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,2990.692);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,1845.96);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,1155.465);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,695.8008);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,396.5357);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,207.5237);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,111.1039);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,52.60143);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,19.92975);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,6.5492);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,2.195766);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,0.5309912);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,0.04766199);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.2754238);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,10.90025);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,15.93537);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,19.17958);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,21.79233);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,22.94514);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,22.86332);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,22.41769);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,22.06283);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,21.79799);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,21.53174);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,20.9178);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,19.97441);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,19.03654);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,17.73745);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,13.6621);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,10.67441);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,8.394643);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,6.485963);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,4.870019);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,3.494329);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,2.553962);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,1.762462);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,1.065121);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,0.6045535);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,0.3430537);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,0.167396);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,0.04766199);
   VbbHcc_algo_H_dR_stack_3->SetEntries(1672354);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetRange(1,100);
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
   
   TH1D *VbbHcc_algo_H_dR_stack_4 = new TH1D("VbbHcc_algo_H_dR_stack_4","",50,0,10);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(2,0.2893772);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,197.8267);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,244.8596);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,242.4642);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,235.9543);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,229.5712);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,239.4439);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,255.3339);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,258.9449);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,269.7596);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,264.827);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,259.1018);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,259.357);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,262.0342);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,221.4893);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,129.8914);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,78.70284);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,50.50454);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,28.44298);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,15.6364);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,6.067201);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,5.037659);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,3.195569);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,0.5736052);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,0.2540604);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,0.2803416);
   VbbHcc_algo_H_dR_stack_4->SetBinError(2,0.2893772);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,7.664529);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,8.545203);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,8.485977);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,8.384656);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,8.282603);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,8.42979);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,8.725435);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,8.787321);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,8.947278);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,8.886004);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,8.816235);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,8.768331);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,8.843218);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,8.1239);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,6.222137);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,4.808875);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,3.843608);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,2.886804);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,2.15396);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,1.32994);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,1.184399);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,0.9684892);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,0.4056615);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,0.2540604);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,0.2803416);
   VbbHcc_algo_H_dR_stack_4->SetEntries(12883);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetRange(1,100);
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
   
   TH1D *VbbHcc_algo_H_dR_stack_5 = new TH1D("VbbHcc_algo_H_dR_stack_5","",50,0,10);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,69.14923);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,147.1053);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,132.7454);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,98.25634);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,82.06341);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,98.93806);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,90.6324);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,96.79857);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,110.422);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,112.5195);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,110.8726);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,110.6229);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,120.5147);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,95.43997);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,46.83634);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,28.98529);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,12.31877);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,6.682474);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,5.848034);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,3.18876);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,3.217158);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,1.049407);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,8.69879);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,12.75214);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,11.99447);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,10.41229);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,9.468414);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,10.34425);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,10.02116);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,10.24281);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,10.97649);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,11.11218);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,10.98604);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,11.01503);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,11.4309);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,10.21223);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,7.074585);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,5.555721);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,3.690143);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,2.659945);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,2.406769);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,1.863875);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,1.860047);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,1.049407);
   VbbHcc_algo_H_dR_stack_5->SetEntries(1481);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetRange(1,100);
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
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",50,0,10);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,1.876601);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,2.826332);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,3.500445);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,3.989896);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,3.843169);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,3.69023);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,2.822214);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,3.649076);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(11,3.43079);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,3.197566);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,3.306912);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,4.278522);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,2.731732);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,2.995721);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,1.650188);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,1.270461);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,0.618657);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,0.1887715);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(21,0.1846416);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(23,0.08548689);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.4103119);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.5089933);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.5632239);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,0.599028);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,0.5925752);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,0.5800961);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.5077572);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.578763);
   VbbHcc_algo_H_dR_stack_6->SetBinError(11,0.5652891);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.5375377);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,0.5478146);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.6268909);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.4946127);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,0.5224767);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,0.3893111);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.3398803);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.2344958);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.1336155);
   VbbHcc_algo_H_dR_stack_6->SetBinError(21,0.1307479);
   VbbHcc_algo_H_dR_stack_6->SetBinError(23,0.08548689);
   VbbHcc_algo_H_dR_stack_6->SetEntries(557);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,100);
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
   
   TH1D *VbbHcc_algo_H_dR_stack_7 = new TH1D("VbbHcc_algo_H_dR_stack_7","",50,0,10);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,9.513681);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,15.05705);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,15.56287);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,18.23248);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,19.00157);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,17.68833);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,13.96238);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,11.78381);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,11.62612);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,10.55117);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,10.73509);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,8.562596);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,8.934798);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,7.437593);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,4.231236);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,2.099947);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,1.25668);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,0.8116959);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,0.2608924);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,0.1118558);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,0.09553937);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(24,0.06254403);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,0.8065092);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,1.014261);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,1.029479);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,1.120328);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,1.141593);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,1.102183);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.9778885);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.9001878);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,0.8917371);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,0.8474886);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,0.8565402);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,0.7600824);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,0.7749092);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,0.7146352);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,0.5327922);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,0.3778454);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,0.2921582);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.2358223);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.130447);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,0.08040113);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.07246867);
   VbbHcc_algo_H_dR_stack_7->SetBinError(24,0.06254403);
   VbbHcc_algo_H_dR_stack_7->SetEntries(2794);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetRange(1,100);
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
   
   TH1D *VbbHcc_algo_H_dR_stack_8 = new TH1D("VbbHcc_algo_H_dR_stack_8","",50,0,10);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,4.87887);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,8.817503);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,13.93311);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,15.44182);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,16.24397);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,17.04779);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,17.6022);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,16.31383);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,12.88184);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,15.79857);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,11.83008);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,8.298787);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,8.346326);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,7.054441);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,4.14483);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,1.565977);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,0.2826886);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,1.355957);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,0.7798185);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,0.9390846);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,1.306964);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,1.637372);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,1.737691);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,1.770668);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,1.807781);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,1.847446);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,1.772117);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,1.564377);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,1.745671);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,1.512236);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,1.271022);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,1.280506);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,1.159391);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,0.8935095);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,0.5275393);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,0.2124686);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,0.5127868);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,0.3912912);
   VbbHcc_algo_H_dR_stack_8->SetEntries(966);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetRange(1,100);
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
   
   TH1D *VbbHcc_algo_H_dR_stack_9 = new TH1D("VbbHcc_algo_H_dR_stack_9","",50,0,10);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(2,0.005344394);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,3.26059);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,4.738746);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,4.978338);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,5.109959);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,4.805363);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,4.354122);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,4.085939);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,3.592253);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,3.166153);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,3.140604);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,2.792311);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,2.355628);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,2.027926);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,1.727367);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,0.8916814);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,0.4932176);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,0.2815855);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,0.1676257);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,0.09929115);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,0.06329434);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,0.03012947);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,0.01308884);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,0.00760922);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,0.005701068);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,0.001540658);
   VbbHcc_algo_H_dR_stack_9->SetBinError(2,0.00270397);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.07088891);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.08600334);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.08799104);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.08913618);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.08622089);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.08173079);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.07875362);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.07386522);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.06949873);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.06859661);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.06483047);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.05948639);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.05500037);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.05078977);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.03616868);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.02684597);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.02036164);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.01561802);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.01216035);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.009596464);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.006788394);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.004369471);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.003297665);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.002860445);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.001540658);
   VbbHcc_algo_H_dR_stack_9->SetEntries(37196);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetRange(1,100);
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
   
   TH1D *VbbHcc_algo_H_dR_stack_10 = new TH1D("VbbHcc_algo_H_dR_stack_10","",50,0,10);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(2,0.0004293927);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,0.604299);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,1.295685);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,1.677387);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,1.830548);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,1.576234);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,1.168274);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,0.8542855);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,0.7448392);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,0.7081157);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,0.7804283);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,0.7565741);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,0.7279624);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,0.6734304);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,0.5748629);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,0.3476693);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,0.1812438);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,0.1166004);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,0.07040633);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,0.04406589);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,0.02094426);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.01292395);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.005931231);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.002774805);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.001751668);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.0004191415);
   VbbHcc_algo_H_dR_stack_10->SetBinError(2,0.0004293927);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.01519325);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.02227814);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.02540025);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.02656879);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.02463474);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.02119917);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.01810497);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.01687701);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.01647919);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.01728265);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.0169973);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.01669001);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.01604468);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.01481402);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.0115176);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.008298644);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.00665629);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.005142481);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.004005011);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.002769882);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.002168809);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.001485114);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.0009911121);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.0007992699);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.0004191415);
   VbbHcc_algo_H_dR_stack_10->SetEntries(39248);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetRange(1,100);
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
   
   TH1D *VbbHcc_algo_H_dR_stack_11 = new TH1D("VbbHcc_algo_H_dR_stack_11","",50,0,10);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.01726456);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.06882486);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.07736693);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.08822074);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.1957508);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.1683556);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.1770736);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.143813);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.1411578);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.12546);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.09973139);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.06574299);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.0424539);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.04996189);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.01966146);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.006579565);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.003408008);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.001695072);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.0009969007);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.001436258);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.005212906);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.01021536);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.0109586);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.01183255);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.01768428);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.01645163);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.01636891);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.01521208);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.01494846);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.01439998);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.01228682);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.0102064);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.008107966);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.008707184);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.005479312);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.003099576);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.002050543);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.001695072);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.0009969007);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.001436258);
   VbbHcc_algo_H_dR_stack_11->SetEntries(1085);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetRange(1,100);
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
   
   TH1D *VbbHcc_algo_H_dR_stack_12 = new TH1D("VbbHcc_algo_H_dR_stack_12","",50,0,10);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,136.9098);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,453.1216);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,429.0026);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,773.8949);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,1180.574);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,1305.349);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,997.7302);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,728.1879);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,570.7906);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,452.6371);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,341.514);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,306.9568);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,329.799);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,314.2352);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,142.3051);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,58.6178);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,47.11787);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,11.09695);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,4.687966);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,5.927022);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,23.13918);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,42.70025);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,41.46134);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,55.73258);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,69.10588);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,73.20028);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,63.88085);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,54.56251);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,47.80157);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,42.62898);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,37.2105);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,34.84898);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,36.78899);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,35.69068);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,24.04264);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,15.16339);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,13.93434);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,6.447088);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,3.92878);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,4.719342);
   VbbHcc_algo_H_dR_stack_12->SetEntries(2298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetRange(1,100);
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
   
   TH1D *VbbHcc_algo_H_dR__41 = new TH1D("VbbHcc_algo_H_dR__41","",50,0,10);
   VbbHcc_algo_H_dR__41->SetBinContent(2,10);
   VbbHcc_algo_H_dR__41->SetBinContent(3,16586);
   VbbHcc_algo_H_dR__41->SetBinContent(4,17546);
   VbbHcc_algo_H_dR__41->SetBinContent(5,13637);
   VbbHcc_algo_H_dR__41->SetBinContent(6,13197);
   VbbHcc_algo_H_dR__41->SetBinContent(7,13611);
   VbbHcc_algo_H_dR__41->SetBinContent(8,14579);
   VbbHcc_algo_H_dR__41->SetBinContent(9,15331);
   VbbHcc_algo_H_dR__41->SetBinContent(10,17111);
   VbbHcc_algo_H_dR__41->SetBinContent(11,19151);
   VbbHcc_algo_H_dR__41->SetBinContent(12,21632);
   VbbHcc_algo_H_dR__41->SetBinContent(13,24515);
   VbbHcc_algo_H_dR__41->SetBinContent(14,26951);
   VbbHcc_algo_H_dR__41->SetBinContent(15,29050);
   VbbHcc_algo_H_dR__41->SetBinContent(16,28221);
   VbbHcc_algo_H_dR__41->SetBinContent(17,16490);
   VbbHcc_algo_H_dR__41->SetBinContent(18,10671);
   VbbHcc_algo_H_dR__41->SetBinContent(19,6878);
   VbbHcc_algo_H_dR__41->SetBinContent(20,4351);
   VbbHcc_algo_H_dR__41->SetBinContent(21,2682);
   VbbHcc_algo_H_dR__41->SetBinContent(22,1572);
   VbbHcc_algo_H_dR__41->SetBinContent(23,827);
   VbbHcc_algo_H_dR__41->SetBinContent(24,469);
   VbbHcc_algo_H_dR__41->SetBinContent(25,201);
   VbbHcc_algo_H_dR__41->SetBinContent(26,83);
   VbbHcc_algo_H_dR__41->SetBinContent(27,20);
   VbbHcc_algo_H_dR__41->SetBinContent(28,4);
   VbbHcc_algo_H_dR__41->SetEntries(315376);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__41->SetLineColor(ci);
   VbbHcc_algo_H_dR__41->SetLineWidth(2);
   VbbHcc_algo_H_dR__41->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__41->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__41->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR__41->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__41->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__41->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__41->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__41->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__41->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__41->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__41->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__41->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__41->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__41->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__41->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__41->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__41->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1041[50] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1041[50] = {
   0,
   1.630929,
   110570.6,
   124411.7,
   100362.5,
   115283.4,
   94212.29,
   129812.7,
   140446.6,
   121752.8,
   147007.4,
   178983.3,
   126542.1,
   143863.9,
   120475.8,
   150315.9,
   96097.87,
   51335.03,
   40197.52,
   16767.52,
   9437.188,
   5699.331,
   4212.691,
   1351.589,
   2728.698,
   9.373017,
   3.055231,
   0.7227602,
   0.04766199,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1041[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1041[50] = {
   0,
   0.4029071,
   12212.06,
   12840.51,
   11336.68,
   12121.02,
   10767.85,
   12770.66,
   13390.38,
   12425.48,
   13668.6,
   15252.09,
   12770.97,
   13614.45,
   12459.93,
   14029.76,
   11182.3,
   8127.45,
   7224.073,
   4650.401,
   3417.068,
   2718.396,
   2357.973,
   1279.847,
   1909.579,
   0.7628315,
   0.4799583,
   0.2015725,
   0.04766199,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_H_dR_fx1041,Graph_from_VbbHcc_algo_H_dR_fy1041,Graph_from_VbbHcc_algo_H_dR_fex1041,Graph_from_VbbHcc_algo_H_dR_fey1041);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1041 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1041","",100,0,11);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->SetMaximum(213658.9);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1041->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1041);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_VbbHcc_16->cd();
  
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
   
   TH1D *data_mc_ratio__42 = new TH1D("data_mc_ratio__42","",50,0,10);
   data_mc_ratio__42->SetBinContent(2,6.131475);
   data_mc_ratio__42->SetBinContent(3,0.1500037);
   data_mc_ratio__42->SetBinContent(4,0.1410317);
   data_mc_ratio__42->SetBinContent(5,0.1358774);
   data_mc_ratio__42->SetBinContent(6,0.1144744);
   data_mc_ratio__42->SetBinContent(7,0.1444716);
   data_mc_ratio__42->SetBinContent(8,0.1123079);
   data_mc_ratio__42->SetBinContent(9,0.1091589);
   data_mc_ratio__42->SetBinContent(10,0.1405388);
   data_mc_ratio__42->SetBinContent(11,0.1302723);
   data_mc_ratio__42->SetBinContent(12,0.1208605);
   data_mc_ratio__42->SetBinContent(13,0.19373);
   data_mc_ratio__42->SetBinContent(14,0.1873368);
   data_mc_ratio__42->SetBinContent(15,0.2411273);
   data_mc_ratio__42->SetBinContent(16,0.1877446);
   data_mc_ratio__42->SetBinContent(17,0.1715959);
   data_mc_ratio__42->SetBinContent(18,0.2078697);
   data_mc_ratio__42->SetBinContent(19,0.1711051);
   data_mc_ratio__42->SetBinContent(20,0.2594898);
   data_mc_ratio__42->SetBinContent(21,0.2841948);
   data_mc_ratio__42->SetBinContent(22,0.2758218);
   data_mc_ratio__42->SetBinContent(23,0.1963116);
   data_mc_ratio__42->SetBinContent(24,0.3469989);
   data_mc_ratio__42->SetBinContent(25,0.07366151);
   data_mc_ratio__42->SetBinContent(26,8.855206);
   data_mc_ratio__42->SetBinContent(27,6.546151);
   data_mc_ratio__42->SetBinContent(28,5.534339);
   data_mc_ratio__42->SetBinError(2,1.938942);
   data_mc_ratio__42->SetBinError(3,0.001164746);
   data_mc_ratio__42->SetBinError(4,0.001064701);
   data_mc_ratio__42->SetBinError(5,0.001163557);
   data_mc_ratio__42->SetBinError(6,0.0009964854);
   data_mc_ratio__42->SetBinError(7,0.001238333);
   data_mc_ratio__42->SetBinError(8,0.0009301363);
   data_mc_ratio__42->SetBinError(9,0.0008816047);
   data_mc_ratio__42->SetBinError(10,0.001074382);
   data_mc_ratio__42->SetBinError(11,0.0009413614);
   data_mc_ratio__42->SetBinError(12,0.0008217428);
   data_mc_ratio__42->SetBinError(13,0.001237317);
   data_mc_ratio__42->SetBinError(14,0.001141132);
   data_mc_ratio__42->SetBinError(15,0.001414729);
   data_mc_ratio__42->SetBinError(16,0.001117587);
   data_mc_ratio__42->SetBinError(17,0.001336277);
   data_mc_ratio__42->SetBinError(18,0.002012281);
   data_mc_ratio__42->SetBinError(19,0.002063155);
   data_mc_ratio__42->SetBinError(20,0.003933923);
   data_mc_ratio__42->SetBinError(21,0.005487655);
   data_mc_ratio__42->SetBinError(22,0.006956686);
   data_mc_ratio__42->SetBinError(23,0.006826421);
   data_mc_ratio__42->SetBinError(24,0.01602292);
   data_mc_ratio__42->SetBinError(25,0.005195682);
   data_mc_ratio__42->SetBinError(26,0.9719852);
   data_mc_ratio__42->SetBinError(27,1.463764);
   data_mc_ratio__42->SetBinError(28,2.76717);
   data_mc_ratio__42->SetMinimum(0.4);
   data_mc_ratio__42->SetMaximum(1.6);
   data_mc_ratio__42->SetEntries(46.42203);
   data_mc_ratio__42->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__42->SetLineColor(ci);
   data_mc_ratio__42->SetLineWidth(2);
   data_mc_ratio__42->SetMarkerStyle(20);
   data_mc_ratio__42->SetMarkerSize(1.2);
   data_mc_ratio__42->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__42->GetXaxis()->SetRange(1,50);
   data_mc_ratio__42->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__42->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__42->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__42->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__42->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__42->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__42->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__42->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__42->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__42->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__42->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__42->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__42->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__42->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__42->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__42->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__42->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1042[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1042[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1042[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1042[50] = {
   0,
   0.2470415,
   0.1104458,
   0.1032099,
   0.1129572,
   0.1051411,
   0.1142934,
   0.0983776,
   0.0953414,
   0.102055,
   0.09297893,
   0.0852152,
   0.1009227,
   0.09463426,
   0.1034226,
   0.09333513,
   0.1163636,
   0.1583217,
   0.1797144,
   0.2773459,
   0.3620854,
   0.4769676,
   0.5597308,
   0.9469202,
   0.6998132,
   0.08138591,
   0.157094,
   0.2788926,
   1,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1042,Graph_from_mc_statistical_error_fy1042,Graph_from_mc_statistical_error_fex1042,Graph_from_mc_statistical_error_fey1042);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1042 = new TH1F("Graph_Graph_from_mc_statistical_error1042","",100,0,11);
   Graph_Graph_from_mc_statistical_error1042->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1042->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1042->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1042->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1042);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_VbbHcc_16->cd();
   H_dR_VbbHcc_16->Modified();
   H_dR_VbbHcc_16->cd();
   H_dR_VbbHcc_16->SetSelected(H_dR_VbbHcc_16);
}
