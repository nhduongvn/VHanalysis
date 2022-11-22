void jets_nJet_VbbHcc_other_18()
{
//=========Macro generated from canvas: jets_nJet_VbbHcc_other_18/jets_nJet_VbbHcc_other_18
//=========  (Tue Nov 22 09:22:17 2022) by ROOT version 6.14/09
   TCanvas *jets_nJet_VbbHcc_other_18 = new TCanvas("jets_nJet_VbbHcc_other_18", "jets_nJet_VbbHcc_other_18",0,0,600,600);
   jets_nJet_VbbHcc_other_18->SetHighLightColor(2);
   jets_nJet_VbbHcc_other_18->Range(0,0,1,1);
   jets_nJet_VbbHcc_other_18->SetFillColor(0);
   jets_nJet_VbbHcc_other_18->SetFillStyle(4000);
   jets_nJet_VbbHcc_other_18->SetBorderMode(0);
   jets_nJet_VbbHcc_other_18->SetBorderSize(2);
   jets_nJet_VbbHcc_other_18->SetFrameFillStyle(1000);
   jets_nJet_VbbHcc_other_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.645156,-1.188885e+08,14.23387,1.187696e+11);
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
   st->SetMaximum(1.017912e+11);
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",14,-0.5,13.5);
   st_stack_7->SetMinimum(0.01);
   st_stack_7->SetMaximum(1.068807e+11);
   st_stack_7->SetDirectory(0);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->GetXaxis()->SetRange(1,14);
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetLabelSize(0.035);
   st_stack_7->GetXaxis()->SetTitleSize(0.035);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/1.0");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetLabelSize(0.05);
   st_stack_7->GetYaxis()->SetTitleSize(0.057);
   st_stack_7->GetYaxis()->SetTitleOffset(1.2);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetLabelSize(0.035);
   st_stack_7->GetZaxis()->SetTitleSize(0.035);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,1.943582e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,1.690222e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,4.578761e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,3.083761e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,8.790026e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,1.295018e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,1.482528e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,1.457243e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,1376683);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,147869.7);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,10196.36);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,886.8398);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,2014444);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,5915270);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,9752313);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,7967196);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,4223474);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,1603906);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,528721.6);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,166256.3);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,49453.56);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,16004.17);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,4258.539);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,682.1919);
   VbbHcc_jets_nJet_stack_1->SetEntries(6.153652e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,913516.3);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,3482580);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,5529797);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,4875721);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,2745935);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,1136684);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,393054);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,118464.4);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,31432.87);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,7707.815);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,1796.755);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,395.9045);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,81.58998);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,19.7872);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,4.489327);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,306.3198);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,628.268);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,839.0487);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,858.5869);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,716.5262);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,509.7441);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,314.5916);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,176.8904);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,91.22476);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,42.82801);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,20.3704);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,9.057346);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,3.883135);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,1.919535);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,0.9047892);
   VbbHcc_jets_nJet_stack_2->SetEntries(2.774151e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   
   TH1D *VbbHcc_jets_nJet_stack_3 = new TH1D("VbbHcc_jets_nJet_stack_3","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_3->SetBinContent(1,322979.1);
   VbbHcc_jets_nJet_stack_3->SetBinContent(2,2136947);
   VbbHcc_jets_nJet_stack_3->SetBinContent(3,6528920);
   VbbHcc_jets_nJet_stack_3->SetBinContent(4,1.164855e+07);
   VbbHcc_jets_nJet_stack_3->SetBinContent(5,1.350783e+07);
   VbbHcc_jets_nJet_stack_3->SetBinContent(6,1.053009e+07);
   VbbHcc_jets_nJet_stack_3->SetBinContent(7,5708768);
   VbbHcc_jets_nJet_stack_3->SetBinContent(8,2286077);
   VbbHcc_jets_nJet_stack_3->SetBinContent(9,755576.4);
   VbbHcc_jets_nJet_stack_3->SetBinContent(10,218140.6);
   VbbHcc_jets_nJet_stack_3->SetBinContent(11,56945.9);
   VbbHcc_jets_nJet_stack_3->SetBinContent(12,13813.72);
   VbbHcc_jets_nJet_stack_3->SetBinContent(13,3159.225);
   VbbHcc_jets_nJet_stack_3->SetBinContent(14,681.5726);
   VbbHcc_jets_nJet_stack_3->SetBinContent(15,171.8315);
   VbbHcc_jets_nJet_stack_3->SetBinError(1,142.635);
   VbbHcc_jets_nJet_stack_3->SetBinError(2,368.8114);
   VbbHcc_jets_nJet_stack_3->SetBinError(3,661.7221);
   VbbHcc_jets_nJet_stack_3->SetBinError(4,920.6351);
   VbbHcc_jets_nJet_stack_3->SetBinError(5,1033.146);
   VbbHcc_jets_nJet_stack_3->SetBinError(6,941.6577);
   VbbHcc_jets_nJet_stack_3->SetBinError(7,703.697);
   VbbHcc_jets_nJet_stack_3->SetBinError(8,448.6385);
   VbbHcc_jets_nJet_stack_3->SetBinError(9,259.1402);
   VbbHcc_jets_nJet_stack_3->SetBinError(10,139.8225);
   VbbHcc_jets_nJet_stack_3->SetBinError(11,70.81421);
   VbbHcc_jets_nJet_stack_3->SetBinError(12,35.02591);
   VbbHcc_jets_nJet_stack_3->SetBinError(13,16.8305);
   VbbHcc_jets_nJet_stack_3->SetBinError(14,7.544589);
   VbbHcc_jets_nJet_stack_3->SetBinError(15,3.801515);
   VbbHcc_jets_nJet_stack_3->SetEntries(8.830702e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_nJet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_3->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_3,"");
   
   TH1D *VbbHcc_jets_nJet_stack_4 = new TH1D("VbbHcc_jets_nJet_stack_4","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_4->SetBinContent(1,18934.81);
   VbbHcc_jets_nJet_stack_4->SetBinContent(2,222006.1);
   VbbHcc_jets_nJet_stack_4->SetBinContent(3,1135309);
   VbbHcc_jets_nJet_stack_4->SetBinContent(4,2462817);
   VbbHcc_jets_nJet_stack_4->SetBinContent(5,2269545);
   VbbHcc_jets_nJet_stack_4->SetBinContent(6,1161699);
   VbbHcc_jets_nJet_stack_4->SetBinContent(7,382133);
   VbbHcc_jets_nJet_stack_4->SetBinContent(8,86594.85);
   VbbHcc_jets_nJet_stack_4->SetBinContent(9,15383.34);
   VbbHcc_jets_nJet_stack_4->SetBinContent(10,2385.434);
   VbbHcc_jets_nJet_stack_4->SetBinContent(11,295.0981);
   VbbHcc_jets_nJet_stack_4->SetBinContent(12,37.8934);
   VbbHcc_jets_nJet_stack_4->SetBinContent(13,5.061807);
   VbbHcc_jets_nJet_stack_4->SetBinError(1,113.0998);
   VbbHcc_jets_nJet_stack_4->SetBinError(2,382.036);
   VbbHcc_jets_nJet_stack_4->SetBinError(3,870.078);
   VbbHcc_jets_nJet_stack_4->SetBinError(4,1284.512);
   VbbHcc_jets_nJet_stack_4->SetBinError(5,1231.517);
   VbbHcc_jets_nJet_stack_4->SetBinError(6,879.9261);
   VbbHcc_jets_nJet_stack_4->SetBinError(7,502.0621);
   VbbHcc_jets_nJet_stack_4->SetBinError(8,237.5652);
   VbbHcc_jets_nJet_stack_4->SetBinError(9,101.7686);
   VbbHcc_jets_nJet_stack_4->SetBinError(10,43.97201);
   VbbHcc_jets_nJet_stack_4->SetBinError(11,13.07691);
   VbbHcc_jets_nJet_stack_4->SetBinError(12,4.553897);
   VbbHcc_jets_nJet_stack_4->SetBinError(13,1.654993);
   VbbHcc_jets_nJet_stack_4->SetEntries(1.390956e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_nJet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_4->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_4,"");
   
   TH1D *VbbHcc_jets_nJet_stack_5 = new TH1D("VbbHcc_jets_nJet_stack_5","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_5->SetBinContent(1,50062.06);
   VbbHcc_jets_nJet_stack_5->SetBinContent(2,584600.2);
   VbbHcc_jets_nJet_stack_5->SetBinContent(3,2805021);
   VbbHcc_jets_nJet_stack_5->SetBinContent(4,6045568);
   VbbHcc_jets_nJet_stack_5->SetBinContent(5,5507726);
   VbbHcc_jets_nJet_stack_5->SetBinContent(6,2717739);
   VbbHcc_jets_nJet_stack_5->SetBinContent(7,845334.7);
   VbbHcc_jets_nJet_stack_5->SetBinContent(8,196214.3);
   VbbHcc_jets_nJet_stack_5->SetBinContent(9,37304.54);
   VbbHcc_jets_nJet_stack_5->SetBinContent(10,6208.292);
   VbbHcc_jets_nJet_stack_5->SetBinContent(11,896.6218);
   VbbHcc_jets_nJet_stack_5->SetBinContent(12,141.8757);
   VbbHcc_jets_nJet_stack_5->SetBinContent(13,11.41839);
   VbbHcc_jets_nJet_stack_5->SetBinContent(14,2.707856);
   VbbHcc_jets_nJet_stack_5->SetBinError(1,384.8168);
   VbbHcc_jets_nJet_stack_5->SetBinError(2,1348.066);
   VbbHcc_jets_nJet_stack_5->SetBinError(3,2894.604);
   VbbHcc_jets_nJet_stack_5->SetBinError(4,4247.31);
   VbbHcc_jets_nJet_stack_5->SetBinError(5,4035.772);
   VbbHcc_jets_nJet_stack_5->SetBinError(6,2852.746);
   VbbHcc_jets_nJet_stack_5->SetBinError(7,1589.457);
   VbbHcc_jets_nJet_stack_5->SetBinError(8,757.2223);
   VbbHcc_jets_nJet_stack_5->SetBinError(9,334.6062);
   VbbHcc_jets_nJet_stack_5->SetBinError(10,130.2276);
   VbbHcc_jets_nJet_stack_5->SetBinError(11,47.19476);
   VbbHcc_jets_nJet_stack_5->SetBinError(12,18.63537);
   VbbHcc_jets_nJet_stack_5->SetBinError(13,5.267094);
   VbbHcc_jets_nJet_stack_5->SetBinError(14,2.707856);
   VbbHcc_jets_nJet_stack_5->SetEntries(7601526);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_nJet_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_5->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_5,"");
   
   TH1D *VbbHcc_jets_nJet_stack_6 = new TH1D("VbbHcc_jets_nJet_stack_6","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_6->SetBinContent(1,992977.8);
   VbbHcc_jets_nJet_stack_6->SetBinContent(2,1525333);
   VbbHcc_jets_nJet_stack_6->SetBinContent(3,1393673);
   VbbHcc_jets_nJet_stack_6->SetBinContent(4,774869);
   VbbHcc_jets_nJet_stack_6->SetBinContent(5,295650.4);
   VbbHcc_jets_nJet_stack_6->SetBinContent(6,77174.34);
   VbbHcc_jets_nJet_stack_6->SetBinContent(7,16933.97);
   VbbHcc_jets_nJet_stack_6->SetBinContent(8,3460.606);
   VbbHcc_jets_nJet_stack_6->SetBinContent(9,649.3461);
   VbbHcc_jets_nJet_stack_6->SetBinContent(10,115.6372);
   VbbHcc_jets_nJet_stack_6->SetBinContent(11,17.04071);
   VbbHcc_jets_nJet_stack_6->SetBinContent(12,1.498627);
   VbbHcc_jets_nJet_stack_6->SetBinContent(13,0.3586122);
   VbbHcc_jets_nJet_stack_6->SetBinError(1,670.2269);
   VbbHcc_jets_nJet_stack_6->SetBinError(2,827.9804);
   VbbHcc_jets_nJet_stack_6->SetBinError(3,793.8659);
   VbbHcc_jets_nJet_stack_6->SetBinError(4,589.7888);
   VbbHcc_jets_nJet_stack_6->SetBinError(5,364.2115);
   VbbHcc_jets_nJet_stack_6->SetBinError(6,184.4699);
   VbbHcc_jets_nJet_stack_6->SetBinError(7,87.0788);
   VbbHcc_jets_nJet_stack_6->SetBinError(8,41.29106);
   VbbHcc_jets_nJet_stack_6->SetBinError(9,21.80998);
   VbbHcc_jets_nJet_stack_6->SetBinError(10,7.457888);
   VbbHcc_jets_nJet_stack_6->SetBinError(11,2.546184);
   VbbHcc_jets_nJet_stack_6->SetBinError(12,0.7591232);
   VbbHcc_jets_nJet_stack_6->SetBinError(13,0.3586122);
   VbbHcc_jets_nJet_stack_6->SetEntries(1.353574e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_nJet_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_6->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_6,"");
   
   TH1D *VbbHcc_jets_nJet_stack_7 = new TH1D("VbbHcc_jets_nJet_stack_7","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_7->SetBinContent(1,327806.8);
   VbbHcc_jets_nJet_stack_7->SetBinContent(2,534999.9);
   VbbHcc_jets_nJet_stack_7->SetBinContent(3,509835.8);
   VbbHcc_jets_nJet_stack_7->SetBinContent(4,293591.1);
   VbbHcc_jets_nJet_stack_7->SetBinContent(5,122547.5);
   VbbHcc_jets_nJet_stack_7->SetBinContent(6,33854.47);
   VbbHcc_jets_nJet_stack_7->SetBinContent(7,7808.831);
   VbbHcc_jets_nJet_stack_7->SetBinContent(8,1600.65);
   VbbHcc_jets_nJet_stack_7->SetBinContent(9,324.95);
   VbbHcc_jets_nJet_stack_7->SetBinContent(10,56.43914);
   VbbHcc_jets_nJet_stack_7->SetBinContent(11,8.695534);
   VbbHcc_jets_nJet_stack_7->SetBinContent(12,1.676318);
   VbbHcc_jets_nJet_stack_7->SetBinError(1,306.2746);
   VbbHcc_jets_nJet_stack_7->SetBinError(2,391.3293);
   VbbHcc_jets_nJet_stack_7->SetBinError(3,380.6576);
   VbbHcc_jets_nJet_stack_7->SetBinError(4,288.5333);
   VbbHcc_jets_nJet_stack_7->SetBinError(5,185.021);
   VbbHcc_jets_nJet_stack_7->SetBinError(6,96.57046);
   VbbHcc_jets_nJet_stack_7->SetBinError(7,46.35468);
   VbbHcc_jets_nJet_stack_7->SetBinError(8,20.83107);
   VbbHcc_jets_nJet_stack_7->SetBinError(9,8.997891);
   VbbHcc_jets_nJet_stack_7->SetBinError(10,3.706452);
   VbbHcc_jets_nJet_stack_7->SetBinError(11,1.448696);
   VbbHcc_jets_nJet_stack_7->SetBinError(12,0.6546714);
   VbbHcc_jets_nJet_stack_7->SetEntries(7752935);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_nJet_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_7->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_7,"");
   
   TH1D *VbbHcc_jets_nJet_stack_8 = new TH1D("VbbHcc_jets_nJet_stack_8","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_8->SetBinContent(1,149569.7);
   VbbHcc_jets_nJet_stack_8->SetBinContent(2,213669.6);
   VbbHcc_jets_nJet_stack_8->SetBinContent(3,222766);
   VbbHcc_jets_nJet_stack_8->SetBinContent(4,139372.6);
   VbbHcc_jets_nJet_stack_8->SetBinContent(5,60688.54);
   VbbHcc_jets_nJet_stack_8->SetBinContent(6,15963.02);
   VbbHcc_jets_nJet_stack_8->SetBinContent(7,3527.022);
   VbbHcc_jets_nJet_stack_8->SetBinContent(8,700.3179);
   VbbHcc_jets_nJet_stack_8->SetBinContent(9,122.3236);
   VbbHcc_jets_nJet_stack_8->SetBinContent(10,24.83837);
   VbbHcc_jets_nJet_stack_8->SetBinContent(11,4.388028);
   VbbHcc_jets_nJet_stack_8->SetBinContent(12,0.6645782);
   VbbHcc_jets_nJet_stack_8->SetBinContent(13,0.2478375);
   VbbHcc_jets_nJet_stack_8->SetBinError(1,206.3241);
   VbbHcc_jets_nJet_stack_8->SetBinError(2,245.3371);
   VbbHcc_jets_nJet_stack_8->SetBinError(3,250.7797);
   VbbHcc_jets_nJet_stack_8->SetBinError(4,198.26);
   VbbHcc_jets_nJet_stack_8->SetBinError(5,130.7898);
   VbbHcc_jets_nJet_stack_8->SetBinError(6,68.42994);
   VbbHcc_jets_nJet_stack_8->SetBinError(7,30.70236);
   VbbHcc_jets_nJet_stack_8->SetBinError(8,13.33931);
   VbbHcc_jets_nJet_stack_8->SetBinError(9,5.471712);
   VbbHcc_jets_nJet_stack_8->SetBinError(10,2.6006);
   VbbHcc_jets_nJet_stack_8->SetBinError(11,1.074162);
   VbbHcc_jets_nJet_stack_8->SetBinError(12,0.3867323);
   VbbHcc_jets_nJet_stack_8->SetBinError(13,0.2478375);
   VbbHcc_jets_nJet_stack_8->SetEntries(3433280);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_nJet_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_8->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_8,"");
   
   TH1D *VbbHcc_jets_nJet_stack_9 = new TH1D("VbbHcc_jets_nJet_stack_9","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_9->SetBinContent(1,1123.847);
   VbbHcc_jets_nJet_stack_9->SetBinContent(2,2771.756);
   VbbHcc_jets_nJet_stack_9->SetBinContent(3,5625.299);
   VbbHcc_jets_nJet_stack_9->SetBinContent(4,7163.731);
   VbbHcc_jets_nJet_stack_9->SetBinContent(5,5015.397);
   VbbHcc_jets_nJet_stack_9->SetBinContent(6,1872.35);
   VbbHcc_jets_nJet_stack_9->SetBinContent(7,598.3108);
   VbbHcc_jets_nJet_stack_9->SetBinContent(8,177.6618);
   VbbHcc_jets_nJet_stack_9->SetBinContent(9,49.36855);
   VbbHcc_jets_nJet_stack_9->SetBinContent(10,12.61063);
   VbbHcc_jets_nJet_stack_9->SetBinContent(11,3.403807);
   VbbHcc_jets_nJet_stack_9->SetBinContent(12,0.7650938);
   VbbHcc_jets_nJet_stack_9->SetBinContent(13,0.2183684);
   VbbHcc_jets_nJet_stack_9->SetBinContent(14,0.02499094);
   VbbHcc_jets_nJet_stack_9->SetBinContent(15,0.007218294);
   VbbHcc_jets_nJet_stack_9->SetBinError(1,2.059203);
   VbbHcc_jets_nJet_stack_9->SetBinError(2,3.142187);
   VbbHcc_jets_nJet_stack_9->SetBinError(3,4.349379);
   VbbHcc_jets_nJet_stack_9->SetBinError(4,4.854632);
   VbbHcc_jets_nJet_stack_9->SetBinError(5,4.013731);
   VbbHcc_jets_nJet_stack_9->SetBinError(6,2.422106);
   VbbHcc_jets_nJet_stack_9->SetBinError(7,1.357261);
   VbbHcc_jets_nJet_stack_9->SetBinError(8,0.7571406);
   VbbHcc_jets_nJet_stack_9->SetBinError(9,0.3881881);
   VbbHcc_jets_nJet_stack_9->SetBinError(10,0.2171199);
   VbbHcc_jets_nJet_stack_9->SetBinError(11,0.1434406);
   VbbHcc_jets_nJet_stack_9->SetBinError(12,0.0450841);
   VbbHcc_jets_nJet_stack_9->SetBinError(13,0.02667108);
   VbbHcc_jets_nJet_stack_9->SetBinError(14,0.008106138);
   VbbHcc_jets_nJet_stack_9->SetBinError(15,0.004223251);
   VbbHcc_jets_nJet_stack_9->SetEntries(9973110);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_nJet_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_9->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_9,"");
   
   TH1D *VbbHcc_jets_nJet_stack_10 = new TH1D("VbbHcc_jets_nJet_stack_10","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_10->SetBinContent(1,7.512562);
   VbbHcc_jets_nJet_stack_10->SetBinContent(2,64.67906);
   VbbHcc_jets_nJet_stack_10->SetBinContent(3,323.4325);
   VbbHcc_jets_nJet_stack_10->SetBinContent(4,792.3048);
   VbbHcc_jets_nJet_stack_10->SetBinContent(5,978.042);
   VbbHcc_jets_nJet_stack_10->SetBinContent(6,606.4088);
   VbbHcc_jets_nJet_stack_10->SetBinContent(7,248.8925);
   VbbHcc_jets_nJet_stack_10->SetBinContent(8,80.12609);
   VbbHcc_jets_nJet_stack_10->SetBinContent(9,21.87002);
   VbbHcc_jets_nJet_stack_10->SetBinContent(10,5.366535);
   VbbHcc_jets_nJet_stack_10->SetBinContent(11,1.233265);
   VbbHcc_jets_nJet_stack_10->SetBinContent(12,0.2705294);
   VbbHcc_jets_nJet_stack_10->SetBinContent(13,0.05027243);
   VbbHcc_jets_nJet_stack_10->SetBinContent(14,0.01309862);
   VbbHcc_jets_nJet_stack_10->SetBinContent(15,0.001236671);
   VbbHcc_jets_nJet_stack_10->SetBinError(1,0.06825073);
   VbbHcc_jets_nJet_stack_10->SetBinError(2,0.2010109);
   VbbHcc_jets_nJet_stack_10->SetBinError(3,0.4534363);
   VbbHcc_jets_nJet_stack_10->SetBinError(4,0.7122778);
   VbbHcc_jets_nJet_stack_10->SetBinError(5,0.7920579);
   VbbHcc_jets_nJet_stack_10->SetBinError(6,0.623241);
   VbbHcc_jets_nJet_stack_10->SetBinError(7,0.3988496);
   VbbHcc_jets_nJet_stack_10->SetBinError(8,0.2260073);
   VbbHcc_jets_nJet_stack_10->SetBinError(9,0.1179366);
   VbbHcc_jets_nJet_stack_10->SetBinError(10,0.05834359);
   VbbHcc_jets_nJet_stack_10->SetBinError(11,0.02797822);
   VbbHcc_jets_nJet_stack_10->SetBinError(12,0.01304551);
   VbbHcc_jets_nJet_stack_10->SetBinError(13,0.005597813);
   VbbHcc_jets_nJet_stack_10->SetBinError(14,0.002857492);
   VbbHcc_jets_nJet_stack_10->SetBinError(15,0.000874466);
   VbbHcc_jets_nJet_stack_10->SetEntries(4977633);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_nJet_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_10->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_10,"");
   
   TH1D *VbbHcc_jets_nJet_stack_11 = new TH1D("VbbHcc_jets_nJet_stack_11","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_11->SetBinContent(1,41.59916);
   VbbHcc_jets_nJet_stack_11->SetBinContent(2,108.0993);
   VbbHcc_jets_nJet_stack_11->SetBinContent(3,227.5818);
   VbbHcc_jets_nJet_stack_11->SetBinContent(4,314.2101);
   VbbHcc_jets_nJet_stack_11->SetBinContent(5,238.258);
   VbbHcc_jets_nJet_stack_11->SetBinContent(6,92.35098);
   VbbHcc_jets_nJet_stack_11->SetBinContent(7,29.8413);
   VbbHcc_jets_nJet_stack_11->SetBinContent(8,8.691891);
   VbbHcc_jets_nJet_stack_11->SetBinContent(9,2.600024);
   VbbHcc_jets_nJet_stack_11->SetBinContent(10,0.6923869);
   VbbHcc_jets_nJet_stack_11->SetBinContent(11,0.1664444);
   VbbHcc_jets_nJet_stack_11->SetBinContent(12,0.04210377);
   VbbHcc_jets_nJet_stack_11->SetBinContent(13,0.01290909);
   VbbHcc_jets_nJet_stack_11->SetBinContent(15,0.002353708);
   VbbHcc_jets_nJet_stack_11->SetBinError(1,0.3593267);
   VbbHcc_jets_nJet_stack_11->SetBinError(2,0.5634886);
   VbbHcc_jets_nJet_stack_11->SetBinError(3,0.8006888);
   VbbHcc_jets_nJet_stack_11->SetBinError(4,0.9290023);
   VbbHcc_jets_nJet_stack_11->SetBinError(5,0.8006677);
   VbbHcc_jets_nJet_stack_11->SetBinError(6,0.4920856);
   VbbHcc_jets_nJet_stack_11->SetBinError(7,0.2770865);
   VbbHcc_jets_nJet_stack_11->SetBinError(8,0.1497329);
   VbbHcc_jets_nJet_stack_11->SetBinError(9,0.08171995);
   VbbHcc_jets_nJet_stack_11->SetBinError(10,0.04208566);
   VbbHcc_jets_nJet_stack_11->SetBinError(11,0.02094227);
   VbbHcc_jets_nJet_stack_11->SetBinError(12,0.01040311);
   VbbHcc_jets_nJet_stack_11->SetBinError(13,0.00508789);
   VbbHcc_jets_nJet_stack_11->SetBinError(15,0.002353708);
   VbbHcc_jets_nJet_stack_11->SetEntries(486910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nJet_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_11->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_11,"");
   
   TH1D *VbbHcc_jets_nJet_stack_12 = new TH1D("VbbHcc_jets_nJet_stack_12","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_12->SetBinContent(1,6199.988);
   VbbHcc_jets_nJet_stack_12->SetBinContent(2,55202.4);
   VbbHcc_jets_nJet_stack_12->SetBinContent(3,281419.1);
   VbbHcc_jets_nJet_stack_12->SetBinContent(4,745593.9);
   VbbHcc_jets_nJet_stack_12->SetBinContent(5,1001210);
   VbbHcc_jets_nJet_stack_12->SetBinContent(6,649964.3);
   VbbHcc_jets_nJet_stack_12->SetBinContent(7,276989.8);
   VbbHcc_jets_nJet_stack_12->SetBinContent(8,90093.39);
   VbbHcc_jets_nJet_stack_12->SetBinContent(9,25762.94);
   VbbHcc_jets_nJet_stack_12->SetBinContent(10,6603.089);
   VbbHcc_jets_nJet_stack_12->SetBinContent(11,1482.42);
   VbbHcc_jets_nJet_stack_12->SetBinContent(12,299.9612);
   VbbHcc_jets_nJet_stack_12->SetBinContent(13,59.6438);
   VbbHcc_jets_nJet_stack_12->SetBinContent(14,6.815423);
   VbbHcc_jets_nJet_stack_12->SetBinError(1,208.7622);
   VbbHcc_jets_nJet_stack_12->SetBinError(2,622.4667);
   VbbHcc_jets_nJet_stack_12->SetBinError(3,1416.435);
   VbbHcc_jets_nJet_stack_12->SetBinError(4,2301.705);
   VbbHcc_jets_nJet_stack_12->SetBinError(5,2666.922);
   VbbHcc_jets_nJet_stack_12->SetBinError(6,2145.837);
   VbbHcc_jets_nJet_stack_12->SetBinError(7,1399.619);
   VbbHcc_jets_nJet_stack_12->SetBinError(8,792.9993);
   VbbHcc_jets_nJet_stack_12->SetBinError(9,426.0818);
   VbbHcc_jets_nJet_stack_12->SetBinError(10,215.0666);
   VbbHcc_jets_nJet_stack_12->SetBinError(11,101.3106);
   VbbHcc_jets_nJet_stack_12->SetBinError(12,44.62801);
   VbbHcc_jets_nJet_stack_12->SetBinError(13,19.29491);
   VbbHcc_jets_nJet_stack_12->SetBinError(14,6.815423);
   VbbHcc_jets_nJet_stack_12->SetEntries(496915);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nJet_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_12->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_jets_nJet__13 = new TH1D("VbbHcc_jets_nJet__13","",14,-0.5,13.5);
   VbbHcc_jets_nJet__13->SetBinContent(1,3.053672e+07);
   VbbHcc_jets_nJet__13->SetBinContent(2,6.324707e+07);
   VbbHcc_jets_nJet__13->SetBinContent(3,1.261541e+08);
   VbbHcc_jets_nJet__13->SetBinContent(4,1.485344e+08);
   VbbHcc_jets_nJet__13->SetBinContent(5,1.135046e+08);
   VbbHcc_jets_nJet__13->SetBinContent(6,6.964997e+07);
   VbbHcc_jets_nJet__13->SetBinContent(7,4.038105e+07);
   VbbHcc_jets_nJet__13->SetBinContent(8,1.854016e+07);
   VbbHcc_jets_nJet__13->SetBinContent(9,6652430);
   VbbHcc_jets_nJet__13->SetBinContent(10,2007897);
   VbbHcc_jets_nJet__13->SetBinContent(11,541864);
   VbbHcc_jets_nJet__13->SetBinContent(12,137727);
   VbbHcc_jets_nJet__13->SetBinContent(13,33262);
   VbbHcc_jets_nJet__13->SetBinContent(14,7897);
   VbbHcc_jets_nJet__13->SetBinContent(15,2345);
   VbbHcc_jets_nJet__13->SetEntries(6.199315e+08);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet__13->SetLineColor(ci);
   VbbHcc_jets_nJet__13->SetLineWidth(2);
   VbbHcc_jets_nJet__13->SetMarkerStyle(20);
   VbbHcc_jets_nJet__13->SetMarkerSize(1.2);
   VbbHcc_jets_nJet__13->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet__13->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet__13->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet__13->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet__13->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet__13->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet__13->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet__13->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet__13->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet__13->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet__13->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet__13->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet__13->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet__13->GetZaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet__13->Draw("same E");
   
   Double_t Graph_from_VbbHcc_jets_nJet_fx1013[14] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13};
   Double_t Graph_from_VbbHcc_jets_nJet_fy1013[14] = {
   1.946365e+09,
   1.691097e+10,
   4.580602e+10,
   3.086461e+10,
   8.815544e+09,
   1.311344e+09,
   1.558883e+08,
   1.735591e+07,
   2243313,
   389130.5,
   71648.08,
   15581.11,
   3317.827,
   710.9212};
   Double_t Graph_from_VbbHcc_jets_nJet_fex1013[14] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_VbbHcc_jets_nJet_fey1013[14] = {
   2014445,
   5915271,
   9752313,
   7967197,
   4223477,
   1603911,
   528726.6,
   166260.8,
   49457.4,
   16006.87,
   4260.663,
   684.8763,
   26.48226,
   10.69523};
   TGraphErrors *gre = new TGraphErrors(14,Graph_from_VbbHcc_jets_nJet_fx1013,Graph_from_VbbHcc_jets_nJet_fy1013,Graph_from_VbbHcc_jets_nJet_fex1013,Graph_from_VbbHcc_jets_nJet_fey1013);
   gre->SetName("Graph_from_VbbHcc_jets_nJet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_jets_nJet1013 = new TH1F("Graph_Graph_from_VbbHcc_jets_nJet1013","",100,-1.9,14.9);
   Graph_Graph_from_VbbHcc_jets_nJet1013->SetMinimum(630.2034);
   Graph_Graph_from_VbbHcc_jets_nJet1013->SetMaximum(5.039735e+10);
   Graph_Graph_from_VbbHcc_jets_nJet1013->SetDirectory(0);
   Graph_Graph_from_VbbHcc_jets_nJet1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_jets_nJet1013->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_jets_nJet1013);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_jets_nJet","MC unc. (stat.)","fl");

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
   jets_nJet_VbbHcc_other_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-2.645156,-0.2774193,14.23387,1.658065);
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
   
   TH1D *data_mc_ratio__14 = new TH1D("data_mc_ratio__14","",14,-0.5,13.5);
   data_mc_ratio__14->SetBinContent(1,0.0156891);
   data_mc_ratio__14->SetBinContent(2,0.003740002);
   data_mc_ratio__14->SetBinContent(3,0.002754093);
   data_mc_ratio__14->SetBinContent(4,0.004812451);
   data_mc_ratio__14->SetBinContent(5,0.01287551);
   data_mc_ratio__14->SetBinContent(6,0.05311342);
   data_mc_ratio__14->SetBinContent(7,0.2590384);
   data_mc_ratio__14->SetBinContent(8,1.068234);
   data_mc_ratio__14->SetBinContent(9,2.965448);
   data_mc_ratio__14->SetBinContent(10,5.159958);
   data_mc_ratio__14->SetBinContent(11,7.562855);
   data_mc_ratio__14->SetBinContent(12,8.839355);
   data_mc_ratio__14->SetBinContent(13,10.02524);
   data_mc_ratio__14->SetBinContent(14,11.10812);
   data_mc_ratio__14->SetBinContent(15,13.2988);
   data_mc_ratio__14->SetBinError(1,2.839141e-06);
   data_mc_ratio__14->SetBinError(2,4.702747e-07);
   data_mc_ratio__14->SetBinError(3,2.452043e-07);
   data_mc_ratio__14->SetBinError(4,3.948688e-07);
   data_mc_ratio__14->SetBinError(5,1.208531e-06);
   data_mc_ratio__14->SetBinError(6,6.3642e-06);
   data_mc_ratio__14->SetBinError(7,4.076387e-05);
   data_mc_ratio__14->SetBinError(8,0.0002480901);
   data_mc_ratio__14->SetBinError(9,0.001149742);
   data_mc_ratio__14->SetBinError(10,0.003641459);
   data_mc_ratio__14->SetBinError(11,0.01027402);
   data_mc_ratio__14->SetBinError(12,0.02381832);
   data_mc_ratio__14->SetBinError(13,0.05496934);
   data_mc_ratio__14->SetBinError(14,0.1249999);
   data_mc_ratio__14->SetBinError(15,0.4028363);
   data_mc_ratio__14->SetMinimum(0.4);
   data_mc_ratio__14->SetMaximum(1.6);
   data_mc_ratio__14->SetEntries(4857.636);
   data_mc_ratio__14->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__14->SetLineColor(ci);
   data_mc_ratio__14->SetLineWidth(2);
   data_mc_ratio__14->SetMarkerStyle(20);
   data_mc_ratio__14->SetMarkerSize(1.2);
   data_mc_ratio__14->GetXaxis()->SetTitle("Jet multiplicity");
   data_mc_ratio__14->GetXaxis()->SetRange(1,14);
   data_mc_ratio__14->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__14->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__14->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__14->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__14->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__14->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__14->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__14->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__14->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__14->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__14->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__14->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__14->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__14->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1014[14] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13};
   Double_t Graph_from_mc_statistical_error_fy1014[14] = {
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1014[14] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_mc_statistical_error_fey1014[14] = {
   0.001034978,
   0.0003497889,
   0.0002129046,
   0.0002581338,
   0.0004790943,
   0.001223104,
   0.003391703,
   0.009579494,
   0.02204659,
   0.04113498,
   0.05946654,
   0.04395554,
   0.007981809,
   0.01504419};
   gre = new TGraphErrors(14,Graph_from_mc_statistical_error_fx1014,Graph_from_mc_statistical_error_fy1014,Graph_from_mc_statistical_error_fex1014,Graph_from_mc_statistical_error_fey1014);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1014 = new TH1F("Graph_Graph_from_mc_statistical_error1014","",100,-1.9,14.9);
   Graph_Graph_from_mc_statistical_error1014->SetMinimum(0.9286401);
   Graph_Graph_from_mc_statistical_error1014->SetMaximum(1.07136);
   Graph_Graph_from_mc_statistical_error1014->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1014->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1014);
   
   gre->Draw("e2");
   TLine *line = new TLine(-0.5,1,13.5,1);
   line->Draw();
   bottomPad->Modified();
   jets_nJet_VbbHcc_other_18->cd();
   jets_nJet_VbbHcc_other_18->Modified();
   jets_nJet_VbbHcc_other_18->cd();
   jets_nJet_VbbHcc_other_18->SetSelected(jets_nJet_VbbHcc_other_18);
}
