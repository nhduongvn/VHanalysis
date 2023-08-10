void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:21:49 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(0,0,1,1);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetFillStyle(4000);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.866681,1.052419,12.25911);
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
   st->SetMinimum(0.01);
   st->SetMaximum(1.62078e+10);
   
   TH1F *st_stack_249 = new TH1F("st_stack_249","",25,0,1);
   st_stack_249->SetMinimum(0.001407487);
   st_stack_249->SetMaximum(5.578636e+10);
   st_stack_249->SetDirectory(0);
   st_stack_249->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_249->SetLineColor(ci);
   st_stack_249->GetXaxis()->SetRange(1,25);
   st_stack_249->GetXaxis()->SetLabelFont(42);
   st_stack_249->GetXaxis()->SetLabelSize(0.035);
   st_stack_249->GetXaxis()->SetTitleSize(0.035);
   st_stack_249->GetXaxis()->SetTitleFont(42);
   st_stack_249->GetYaxis()->SetTitle("Events/0.04");
   st_stack_249->GetYaxis()->SetLabelFont(42);
   st_stack_249->GetYaxis()->SetLabelSize(0.05);
   st_stack_249->GetYaxis()->SetTitleSize(0.057);
   st_stack_249->GetYaxis()->SetTitleOffset(1.2);
   st_stack_249->GetYaxis()->SetTitleFont(42);
   st_stack_249->GetZaxis()->SetLabelFont(42);
   st_stack_249->GetZaxis()->SetLabelSize(0.035);
   st_stack_249->GetZaxis()->SetTitleSize(0.035);
   st_stack_249->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_249);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,28190.38);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,36027.37);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,23759.73);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,21047.29);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,13949.79);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,10934.35);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,10555.11);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,5877.891);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,4549.865);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,7661.492);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,4552.058);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,5524.807);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,2885.488);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,2446.413);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,4391.664);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1534.406);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1068.105);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,1458.276);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,64.51962);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,130.6533);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,26.4945);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,40.67625);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,2217.778);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,3887.573);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,3242.974);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,2877.056);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,2136.95);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,2092.98);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,2056.146);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,955.2001);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,797.1514);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,2516.497);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,960.5819);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,1909.092);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,729.0032);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,626.1332);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,1675.628);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,485.395);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,432.6337);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,568.3325);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,28.98087);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,51.76601);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,11.74232);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,28.88247);
   VbbHcc_both_Sphericity_stack_1->SetEntries(9914);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,125.3557);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,126.9034);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,107.3724);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,73.66616);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,59.43304);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,43.07896);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,35.75239);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,34.71067);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,29.53764);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,24.29679);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,18.16665);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,16.80112);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,18.09669);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,9.974007);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,11.32041);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,9.786179);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,4.428837);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,5.313081);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,2.360044);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.9881289);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.5233442);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.04501684);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,4.777008);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,4.642292);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,4.389381);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,3.669743);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,3.346647);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,2.750076);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,2.576366);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,2.542311);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,2.348341);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.165446);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,1.777802);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,1.821178);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,1.961385);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.394195);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.579453);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.450471);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.8969541);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,1.05402);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.6532364);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.4407362);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.3297822);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.04501684);
   VbbHcc_both_Sphericity_stack_2->SetEntries(9807);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,2354.666);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,2720.293);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,2065.452);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,1553.007);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,1228.1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,962.8505);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,809.5729);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,670.6701);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,563.3503);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,481.9119);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,412.0556);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,353.4596);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,301.0722);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,253.1858);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,206.1036);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,166.2811);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,130.1941);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,95.39843);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,56.98903);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,29.2165);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,9.404229);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,4.642357);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,1.280913);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(25,0.08377996);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,12.77482);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,13.75022);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,12.00146);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,10.41693);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,9.263202);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,8.190556);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,7.523341);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,6.83629);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,6.280934);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,5.810711);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,5.385309);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,4.967284);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,4.573417);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,4.217574);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,3.799196);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,3.427524);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,3.021245);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,2.600336);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,1.995562);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.42817);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,0.8016676);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.5759286);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.306803);
   VbbHcc_both_Sphericity_stack_3->SetBinError(25,0.08377996);
   VbbHcc_both_Sphericity_stack_3->SetEntries(238439);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,344.4031);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,374.7927);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,277.8019);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,235.071);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,174.6222);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,149.3678);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,94.6511);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,85.00388);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,81.67722);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,67.29733);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,66.33692);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,54.51615);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,43.01778);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,41.57858);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,25.07722);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,18.80615);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,17.10748);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,13.21318);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,9.393215);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,5.720627);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,1.577944);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,0.9870255);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,13.96828);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,15.66088);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,14.43029);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,13.92687);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,10.5719);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,10.13128);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,4.773448);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,5.763953);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,7.068929);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,5.5635);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,6.537758);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,5.881324);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,4.683119);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,5.168588);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,3.109371);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,3.01166);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,2.950103);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,3.18836);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,2.861194);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,2.950608);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.6334535);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.4465512);
   VbbHcc_both_Sphericity_stack_4->SetEntries(15488);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,36.56195);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,31.07385);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,28.93774);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,15.83881);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,16.30672);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,12.97948);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,9.672025);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,16.71669);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,6.068659);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,14.3819);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,3.406657);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,3.066593);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,2.539302);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,3.203429);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,3.564187);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,2.209264);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,1.36277);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,0.2710035);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.4417069);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,0.0008155949);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,3.659563);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,3.440962);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,3.376586);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,1.698759);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,2.782814);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,2.452825);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,1.745011);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,7.506885);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,1.371311);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,7.411083);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,0.6388137);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,0.6239463);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.4949733);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.71118);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,1.250711);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,0.5587659);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,0.3820049);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,0.1377898);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.2214141);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,0.000470903);
   VbbHcc_both_Sphericity_stack_5->SetEntries(3431);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_6 = new TH1D("VbbHcc_both_Sphericity_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(1,0.1344897);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(2,0.4473314);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(4,0.384955);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(5,0.139529);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(6,0.1440206);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(7,0.1445668);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(12,0.1535887);
   VbbHcc_both_Sphericity_stack_6->SetBinError(1,0.1344897);
   VbbHcc_both_Sphericity_stack_6->SetBinError(2,0.2589987);
   VbbHcc_both_Sphericity_stack_6->SetBinError(4,0.2289871);
   VbbHcc_both_Sphericity_stack_6->SetBinError(5,0.139529);
   VbbHcc_both_Sphericity_stack_6->SetBinError(6,0.1440206);
   VbbHcc_both_Sphericity_stack_6->SetBinError(7,0.1445668);
   VbbHcc_both_Sphericity_stack_6->SetBinError(12,0.1535887);
   VbbHcc_both_Sphericity_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,0.5883322);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,1.149475);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,0.9336229);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(4,0.593886);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.3464377);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,0.4900519);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,0.4837317);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.2484375);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(9,0.1148755);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,0.4993215);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,0.1211458);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(12,0.1168895);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.2339761);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(15,0.09773476);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,0.2633477);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.3651167);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,0.330589);
   VbbHcc_both_Sphericity_stack_7->SetBinError(4,0.2659684);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.2000219);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.2453998);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.2246531);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.1756725);
   VbbHcc_both_Sphericity_stack_7->SetBinError(9,0.1148755);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,0.2497591);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,0.1211458);
   VbbHcc_both_Sphericity_stack_7->SetBinError(12,0.1168895);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.1654823);
   VbbHcc_both_Sphericity_stack_7->SetBinError(15,0.09773476);
   VbbHcc_both_Sphericity_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,9.317807);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,6.509093);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,5.854626);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,4.960836);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,2.639765);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,3.72334);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,2.08253);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,2.861951);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,1.06627);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,1.350527);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,1.060376);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,1.788776);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,0.7957244);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,0.5223465);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,0.5107473);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.2607295);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(18,0.2841914);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.2662642);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.570457);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.315415);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,1.253148);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.143728);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,0.8358988);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,1.000801);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,0.7469199);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,0.8630175);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.5335117);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.6046284);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.5305124);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.6778245);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.4595941);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.3693713);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.361153);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.2607295);
   VbbHcc_both_Sphericity_stack_8->SetBinError(18,0.2841914);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.2662642);
   VbbHcc_both_Sphericity_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,5.992436);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,6.792716);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,4.901033);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,4.067211);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,3.417916);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,2.77986);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,2.353262);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,1.856606);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,1.797522);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,1.439349);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.180987);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.058259);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,0.8052836);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.7137503);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.6059316);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.4504681);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.352756);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.2522261);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1342247);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.06131612);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.02893691);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.007780517);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(23,0.00166245);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.09635809);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1027265);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.08718993);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.07924198);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.0726835);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.06617884);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.06049235);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.05358696);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.05258513);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.04748645);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.04288309);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.04018551);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.035373);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.03345625);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.03086393);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.02649507);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.02334335);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.01994364);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.01480035);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.009711903);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.006546433);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.003484295);
   VbbHcc_both_Sphericity_stack_9->SetBinError(23,0.00166245);
   VbbHcc_both_Sphericity_stack_9->SetEntries(28649);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,2.851955);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,3.125434);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,2.302895);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,1.775328);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.56716);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.254229);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,1.039326);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,0.9141478);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.7745782);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.6778681);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.5841162);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.4939976);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.4177715);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.3738118);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.2913795);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.2445693);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.1703101);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.1283188);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.07982004);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.03598309);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.008027822);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.002713787);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.00115026);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.03322562);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.03476309);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.0298599);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.02622346);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.024632);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.02206323);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.02004687);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.01878987);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.01734833);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.01621994);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.01506293);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.01383642);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01273809);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.0120658);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01062028);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.009715027);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.008132745);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.007022899);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.005539165);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.003740097);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.001763617);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.001029566);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0006641121);
   VbbHcc_both_Sphericity_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.02313139);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02350657);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.0266414);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.005880822);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.005625697);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.005365819);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.005802713);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.002944518);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.002909221);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.002888021);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.008192289);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.008323525);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.008920122);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.00415837);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.003978767);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.003803814);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.004103386);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.002944518);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.002909221);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.002888021);
   VbbHcc_both_Sphericity_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.008108828);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.008605477);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.00432808);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.005022284);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.005794385);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.001812674);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.002282787);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.00301545);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.004260399);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.001525471);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.002917951);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.001532944);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.0007786531);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.000375165);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.0003816148);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0008033518);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.0004083722);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.001773192);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.001837017);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.001263904);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.001394508);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.001473326);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.0008206218);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.0009331104);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.001066487);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.001287991);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.0007628212);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.001036786);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0007668644);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.0005505959);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.000375165);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0003816148);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.000568456);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.0004083722);
   VbbHcc_both_Sphericity_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity__683 = new TH1D("VbbHcc_both_Sphericity__683","",25,0,1);
   VbbHcc_both_Sphericity__683->SetBinContent(1,17528);
   VbbHcc_both_Sphericity__683->SetBinContent(2,17965);
   VbbHcc_both_Sphericity__683->SetBinContent(3,13382);
   VbbHcc_both_Sphericity__683->SetBinContent(4,10101);
   VbbHcc_both_Sphericity__683->SetBinContent(5,7931);
   VbbHcc_both_Sphericity__683->SetBinContent(6,6572);
   VbbHcc_both_Sphericity__683->SetBinContent(7,5376);
   VbbHcc_both_Sphericity__683->SetBinContent(8,4387);
   VbbHcc_both_Sphericity__683->SetBinContent(9,3684);
   VbbHcc_both_Sphericity__683->SetBinContent(10,3093);
   VbbHcc_both_Sphericity__683->SetBinContent(11,2646);
   VbbHcc_both_Sphericity__683->SetBinContent(12,2259);
   VbbHcc_both_Sphericity__683->SetBinContent(13,1970);
   VbbHcc_both_Sphericity__683->SetBinContent(14,1589);
   VbbHcc_both_Sphericity__683->SetBinContent(15,1302);
   VbbHcc_both_Sphericity__683->SetBinContent(16,1011);
   VbbHcc_both_Sphericity__683->SetBinContent(17,786);
   VbbHcc_both_Sphericity__683->SetBinContent(18,571);
   VbbHcc_both_Sphericity__683->SetBinContent(19,318);
   VbbHcc_both_Sphericity__683->SetBinContent(20,145);
   VbbHcc_both_Sphericity__683->SetBinContent(21,46);
   VbbHcc_both_Sphericity__683->SetBinContent(22,14);
   VbbHcc_both_Sphericity__683->SetBinContent(23,5);
   VbbHcc_both_Sphericity__683->SetEntries(102705);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity__683->SetLineColor(ci);
   VbbHcc_both_Sphericity__683->SetLineWidth(2);
   VbbHcc_both_Sphericity__683->SetMarkerStyle(20);
   VbbHcc_both_Sphericity__683->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__683->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__683->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__683->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__683->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__683->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_fx1497[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_both_Sphericity_fy1497[25] = {
   31070.29,
   39298.49,
   26253.32,
   22936.66,
   15436.36,
   12111.03,
   11510.87,
   6690.877,
   5234.256,
   8253.354,
   5054.98,
   5956.267,
   3252.237,
   2756.202,
   4638.725,
   1732.695,
   1221.982,
   1573.137,
   133.9177,
   166.9421,
   38.0378,
   46.31613,
   1.328742,
   0,
   0.08377996};
   Double_t Graph_from_VbbHcc_both_Sphericity_fex1497[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_both_Sphericity_fey1497[25] = {
   2217.868,
   3887.633,
   3243.033,
   2877.112,
   2137.001,
   2093.024,
   2056.168,
   955.2752,
   797.2123,
   2516.521,
   960.6213,
   1909.109,
   729.0355,
   626.1708,
   1675.636,
   485.419,
   432.6555,
   568.3484,
   29.19821,
   51.87226,
   11.7913,
   28.89166,
   0.3100932,
   0,
   0.08377996};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_fx1497,Graph_from_VbbHcc_both_Sphericity_fy1497,Graph_from_VbbHcc_both_Sphericity_fex1497,Graph_from_VbbHcc_both_Sphericity_fey1497);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity1497 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity1497","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetMinimum(47.50474);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetMaximum(47504.74);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity1497);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__684 = new TH1D("data_mc_ratio__684","",25,0,1);
   data_mc_ratio__684->SetBinContent(1,0.5641403);
   data_mc_ratio__684->SetBinContent(2,0.4571422);
   data_mc_ratio__684->SetBinContent(3,0.509726);
   data_mc_ratio__684->SetBinContent(4,0.4403866);
   data_mc_ratio__684->SetBinContent(5,0.5137868);
   data_mc_ratio__684->SetBinContent(6,0.542646);
   data_mc_ratio__684->SetBinContent(7,0.4670369);
   data_mc_ratio__684->SetBinContent(8,0.6556689);
   data_mc_ratio__684->SetBinContent(9,0.7038249);
   data_mc_ratio__684->SetBinContent(10,0.3747567);
   data_mc_ratio__684->SetBinContent(11,0.5234442);
   data_mc_ratio__684->SetBinContent(12,0.3792644);
   data_mc_ratio__684->SetBinContent(13,0.605737);
   data_mc_ratio__684->SetBinContent(14,0.576518);
   data_mc_ratio__684->SetBinContent(15,0.2806806);
   data_mc_ratio__684->SetBinContent(16,0.5834841);
   data_mc_ratio__684->SetBinContent(17,0.6432172);
   data_mc_ratio__684->SetBinContent(18,0.3629691);
   data_mc_ratio__684->SetBinContent(19,2.374593);
   data_mc_ratio__684->SetBinContent(20,0.8685644);
   data_mc_ratio__684->SetBinContent(21,1.209323);
   data_mc_ratio__684->SetBinContent(22,0.3022705);
   data_mc_ratio__684->SetBinContent(23,3.762956);
   data_mc_ratio__684->SetBinError(1,0.004261092);
   data_mc_ratio__684->SetBinError(2,0.003410655);
   data_mc_ratio__684->SetBinError(3,0.004406323);
   data_mc_ratio__684->SetBinError(4,0.004381794);
   data_mc_ratio__684->SetBinError(5,0.005769245);
   data_mc_ratio__684->SetBinError(6,0.006693725);
   data_mc_ratio__684->SetBinError(7,0.006369739);
   data_mc_ratio__684->SetBinError(8,0.009899216);
   data_mc_ratio__684->SetBinError(9,0.01159591);
   data_mc_ratio__684->SetBinError(10,0.006738442);
   data_mc_ratio__684->SetBinError(11,0.01017596);
   data_mc_ratio__684->SetBinError(12,0.007979652);
   data_mc_ratio__684->SetBinError(13,0.01364743);
   data_mc_ratio__684->SetBinError(14,0.01446275);
   data_mc_ratio__684->SetBinError(15,0.007778697);
   data_mc_ratio__684->SetBinError(16,0.01835074);
   data_mc_ratio__684->SetBinError(17,0.0229428);
   data_mc_ratio__684->SetBinError(18,0.01518978);
   data_mc_ratio__684->SetBinError(19,0.1331606);
   data_mc_ratio__684->SetBinError(20,0.07213035);
   data_mc_ratio__684->SetBinError(21,0.178305);
   data_mc_ratio__684->SetBinError(22,0.08078519);
   data_mc_ratio__684->SetBinError(23,1.682845);
   data_mc_ratio__684->SetMinimum(0.4);
   data_mc_ratio__684->SetMaximum(1.6);
   data_mc_ratio__684->SetEntries(70.98236);
   data_mc_ratio__684->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__684->SetLineColor(ci);
   data_mc_ratio__684->SetLineWidth(2);
   data_mc_ratio__684->SetMarkerStyle(20);
   data_mc_ratio__684->SetMarkerSize(1.2);
   data_mc_ratio__684->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__684->GetXaxis()->SetRange(1,25);
   data_mc_ratio__684->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__684->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__684->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__684->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__684->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__684->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__684->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__684->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__684->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__684->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__684->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__684->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__684->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__684->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__684->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__684->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__684->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1498[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1498[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1498[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1498[25] = {
   0.07138228,
   0.09892577,
   0.1235285,
   0.1254372,
   0.1384394,
   0.1728197,
   0.1786284,
   0.1427728,
   0.1523067,
   0.3049089,
   0.1900346,
   0.320521,
   0.2241643,
   0.2271861,
   0.3612277,
   0.2801526,
   0.3540604,
   0.3612836,
   0.2180311,
   0.31072,
   0.3099891,
   0.6237926,
   0.2333735,
   0,
   1};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1498,Graph_from_mc_statistical_error_fy1498,Graph_from_mc_statistical_error_fex1498,Graph_from_mc_statistical_error_fey1498);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1498 = new TH1F("Graph_Graph_from_mc_statistical_error1498","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1498->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1498->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1498->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1498->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1498->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1498);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
