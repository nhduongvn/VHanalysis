void Z_pt_VbbHcc_18()
{
//=========Macro generated from canvas: Z_pt_VbbHcc_18/Z_pt_VbbHcc_18
//=========  (Mon Nov 21 13:06:59 2022) by ROOT version 6.14/09
   TCanvas *Z_pt_VbbHcc_18 = new TCanvas("Z_pt_VbbHcc_18", "Z_pt_VbbHcc_18",0,0,600,600);
   Z_pt_VbbHcc_18->SetHighLightColor(2);
   Z_pt_VbbHcc_18->Range(0,0,1,1);
   Z_pt_VbbHcc_18->SetFillColor(0);
   Z_pt_VbbHcc_18->SetFillStyle(4000);
   Z_pt_VbbHcc_18->SetBorderMode(0);
   Z_pt_VbbHcc_18->SetBorderSize(2);
   Z_pt_VbbHcc_18->SetFrameFillStyle(1000);
   Z_pt_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-42180.45,1562.903,4.213828e+07);
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
   st->SetMaximum(3.611451e+07);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",40,0,2000);
   st_stack_11->SetMinimum(0.01);
   st_stack_11->SetMaximum(3.792023e+07);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetRange(7,30);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetLabelSize(0.035);
   st_stack_11->GetXaxis()->SetTitleSize(0.035);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Events/50.0");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetLabelSize(0.05);
   st_stack_11->GetYaxis()->SetTitleSize(0.057);
   st_stack_11->GetYaxis()->SetTitleOffset(1.2);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetLabelSize(0.035);
   st_stack_11->GetZaxis()->SetTitleSize(0.035);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_duong_Z_pt_stack_1 = new TH1D("VbbHcc_duong_Z_pt_stack_1","",40,0,2000);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(1,7414879);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(2,1.426523e+07);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(3,5427745);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(4,375141.9);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(5,23063.03);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(6,9944.931);
   VbbHcc_duong_Z_pt_stack_1->SetBinContent(7,2496.999);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(1,135182.2);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(2,189896.5);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(3,101284.7);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(4,27268.52);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(5,6178.434);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(6,4239.76);
   VbbHcc_duong_Z_pt_stack_1->SetBinError(7,1765.645);
   VbbHcc_duong_Z_pt_stack_1->SetEntries(16494);

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
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(1,60176.52);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(2,115272);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(3,71905.17);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(4,30863.87);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(5,14003.51);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(6,6929.737);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(7,3670.088);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(8,2076.347);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(9,1255.312);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(10,788.9331);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(11,516.5274);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(12,317.4159);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(13,225.8177);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(14,171.8942);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(15,112.9089);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(16,75.52198);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(17,53.20543);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(18,41.40121);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(19,32.4587);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(20,21.35175);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(21,15.13959);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(22,8.930032);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(23,11.22359);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(24,4.702368);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(25,4.900507);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(26,2.996016);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(27,2.68737);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(28,1.608709);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(29,1.338532);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(30,1.75886);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(31,2.156099);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(32,0.2047242);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(33,1.801446);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(34,0.5341146);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(35,0.3007676);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(38,0.5403213);
   VbbHcc_duong_Z_pt_stack_2->SetBinContent(41,0.6393256);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(1,108.0585);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(2,151.3527);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(3,125.3844);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(4,82.62429);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(5,59.51606);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(6,41.57353);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(7,31.72151);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(8,23.89277);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(9,18.88055);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(10,14.79638);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(11,17.5532);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(12,9.115517);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(13,8.265388);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(14,6.905949);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(15,6.468038);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(16,4.698185);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(17,3.833243);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(18,3.427026);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(19,3.111378);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(20,2.563753);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(21,2.140964);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(22,1.600398);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(23,1.877478);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(24,1.160303);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(25,1.193766);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(26,0.9050214);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(27,0.8549512);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(28,0.654253);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(29,0.6085197);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(30,0.6987931);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(31,0.791866);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(32,0.2047242);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(33,0.7444675);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(34,0.3815406);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(35,0.3007676);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(38,0.4309869);
   VbbHcc_duong_Z_pt_stack_2->SetBinError(41,0.4620277);
   VbbHcc_duong_Z_pt_stack_2->SetEntries(3869618);

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
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(1,956053.9);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(2,1810377);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(3,1187354);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(4,373630.5);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(5,130662.4);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(6,55225.4);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(7,26473.53);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(8,13993.16);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(9,7966.868);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(10,4826.157);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(11,3097.113);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(12,2035.462);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(13,1351.886);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(14,920.9217);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(15,648.7254);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(16,455.3061);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(17,326.0719);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(18,228.8927);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(19,171.6232);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(20,124.8334);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(21,90.79401);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(22,65.88245);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(23,50.95738);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(24,34.24226);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(25,24.21456);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(26,17.54605);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(27,14.06782);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(28,9.018925);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(29,7.126361);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(30,6.744766);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(31,3.628791);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(32,3.522862);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(33,3.508245);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(34,1.467333);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(35,1.846521);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(36,1.266855);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(37,0.9696463);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(38,0.4581308);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(39,0.3891343);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(40,0.7319744);
   VbbHcc_duong_Z_pt_stack_3->SetBinContent(41,1.283665);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(1,283.9568);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(2,389.7813);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(3,315.6203);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(4,176.8702);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(5,104.8275);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(6,67.73106);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(7,47.17824);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(8,33.97136);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(9,25.64491);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(10,19.78336);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(11,16.50253);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(12,12.98308);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(13,10.62109);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(14,8.812356);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(15,7.250532);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(16,6.806119);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(17,5.649913);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(18,4.294431);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(19,4.104224);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(20,3.253883);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(21,2.767861);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(22,2.384896);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(23,2.148469);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(24,1.648002);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(25,1.358202);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(26,1.155523);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(27,1.072081);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(28,0.8490097);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(29,0.7479768);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(30,0.7301828);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(31,0.5448068);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(32,0.5473898);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(33,0.5218367);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(34,0.3197522);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(35,0.375659);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(36,0.3062115);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(37,0.2722782);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(38,0.1902811);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(39,0.1691649);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(40,0.2401356);
   VbbHcc_duong_Z_pt_stack_3->SetBinError(41,0.3182246);
   VbbHcc_duong_Z_pt_stack_3->SetEntries(6.805031e+07);

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
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(1,9187.076);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(2,20763.46);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(3,21723.68);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(4,14797.05);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(5,6304.214);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(6,1349.835);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(7,99.43264);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(8,5.286143);
   VbbHcc_duong_Z_pt_stack_4->SetBinContent(9,0.4588168);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(1,73.76673);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(2,115.8822);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(3,122.8332);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(4,97.02404);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(5,62.68094);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(6,28.2518);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(7,7.400605);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(8,1.785585);
   VbbHcc_duong_Z_pt_stack_4->SetBinError(9,0.4588168);
   VbbHcc_duong_Z_pt_stack_4->SetEntries(135370);

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
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(1,4680.775);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(2,11848.89);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(3,12330.32);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(4,8500.299);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(5,3768.855);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(6,998.3056);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(7,96.96814);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(8,16.41369);
   VbbHcc_duong_Z_pt_stack_5->SetBinContent(9,2.337341);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(1,110.1129);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(2,179.0152);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(3,179.3795);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(4,149.264);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(5,103.2426);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(6,62.35688);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(7,15.66154);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(8,6.302827);
   VbbHcc_duong_Z_pt_stack_5->SetBinError(9,2.337341);
   VbbHcc_duong_Z_pt_stack_5->SetEntries(17571);

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
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(1,323.9913);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(2,513.2637);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(3,236.4791);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(4,108.9227);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(5,65.16426);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(6,29.03771);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(7,18.53266);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(8,13.6187);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(9,8.466089);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(10,5.711111);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(11,2.445083);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(12,2.310859);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(13,1.535285);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(14,1.275396);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(15,0.2727504);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(16,0.7089254);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(18,1.118847);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(19,0.4808949);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(20,0.8117483);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(21,0.4804647);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(22,0.3664998);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(24,0.3562396);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(25,0.396108);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(28,0.3586122);
   VbbHcc_duong_Z_pt_stack_6->SetBinContent(35,0.3336772);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(1,11.20807);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(2,14.41397);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(3,9.53147);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(4,6.447867);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(5,5.134965);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(6,3.301352);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(7,2.61059);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(8,2.288379);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(9,1.793023);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(10,1.482593);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(11,0.9735199);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(12,0.9619513);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(13,0.7713112);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(14,0.640676);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(15,0.2727504);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(16,0.5013203);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(18,0.6466299);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(19,0.4808949);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(20,0.5748585);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(21,0.4804647);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(22,0.3664998);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(24,0.3562396);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(25,0.396108);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(28,0.3586122);
   VbbHcc_duong_Z_pt_stack_6->SetBinError(35,0.3336772);
   VbbHcc_duong_Z_pt_stack_6->SetEntries(3697);

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
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(1,635.1255);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(2,817.1798);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(3,521.3844);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(4,257.0668);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(5,144.7508);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(6,72.7412);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(7,47.023);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(8,27.67675);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(9,13.74021);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(10,7.344573);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(11,1.476609);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(12,2.030858);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(13,1.767413);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(14,0.5108984);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(15,1.081719);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(16,0.4598301);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(18,0.4688475);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(19,0.3036839);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(22,0.2183893);
   VbbHcc_duong_Z_pt_stack_7->SetBinContent(23,0.2588144);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(1,13.00214);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(2,14.25423);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(3,11.53395);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(4,8.259637);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(5,6.046136);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(6,4.208877);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(7,3.384231);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(8,2.617882);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(9,1.862401);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(10,1.30056);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(11,0.5582642);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(12,0.6802098);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(13,0.6786251);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(14,0.3629522);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(15,0.4848719);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(16,0.3255573);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(18,0.3333149);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(19,0.3036839);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(22,0.2183893);
   VbbHcc_duong_Z_pt_stack_7->SetBinError(23,0.2588144);
   VbbHcc_duong_Z_pt_stack_7->SetEntries(11097);

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
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(1,742.3797);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(2,869.6868);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(3,458.8676);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(4,199.0198);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(5,107.3767);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(6,53.03759);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(7,33.65969);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(8,19.73894);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(9,8.91694);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(10,4.040874);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(11,2.027067);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(12,1.681239);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(13,1.00377);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(14,0.7155276);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(15,0.3006179);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(16,0.8675684);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(18,0.2263142);
   VbbHcc_duong_Z_pt_stack_8->SetBinContent(28,0.1706549);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(1,13.86492);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(2,17.73125);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(3,11.41912);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(4,7.315463);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(5,5.372033);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(6,3.597845);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(7,2.855246);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(8,2.23231);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(9,1.495955);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(10,0.967002);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(11,0.732228);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(12,0.6902396);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(13,0.5062283);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(14,0.4138028);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(15,0.3006179);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(16,0.502482);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(18,0.2263142);
   VbbHcc_duong_Z_pt_stack_8->SetBinError(28,0.1706549);
   VbbHcc_duong_Z_pt_stack_8->SetEntries(10770);

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
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(1,193.231);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(2,302.2336);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(3,185.57);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(4,95.55751);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(5,50.01505);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(6,27.18585);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(7,15.9302);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(8,9.293331);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(9,5.453996);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(10,2.771191);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(11,1.471529);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(12,0.8942049);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(13,0.5281305);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(14,0.2350383);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(15,0.1523253);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(16,0.1204512);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(17,0.07963222);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(18,0.04253735);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(19,0.03184102);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(20,0.01801187);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(21,0.03188199);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(22,0.01423551);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(23,0.01236051);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(25,0.003334215);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(26,0.002368554);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(27,0.006923721);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(28,0.01114845);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(29,0.005663629);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(33,0.005476742);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(34,0.002028083);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(37,0.002971343);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(40,0.001892769);
   VbbHcc_duong_Z_pt_stack_9->SetBinContent(41,0.002142527);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(1,0.7817487);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(2,0.9640822);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(3,0.7573409);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(4,0.5451531);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(5,0.4168139);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(6,0.3038932);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(7,0.262146);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(8,0.1646356);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(9,0.1341509);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(10,0.1376247);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(11,0.06755372);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(12,0.0555961);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(13,0.03834452);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(14,0.02514897);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(15,0.019792);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(16,0.01800086);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(17,0.01440884);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(18,0.01054168);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(19,0.009290998);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(20,0.006870849);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(21,0.008824058);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(22,0.005901898);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(23,0.006222364);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(25,0.003334215);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(26,0.002368554);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(27,0.004116725);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(28,0.005626198);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(29,0.004070793);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(33,0.003963258);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(34,0.002028083);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(37,0.002971343);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(40,0.001892769);
   VbbHcc_duong_Z_pt_stack_9->SetBinError(41,0.002142527);
   VbbHcc_duong_Z_pt_stack_9->SetEntries(353785);

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
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(1,27.46704);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(2,61.06729);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(3,62.7608);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(4,42.32531);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(5,24.14009);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(6,13.60663);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(7,8.119349);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(8,4.851329);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(9,2.974971);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(10,1.889088);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(11,1.226368);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(12,0.8026823);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(13,0.5074072);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(14,0.3402479);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(15,0.2370808);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(16,0.1832665);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(17,0.1179586);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(18,0.09197484);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(19,0.07308673);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(20,0.06709923);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(21,0.04839957);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(22,0.02751011);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(23,0.02663787);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(24,0.02623439);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(25,0.01867176);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(26,0.01217342);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(27,0.01182585);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(28,0.004585986);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(29,0.007320102);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(30,0.004505422);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(31,0.001643161);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(32,0.003261977);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(33,0.003120422);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(34,0.004174055);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(36,0.001255671);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(37,0.0003004933);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(38,0.0006126349);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(39,0.001273268);
   VbbHcc_duong_Z_pt_stack_10->SetBinContent(41,0.002685579);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(1,0.1324614);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(2,0.197441);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(3,0.2001376);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(4,0.164213);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(5,0.123819);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(6,0.09295601);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(7,0.07176388);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(8,0.05543981);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(9,0.04339305);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(10,0.03463137);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(11,0.02786962);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(12,0.02256392);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(13,0.01798269);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(14,0.01469367);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(15,0.0122547);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(16,0.01080399);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(17,0.008667524);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(18,0.007681394);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(19,0.006819488);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(20,0.006544894);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(21,0.005495243);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(22,0.004186315);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(23,0.004109554);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(24,0.004075596);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(25,0.003453188);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(26,0.002783076);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(27,0.00279225);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(28,0.001735195);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(29,0.002122208);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(30,0.00170631);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(31,0.0009777514);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(32,0.001420452);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(33,0.001397408);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(34,0.001597712);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(36,0.0008882961);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(37,0.0003004933);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(38,0.0006126349);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(39,0.0009004491);
   VbbHcc_duong_Z_pt_stack_10->SetBinError(41,0.001345432);
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
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(1,2.997237);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(2,5.334883);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(3,3.415057);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(4,1.605088);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(5,0.7993389);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(6,0.442462);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(7,0.2014874);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(8,0.1346807);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(9,0.07487292);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(10,0.03015824);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(11,0.02074699);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(12,0.005837508);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(13,0.01239158);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(14,0.003940972);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(16,0.003020277);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(21,0.002353708);
   VbbHcc_duong_Z_pt_stack_11->SetBinContent(24,0.002551435);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(1,0.08936952);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(2,0.1190926);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(3,0.09503993);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(4,0.06650167);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(5,0.04538522);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(6,0.03372583);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(7,0.02279026);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(8,0.01858401);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(9,0.0142943);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(10,0.008546659);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(11,0.007227332);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(12,0.003467146);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(13,0.005544154);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(14,0.002884122);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(16,0.003020277);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(21,0.002353708);
   VbbHcc_duong_Z_pt_stack_11->SetBinError(24,0.002551435);
   VbbHcc_duong_Z_pt_stack_11->SetEntries(6741);

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
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(1,10012.28);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(2,25465.13);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(3,29062.41);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(4,17782.95);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(5,9218.568);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(6,4616.863);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(7,2458.232);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(8,1503.871);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(9,787.9327);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(10,449.3392);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(11,319.0767);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(12,255.187);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(13,117.0468);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(14,99.25282);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(15,39.75685);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(16,43.17905);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(17,36.79877);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(18,36.54563);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(19,25.86821);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(20,9.175609);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(21,17.72399);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(23,8.167892);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(25,6.945887);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(29,9.09646);
   VbbHcc_duong_Z_pt_stack_12->SetBinContent(33,6.662534);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(1,264.504);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(2,423.3101);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(3,454.0963);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(4,351.8569);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(5,253.2615);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(6,178.6323);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(7,130.8674);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(8,105.2508);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(9,75.37028);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(10,56.54046);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(11,47.20675);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(12,41.95275);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(13,30.51607);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(14,26.303);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(15,15.96417);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(16,16.61003);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(17,17.35577);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(18,15.57365);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(19,13.64194);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(20,9.175609);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(21,12.5406);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(23,6.505911);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(25,6.945887);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(29,9.09646);
   VbbHcc_duong_Z_pt_stack_12->SetBinError(33,6.662534);
   VbbHcc_duong_Z_pt_stack_12->SetEntries(16335);

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
   
   TH1D *VbbHcc_duong_Z_pt__21 = new TH1D("VbbHcc_duong_Z_pt__21","",40,0,2000);
   VbbHcc_duong_Z_pt__21->SetBinContent(1,1128228);
   VbbHcc_duong_Z_pt__21->SetBinContent(2,2779426);
   VbbHcc_duong_Z_pt__21->SetBinContent(3,3246752);
   VbbHcc_duong_Z_pt__21->SetBinContent(4,2461376);
   VbbHcc_duong_Z_pt__21->SetBinContent(5,1519744);
   VbbHcc_duong_Z_pt__21->SetBinContent(6,862813);
   VbbHcc_duong_Z_pt__21->SetBinContent(7,517622);
   VbbHcc_duong_Z_pt__21->SetBinContent(8,332724);
   VbbHcc_duong_Z_pt__21->SetBinContent(9,204866);
   VbbHcc_duong_Z_pt__21->SetBinContent(10,122363);
   VbbHcc_duong_Z_pt__21->SetBinContent(11,74558);
   VbbHcc_duong_Z_pt__21->SetBinContent(12,46363);
   VbbHcc_duong_Z_pt__21->SetBinContent(13,28967);
   VbbHcc_duong_Z_pt__21->SetBinContent(14,18930);
   VbbHcc_duong_Z_pt__21->SetBinContent(15,12582);
   VbbHcc_duong_Z_pt__21->SetBinContent(16,8365);
   VbbHcc_duong_Z_pt__21->SetBinContent(17,5827);
   VbbHcc_duong_Z_pt__21->SetBinContent(18,4133);
   VbbHcc_duong_Z_pt__21->SetBinContent(19,2795);
   VbbHcc_duong_Z_pt__21->SetBinContent(20,2023);
   VbbHcc_duong_Z_pt__21->SetBinContent(21,1468);
   VbbHcc_duong_Z_pt__21->SetBinContent(22,996);
   VbbHcc_duong_Z_pt__21->SetBinContent(23,742);
   VbbHcc_duong_Z_pt__21->SetBinContent(24,571);
   VbbHcc_duong_Z_pt__21->SetBinContent(25,380);
   VbbHcc_duong_Z_pt__21->SetBinContent(26,283);
   VbbHcc_duong_Z_pt__21->SetBinContent(27,208);
   VbbHcc_duong_Z_pt__21->SetBinContent(28,185);
   VbbHcc_duong_Z_pt__21->SetBinContent(29,131);
   VbbHcc_duong_Z_pt__21->SetBinContent(30,92);
   VbbHcc_duong_Z_pt__21->SetBinContent(31,67);
   VbbHcc_duong_Z_pt__21->SetBinContent(32,48);
   VbbHcc_duong_Z_pt__21->SetBinContent(33,41);
   VbbHcc_duong_Z_pt__21->SetBinContent(34,37);
   VbbHcc_duong_Z_pt__21->SetBinContent(35,33);
   VbbHcc_duong_Z_pt__21->SetBinContent(36,28);
   VbbHcc_duong_Z_pt__21->SetBinContent(37,18);
   VbbHcc_duong_Z_pt__21->SetBinContent(38,18);
   VbbHcc_duong_Z_pt__21->SetBinContent(39,16);
   VbbHcc_duong_Z_pt__21->SetBinContent(40,5);
   VbbHcc_duong_Z_pt__21->SetBinContent(41,30);
   VbbHcc_duong_Z_pt__21->SetEntries(1.338585e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_pt__21->SetLineColor(ci);
   VbbHcc_duong_Z_pt__21->SetLineWidth(2);
   VbbHcc_duong_Z_pt__21->SetMarkerStyle(20);
   VbbHcc_duong_Z_pt__21->SetMarkerSize(1.2);
   VbbHcc_duong_Z_pt__21->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_Z_pt__21->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt__21->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt__21->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt__21->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt__21->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt__21->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt__21->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt__21->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_pt__21->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt__21->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_pt__21->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_pt__21->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_pt__21->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_pt__21->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_Z_pt_fx1021[40] = {
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
   Double_t Graph_from_VbbHcc_duong_Z_pt_fy1021[40] = {
   8456915,
   1.625153e+07,
   6751589,
   821421.1,
   187412.8,
   79261.12,
   35418.71,
   17670.39,
   10052.54,
   6086.216,
   3941.384,
   2615.79,
   1700.105,
   1195.15,
   803.4357,
   576.3502,
   416.2737,
   308.7881,
   230.8396,
   156.2576,
   124.2207,
   75.43911,
   70.64668,
   39.32966,
   36.47907,
   20.5566,
   16.77394,
   11.17264,
   17.57434,
   8.508132,
   5.786533,
   3.730848,
   11.98082,
   2.007649,
   2.480966,
   1.268111,
   0.9729182,
   0.9990647,
   0.3904075,
   0.7338671};
   Double_t Graph_from_VbbHcc_duong_Z_pt_fex1021[40] = {
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
   Double_t Graph_from_VbbHcc_duong_Z_pt_fey1021[40] = {
   135182.8,
   189897.5,
   101286.5,
   27272.07,
   6185.984,
   4244.822,
   1771.493,
   113.4137,
   81.91111,
   61.74126,
   53.01628,
   44.87265,
   33.37167,
   28.59916,
   18.69922,
   18.57147,
   18.65042,
   16.53197,
   14.59286,
   10.0838,
   13.02852,
   2.903631,
   7.10878,
   2.046739,
   7.188328,
   1.467757,
   1.371249,
   1.143077,
   9.147424,
   1.010684,
   0.9611801,
   0.5844225,
   6.724278,
   0.4978166,
   0.5855948,
   0.3062128,
   0.2722945,
   0.4711231,
   0.1691673,
   0.2401431};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_duong_Z_pt_fx1021,Graph_from_VbbHcc_duong_Z_pt_fy1021,Graph_from_VbbHcc_duong_Z_pt_fex1021,Graph_from_VbbHcc_duong_Z_pt_fey1021);
   gre->SetName("Graph_from_VbbHcc_duong_Z_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_Z_pt1021 = new TH1F("Graph_Graph_from_VbbHcc_duong_Z_pt1021","",100,0,2200);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->SetMinimum(0.1991162);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->SetMaximum(1.808557e+07);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_pt1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_Z_pt1021);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_Z_pt","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_pt_VbbHcc_18->cd();
  
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
   
   TH1D *data_mc_ratio__22 = new TH1D("data_mc_ratio__22","",40,0,2000);
   data_mc_ratio__22->SetBinContent(1,0.1334089);
   data_mc_ratio__22->SetBinContent(2,0.1710255);
   data_mc_ratio__22->SetBinContent(3,0.4808871);
   data_mc_ratio__22->SetBinContent(4,2.996485);
   data_mc_ratio__22->SetBinContent(5,8.109074);
   data_mc_ratio__22->SetBinContent(6,10.8857);
   data_mc_ratio__22->SetBinContent(7,14.61436);
   data_mc_ratio__22->SetBinContent(8,18.82947);
   data_mc_ratio__22->SetBinContent(9,20.37953);
   data_mc_ratio__22->SetBinContent(10,20.10494);
   data_mc_ratio__22->SetBinContent(11,18.9167);
   data_mc_ratio__22->SetBinContent(12,17.72428);
   data_mc_ratio__22->SetBinContent(13,17.03836);
   data_mc_ratio__22->SetBinContent(14,15.83902);
   data_mc_ratio__22->SetBinContent(15,15.66025);
   data_mc_ratio__22->SetBinContent(16,14.51374);
   data_mc_ratio__22->SetBinContent(17,13.998);
   data_mc_ratio__22->SetBinContent(18,13.38458);
   data_mc_ratio__22->SetBinContent(19,12.10797);
   data_mc_ratio__22->SetBinContent(20,12.94657);
   data_mc_ratio__22->SetBinContent(21,11.81768);
   data_mc_ratio__22->SetBinContent(22,13.2027);
   data_mc_ratio__22->SetBinContent(23,10.50297);
   data_mc_ratio__22->SetBinContent(24,14.51831);
   data_mc_ratio__22->SetBinContent(25,10.41693);
   data_mc_ratio__22->SetBinContent(26,13.76687);
   data_mc_ratio__22->SetBinContent(27,12.40019);
   data_mc_ratio__22->SetBinContent(28,16.55831);
   data_mc_ratio__22->SetBinContent(29,7.454051);
   data_mc_ratio__22->SetBinContent(30,10.81318);
   data_mc_ratio__22->SetBinContent(31,11.57861);
   data_mc_ratio__22->SetBinContent(32,12.86571);
   data_mc_ratio__22->SetBinContent(33,3.422136);
   data_mc_ratio__22->SetBinContent(34,18.42951);
   data_mc_ratio__22->SetBinContent(35,13.30127);
   data_mc_ratio__22->SetBinContent(36,22.08009);
   data_mc_ratio__22->SetBinContent(37,18.50104);
   data_mc_ratio__22->SetBinContent(38,18.01685);
   data_mc_ratio__22->SetBinContent(39,40.98282);
   data_mc_ratio__22->SetBinContent(40,6.813222);
   data_mc_ratio__22->SetBinContent(41,15.56163);
   data_mc_ratio__22->SetBinError(1,0.0001255991);
   data_mc_ratio__22->SetBinError(2,0.0001025849);
   data_mc_ratio__22->SetBinError(3,0.0002668815);
   data_mc_ratio__22->SetBinError(4,0.001909955);
   data_mc_ratio__22->SetBinError(5,0.006577881);
   data_mc_ratio__22->SetBinError(6,0.0117192);
   data_mc_ratio__22->SetBinError(7,0.02031298);
   data_mc_ratio__22->SetBinError(8,0.03264344);
   data_mc_ratio__22->SetBinError(9,0.04502558);
   data_mc_ratio__22->SetBinError(10,0.05747483);
   data_mc_ratio__22->SetBinError(11,0.06927848);
   data_mc_ratio__22->SetBinError(12,0.08231573);
   data_mc_ratio__22->SetBinError(13,0.1001097);
   data_mc_ratio__22->SetBinError(14,0.1151206);
   data_mc_ratio__22->SetBinError(15,0.1396123);
   data_mc_ratio__22->SetBinError(16,0.1586889);
   data_mc_ratio__22->SetBinError(17,0.1833764);
   data_mc_ratio__22->SetBinError(18,0.2081959);
   data_mc_ratio__22->SetBinError(19,0.2290238);
   data_mc_ratio__22->SetBinError(20,0.2878437);
   data_mc_ratio__22->SetBinError(21,0.3084389);
   data_mc_ratio__22->SetBinError(22,0.4183436);
   data_mc_ratio__22->SetBinError(23,0.3855762);
   data_mc_ratio__22->SetBinError(24,0.6075722);
   data_mc_ratio__22->SetBinError(25,0.5343774);
   data_mc_ratio__22->SetBinError(26,0.8183552);
   data_mc_ratio__22->SetBinError(27,0.8597983);
   data_mc_ratio__22->SetBinError(28,1.217391);
   data_mc_ratio__22->SetBinError(29,0.6512635);
   data_mc_ratio__22->SetBinError(30,1.127352);
   data_mc_ratio__22->SetBinError(31,1.414552);
   data_mc_ratio__22->SetBinError(32,1.857005);
   data_mc_ratio__22->SetBinError(33,0.5344478);
   data_mc_ratio__22->SetBinError(34,3.029793);
   data_mc_ratio__22->SetBinError(35,2.315454);
   data_mc_ratio__22->SetBinError(36,4.172744);
   data_mc_ratio__22->SetBinError(37,4.360737);
   data_mc_ratio__22->SetBinError(38,4.246613);
   data_mc_ratio__22->SetBinError(39,10.2457);
   data_mc_ratio__22->SetBinError(40,3.046966);
   data_mc_ratio__22->SetBinError(41,5.346086);
   data_mc_ratio__22->SetMinimum(0.4);
   data_mc_ratio__22->SetMaximum(1.6);
   data_mc_ratio__22->SetEntries(400.4641);
   data_mc_ratio__22->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__22->SetLineColor(ci);
   data_mc_ratio__22->SetLineWidth(2);
   data_mc_ratio__22->SetMarkerStyle(20);
   data_mc_ratio__22->SetMarkerSize(1.2);
   data_mc_ratio__22->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__22->GetXaxis()->SetRange(7,30);
   data_mc_ratio__22->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__22->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__22->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__22->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__22->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__22->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__22->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__22->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__22->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__22->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__22->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__22->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__22->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__22->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1022[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1022[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1022[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1022[40] = {
   0.01598489,
   0.0116849,
   0.01500188,
   0.03320108,
   0.03300727,
   0.05355491,
   0.05001574,
   0.006418294,
   0.008148303,
   0.01014444,
   0.01345118,
   0.01715453,
   0.01962918,
   0.02392935,
   0.02327407,
   0.03222254,
   0.04480326,
   0.05353823,
   0.06321645,
   0.06453315,
   0.1048821,
   0.03848972,
   0.1006244,
   0.0520406,
   0.1970535,
   0.07140074,
   0.08174877,
   0.1023104,
   0.520499,
   0.1187903,
   0.1661064,
   0.156646,
   0.5612535,
   0.2479599,
   0.236035,
   0.2414716,
   0.279874,
   0.4715641,
   0.4333094,
   0.3272296};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1022,Graph_from_mc_statistical_error_fy1022,Graph_from_mc_statistical_error_fex1022,Graph_from_mc_statistical_error_fey1022);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1022 = new TH1F("Graph_Graph_from_mc_statistical_error1022","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1022->SetMinimum(0.3264958);
   Graph_Graph_from_mc_statistical_error1022->SetMaximum(1.673504);
   Graph_Graph_from_mc_statistical_error1022->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1022->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1022);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   Z_pt_VbbHcc_18->cd();
   Z_pt_VbbHcc_18->Modified();
   Z_pt_VbbHcc_18->cd();
   Z_pt_VbbHcc_18->SetSelected(Z_pt_VbbHcc_18);
}
