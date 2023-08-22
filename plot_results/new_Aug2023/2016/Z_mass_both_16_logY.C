void Z_mass_both_16_logY()
{
//=========Macro generated from canvas: Z_mass_both_16/Z_mass_both_16
//=========  (Tue Aug 22 09:17:59 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_16 = new TCanvas("Z_mass_both_16", "Z_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_16->SetHighLightColor(2);
   Z_mass_both_16->Range(0,0,1,1);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetFillStyle(4000);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetFrameFillStyle(1000);
   Z_mass_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.81167,315.7258,10.3882);
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
   st->SetMaximum(3.756299e+08);
   
   TH1F *st_stack_193 = new TH1F("st_stack_193","",40,0,400);
   st_stack_193->SetMinimum(0.001590488);
   st_stack_193->SetMaximum(1.170069e+09);
   st_stack_193->SetDirectory(0);
   st_stack_193->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_193->SetLineColor(ci);
   st_stack_193->GetXaxis()->SetRange(1,30);
   st_stack_193->GetXaxis()->SetLabelFont(42);
   st_stack_193->GetXaxis()->SetLabelSize(0.035);
   st_stack_193->GetXaxis()->SetTitleSize(0.035);
   st_stack_193->GetXaxis()->SetTitleFont(42);
   st_stack_193->GetYaxis()->SetTitle("Events/10.0");
   st_stack_193->GetYaxis()->SetLabelFont(42);
   st_stack_193->GetYaxis()->SetLabelSize(0.05);
   st_stack_193->GetYaxis()->SetTitleSize(0.057);
   st_stack_193->GetYaxis()->SetTitleOffset(1.2);
   st_stack_193->GetYaxis()->SetTitleFont(42);
   st_stack_193->GetZaxis()->SetLabelFont(42);
   st_stack_193->GetZaxis()->SetLabelSize(0.035);
   st_stack_193->GetZaxis()->SetTitleSize(0.035);
   st_stack_193->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_193);
   
   
   TH1D *VbbHcc_both_Z_mass_stack_1 = new TH1D("VbbHcc_both_Z_mass_stack_1","",40,0,400);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(3,5.09788);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(4,1241.602);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(5,4312.035);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(6,5261.65);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(7,6889.583);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(8,6077.908);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(9,5237.148);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(10,4314.88);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(11,3920.901);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(12,4152.526);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(13,2598.063);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(14,4694.399);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(15,3434.213);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(16,1998.598);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(17,2182.65);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(18,3293.326);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(19,1760.001);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(20,2537.629);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(21,1923.872);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(22,1334.743);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(23,2970.13);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(24,2942.828);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(25,1499.33);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(26,3061.708);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(27,1274.277);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(28,1160.483);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(29,1162.972);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(30,1810.621);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(31,2315.07);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(32,1977.675);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(33,684.6128);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(34,2398.841);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(35,940.0095);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(36,1165.122);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(37,603.62);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(38,1556.389);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(39,1153.419);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(40,1547.262);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(41,36745.45);
   VbbHcc_both_Z_mass_stack_1->SetBinError(3,5.09788);
   VbbHcc_both_Z_mass_stack_1->SetBinError(4,467.0607);
   VbbHcc_both_Z_mass_stack_1->SetBinError(5,1178.765);
   VbbHcc_both_Z_mass_stack_1->SetBinError(6,1190.733);
   VbbHcc_both_Z_mass_stack_1->SetBinError(7,1436.126);
   VbbHcc_both_Z_mass_stack_1->SetBinError(8,941.6106);
   VbbHcc_both_Z_mass_stack_1->SetBinError(9,881.8948);
   VbbHcc_both_Z_mass_stack_1->SetBinError(10,1254.538);
   VbbHcc_both_Z_mass_stack_1->SetBinError(11,761.7801);
   VbbHcc_both_Z_mass_stack_1->SetBinError(12,1128.068);
   VbbHcc_both_Z_mass_stack_1->SetBinError(13,508.2118);
   VbbHcc_both_Z_mass_stack_1->SetBinError(14,1265.651);
   VbbHcc_both_Z_mass_stack_1->SetBinError(15,754.6685);
   VbbHcc_both_Z_mass_stack_1->SetBinError(16,428.3033);
   VbbHcc_both_Z_mass_stack_1->SetBinError(17,502.8303);
   VbbHcc_both_Z_mass_stack_1->SetBinError(18,1362.687);
   VbbHcc_both_Z_mass_stack_1->SetBinError(19,429.8321);
   VbbHcc_both_Z_mass_stack_1->SetBinError(20,1002.422);
   VbbHcc_both_Z_mass_stack_1->SetBinError(21,527.3268);
   VbbHcc_both_Z_mass_stack_1->SetBinError(22,387.8204);
   VbbHcc_both_Z_mass_stack_1->SetBinError(23,1247.98);
   VbbHcc_both_Z_mass_stack_1->SetBinError(24,1157.884);
   VbbHcc_both_Z_mass_stack_1->SetBinError(25,458.7416);
   VbbHcc_both_Z_mass_stack_1->SetBinError(26,1249.993);
   VbbHcc_both_Z_mass_stack_1->SetBinError(27,401.5377);
   VbbHcc_both_Z_mass_stack_1->SetBinError(28,375.99);
   VbbHcc_both_Z_mass_stack_1->SetBinError(29,337.7594);
   VbbHcc_both_Z_mass_stack_1->SetBinError(30,1091.975);
   VbbHcc_both_Z_mass_stack_1->SetBinError(31,944.7417);
   VbbHcc_both_Z_mass_stack_1->SetBinError(32,545.2521);
   VbbHcc_both_Z_mass_stack_1->SetBinError(33,240.7338);
   VbbHcc_both_Z_mass_stack_1->SetBinError(34,682.043);
   VbbHcc_both_Z_mass_stack_1->SetBinError(35,351.6238);
   VbbHcc_both_Z_mass_stack_1->SetBinError(36,429.1112);
   VbbHcc_both_Z_mass_stack_1->SetBinError(37,224.737);
   VbbHcc_both_Z_mass_stack_1->SetBinError(38,522.7617);
   VbbHcc_both_Z_mass_stack_1->SetBinError(39,421.2124);
   VbbHcc_both_Z_mass_stack_1->SetBinError(40,493.1937);
   VbbHcc_both_Z_mass_stack_1->SetBinError(41,2571.731);
   VbbHcc_both_Z_mass_stack_1->SetEntries(9183);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_2 = new TH1D("VbbHcc_both_Z_mass_stack_2","",40,0,400);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(3,0.02209795);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(4,1.727845);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(5,5.781251);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(6,8.516327);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(7,11.52893);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(8,15.7099);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(9,17.98413);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(10,17.99878);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(11,17.5821);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(12,20.76062);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(13,17.7542);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(14,14.6621);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(15,15.13831);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(16,13.39529);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(17,15.46135);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(18,12.67661);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(19,14.05762);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(20,11.9235);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(21,11.05996);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(22,8.852047);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(23,8.761002);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(24,13.27836);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(25,7.283741);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(26,11.63214);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(27,7.427392);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(28,8.856319);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(29,7.057305);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(30,8.295886);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(31,5.442959);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(32,6.838541);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(33,6.836356);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(34,5.667952);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(35,6.607356);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(36,5.057592);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(37,5.95264);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(38,6.074273);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(39,5.264751);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(40,3.292487);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(41,191.9776);
   VbbHcc_both_Z_mass_stack_2->SetBinError(3,0.05097748);
   VbbHcc_both_Z_mass_stack_2->SetBinError(4,0.4537919);
   VbbHcc_both_Z_mass_stack_2->SetBinError(5,0.9291444);
   VbbHcc_both_Z_mass_stack_2->SetBinError(6,1.028476);
   VbbHcc_both_Z_mass_stack_2->SetBinError(7,1.146913);
   VbbHcc_both_Z_mass_stack_2->SetBinError(8,1.472852);
   VbbHcc_both_Z_mass_stack_2->SetBinError(9,1.560405);
   VbbHcc_both_Z_mass_stack_2->SetBinError(10,1.582007);
   VbbHcc_both_Z_mass_stack_2->SetBinError(11,1.525965);
   VbbHcc_both_Z_mass_stack_2->SetBinError(12,1.741046);
   VbbHcc_both_Z_mass_stack_2->SetBinError(13,1.628239);
   VbbHcc_both_Z_mass_stack_2->SetBinError(14,1.286259);
   VbbHcc_both_Z_mass_stack_2->SetBinError(15,1.409112);
   VbbHcc_both_Z_mass_stack_2->SetBinError(16,1.406741);
   VbbHcc_both_Z_mass_stack_2->SetBinError(17,1.504073);
   VbbHcc_both_Z_mass_stack_2->SetBinError(18,1.319075);
   VbbHcc_both_Z_mass_stack_2->SetBinError(19,1.401552);
   VbbHcc_both_Z_mass_stack_2->SetBinError(20,1.314573);
   VbbHcc_both_Z_mass_stack_2->SetBinError(21,1.254601);
   VbbHcc_both_Z_mass_stack_2->SetBinError(22,1.078913);
   VbbHcc_both_Z_mass_stack_2->SetBinError(23,1.108958);
   VbbHcc_both_Z_mass_stack_2->SetBinError(24,1.462171);
   VbbHcc_both_Z_mass_stack_2->SetBinError(25,1.010065);
   VbbHcc_both_Z_mass_stack_2->SetBinError(26,1.299864);
   VbbHcc_both_Z_mass_stack_2->SetBinError(27,0.9980707);
   VbbHcc_both_Z_mass_stack_2->SetBinError(28,1.132252);
   VbbHcc_both_Z_mass_stack_2->SetBinError(29,0.9195108);
   VbbHcc_both_Z_mass_stack_2->SetBinError(30,1.111771);
   VbbHcc_both_Z_mass_stack_2->SetBinError(31,0.8196193);
   VbbHcc_both_Z_mass_stack_2->SetBinError(32,1.028607);
   VbbHcc_both_Z_mass_stack_2->SetBinError(33,1.011431);
   VbbHcc_both_Z_mass_stack_2->SetBinError(34,0.9266307);
   VbbHcc_both_Z_mass_stack_2->SetBinError(35,1.015062);
   VbbHcc_both_Z_mass_stack_2->SetBinError(36,0.8214868);
   VbbHcc_both_Z_mass_stack_2->SetBinError(37,0.9221337);
   VbbHcc_both_Z_mass_stack_2->SetBinError(38,0.8949027);
   VbbHcc_both_Z_mass_stack_2->SetBinError(39,0.862149);
   VbbHcc_both_Z_mass_stack_2->SetBinError(40,0.683325);
   VbbHcc_both_Z_mass_stack_2->SetBinError(41,5.376383);
   VbbHcc_both_Z_mass_stack_2->SetEntries(9517);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_3 = new TH1D("VbbHcc_both_Z_mass_stack_3","",40,0,400);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(3,1.631385);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(4,33.34964);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(5,116.5731);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(6,195.5187);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(7,262.4295);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(8,325.1423);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(9,378.878);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(10,411.0069);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(11,417.5686);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(12,430.5752);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(13,419.7852);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(14,395.12);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(15,370.3692);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(16,333.548);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(17,306.4722);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(18,281.1904);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(19,255.8541);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(20,232.8559);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(21,215.3403);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(22,208.8797);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(23,190.4721);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(24,176.8704);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(25,173.9891);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(26,157.8456);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(27,156.7176);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(28,146.5605);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(29,140.1991);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(30,135.6908);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(31,131.8469);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(32,126.0354);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(33,120.9877);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(34,115.4522);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(35,111.6393);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(36,108.9543);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(37,103.9184);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(38,97.45959);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(39,96.38485);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(40,93.78169);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(41,3633.029);
   VbbHcc_both_Z_mass_stack_3->SetBinError(3,0.2936482);
   VbbHcc_both_Z_mass_stack_3->SetBinError(4,1.313593);
   VbbHcc_both_Z_mass_stack_3->SetBinError(5,2.446098);
   VbbHcc_both_Z_mass_stack_3->SetBinError(6,3.1705);
   VbbHcc_both_Z_mass_stack_3->SetBinError(7,3.698851);
   VbbHcc_both_Z_mass_stack_3->SetBinError(8,4.129444);
   VbbHcc_both_Z_mass_stack_3->SetBinError(9,4.472873);
   VbbHcc_both_Z_mass_stack_3->SetBinError(10,4.670752);
   VbbHcc_both_Z_mass_stack_3->SetBinError(11,4.712807);
   VbbHcc_both_Z_mass_stack_3->SetBinError(12,4.797003);
   VbbHcc_both_Z_mass_stack_3->SetBinError(13,4.740112);
   VbbHcc_both_Z_mass_stack_3->SetBinError(14,4.599638);
   VbbHcc_both_Z_mass_stack_3->SetBinError(15,4.468186);
   VbbHcc_both_Z_mass_stack_3->SetBinError(16,4.224819);
   VbbHcc_both_Z_mass_stack_3->SetBinError(17,4.057355);
   VbbHcc_both_Z_mass_stack_3->SetBinError(18,3.866345);
   VbbHcc_both_Z_mass_stack_3->SetBinError(19,3.694866);
   VbbHcc_both_Z_mass_stack_3->SetBinError(20,3.525659);
   VbbHcc_both_Z_mass_stack_3->SetBinError(21,3.372595);
   VbbHcc_both_Z_mass_stack_3->SetBinError(22,3.333519);
   VbbHcc_both_Z_mass_stack_3->SetBinError(23,3.170031);
   VbbHcc_both_Z_mass_stack_3->SetBinError(24,3.060059);
   VbbHcc_both_Z_mass_stack_3->SetBinError(25,3.040202);
   VbbHcc_both_Z_mass_stack_3->SetBinError(26,2.900259);
   VbbHcc_both_Z_mass_stack_3->SetBinError(27,2.889823);
   VbbHcc_both_Z_mass_stack_3->SetBinError(28,2.776034);
   VbbHcc_both_Z_mass_stack_3->SetBinError(29,2.718794);
   VbbHcc_both_Z_mass_stack_3->SetBinError(30,2.687661);
   VbbHcc_both_Z_mass_stack_3->SetBinError(31,2.654463);
   VbbHcc_both_Z_mass_stack_3->SetBinError(32,2.595931);
   VbbHcc_both_Z_mass_stack_3->SetBinError(33,2.54515);
   VbbHcc_both_Z_mass_stack_3->SetBinError(34,2.474155);
   VbbHcc_both_Z_mass_stack_3->SetBinError(35,2.451368);
   VbbHcc_both_Z_mass_stack_3->SetBinError(36,2.413149);
   VbbHcc_both_Z_mass_stack_3->SetBinError(37,2.3481);
   VbbHcc_both_Z_mass_stack_3->SetBinError(38,2.280623);
   VbbHcc_both_Z_mass_stack_3->SetBinError(39,2.266589);
   VbbHcc_both_Z_mass_stack_3->SetBinError(40,2.239863);
   VbbHcc_both_Z_mass_stack_3->SetBinError(41,14.0305);
   VbbHcc_both_Z_mass_stack_3->SetEntries(232621);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_4 = new TH1D("VbbHcc_both_Z_mass_stack_4","",40,0,400);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(3,0.4977504);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(4,5.449511);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(5,10.98793);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(6,23.03457);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(7,49.51242);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(8,62.26345);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(9,102.6488);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(10,119.575);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(11,85.05883);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(12,48.68543);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(13,45.33277);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(14,31.88692);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(15,34.9843);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(16,26.50509);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(17,25.64187);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(18,26.86926);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(19,25.88572);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(20,28.2765);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(21,21.30173);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(22,26.12186);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(23,20.17342);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(24,19.33351);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(25,19.4382);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(26,18.51801);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(27,15.3756);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(28,18.44502);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(29,11.4043);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(30,19.46115);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(31,15.80403);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(32,17.19536);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(33,14.49782);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(34,17.80346);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(35,14.17663);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(36,13.32021);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(37,11.28125);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(38,13.79857);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(39,13.26156);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(40,11.39071);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(41,495.6291);
   VbbHcc_both_Z_mass_stack_4->SetBinError(3,0.2792525);
   VbbHcc_both_Z_mass_stack_4->SetBinError(4,2.078998);
   VbbHcc_both_Z_mass_stack_4->SetBinError(5,1.326302);
   VbbHcc_both_Z_mass_stack_4->SetBinError(6,3.263778);
   VbbHcc_both_Z_mass_stack_4->SetBinError(7,4.962585);
   VbbHcc_both_Z_mass_stack_4->SetBinError(8,4.395778);
   VbbHcc_both_Z_mass_stack_4->SetBinError(9,5.623593);
   VbbHcc_both_Z_mass_stack_4->SetBinError(10,7.074135);
   VbbHcc_both_Z_mass_stack_4->SetBinError(11,6.419585);
   VbbHcc_both_Z_mass_stack_4->SetBinError(12,3.943947);
   VbbHcc_both_Z_mass_stack_4->SetBinError(13,4.913247);
   VbbHcc_both_Z_mass_stack_4->SetBinError(14,2.592639);
   VbbHcc_both_Z_mass_stack_4->SetBinError(15,4.34228);
   VbbHcc_both_Z_mass_stack_4->SetBinError(16,2.47481);
   VbbHcc_both_Z_mass_stack_4->SetBinError(17,2.750053);
   VbbHcc_both_Z_mass_stack_4->SetBinError(18,2.807232);
   VbbHcc_both_Z_mass_stack_4->SetBinError(19,3.464309);
   VbbHcc_both_Z_mass_stack_4->SetBinError(20,4.112463);
   VbbHcc_both_Z_mass_stack_4->SetBinError(21,2.166377);
   VbbHcc_both_Z_mass_stack_4->SetBinError(22,3.529118);
   VbbHcc_both_Z_mass_stack_4->SetBinError(23,2.703935);
   VbbHcc_both_Z_mass_stack_4->SetBinError(24,2.601335);
   VbbHcc_both_Z_mass_stack_4->SetBinError(25,2.863341);
   VbbHcc_both_Z_mass_stack_4->SetBinError(26,2.235432);
   VbbHcc_both_Z_mass_stack_4->SetBinError(27,1.540107);
   VbbHcc_both_Z_mass_stack_4->SetBinError(28,2.716489);
   VbbHcc_both_Z_mass_stack_4->SetBinError(29,1.203597);
   VbbHcc_both_Z_mass_stack_4->SetBinError(30,3.247965);
   VbbHcc_both_Z_mass_stack_4->SetBinError(31,2.091701);
   VbbHcc_both_Z_mass_stack_4->SetBinError(32,2.850595);
   VbbHcc_both_Z_mass_stack_4->SetBinError(33,2.437153);
   VbbHcc_both_Z_mass_stack_4->SetBinError(34,2.941371);
   VbbHcc_both_Z_mass_stack_4->SetBinError(35,2.294571);
   VbbHcc_both_Z_mass_stack_4->SetBinError(36,2.087759);
   VbbHcc_both_Z_mass_stack_4->SetBinError(37,1.857028);
   VbbHcc_both_Z_mass_stack_4->SetBinError(38,2.230975);
   VbbHcc_both_Z_mass_stack_4->SetBinError(39,2.090976);
   VbbHcc_both_Z_mass_stack_4->SetBinError(40,1.841007);
   VbbHcc_both_Z_mass_stack_4->SetBinError(41,13.11192);
   VbbHcc_both_Z_mass_stack_4->SetEntries(15013);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_5 = new TH1D("VbbHcc_both_Z_mass_stack_5","",40,0,400);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(3,0.05242291);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(4,0.8062548);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(5,9.019743);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(6,4.215831);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(7,6.978512);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(8,5.861799);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(9,6.239258);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(10,4.178691);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(11,5.333769);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(12,4.784532);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(13,4.175344);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(14,3.335673);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(15,3.717592);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(16,2.715943);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(17,5.32543);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(18,3.160571);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(19,2.642477);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(20,2.256767);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(21,2.136197);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(22,4.347358);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(23,1.964056);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(24,2.460246);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(25,6.8274);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(26,1.097165);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(27,1.119304);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(28,1.758822);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(29,1.920795);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(30,0.9355937);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(31,1.707337);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(32,1.309844);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(33,3.089435);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(34,1.598166);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(35,1.834563);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(36,0.8133025);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(37,0.4694453);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(38,1.95358);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(39,1.952066);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(40,0.5700165);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(41,49.94421);
   VbbHcc_both_Z_mass_stack_5->SetBinError(3,0.04483641);
   VbbHcc_both_Z_mass_stack_5->SetBinError(4,0.2777538);
   VbbHcc_both_Z_mass_stack_5->SetBinError(5,5.654642);
   VbbHcc_both_Z_mass_stack_5->SetBinError(6,0.949549);
   VbbHcc_both_Z_mass_stack_5->SetBinError(7,1.633616);
   VbbHcc_both_Z_mass_stack_5->SetBinError(8,1.3415);
   VbbHcc_both_Z_mass_stack_5->SetBinError(9,1.522751);
   VbbHcc_both_Z_mass_stack_5->SetBinError(10,0.6267897);
   VbbHcc_both_Z_mass_stack_5->SetBinError(11,1.269894);
   VbbHcc_both_Z_mass_stack_5->SetBinError(12,0.9388682);
   VbbHcc_both_Z_mass_stack_5->SetBinError(13,1.279393);
   VbbHcc_both_Z_mass_stack_5->SetBinError(14,0.9229723);
   VbbHcc_both_Z_mass_stack_5->SetBinError(15,0.8976733);
   VbbHcc_both_Z_mass_stack_5->SetBinError(16,0.5641175);
   VbbHcc_both_Z_mass_stack_5->SetBinError(17,1.528601);
   VbbHcc_both_Z_mass_stack_5->SetBinError(18,0.9513099);
   VbbHcc_both_Z_mass_stack_5->SetBinError(19,0.8652068);
   VbbHcc_both_Z_mass_stack_5->SetBinError(20,0.4757788);
   VbbHcc_both_Z_mass_stack_5->SetBinError(21,0.4055706);
   VbbHcc_both_Z_mass_stack_5->SetBinError(22,1.378212);
   VbbHcc_both_Z_mass_stack_5->SetBinError(23,0.8753201);
   VbbHcc_both_Z_mass_stack_5->SetBinError(24,0.9247803);
   VbbHcc_both_Z_mass_stack_5->SetBinError(25,5.226201);
   VbbHcc_both_Z_mass_stack_5->SetBinError(26,0.288383);
   VbbHcc_both_Z_mass_stack_5->SetBinError(27,0.2851431);
   VbbHcc_both_Z_mass_stack_5->SetBinError(28,0.9259538);
   VbbHcc_both_Z_mass_stack_5->SetBinError(29,0.768661);
   VbbHcc_both_Z_mass_stack_5->SetBinError(30,0.2761987);
   VbbHcc_both_Z_mass_stack_5->SetBinError(31,0.4184626);
   VbbHcc_both_Z_mass_stack_5->SetBinError(32,0.3158049);
   VbbHcc_both_Z_mass_stack_5->SetBinError(33,1.166063);
   VbbHcc_both_Z_mass_stack_5->SetBinError(34,0.4432065);
   VbbHcc_both_Z_mass_stack_5->SetBinError(35,0.8892903);
   VbbHcc_both_Z_mass_stack_5->SetBinError(36,0.2526219);
   VbbHcc_both_Z_mass_stack_5->SetBinError(37,0.1687602);
   VbbHcc_both_Z_mass_stack_5->SetBinError(38,0.9042649);
   VbbHcc_both_Z_mass_stack_5->SetBinError(39,0.9055859);
   VbbHcc_both_Z_mass_stack_5->SetBinError(40,0.2299298);
   VbbHcc_both_Z_mass_stack_5->SetBinError(41,3.075156);
   VbbHcc_both_Z_mass_stack_5->SetEntries(3486);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_6 = new TH1D("VbbHcc_both_Z_mass_stack_6","",40,0,400);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(7,0.07803031);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(14,0.1142782);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(20,0.1234178);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(21,0.1195687);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(24,0.1173155);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(27,0.1152503);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(41,0.5171173);
   VbbHcc_both_Z_mass_stack_6->SetBinError(7,0.07803031);
   VbbHcc_both_Z_mass_stack_6->SetBinError(14,0.1142782);
   VbbHcc_both_Z_mass_stack_6->SetBinError(20,0.1234178);
   VbbHcc_both_Z_mass_stack_6->SetBinError(21,0.1195687);
   VbbHcc_both_Z_mass_stack_6->SetBinError(24,0.1173155);
   VbbHcc_both_Z_mass_stack_6->SetBinError(27,0.1152503);
   VbbHcc_both_Z_mass_stack_6->SetBinError(41,0.2586408);
   VbbHcc_both_Z_mass_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_7 = new TH1D("VbbHcc_both_Z_mass_stack_7","",40,0,400);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(7,0.172414);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(8,0.09837659);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(9,0.341258);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(10,0.6484443);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(12,0.0975785);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(13,0.1669327);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(14,0.2787696);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(15,0.182332);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(17,0.07873842);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(18,0.1992136);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(19,0.08729333);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(20,0.08117422);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(26,0.09774741);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(27,0.0860683);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(28,0.1830295);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(31,0.08558222);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(32,0.09078265);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(38,0.09227263);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(41,1.298022);
   VbbHcc_both_Z_mass_stack_7->SetBinError(7,0.1225711);
   VbbHcc_both_Z_mass_stack_7->SetBinError(8,0.09837659);
   VbbHcc_both_Z_mass_stack_7->SetBinError(9,0.1715005);
   VbbHcc_both_Z_mass_stack_7->SetBinError(10,0.2457804);
   VbbHcc_both_Z_mass_stack_7->SetBinError(12,0.0975785);
   VbbHcc_both_Z_mass_stack_7->SetBinError(13,0.1181499);
   VbbHcc_both_Z_mass_stack_7->SetBinError(14,0.1619557);
   VbbHcc_both_Z_mass_stack_7->SetBinError(15,0.1289944);
   VbbHcc_both_Z_mass_stack_7->SetBinError(17,0.07873842);
   VbbHcc_both_Z_mass_stack_7->SetBinError(18,0.1414592);
   VbbHcc_both_Z_mass_stack_7->SetBinError(19,0.08729333);
   VbbHcc_both_Z_mass_stack_7->SetBinError(20,0.08117422);
   VbbHcc_both_Z_mass_stack_7->SetBinError(26,0.09774741);
   VbbHcc_both_Z_mass_stack_7->SetBinError(27,0.0860683);
   VbbHcc_both_Z_mass_stack_7->SetBinError(28,0.1294237);
   VbbHcc_both_Z_mass_stack_7->SetBinError(31,0.08558222);
   VbbHcc_both_Z_mass_stack_7->SetBinError(32,0.09078265);
   VbbHcc_both_Z_mass_stack_7->SetBinError(38,0.09227263);
   VbbHcc_both_Z_mass_stack_7->SetBinError(41,0.3404444);
   VbbHcc_both_Z_mass_stack_7->SetEntries(49);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_8 = new TH1D("VbbHcc_both_Z_mass_stack_8","",40,0,400);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(7,0.8214022);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(8,1.444813);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(9,2.430667);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(10,5.065553);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(11,2.113126);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(12,0.2071046);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(13,0.9892752);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(14,0.3886345);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(15,0.9214496);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(16,0.3565177);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(17,0.9245441);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(18,0.2197321);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(19,0.3957982);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(20,0.2177457);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(21,0.2793563);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(22,0.4003761);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(23,0.1882129);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(24,0.4039977);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(25,0.3755286);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(26,0.2007208);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(28,0.6508561);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(29,0.2289552);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(30,0.8252321);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(31,0.4085302);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(32,0.2072094);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(33,0.2935281);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(34,0.190802);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(35,0.1946352);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(36,0.7599849);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(37,0.1954494);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(40,0.200394);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(41,9.751174);
   VbbHcc_both_Z_mass_stack_8->SetBinError(7,0.4131843);
   VbbHcc_both_Z_mass_stack_8->SetBinError(8,0.5477495);
   VbbHcc_both_Z_mass_stack_8->SetBinError(9,0.7047666);
   VbbHcc_both_Z_mass_stack_8->SetBinError(10,1.020937);
   VbbHcc_both_Z_mass_stack_8->SetBinError(11,0.6530728);
   VbbHcc_both_Z_mass_stack_8->SetBinError(12,0.2071046);
   VbbHcc_both_Z_mass_stack_8->SetBinError(13,0.4427331);
   VbbHcc_both_Z_mass_stack_8->SetBinError(14,0.2748722);
   VbbHcc_both_Z_mass_stack_8->SetBinError(15,0.4687296);
   VbbHcc_both_Z_mass_stack_8->SetBinError(16,0.2573212);
   VbbHcc_both_Z_mass_stack_8->SetBinError(17,0.4206533);
   VbbHcc_both_Z_mass_stack_8->SetBinError(18,0.2197321);
   VbbHcc_both_Z_mass_stack_8->SetBinError(19,0.2820395);
   VbbHcc_both_Z_mass_stack_8->SetBinError(20,0.2177457);
   VbbHcc_both_Z_mass_stack_8->SetBinError(21,0.2793563);
   VbbHcc_both_Z_mass_stack_8->SetBinError(22,0.2836037);
   VbbHcc_both_Z_mass_stack_8->SetBinError(23,0.1882129);
   VbbHcc_both_Z_mass_stack_8->SetBinError(24,0.2864435);
   VbbHcc_both_Z_mass_stack_8->SetBinError(25,0.2670868);
   VbbHcc_both_Z_mass_stack_8->SetBinError(26,0.2007208);
   VbbHcc_both_Z_mass_stack_8->SetBinError(28,0.3770148);
   VbbHcc_both_Z_mass_stack_8->SetBinError(29,0.2289552);
   VbbHcc_both_Z_mass_stack_8->SetBinError(30,0.4142146);
   VbbHcc_both_Z_mass_stack_8->SetBinError(31,0.2929713);
   VbbHcc_both_Z_mass_stack_8->SetBinError(32,0.2072094);
   VbbHcc_both_Z_mass_stack_8->SetBinError(33,0.2282554);
   VbbHcc_both_Z_mass_stack_8->SetBinError(34,0.190802);
   VbbHcc_both_Z_mass_stack_8->SetBinError(35,0.1946352);
   VbbHcc_both_Z_mass_stack_8->SetBinError(36,0.3863685);
   VbbHcc_both_Z_mass_stack_8->SetBinError(37,0.1954494);
   VbbHcc_both_Z_mass_stack_8->SetBinError(40,0.200394);
   VbbHcc_both_Z_mass_stack_8->SetBinError(41,1.45542);
   VbbHcc_both_Z_mass_stack_8->SetEntries(158);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_9 = new TH1D("VbbHcc_both_Z_mass_stack_9","",40,0,400);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(4,0.02249097);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(5,0.1026396);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(6,0.2479439);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(7,0.443044);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(8,1.054467);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(9,2.214969);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(10,2.587577);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(11,1.854757);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(12,1.553343);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(13,1.547219);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(14,1.149021);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(15,0.7373384);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(16,0.4408176);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(17,0.4035947);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(18,0.3009714);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(19,0.3049893);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(20,0.2810054);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(21,0.2423837);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(22,0.2481985);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(23,0.2628509);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(24,0.2548024);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(25,0.244879);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(26,0.2706819);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(27,0.2722942);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(28,0.2589853);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(29,0.2402452);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(30,0.2670818);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(31,0.2523543);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(32,0.2421533);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(33,0.2566612);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(34,0.2529666);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(35,0.274507);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(36,0.2628946);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(37,0.2543123);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(38,0.2548391);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(39,0.2099707);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(40,0.2241877);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(41,8.990112);
   VbbHcc_both_Z_mass_stack_9->SetBinError(4,0.005053128);
   VbbHcc_both_Z_mass_stack_9->SetBinError(5,0.01064537);
   VbbHcc_both_Z_mass_stack_9->SetBinError(6,0.01631387);
   VbbHcc_both_Z_mass_stack_9->SetBinError(7,0.02193552);
   VbbHcc_both_Z_mass_stack_9->SetBinError(8,0.03403808);
   VbbHcc_both_Z_mass_stack_9->SetBinError(9,0.04934783);
   VbbHcc_both_Z_mass_stack_9->SetBinError(10,0.05375171);
   VbbHcc_both_Z_mass_stack_9->SetBinError(11,0.04515085);
   VbbHcc_both_Z_mass_stack_9->SetBinError(12,0.04139899);
   VbbHcc_both_Z_mass_stack_9->SetBinError(13,0.04144188);
   VbbHcc_both_Z_mass_stack_9->SetBinError(14,0.03554805);
   VbbHcc_both_Z_mass_stack_9->SetBinError(15,0.02854941);
   VbbHcc_both_Z_mass_stack_9->SetBinError(16,0.02177283);
   VbbHcc_both_Z_mass_stack_9->SetBinError(17,0.02069962);
   VbbHcc_both_Z_mass_stack_9->SetBinError(18,0.01782125);
   VbbHcc_both_Z_mass_stack_9->SetBinError(19,0.01800847);
   VbbHcc_both_Z_mass_stack_9->SetBinError(20,0.01725997);
   VbbHcc_both_Z_mass_stack_9->SetBinError(21,0.01628697);
   VbbHcc_both_Z_mass_stack_9->SetBinError(22,0.0161813);
   VbbHcc_both_Z_mass_stack_9->SetBinError(23,0.01668891);
   VbbHcc_both_Z_mass_stack_9->SetBinError(24,0.01670164);
   VbbHcc_both_Z_mass_stack_9->SetBinError(25,0.01626296);
   VbbHcc_both_Z_mass_stack_9->SetBinError(26,0.01716647);
   VbbHcc_both_Z_mass_stack_9->SetBinError(27,0.01709765);
   VbbHcc_both_Z_mass_stack_9->SetBinError(28,0.0165193);
   VbbHcc_both_Z_mass_stack_9->SetBinError(29,0.01598848);
   VbbHcc_both_Z_mass_stack_9->SetBinError(30,0.01683197);
   VbbHcc_both_Z_mass_stack_9->SetBinError(31,0.01671349);
   VbbHcc_both_Z_mass_stack_9->SetBinError(32,0.0163847);
   VbbHcc_both_Z_mass_stack_9->SetBinError(33,0.01665814);
   VbbHcc_both_Z_mass_stack_9->SetBinError(34,0.01655601);
   VbbHcc_both_Z_mass_stack_9->SetBinError(35,0.01748922);
   VbbHcc_both_Z_mass_stack_9->SetBinError(36,0.01714287);
   VbbHcc_both_Z_mass_stack_9->SetBinError(37,0.0165205);
   VbbHcc_both_Z_mass_stack_9->SetBinError(38,0.016737);
   VbbHcc_both_Z_mass_stack_9->SetBinError(39,0.01529422);
   VbbHcc_both_Z_mass_stack_9->SetBinError(40,0.01562137);
   VbbHcc_both_Z_mass_stack_9->SetBinError(41,0.1001764);
   VbbHcc_both_Z_mass_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_10 = new TH1D("VbbHcc_both_Z_mass_stack_10","",40,0,400);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(3,0.0003521035);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(4,0.00962563);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(5,0.03606069);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(6,0.08824062);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(7,0.1937894);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(8,0.4655711);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(9,0.9614378);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(10,1.14993);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(11,0.8672273);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(12,0.7777822);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(13,0.7184098);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(14,0.5591749);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(15,0.3829973);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(16,0.255598);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(17,0.2264527);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(18,0.1834183);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(19,0.1994487);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(20,0.1689094);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(21,0.1565587);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(22,0.1646427);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(23,0.1561041);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(24,0.1461966);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(25,0.1550256);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(26,0.1512229);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(27,0.1397376);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(28,0.1365379);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(29,0.1411454);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(30,0.1340298);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(31,0.1268804);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(32,0.1189886);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(33,0.1244554);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(34,0.1139175);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(35,0.1180687);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(36,0.1130285);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(37,0.1134857);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(38,0.1063946);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(39,0.1062169);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(40,0.1070048);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(41,3.921231);
   VbbHcc_both_Z_mass_stack_10->SetBinError(3,0.0003521035);
   VbbHcc_both_Z_mass_stack_10->SetBinError(4,0.001828306);
   VbbHcc_both_Z_mass_stack_10->SetBinError(5,0.003443888);
   VbbHcc_both_Z_mass_stack_10->SetBinError(6,0.005428094);
   VbbHcc_both_Z_mass_stack_10->SetBinError(7,0.008033357);
   VbbHcc_both_Z_mass_stack_10->SetBinError(8,0.01241763);
   VbbHcc_both_Z_mass_stack_10->SetBinError(9,0.01791026);
   VbbHcc_both_Z_mass_stack_10->SetBinError(10,0.01962241);
   VbbHcc_both_Z_mass_stack_10->SetBinError(11,0.01702971);
   VbbHcc_both_Z_mass_stack_10->SetBinError(12,0.01615906);
   VbbHcc_both_Z_mass_stack_10->SetBinError(13,0.0156078);
   VbbHcc_both_Z_mass_stack_10->SetBinError(14,0.01375025);
   VbbHcc_both_Z_mass_stack_10->SetBinError(15,0.01134508);
   VbbHcc_both_Z_mass_stack_10->SetBinError(16,0.009239249);
   VbbHcc_both_Z_mass_stack_10->SetBinError(17,0.008737455);
   VbbHcc_both_Z_mass_stack_10->SetBinError(18,0.007836613);
   VbbHcc_both_Z_mass_stack_10->SetBinError(19,0.008176916);
   VbbHcc_both_Z_mass_stack_10->SetBinError(20,0.007525674);
   VbbHcc_both_Z_mass_stack_10->SetBinError(21,0.007255407);
   VbbHcc_both_Z_mass_stack_10->SetBinError(22,0.007401173);
   VbbHcc_both_Z_mass_stack_10->SetBinError(23,0.007241382);
   VbbHcc_both_Z_mass_stack_10->SetBinError(24,0.006958523);
   VbbHcc_both_Z_mass_stack_10->SetBinError(25,0.00721113);
   VbbHcc_both_Z_mass_stack_10->SetBinError(26,0.007104383);
   VbbHcc_both_Z_mass_stack_10->SetBinError(27,0.00682935);
   VbbHcc_both_Z_mass_stack_10->SetBinError(28,0.006711283);
   VbbHcc_both_Z_mass_stack_10->SetBinError(29,0.006862191);
   VbbHcc_both_Z_mass_stack_10->SetBinError(30,0.006697532);
   VbbHcc_both_Z_mass_stack_10->SetBinError(31,0.0064948);
   VbbHcc_both_Z_mass_stack_10->SetBinError(32,0.006309225);
   VbbHcc_both_Z_mass_stack_10->SetBinError(33,0.006412295);
   VbbHcc_both_Z_mass_stack_10->SetBinError(34,0.006143836);
   VbbHcc_both_Z_mass_stack_10->SetBinError(35,0.006279386);
   VbbHcc_both_Z_mass_stack_10->SetBinError(36,0.006153942);
   VbbHcc_both_Z_mass_stack_10->SetBinError(37,0.006145356);
   VbbHcc_both_Z_mass_stack_10->SetBinError(38,0.005939047);
   VbbHcc_both_Z_mass_stack_10->SetBinError(39,0.005931093);
   VbbHcc_both_Z_mass_stack_10->SetBinError(40,0.005979896);
   VbbHcc_both_Z_mass_stack_10->SetBinError(41,0.03643023);
   VbbHcc_both_Z_mass_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.002186347);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(7,0.002114099);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.02217761);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.003880901);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.002243723);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.002186526);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.004191795);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.004208734);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.003126194);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.004374936);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(19,0.00193606);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(29,0.001737613);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(33,0.002007648);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.02122496);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.002186347);
   VbbHcc_both_Z_mass_stack_11->SetBinError(7,0.002114099);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.007034893);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.002754567);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.002243723);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.002186526);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.002968385);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.002976191);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.003126194);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.003100301);
   VbbHcc_both_Z_mass_stack_11->SetBinError(19,0.00193606);
   VbbHcc_both_Z_mass_stack_11->SetBinError(29,0.001737613);
   VbbHcc_both_Z_mass_stack_11->SetBinError(33,0.002007648);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.006757426);
   VbbHcc_both_Z_mass_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_12 = new TH1D("VbbHcc_both_Z_mass_stack_12","",40,0,400);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(5,0.0005693126);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(6,0.0003074385);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(7,0.0005581296);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(8,0.001588353);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(9,0.00660034);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(10,0.005927707);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(11,0.002522162);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(12,0.00172683);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(13,0.0002572755);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(14,0.0002562191);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(15,0.0008022648);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(16,0.0002923875);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(17,0.000320315);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(18,0.0003382053);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(19,0.0009025196);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(20,0.0002864526);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(21,0.0003136188);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(22,0.0002858757);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(23,0.0002893287);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(27,0.0002838662);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(28,0.0002855959);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(29,0.0002594203);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(30,0.001102905);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(31,0.000541312);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(32,0.0002512416);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(33,0.00029471);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(34,0.0002981386);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(36,0.0002980453);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(38,0.0002889423);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(39,0.0002953421);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(40,0.0002958412);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(41,0.009913291);
   VbbHcc_both_Z_mass_stack_12->SetBinError(5,0.0004027168);
   VbbHcc_both_Z_mass_stack_12->SetBinError(6,0.0003074385);
   VbbHcc_both_Z_mass_stack_12->SetBinError(7,0.0003993053);
   VbbHcc_both_Z_mass_stack_12->SetBinError(8,0.0006601168);
   VbbHcc_both_Z_mass_stack_12->SetBinError(9,0.001379113);
   VbbHcc_both_Z_mass_stack_12->SetBinError(10,0.00127955);
   VbbHcc_both_Z_mass_stack_12->SetBinError(11,0.0008445297);
   VbbHcc_both_Z_mass_stack_12->SetBinError(12,0.0007057501);
   VbbHcc_both_Z_mass_stack_12->SetBinError(13,0.0002572755);
   VbbHcc_both_Z_mass_stack_12->SetBinError(14,0.0002562191);
   VbbHcc_both_Z_mass_stack_12->SetBinError(15,0.0004656225);
   VbbHcc_both_Z_mass_stack_12->SetBinError(16,0.0002923875);
   VbbHcc_both_Z_mass_stack_12->SetBinError(17,0.000320315);
   VbbHcc_both_Z_mass_stack_12->SetBinError(18,0.0003382053);
   VbbHcc_both_Z_mass_stack_12->SetBinError(19,0.0005219155);
   VbbHcc_both_Z_mass_stack_12->SetBinError(20,0.0002864526);
   VbbHcc_both_Z_mass_stack_12->SetBinError(21,0.0003136188);
   VbbHcc_both_Z_mass_stack_12->SetBinError(22,0.0002858757);
   VbbHcc_both_Z_mass_stack_12->SetBinError(23,0.0002893287);
   VbbHcc_both_Z_mass_stack_12->SetBinError(27,0.0002838662);
   VbbHcc_both_Z_mass_stack_12->SetBinError(28,0.0002855959);
   VbbHcc_both_Z_mass_stack_12->SetBinError(29,0.0002594203);
   VbbHcc_both_Z_mass_stack_12->SetBinError(30,0.0005525313);
   VbbHcc_both_Z_mass_stack_12->SetBinError(31,0.0003828537);
   VbbHcc_both_Z_mass_stack_12->SetBinError(32,0.0002512416);
   VbbHcc_both_Z_mass_stack_12->SetBinError(33,0.00029471);
   VbbHcc_both_Z_mass_stack_12->SetBinError(34,0.0002981386);
   VbbHcc_both_Z_mass_stack_12->SetBinError(36,0.0002980453);
   VbbHcc_both_Z_mass_stack_12->SetBinError(38,0.0002889423);
   VbbHcc_both_Z_mass_stack_12->SetBinError(39,0.0002953421);
   VbbHcc_both_Z_mass_stack_12->SetBinError(40,0.0002958412);
   VbbHcc_both_Z_mass_stack_12->SetBinError(41,0.001685997);
   VbbHcc_both_Z_mass_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_mass__529 = new TH1D("VbbHcc_both_Z_mass__529","",40,0,400);
   VbbHcc_both_Z_mass__529->SetBinContent(3,20);
   VbbHcc_both_Z_mass__529->SetBinContent(4,529);
   VbbHcc_both_Z_mass__529->SetBinContent(5,1959);
   VbbHcc_both_Z_mass__529->SetBinContent(6,3078);
   VbbHcc_both_Z_mass__529->SetBinContent(7,3679);
   VbbHcc_both_Z_mass__529->SetBinContent(15,2572);
   VbbHcc_both_Z_mass__529->SetBinContent(16,2336);
   VbbHcc_both_Z_mass__529->SetBinContent(17,2272);
   VbbHcc_both_Z_mass__529->SetBinContent(18,2060);
   VbbHcc_both_Z_mass__529->SetBinContent(19,1969);
   VbbHcc_both_Z_mass__529->SetBinContent(20,1808);
   VbbHcc_both_Z_mass__529->SetBinContent(21,1714);
   VbbHcc_both_Z_mass__529->SetBinContent(22,1681);
   VbbHcc_both_Z_mass__529->SetBinContent(23,1521);
   VbbHcc_both_Z_mass__529->SetBinContent(24,1408);
   VbbHcc_both_Z_mass__529->SetBinContent(25,1334);
   VbbHcc_both_Z_mass__529->SetBinContent(26,1359);
   VbbHcc_both_Z_mass__529->SetBinContent(27,1322);
   VbbHcc_both_Z_mass__529->SetBinContent(28,1144);
   VbbHcc_both_Z_mass__529->SetBinContent(29,1150);
   VbbHcc_both_Z_mass__529->SetBinContent(30,1121);
   VbbHcc_both_Z_mass__529->SetBinContent(31,1044);
   VbbHcc_both_Z_mass__529->SetBinContent(32,968);
   VbbHcc_both_Z_mass__529->SetBinContent(33,977);
   VbbHcc_both_Z_mass__529->SetBinContent(34,997);
   VbbHcc_both_Z_mass__529->SetBinContent(35,932);
   VbbHcc_both_Z_mass__529->SetBinContent(36,894);
   VbbHcc_both_Z_mass__529->SetBinContent(37,902);
   VbbHcc_both_Z_mass__529->SetBinContent(38,869);
   VbbHcc_both_Z_mass__529->SetBinContent(39,817);
   VbbHcc_both_Z_mass__529->SetBinContent(40,775);
   VbbHcc_both_Z_mass__529->SetBinContent(41,30714);
   VbbHcc_both_Z_mass__529->SetEntries(99530);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass__529->SetLineColor(ci);
   VbbHcc_both_Z_mass__529->SetLineWidth(2);
   VbbHcc_both_Z_mass__529->SetMarkerStyle(20);
   VbbHcc_both_Z_mass__529->SetMarkerSize(1.2);
   VbbHcc_both_Z_mass__529->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass__529->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__529->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__529->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__529->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__529->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__529->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__529->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__529->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass__529->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__529->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__529->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__529->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__529->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__529->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_mass_fx1385[40] = {
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
   Double_t Graph_from_VbbHcc_both_Z_mass_fy1385[40] = {
   0,
   0,
   7.301888,
   1282.967,
   4454.536,
   5493.274,
   7221.744,
   6489.951,
   5748.875,
   4877.101,
   4451.284,
   4659.971,
   3088.537,
   5141.893,
   3860.651,
   2375.819,
   2537.184,
   3618.131,
   2059.432,
   2813.815,
   2174.509,
   1583.757,
   3192.108,
   3155.692,
   1707.644,
   3251.521,
   1455.531,
   1337.334,
   1324.166,
   1976.232,
   2470.745,
   2129.714,
   830.7011,
   2539.92,
   1074.855,
   1294.403,
   725.805,
   1676.128,
   1270.599,
   1656.829};
   Double_t Graph_from_VbbHcc_both_Z_mass_fex1385[40] = {
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
   Double_t Graph_from_VbbHcc_both_Z_mass_fey1385[40] = {
   0,
   0,
   5.114411,
   467.0674,
   1178.782,
   1190.742,
   1436.141,
   941.6322,
   881.9271,
   1254.569,
   761.8246,
   1128.087,
   508.2621,
   1265.663,
   754.6963,
   428.3341,
   502.859,
   1362.697,
   429.8652,
   1002.438,
   527.3438,
   387.8549,
   1247.987,
   1157.892,
   458.7916,
   1249.999,
   401.5524,
   376.0131,
   337.7747,
   1091.984,
   944.7483,
   545.2669,
   240.7646,
   682.0546,
   351.6425,
   429.1241,
   224.759,
   522.773,
   421.2255,
   493.2028};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_both_Z_mass_fx1385,Graph_from_VbbHcc_both_Z_mass_fy1385,Graph_from_VbbHcc_both_Z_mass_fex1385,Graph_from_VbbHcc_both_Z_mass_fey1385);
   gre->SetName("Graph_from_VbbHcc_both_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_mass1385 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_mass1385","",100,0,440);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->SetMinimum(9.523673);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->SetMaximum(9523.673);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_mass1385->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_mass1385);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_mass","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__530 = new TH1D("data_mc_ratio__530","",40,0,400);
   data_mc_ratio__530->SetBinContent(3,2.739018);
   data_mc_ratio__530->SetBinContent(4,0.4123253);
   data_mc_ratio__530->SetBinContent(5,0.4397764);
   data_mc_ratio__530->SetBinContent(6,0.5603216);
   data_mc_ratio__530->SetBinContent(7,0.5094338);
   data_mc_ratio__530->SetBinContent(8,0.5959984);
   data_mc_ratio__530->SetBinContent(9,0.657346);
   data_mc_ratio__530->SetBinContent(10,0.7166142);
   data_mc_ratio__530->SetBinContent(11,0.7665204);
   data_mc_ratio__530->SetBinContent(12,0.7000043);
   data_mc_ratio__530->SetBinContent(13,0.9551448);
   data_mc_ratio__530->SetBinContent(14,0.5445465);
   data_mc_ratio__530->SetBinContent(15,0.6662088);
   data_mc_ratio__530->SetBinContent(16,0.98324);
   data_mc_ratio__530->SetBinContent(17,0.8954808);
   data_mc_ratio__530->SetBinContent(18,0.5693547);
   data_mc_ratio__530->SetBinContent(19,0.956089);
   data_mc_ratio__530->SetBinContent(20,0.6425441);
   data_mc_ratio__530->SetBinContent(21,0.788224);
   data_mc_ratio__530->SetBinContent(22,1.0614);
   data_mc_ratio__530->SetBinContent(23,0.4764876);
   data_mc_ratio__530->SetBinContent(24,0.4461778);
   data_mc_ratio__530->SetBinContent(25,0.7811932);
   data_mc_ratio__530->SetBinContent(26,0.4179582);
   data_mc_ratio__530->SetBinContent(27,0.9082599);
   data_mc_ratio__530->SetBinContent(28,0.8554334);
   data_mc_ratio__530->SetBinContent(29,0.8684711);
   data_mc_ratio__530->SetBinContent(30,0.5672412);
   data_mc_ratio__530->SetBinContent(31,0.4225446);
   data_mc_ratio__530->SetBinContent(32,0.4545212);
   data_mc_ratio__530->SetBinContent(33,1.176115);
   data_mc_ratio__530->SetBinContent(34,0.392532);
   data_mc_ratio__530->SetBinContent(35,0.867094);
   data_mc_ratio__530->SetBinContent(36,0.6906658);
   data_mc_ratio__530->SetBinContent(37,1.242758);
   data_mc_ratio__530->SetBinContent(38,0.5184567);
   data_mc_ratio__530->SetBinContent(39,0.6430038);
   data_mc_ratio__530->SetBinContent(40,0.4677611);
   data_mc_ratio__530->SetBinContent(41,0.7465629);
   data_mc_ratio__530->SetBinError(3,0.6124629);
   data_mc_ratio__530->SetBinError(4,0.01792719);
   data_mc_ratio__530->SetBinError(5,0.009936072);
   data_mc_ratio__530->SetBinError(6,0.01009957);
   data_mc_ratio__530->SetBinError(7,0.008398908);
   data_mc_ratio__530->SetBinError(8,0.009583008);
   data_mc_ratio__530->SetBinError(9,0.01069315);
   data_mc_ratio__530->SetBinError(10,0.01212165);
   data_mc_ratio__530->SetBinError(11,0.01312258);
   data_mc_ratio__530->SetBinError(12,0.01225628);
   data_mc_ratio__530->SetBinError(13,0.01758564);
   data_mc_ratio__530->SetBinError(14,0.01029096);
   data_mc_ratio__530->SetBinError(15,0.01313636);
   data_mc_ratio__530->SetBinError(16,0.02034338);
   data_mc_ratio__530->SetBinError(17,0.01878677);
   data_mc_ratio__530->SetBinError(18,0.01254438);
   data_mc_ratio__530->SetBinError(19,0.02154644);
   data_mc_ratio__530->SetBinError(20,0.01511137);
   data_mc_ratio__530->SetBinError(21,0.01903901);
   data_mc_ratio__530->SetBinError(22,0.0258878);
   data_mc_ratio__530->SetBinError(23,0.01221763);
   data_mc_ratio__530->SetBinError(24,0.01189068);
   data_mc_ratio__530->SetBinError(25,0.02138851);
   data_mc_ratio__530->SetBinError(26,0.01133765);
   data_mc_ratio__530->SetBinError(27,0.02498011);
   data_mc_ratio__530->SetBinError(28,0.02529142);
   data_mc_ratio__530->SetBinError(29,0.02560981);
   data_mc_ratio__530->SetBinError(30,0.01694201);
   data_mc_ratio__530->SetBinError(31,0.01307743);
   data_mc_ratio__530->SetBinError(32,0.01460886);
   data_mc_ratio__530->SetBinError(33,0.03762725);
   data_mc_ratio__530->SetBinError(34,0.01243161);
   data_mc_ratio__530->SetBinError(35,0.02840261);
   data_mc_ratio__530->SetBinError(36,0.02309932);
   data_mc_ratio__530->SetBinError(37,0.04137931);
   data_mc_ratio__530->SetBinError(38,0.01758744);
   data_mc_ratio__530->SetBinError(39,0.02249586);
   data_mc_ratio__530->SetBinError(40,0.01680247);
   data_mc_ratio__530->SetBinError(41,0.04686375);
   data_mc_ratio__530->SetMinimum(0.4);
   data_mc_ratio__530->SetMaximum(1.6);
   data_mc_ratio__530->SetEntries(145.3737);
   data_mc_ratio__530->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__530->SetLineColor(ci);
   data_mc_ratio__530->SetLineWidth(2);
   data_mc_ratio__530->SetMarkerStyle(20);
   data_mc_ratio__530->SetMarkerSize(1.2);
   data_mc_ratio__530->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__530->GetXaxis()->SetRange(1,30);
   data_mc_ratio__530->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__530->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__530->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__530->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__530->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__530->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__530->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__530->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__530->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__530->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__530->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__530->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__530->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__530->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__530->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__530->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__530->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1386[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1386[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1386[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1386[40] = {
   0,
   0,
   0.700423,
   0.3640524,
   0.2646252,
   0.2167637,
   0.1988635,
   0.1450908,
   0.1534086,
   0.2572366,
   0.1711472,
   0.2420802,
   0.164564,
   0.2461473,
   0.1954842,
   0.180289,
   0.1981957,
   0.37663,
   0.20873,
   0.3562559,
   0.2425117,
   0.2448954,
   0.3909602,
   0.3669218,
   0.2686693,
   0.3844351,
   0.2758805,
   0.2811662,
   0.2550848,
   0.5525586,
   0.3823739,
   0.2560282,
   0.289833,
   0.2685338,
   0.3271535,
   0.3315227,
   0.3096686,
   0.3118932,
   0.3315173,
   0.2976788};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1386,Graph_from_mc_statistical_error_fy1386,Graph_from_mc_statistical_error_fex1386,Graph_from_mc_statistical_error_fey1386);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1386 = new TH1F("Graph_Graph_from_mc_statistical_error1386","",100,0,440);
   Graph_Graph_from_mc_statistical_error1386->SetMinimum(0.1594924);
   Graph_Graph_from_mc_statistical_error1386->SetMaximum(1.840508);
   Graph_Graph_from_mc_statistical_error1386->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1386->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1386->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1386->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1386->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1386->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1386->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1386->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1386->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1386->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1386->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1386->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1386->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1386->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1386->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1386->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1386);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_both_16->cd();
   Z_mass_both_16->Modified();
   Z_mass_both_16->cd();
   Z_mass_both_16->SetSelected(Z_mass_both_16);
}
