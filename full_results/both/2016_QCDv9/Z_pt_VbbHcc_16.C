void Z_pt_VbbHcc_16()
{
//=========Macro generated from canvas: Z_pt_VbbHcc_16/Z_pt_VbbHcc_16
//=========  (Mon Nov 21 13:06:59 2022) by ROOT version 6.14/09
   TCanvas *Z_pt_VbbHcc_16 = new TCanvas("Z_pt_VbbHcc_16", "Z_pt_VbbHcc_16",0,0,600,600);
   Z_pt_VbbHcc_16->SetHighLightColor(2);
   Z_pt_VbbHcc_16->Range(0,0,1,1);
   Z_pt_VbbHcc_16->SetFillColor(0);
   Z_pt_VbbHcc_16->SetFillStyle(4000);
   Z_pt_VbbHcc_16->SetBorderMode(0);
   Z_pt_VbbHcc_16->SetBorderSize(2);
   Z_pt_VbbHcc_16->SetFrameFillStyle(1000);
   Z_pt_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-20528.48,1562.903,2.050796e+07);
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
   st->SetMaximum(1.75763e+07);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",40,0,2000);
   st_stack_9->SetMinimum(0.01);
   st_stack_9->SetMaximum(1.845511e+07);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetRange(7,30);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetLabelSize(0.035);
   st_stack_9->GetXaxis()->SetTitleSize(0.035);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Events/50.0");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetLabelSize(0.05);
   st_stack_9->GetYaxis()->SetTitleSize(0.057);
   st_stack_9->GetYaxis()->SetTitleOffset(1.2);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetLabelSize(0.035);
   st_stack_9->GetZaxis()->SetTitleSize(0.035);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VbbHcc_duong_Z_pt_stack_1 = new TH1D("VbbHcc_duong_Z_pt_stack_1","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(1,3582963);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(2,6917216);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(3,2759942);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(4,182774);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(5,3867.676);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(6,1350.824);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(1,70028.09);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(2,97435.91);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(3,61561.78);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(4,15864.91);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(5,2237.539);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(6,1350.824);
   VbbHcc_duong_Z_pt_stack_1->SetEntries(9997);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_2 = new TH1D("VbbHcc_duong_Z_pt_stack_2","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(1,29868.17);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(2,57510.06);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(3,36302.42);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(4,15613.76);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(5,7174.567);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(6,3617.992);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(7,1923.908);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(8,1090.077);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(9,667.8147);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(10,414.7617);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(11,252.3023);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(12,181.4418);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(13,124.7347);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(14,88.56036);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(15,54.22325);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(16,42.16333);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(17,27.92284);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(18,20.11438);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(19,20.29773);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(20,12.8214);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(21,7.568037);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(22,6.220911);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(23,3.496155);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(24,5.781312);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(25,2.703972);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(26,2.043079);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(27,1.073519);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(28,1.470741);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(29,1.02465);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(30,0.3354158);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(31,-0.04918147);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(32,0.6237699);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(33,0.6132755);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(34,0.3874444);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(35,0.0461064);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(36,0.2504175);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(37,0.04040723);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(41,0.571614);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(1,66.69058);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(2,92.9751);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(3,76.25125);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(4,51.70527);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(5,36.20457);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(6,26.48058);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(7,19.67598);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(8,15.16133);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(9,12.10506);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(10,9.697623);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(11,7.571706);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(12,6.549896);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(13,5.513927);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(14,4.677199);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(15,3.655293);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(16,3.270887);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(17,2.632484);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(18,2.260508);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(19,2.299944);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(20,1.846171);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(21,1.394151);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(22,1.36419);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(23,0.9383683);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(24,1.224529);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(25,0.8822113);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(26,0.711706);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(27,0.5233366);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(28,0.6384572);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(29,0.5187923);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(30,0.2868158);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(31,0.04918147);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(32,0.4103957);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(33,0.4000586);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(34,0.3047782);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(35,0.0461064);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(36,0.2504175);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(37,0.04040723);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(41,0.4047867);
   VbbHcc_duong_Z_pt_stack_2->SetEntries(2341547);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_2,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_3 = new TH1D("VbbHcc_duong_Z_pt_stack_3","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(1,477041.4);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(2,902048.7);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(3,593130.9);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(4,189012.7);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(5,66843.85);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(6,28457.15);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(7,13823.95);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(8,7351.333);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(9,4240.862);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(10,2620.646);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(11,1685.01);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(12,1097.721);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(13,745.3484);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(14,502.2339);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(15,355.6312);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(16,245.3506);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(17,173.3255);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(18,120.9952);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(19,90.80908);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(20,64.54173);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(21,47.62357);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(22,33.00142);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(23,25.27685);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(24,18.05033);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(25,15.06053);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(26,11.56318);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(27,7.471502);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(28,5.826296);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(29,4.356282);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(30,3.307856);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(31,1.980333);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(32,1.625785);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(33,1.107136);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(34,1.02278);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(35,0.517586);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(36,0.4614901);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(37,0.5001678);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(38,0.2804809);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(39,0.1987268);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(40,0.1988514);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(41,0.752003);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(1,177.4024);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(2,243.7949);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(3,197.473);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(4,111.0797);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(5,66.01537);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(6,43.11823);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(7,30.11994);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(8,22.02209);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(9,16.76657);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(10,13.24402);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(11,10.63538);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(12,8.615379);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(13,7.098091);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(14,5.853529);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(15,4.913559);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(16,4.099874);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(17,3.437849);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(18,2.855987);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(19,2.487027);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(20,2.102509);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(21,1.812576);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(22,1.496132);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(23,1.310796);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(24,1.109682);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(25,1.012031);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(26,0.9008482);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(27,0.720298);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(28,0.6331148);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(29,0.5392522);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(30,0.4695091);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(31,0.3608227);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(32,0.3288194);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(33,0.2895455);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(34,0.2663185);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(35,0.1850729);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(36,0.1657483);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(37,0.180827);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(38,0.1412772);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(39,0.117239);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(40,0.116641);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(41,0.2209998);
   VbbHcc_duong_Z_pt_stack_3->SetEntries(3.690801e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_Z_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_3->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_3,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_4 = new TH1D("VbbHcc_duong_Z_pt_stack_4","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(1,4648.618);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(2,10672.15);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(3,11371.72);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(4,7838.389);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(5,3232.068);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(6,682.0499);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(7,50.01258);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(8,3.85979);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(9,0.594217);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(10,0.2860714);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(1,37.15305);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(2,56.32078);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(3,58.16801);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(4,48.32136);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(5,31.05006);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(6,14.23751);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(7,3.852514);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(8,1.077838);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(9,0.4202013);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(10,0.2860714);
   VbbHcc_duong_Z_pt_stack_4->SetEntries(131892);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_Z_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_4->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_4,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_5 = new TH1D("VbbHcc_duong_Z_pt_stack_5","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(1,2333.906);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(2,5954.975);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(3,6115.965);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(4,4476.864);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(5,1990.168);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(6,476.5955);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(7,47.04127);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(8,6.52233);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(9,0.9490835);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(10,1.157551);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(13,1.070578);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(1,50.3507);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(2,80.58105);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(3,81.74654);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(4,70.04737);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(5,46.69357);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(6,22.84369);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(7,7.115578);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(8,2.672859);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(9,0.9490835);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(10,1.157551);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(13,1.070578);
   VbbHcc_duong_Z_pt_stack_5->SetEntries(20027);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_Z_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_5->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_5,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_6 = new TH1D("VbbHcc_duong_Z_pt_stack_6","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(1,149.744);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(2,230.834);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(3,112.2953);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(4,58.93192);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(5,34.96886);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(6,17.38776);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(7,12.41776);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(8,6.485501);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(9,4.663401);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(10,3.205199);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(11,2.408928);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(12,1.84956);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(13,1.224093);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(14,0.7075908);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(15,0.5449641);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(16,0.0940637);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(17,0.5542237);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(18,0.1804814);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(19,0.1791638);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(20,0.4372159);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(21,0.0941619);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(23,0.1785559);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(24,0.1901114);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(27,0.06974152);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(29,0.09001054);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(1,3.70474);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(2,4.597035);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(3,3.198655);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(4,2.318701);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(5,1.789347);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(6,1.255846);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(7,1.062759);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(8,0.762402);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(9,0.6612027);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(10,0.542703);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(11,0.4674373);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(12,0.4069659);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(13,0.3298735);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(14,0.2523653);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(15,0.2239301);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(16,0.0940637);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(17,0.2262903);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(18,0.1276197);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(19,0.1266879);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(20,0.1969138);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(21,0.0941619);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(23,0.1262595);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(24,0.1347385);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(27,0.06974152);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(29,0.09001054);
   VbbHcc_duong_Z_pt_stack_6->SetEntries(7131);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_Z_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_6->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_6,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_7 = new TH1D("VbbHcc_duong_Z_pt_stack_7","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(1,284.1832);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(2,411.5667);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(3,256.3714);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(4,131.605);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(5,69.70229);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(6,43.34082);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(7,24.76811);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(8,13.31548);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(9,7.597032);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(10,3.199881);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(11,2.582958);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(12,1.552838);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(13,0.6649395);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(14,0.7029806);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(15,0.06833754);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(16,0.3360761);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(17,0.2052066);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(18,0.1062411);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(19,0.2057095);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(20,0.2057574);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(23,0.06684071);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(25,0.06767992);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(28,0.08367589);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(29,0.136159);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(1,4.40663);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(2,5.302583);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(3,4.179167);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(4,2.99139);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(5,2.176066);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(6,1.715395);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(7,1.289456);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(8,0.9492289);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(9,0.7163296);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(10,0.4618889);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(11,0.4206026);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(12,0.3250833);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(13,0.2075241);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(14,0.2132696);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(15,0.06833754);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(16,0.1504447);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(17,0.1185467);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(18,0.0778254);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(19,0.1190721);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(20,0.1189118);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(23,0.06684071);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(25,0.06767992);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(28,0.0634547);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(29,0.0963104);
   VbbHcc_duong_Z_pt_stack_7->SetEntries(18712);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_Z_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_7->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_7,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_8 = new TH1D("VbbHcc_duong_Z_pt_stack_8","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(1,346.6524);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(2,437.4782);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(3,222.5361);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(4,113.0946);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(5,52.318);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(6,31.39178);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(7,20.78786);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(8,6.410319);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(9,3.681613);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(10,4.005257);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(11,0.982851);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(12,0.5705908);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(13,0.2155566);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(14,0.1946284);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(15,0.3667395);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(16,0.1845402);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(19,0.1826776);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(20,0.3897901);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(1,8.188719);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(2,9.163569);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(3,6.532407);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(4,4.650602);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(5,3.163234);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(6,2.457054);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(7,1.998395);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(8,1.098078);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(9,0.8319235);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(10,0.8650828);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(11,0.4402646);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(12,0.329476);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(13,0.2155566);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(14,0.1946284);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(15,0.2593243);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(16,0.1845402);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(19,0.1826776);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(20,0.2773361);
   VbbHcc_duong_Z_pt_stack_8->SetEntries(6580);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_Z_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_8->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_8,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_9 = new TH1D("VbbHcc_duong_Z_pt_stack_9","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(1,99.90883);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(2,157.8488);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(3,96.61354);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(4,49.64951);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(5,26.19425);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(6,14.26646);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(7,8.244783);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(8,4.684412);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(9,2.742085);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(10,1.477545);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(11,0.8370678);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(12,0.506998);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(13,0.2759512);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(14,0.1841335);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(15,0.08317044);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(16,0.06860913);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(17,0.05171247);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(18,0.03042715);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(19,0.02040667);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(20,0.02027348);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(21,0.0130048);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(22,0.006190154);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(23,0.00245953);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(24,0.0014426);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(25,0.002899443);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(26,0.004255501);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(28,0.001645778);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(1,0.3890454);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(2,0.4886471);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(3,0.3815389);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(4,0.2727839);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(5,0.1982928);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(6,0.146494);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(7,0.1114816);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(8,0.08373118);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(9,0.06426824);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(10,0.04696251);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(11,0.035276);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(12,0.02726449);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(13,0.02009808);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(14,0.01650938);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(15,0.0111945);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(16,0.0100959);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(17,0.008878961);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(18,0.006631544);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(19,0.005521388);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(20,0.005504712);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(21,0.00435786);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(22,0.003101019);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(23,0.001773022);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(24,0.0014426);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(25,0.002050232);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(26,0.002458169);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(28,0.001645778);
   VbbHcc_duong_Z_pt_stack_9->SetEntries(327490);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_Z_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_9->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_9,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_10 = new TH1D("VbbHcc_duong_Z_pt_stack_10","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(1,16.49678);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(2,36.67719);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(3,37.69432);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(4,25.4207);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(5,14.49861);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(6,8.172184);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(7,4.876505);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(8,2.913722);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(9,1.786776);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(10,1.134592);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(11,0.7365601);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(12,0.4820933);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(13,0.3047503);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(14,0.2043539);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(15,0.1423914);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(16,0.1100704);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(17,0.07084625);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(18,0.05524035);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(19,0.0438961);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(20,0.04029999);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(21,0.02906892);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(22,0.01652265);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(23,0.01599878);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(24,0.01575645);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(25,0.01121431);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(26,0.007311389);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(27,0.007102641);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(28,0.002754357);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(29,0.004396475);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(30,0.002705969);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(31,0.0009868875);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(32,0.001959153);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(33,0.001874135);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(34,0.002506949);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(36,0.0007541598);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(37,0.0001804772);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(38,0.0003679503);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(39,0.0007647283);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(41,0.001612966);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(1,0.07955668);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(2,0.1185836);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(3,0.1202032);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(4,0.09862678);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(5,0.07436607);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(6,0.05582965);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(7,0.04310159);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(8,0.03329731);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(9,0.026062);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(10,0.0207997);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(11,0.01673858);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(12,0.01355196);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(13,0.01080045);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(14,0.00882506);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(15,0.007360209);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(16,0.00648891);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(17,0.00520574);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(18,0.004613468);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(19,0.004095804);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(20,0.003930883);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(21,0.003300459);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(22,0.002514313);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(23,0.00246821);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(24,0.002447815);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(25,0.002073995);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(26,0.001671524);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(27,0.001677034);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(28,0.001042163);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(29,0.001274604);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(30,0.001024815);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(31,0.0005872403);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(32,0.0008531279);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(33,0.0008392875);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(34,0.0009595906);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(36,0.0005335132);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(37,0.0001804772);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(38,0.0003679503);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(39,0.0005408124);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(41,0.0008080704);
   VbbHcc_duong_Z_pt_stack_10->SetEntries(404395);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_Z_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_10->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_10,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_11 = new TH1D("VbbHcc_duong_Z_pt_stack_11","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(1,1.451495);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(2,2.723181);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(3,1.684644);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(4,0.7765724);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(5,0.3870593);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(6,0.1995252);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(7,0.1211792);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(8,0.085276);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(9,0.03795365);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(10,0.01388719);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(11,0.007911005);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(12,0.007931824);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(13,0.003272536);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(14,0.00152612);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(16,0.001514166);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(17,0.001546166);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(18,0.001545187);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(19,0.00152612);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(1,0.04758329);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(2,0.06540141);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(3,0.05103797);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(4,0.03486428);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(5,0.02447589);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(6,0.01736977);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(7,0.01353395);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(8,0.01140566);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(9,0.007509147);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(10,0.004631902);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(11,0.003494081);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(12,0.003551226);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(13,0.001970781);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(14,0.00152612);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(16,0.001514166);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(17,0.001545188);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(18,0.001545187);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(19,0.00152612);
   VbbHcc_duong_Z_pt_stack_11->SetEntries(5485);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_Z_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_11->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_11,"");
   
   TH1D *VbbHcc_duong_Z_pt_stack_12 = new TH1D("VbbHcc_duong_Z_pt_stack_12","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(1,5688.024);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(2,14655.95);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(3,15927.44);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(4,10768.72);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(5,5556.66);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(6,3170.021);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(7,1810.189);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(8,1110.077);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(9,598.8316);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(10,361.1076);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(11,237.163);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(12,162.5583);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(13,140.6636);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(14,99.4234);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(15,70.68662);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(16,23.35772);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(17,47.74871);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(18,42.28064);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(19,35.62828);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(20,11.44437);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(21,7.738879);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(22,4.284517);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(23,16.35635);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(24,4.406318);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(25,15.90356);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(26,4.678798);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(27,2.715719);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(33,4.111695);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(35,4.029149);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(1,151.1634);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(2,242.8672);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(3,253.6312);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(4,208.3811);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(5,149.2554);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(6,112.7233);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(7,85.14849);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(8,66.60925);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(9,49.06085);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(10,38.01739);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(11,31.04156);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(12,25.31673);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(13,23.71021);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(14,20.0793);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(15,17.16669);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(16,9.567594);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(17,13.85204);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(18,13.3807);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(19,12.01974);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(20,6.613236);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(21,5.476637);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(22,4.284517);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(23,8.196702);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(24,4.000262);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(25,7.544479);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(26,3.502259);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(27,2.715719);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(33,4.111695);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(35,4.029149);
   VbbHcc_duong_Z_pt_stack_12->SetEntries(16360);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_Z_pt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt_stack_12->SetLineColor(ci);
   VbbHcc_duong_Z_pt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_pt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_Z_pt__17 = new TH1D("VbbHcc_duong_Z_pt__17","",40,0,2000);
   VbbHcc_duong_Z_pt__17->SetBinContent(1,842477);
   VbbHcc_duong_Z_pt__17->SetBinContent(2,2010963);
   VbbHcc_duong_Z_pt__17->SetBinContent(3,1988195);
   VbbHcc_duong_Z_pt__17->SetBinContent(4,1298138);
   VbbHcc_duong_Z_pt__17->SetBinContent(5,757082);
   VbbHcc_duong_Z_pt__17->SetBinContent(6,481447);
   VbbHcc_duong_Z_pt__17->SetBinContent(7,326046);
   VbbHcc_duong_Z_pt__17->SetBinContent(8,211168);
   VbbHcc_duong_Z_pt__17->SetBinContent(9,127557);
   VbbHcc_duong_Z_pt__17->SetBinContent(10,77080);
   VbbHcc_duong_Z_pt__17->SetBinContent(11,46960);
   VbbHcc_duong_Z_pt__17->SetBinContent(12,29654);
   VbbHcc_duong_Z_pt__17->SetBinContent(13,19461);
   VbbHcc_duong_Z_pt__17->SetBinContent(14,12725);
   VbbHcc_duong_Z_pt__17->SetBinContent(15,8588);
   VbbHcc_duong_Z_pt__17->SetBinContent(16,5776);
   VbbHcc_duong_Z_pt__17->SetBinContent(17,4022);
   VbbHcc_duong_Z_pt__17->SetBinContent(18,2825);
   VbbHcc_duong_Z_pt__17->SetBinContent(19,2054);
   VbbHcc_duong_Z_pt__17->SetBinContent(20,1475);
   VbbHcc_duong_Z_pt__17->SetBinContent(21,970);
   VbbHcc_duong_Z_pt__17->SetBinContent(22,733);
   VbbHcc_duong_Z_pt__17->SetBinContent(23,556);
   VbbHcc_duong_Z_pt__17->SetBinContent(24,407);
   VbbHcc_duong_Z_pt__17->SetBinContent(25,294);
   VbbHcc_duong_Z_pt__17->SetBinContent(26,244);
   VbbHcc_duong_Z_pt__17->SetBinContent(27,167);
   VbbHcc_duong_Z_pt__17->SetBinContent(28,121);
   VbbHcc_duong_Z_pt__17->SetBinContent(29,88);
   VbbHcc_duong_Z_pt__17->SetBinContent(30,57);
   VbbHcc_duong_Z_pt__17->SetBinContent(31,40);
   VbbHcc_duong_Z_pt__17->SetBinContent(32,31);
   VbbHcc_duong_Z_pt__17->SetBinContent(33,29);
   VbbHcc_duong_Z_pt__17->SetBinContent(34,20);
   VbbHcc_duong_Z_pt__17->SetBinContent(35,20);
   VbbHcc_duong_Z_pt__17->SetBinContent(36,13);
   VbbHcc_duong_Z_pt__17->SetBinContent(37,8);
   VbbHcc_duong_Z_pt__17->SetBinContent(38,7);
   VbbHcc_duong_Z_pt__17->SetBinContent(39,1);
   VbbHcc_duong_Z_pt__17->SetBinContent(40,1);
   VbbHcc_duong_Z_pt__17->SetBinContent(41,13);
   VbbHcc_duong_Z_pt__17->SetEntries(8257513);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt__17->SetLineColor(ci);
   VbbHcc_duong_Z_pt__17->SetLineWidth(2);
   VbbHcc_duong_Z_pt__17->SetMarkerStyle(20);
   VbbHcc_duong_Z_pt__17->SetMarkerSize(1.2);
   VbbHcc_duong_Z_pt__17->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt__17->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt__17->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt__17->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt__17->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt__17->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt__17->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt__17->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt__17->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt__17->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt__17->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt__17->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt__17->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt__17->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt__17->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_Z_pt_fx1017[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_duong_Z_pt_fy1017[40] = {
   4103442,
   7909335,
   3423518,
   410863.9,
   88863.06,
   37869.39,
   17726.31,
   9595.763,
   5529.561,
   3410.996,
   2182.031,
   1446.691,
   1014.506,
   692.2128,
   481.7467,
   311.6665,
   249.8806,
   183.7642,
   147.3685,
   89.90084,
   63.06672,
   43.52956,
   45.39321,
   28.44527,
   33.74986,
   18.29662,
   11.33758,
   7.385113,
   5.611498,
   3.645978,
   1.932139,
   2.251514,
   5.83398,
   1.412731,
   4.592841,
   0.7126618,
   0.5407555,
   0.2808488,
   0.1994915,
   0.1988514};
   Double_t Graph_from_VbbHcc_duong_Z_pt_fex1017[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_duong_Z_pt_fey1017[40] = {
   70028.54,
   97436.62,
   61562.74,
   15866.98,
   2244.48,
   1356.734,
   92.82723,
   71.85147,
   53.2667,
   41.44213,
   33.68399,
   27.53985,
   25.38318,
   21.43515,
   18.22969,
   10.91385,
   14.51527,
   13.86838,
   12.49051,
   7.18983,
   5.935616,
   4.738832,
   8.354943,
   4.330257,
   7.663306,
   3.685632,
   2.858794,
   0.9013835,
   0.7598142,
   0.5501847,
   0.3641596,
   0.5258779,
   4.141246,
   0.4047421,
   4.033661,
   0.3003027,
   0.1852868,
   0.1412777,
   0.1172403,
   0.116641};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_duong_Z_pt_fx1017,Graph_from_VbbHcc_duong_Z_pt_fy1017,Graph_from_VbbHcc_duong_Z_pt_fex1017,Graph_from_VbbHcc_duong_Z_pt_fey1017);
   gre->SetName("Graph_from_VbbHcc_duong_Z_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_Z_pt1017 = new TH1F("Graph_Graph_from_VbbHcc_duong_Z_pt1017","",100,0,2200);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->SetMinimum(0.07398935);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->SetMaximum(8807449);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_Z_pt1017);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_Z_pt","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_pt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_Z_pt","MC unc. (stat.)","fl");

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
   Z_pt_VbbHcc_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__18 = new TH1D("data_mc_ratio__18","",40,0,2000);
   data_mc_ratio__18->SetBinContent(1,0.2053099);
   data_mc_ratio__18->SetBinContent(2,0.2542518);
   data_mc_ratio__18->SetBinContent(3,0.5807462);
   data_mc_ratio__18->SetBinContent(4,3.159533);
   data_mc_ratio__18->SetBinContent(5,8.519648);
   data_mc_ratio__18->SetBinContent(6,12.71336);
   data_mc_ratio__18->SetBinContent(7,18.39333);
   data_mc_ratio__18->SetBinContent(8,22.00638);
   data_mc_ratio__18->SetBinContent(9,23.0682);
   data_mc_ratio__18->SetBinContent(10,22.59751);
   data_mc_ratio__18->SetBinContent(11,21.52123);
   data_mc_ratio__18->SetBinContent(12,20.49781);
   data_mc_ratio__18->SetBinContent(13,19.18274);
   data_mc_ratio__18->SetBinContent(14,18.38307);
   data_mc_ratio__18->SetBinContent(15,17.8268);
   data_mc_ratio__18->SetBinContent(16,18.53263);
   data_mc_ratio__18->SetBinContent(17,16.09569);
   data_mc_ratio__18->SetBinContent(18,15.37296);
   data_mc_ratio__18->SetBinContent(19,13.93785);
   data_mc_ratio__18->SetBinContent(20,16.40697);
   data_mc_ratio__18->SetBinContent(21,15.38054);
   data_mc_ratio__18->SetBinContent(22,16.83913);
   data_mc_ratio__18->SetBinContent(23,12.24853);
   data_mc_ratio__18->SetBinContent(24,14.30818);
   data_mc_ratio__18->SetBinContent(25,8.711148);
   data_mc_ratio__18->SetBinContent(26,13.3358);
   data_mc_ratio__18->SetBinContent(27,14.72977);
   data_mc_ratio__18->SetBinContent(28,16.38431);
   data_mc_ratio__18->SetBinContent(29,15.68209);
   data_mc_ratio__18->SetBinContent(30,15.63366);
   data_mc_ratio__18->SetBinContent(31,20.70245);
   data_mc_ratio__18->SetBinContent(32,13.76852);
   data_mc_ratio__18->SetBinContent(33,4.970878);
   data_mc_ratio__18->SetBinContent(34,14.15698);
   data_mc_ratio__18->SetBinContent(35,4.354603);
   data_mc_ratio__18->SetBinContent(36,18.24147);
   data_mc_ratio__18->SetBinContent(37,14.79412);
   data_mc_ratio__18->SetBinContent(38,24.92444);
   data_mc_ratio__18->SetBinContent(39,5.012745);
   data_mc_ratio__18->SetBinContent(40,5.028882);
   data_mc_ratio__18->SetBinContent(41,9.809619);
   data_mc_ratio__18->SetBinError(1,0.0002236819);
   data_mc_ratio__18->SetBinError(2,0.0001792925);
   data_mc_ratio__18->SetBinError(3,0.0004118669);
   data_mc_ratio__18->SetBinError(4,0.00277308);
   data_mc_ratio__18->SetBinError(5,0.009791522);
   data_mc_ratio__18->SetBinError(6,0.01832255);
   data_mc_ratio__18->SetBinError(7,0.03221225);
   data_mc_ratio__18->SetBinError(8,0.04788886);
   data_mc_ratio__18->SetBinError(9,0.06458944);
   data_mc_ratio__18->SetBinError(10,0.08139349);
   data_mc_ratio__18->SetBinError(11,0.09931231);
   data_mc_ratio__18->SetBinError(12,0.1190326);
   data_mc_ratio__18->SetBinError(13,0.137508);
   data_mc_ratio__18->SetBinError(14,0.1629631);
   data_mc_ratio__18->SetBinError(15,0.1923655);
   data_mc_ratio__18->SetBinError(16,0.2438504);
   data_mc_ratio__18->SetBinError(17,0.2537982);
   data_mc_ratio__18->SetBinError(18,0.2892334);
   data_mc_ratio__18->SetBinError(19,0.3075358);
   data_mc_ratio__18->SetBinError(20,0.427201);
   data_mc_ratio__18->SetBinError(21,0.4938393);
   data_mc_ratio__18->SetBinError(22,0.6219675);
   data_mc_ratio__18->SetBinError(23,0.5194533);
   data_mc_ratio__18->SetBinError(24,0.7092301);
   data_mc_ratio__18->SetBinError(25,0.5080445);
   data_mc_ratio__18->SetBinError(26,0.8537369);
   data_mc_ratio__18->SetBinError(27,1.139824);
   data_mc_ratio__18->SetBinError(28,1.489483);
   data_mc_ratio__18->SetBinError(29,1.671716);
   data_mc_ratio__18->SetBinError(30,2.07073);
   data_mc_ratio__18->SetBinError(31,3.273344);
   data_mc_ratio__18->SetBinError(32,2.472898);
   data_mc_ratio__18->SetBinError(33,0.9230688);
   data_mc_ratio__18->SetBinError(34,3.165596);
   data_mc_ratio__18->SetBinError(35,0.9737188);
   data_mc_ratio__18->SetBinError(36,5.059274);
   data_mc_ratio__18->SetBinError(37,5.23051);
   data_mc_ratio__18->SetBinError(38,9.420553);
   data_mc_ratio__18->SetBinError(39,5.012745);
   data_mc_ratio__18->SetBinError(40,5.028882);
   data_mc_ratio__18->SetBinError(41,4.365346);
   data_mc_ratio__18->SetMinimum(0.4);
   data_mc_ratio__18->SetMaximum(1.6);
   data_mc_ratio__18->SetEntries(499.3622);
   data_mc_ratio__18->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__18->SetLineColor(ci);
   data_mc_ratio__18->SetLineWidth(2);
   data_mc_ratio__18->SetMarkerStyle(20);
   data_mc_ratio__18->SetMarkerSize(1.2);
   data_mc_ratio__18->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__18->GetXaxis()->SetRange(7,30);
   data_mc_ratio__18->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__18->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__18->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__18->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__18->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__18->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__18->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__18->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__18->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__18->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__18->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__18->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__18->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__18->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1018[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1018[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1018[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1018[40] = {
   0.01706581,
   0.01231919,
   0.01798231,
   0.03861858,
   0.02525774,
   0.03582666,
   0.005236691,
   0.007487832,
   0.00963308,
   0.01214957,
   0.01543699,
   0.01903644,
   0.02502024,
   0.03096612,
   0.03784082,
   0.03501773,
   0.05808884,
   0.07546838,
   0.08475702,
   0.07997512,
   0.09411646,
   0.1088647,
   0.1840571,
   0.1522312,
   0.2270619,
   0.2014379,
   0.252152,
   0.1220541,
   0.1354031,
   0.1509018,
   0.1884749,
   0.2335664,
   0.7098492,
   0.2864962,
   0.8782495,
   0.4213818,
   0.3426443,
   0.5030381,
   0.5876956,
   0.5865736};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1018,Graph_from_mc_statistical_error_fy1018,Graph_from_mc_statistical_error_fex1018,Graph_from_mc_statistical_error_fey1018);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1018 = new TH1F("Graph_Graph_from_mc_statistical_error1018","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1018->SetMinimum(0.1095754);
   Graph_Graph_from_mc_statistical_error1018->SetMaximum(2.053899);
   Graph_Graph_from_mc_statistical_error1018->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1018->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1018);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   Z_pt_VbbHcc_16->cd();
   Z_pt_VbbHcc_16->Modified();
   Z_pt_VbbHcc_16->cd();
   Z_pt_VbbHcc_16->SetSelected(Z_pt_VbbHcc_16);
}
