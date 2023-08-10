void Z_mass_tags_16()
{
//=========Macro generated from canvas: Z_mass_tags_16/Z_mass_tags_16
//=========  (Thu Aug 10 10:40:45 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_16 = new TCanvas("Z_mass_tags_16", "Z_mass_tags_16",0,0,600,600);
   Z_mass_tags_16->SetHighLightColor(2);
   Z_mass_tags_16->Range(0,0,1,1);
   Z_mass_tags_16->SetFillColor(0);
   Z_mass_tags_16->SetFillStyle(4000);
   Z_mass_tags_16->SetBorderMode(0);
   Z_mass_tags_16->SetBorderSize(2);
   Z_mass_tags_16->SetFrameFillStyle(1000);
   Z_mass_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.818541,315.7258,10.61027);
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
   st->SetMaximum(5.869009e+08);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",40,0,400);
   st_stack_1->SetMinimum(0.001566347);
   st_stack_1->SetMaximum(1.850917e+09);
   st_stack_1->SetDirectory(0);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->GetXaxis()->SetRange(1,30);
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetLabelSize(0.035);
   st_stack_1->GetXaxis()->SetTitleSize(0.035);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Events/10.0");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetLabelSize(0.05);
   st_stack_1->GetYaxis()->SetTitleSize(0.057);
   st_stack_1->GetYaxis()->SetTitleOffset(1.2);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetLabelSize(0.035);
   st_stack_1->GetZaxis()->SetTitleSize(0.035);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *VbbHcc_tags_Z_mass_stack_1 = new TH1D("VbbHcc_tags_Z_mass_stack_1","",40,0,400);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(3,6.116705);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(4,1546.588);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(5,3757.429);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(6,5227.421);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(7,7646.106);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(8,5040.234);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(9,4798.624);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(10,2758.052);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(11,4060.33);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(12,5274.404);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(13,2012.702);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(14,8414.312);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(15,4250.135);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(16,2127.858);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(17,2072.549);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(18,3694.174);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(19,2764.275);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(20,4212.174);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(21,3673.24);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(22,3864.661);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(23,3000.586);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(24,1687.534);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(25,2495.619);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(26,4016.483);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(27,1593.245);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(28,1812.947);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(29,1460.122);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(30,3479.319);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(31,2312.289);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(32,1902.809);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(33,935.8872);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(34,2293.591);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(35,2062.364);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(36,1463.161);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(37,1792.531);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(38,1711.903);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(39,2423.08);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(40,1761.899);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(41,67739.11);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(3,6.116705);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(4,610.586);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(5,858.9314);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(6,1084.81);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(7,1990.605);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(8,931.2109);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(9,925.282);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(10,586.7563);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(11,887.3409);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(12,1894.518);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(13,459.7839);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(14,2828.653);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(15,944.0649);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(16,541.9924);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(17,507.517);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(18,882.6087);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(19,722.4431);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(20,1843.933);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(21,1655.193);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(22,1667.474);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(23,1691.442);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(24,523.038);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(25,706.198);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(26,1840.22);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(27,487.6801);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(28,615.4237);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(29,457.9319);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(30,1715.051);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(31,648.9496);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(32,599.7278);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(33,280.9523);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(34,717.386);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(35,666.2272);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(36,523.9655);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(37,602.1038);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(38,573.0878);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(39,727.6173);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(40,597.1214);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(41,4619.901);
   VbbHcc_tags_Z_mass_stack_1->SetEntries(9435);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_2 = new TH1D("VbbHcc_tags_Z_mass_stack_2","",40,0,400);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(3,0.04629269);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(4,1.97974);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(5,7.58895);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(6,8.884728);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(7,9.244917);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(8,13.40752);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(9,11.10786);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(10,14.24845);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(11,16.22321);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(12,18.14384);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(13,16.17513);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(14,15.25753);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(15,16.75247);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(16,13.80778);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(17,18.95824);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(18,14.46035);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(19,16.85839);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(20,13.31164);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(21,11.42087);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(22,12.1977);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(23,10.91718);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(24,14.60703);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(25,11.0532);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(26,11.71689);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(27,8.500801);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(28,10.67934);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(29,8.838859);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(30,11.65751);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(31,6.866456);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(32,7.932072);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(33,9.650074);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(34,7.13322);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(35,6.351278);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(36,7.64524);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(37,7.517569);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(38,6.827811);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(39,6.346471);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(40,5.179072);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(41,295.5779);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(3,0.04629269);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(4,0.536359);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(5,1.222635);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(6,1.183593);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(7,1.159251);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(8,1.555002);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(9,1.356728);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(10,1.557245);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(11,1.703988);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(12,1.824458);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(13,1.729145);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(14,1.572082);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(15,1.710142);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(16,1.542801);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(17,1.909713);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(18,1.60953);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(19,1.838539);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(20,1.562869);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(21,1.403367);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(22,1.508519);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(23,1.380158);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(24,1.698029);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(25,1.471444);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(26,1.480912);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(27,1.113685);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(28,1.400981);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(29,1.154167);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(30,1.571516);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(31,0.9787776);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(32,1.202402);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(33,1.387131);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(34,1.071365);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(35,1.007172);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(36,1.072822);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(37,1.082915);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(38,1.118155);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(39,1.063725);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(40,0.8707903);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(41,7.456185);
   VbbHcc_tags_Z_mass_stack_2->SetEntries(9214);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_3 = new TH1D("VbbHcc_tags_Z_mass_stack_3","",40,0,400);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(3,1.776579);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(4,34.02711);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(5,114.75);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(6,176.2838);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(7,216.9556);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(8,249.8952);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(9,282.0399);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(10,309.8883);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(11,330.5084);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(12,357.3221);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(13,356.282);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(14,353.3325);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(15,348.6726);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(16,326.2646);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(17,310.0743);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(18,298.8767);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(19,281.8028);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(20,271.5767);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(21,247.3171);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(22,252.7973);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(23,240.9885);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(24,229.9952);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(25,226.0902);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(26,210.9604);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(27,208.2018);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(28,202.3808);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(29,202.0352);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(30,193.7389);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(31,183.5767);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(32,180.7806);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(33,177.5896);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(34,175.7443);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(35,164.2981);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(36,163.8623);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(37,160.2599);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(38,155.0134);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(39,147.5076);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(40,149.3164);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(41,5815.32);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(3,0.3344241);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(4,1.535419);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(5,2.810536);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(6,3.47139);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(7,3.855185);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(8,4.160033);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(9,4.409543);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(10,4.642654);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(11,4.795382);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(12,4.982878);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(13,4.977423);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(14,4.952254);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(15,4.930292);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(16,4.761687);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(17,4.641522);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(18,4.549855);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(19,4.40824);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(20,4.347548);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(21,4.143564);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(22,4.187053);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(23,4.064112);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(24,3.991644);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(25,3.961629);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(26,3.826953);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(27,3.80364);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(28,3.740449);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(29,3.741572);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(30,3.673102);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(31,3.57056);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(32,3.55896);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(33,3.514675);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(34,3.493157);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(35,3.388556);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(36,3.375852);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(37,3.339648);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(38,3.297647);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(39,3.207077);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(40,3.228664);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(41,20.17708);
   VbbHcc_tags_Z_mass_stack_3->SetEntries(221451);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_4 = new TH1D("VbbHcc_tags_Z_mass_stack_4","",40,0,400);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(3,0.4508981);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(4,3.149662);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(5,13.25525);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(6,23.98675);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(7,50.14673);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(8,64.77473);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(9,113.0149);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(10,151.244);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(11,94.04071);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(12,52.08676);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(13,58.43971);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(14,38.20205);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(15,40.79265);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(16,30.64153);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(17,28.97502);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(18,26.82022);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(19,32.25236);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(20,29.98415);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(21,31.73457);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(22,39.18514);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(23,26.38201);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(24,25.23421);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(25,27.00596);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(26,24.47723);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(27,26.59378);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(28,28.11368);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(29,16.9351);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(30,28.15861);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(31,25.0011);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(32,23.35219);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(33,26.64179);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(34,24.68196);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(35,25.5197);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(36,22.81056);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(37,19.00456);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(38,19.50348);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(39,16.87585);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(40,14.67171);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(41,790.0892);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(3,0.3131584);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(4,0.8468491);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(5,2.870439);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(6,4.435706);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(7,6.77445);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(8,5.951135);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(9,6.738027);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(10,10.88296);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(11,8.493169);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(12,4.921237);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(13,7.788644);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(14,5.122694);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(15,5.830062);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(16,4.228782);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(17,3.407649);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(18,3.364787);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(19,5.044236);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(20,3.839854);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(21,4.440494);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(22,7.007662);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(23,4.212063);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(24,3.556955);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(25,4.944832);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(26,4.068895);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(27,4.301338);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(28,4.854477);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(29,3.003746);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(30,5.287948);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(31,4.979474);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(32,4.121882);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(33,4.7827);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(34,4.106799);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(35,4.626605);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(36,3.466088);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(37,3.110111);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(38,3.975325);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(39,3.098255);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(40,1.731951);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(41,20.58575);
   VbbHcc_tags_Z_mass_stack_4->SetEntries(14977);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_5 = new TH1D("VbbHcc_tags_Z_mass_stack_5","",40,0,400);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(3,1.282714);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(4,1.349165);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(5,10.64942);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(6,5.841949);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(7,7.603685);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(8,8.774153);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(9,8.514247);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(10,3.614014);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(11,4.375842);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(12,4.338337);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(13,3.517313);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(14,4.106859);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(15,2.714017);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(16,3.960035);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(17,4.542048);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(18,4.589856);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(19,2.648573);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(20,1.696642);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(21,3.011549);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(22,4.058849);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(23,1.257388);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(24,2.567707);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(25,1.462633);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(26,2.740481);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(27,1.140985);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(28,2.463146);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(29,1.4356);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(30,1.416253);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(31,1.349575);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(32,2.092609);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(33,3.694044);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(34,2.68211);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(35,2.039428);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(36,0.9109289);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(37,0.6569);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(38,0.6409089);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(39,1.402254);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(40,0.7660832);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(41,75.75457);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(3,1.223238);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(4,1.065968);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(5,7.241984);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(6,1.630911);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(7,1.883256);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(8,2.146573);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(9,2.339335);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(10,0.5831521);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(11,0.6670976);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(12,1.100265);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(13,1.207744);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(14,1.234474);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(15,0.5999399);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(16,1.277541);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(17,1.588322);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(18,1.670513);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(19,0.5873388);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(20,0.3808583);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(21,1.307703);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(22,1.371736);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(23,0.3098961);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(24,1.15098);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(25,0.3629269);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(26,1.243561);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(27,0.3193952);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(28,1.223106);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(29,0.3665442);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(30,0.4266509);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(31,0.324025);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(32,0.550528);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(33,1.562636);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(34,1.185653);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(35,1.142594);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(36,0.2984354);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(37,0.2214678);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(38,0.2666524);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(39,0.3891542);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(40,0.2983482);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(41,8.564508);
   VbbHcc_tags_Z_mass_stack_5->SetEntries(3105);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_6 = new TH1D("VbbHcc_tags_Z_mass_stack_6","",40,0,400);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(7,0.08576627);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(14,0.1333553);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(15,0.1587488);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(17,0.1552273);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(20,0.1440206);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(21,0.139529);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(24,0.1368996);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(27,0.1344897);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(33,0.1535887);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(41,0.3068559);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(7,0.08576627);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(14,0.1333553);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(15,0.1587488);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(17,0.1552273);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(20,0.1440206);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(21,0.139529);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(24,0.1368996);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(27,0.1344897);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(33,0.1535887);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(41,0.2173415);
   VbbHcc_tags_Z_mass_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_7 = new TH1D("VbbHcc_tags_Z_mass_stack_7","",40,0,400);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(7,0.241769);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,0.5468816);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,1.078409);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.227324);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(12,0.1238666);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(13,0.2250811);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(14,0.2330253);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(15,0.1194362);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(17,0.08719582);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(18,0.3665195);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(19,0.1192266);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(20,0.1194362);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(21,0.1154132);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(26,0.1245696);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(28,0.1159231);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(31,0.08023004);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(38,0.247041);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,1.439921);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(7,0.1712154);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.2450553);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.3601023);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.160743);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(12,0.1238666);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(13,0.1591815);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(14,0.1648882);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(15,0.1194362);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(17,0.08719582);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(18,0.2119062);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(19,0.1192266);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(20,0.1194362);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(21,0.1154132);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(26,0.1245696);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(28,0.1159231);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(31,0.08023004);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(38,0.1748854);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,0.4162475);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_8 = new TH1D("VbbHcc_tags_Z_mass_stack_8","",40,0,400);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(7,0.5132958);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(8,1.554624);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(9,1.835768);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(10,3.683151);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(11,2.221803);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(12,0.4650321);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(13,0.2586989);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(14,0.255305);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(15,1.061499);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(16,0.2899459);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(17,1.07425);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(18,0.524291);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(19,1.050365);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(20,0.2638274);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(21,0.2779976);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(22,1.36644);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(23,0.7985934);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(24,0.5287579);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(25,0.2665388);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(26,0.5692312);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(27,0.800654);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(28,0.5449155);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(29,0.255359);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(30,1.380811);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(31,0.8113754);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(32,0.5691269);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(33,0.5413543);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(34,0.8206905);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(35,0.8009812);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(36,1.638313);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(37,0.5119928);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(38,0.5470206);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(39,0.2632244);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(40,0.5108837);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(41,16.48349);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(7,0.3629579);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(8,0.6348007);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(9,0.6943283);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(10,0.9893128);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(11,0.7487224);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(12,0.3291904);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(13,0.2586989);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(14,0.255305);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(15,0.5343248);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(16,0.2899459);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(17,0.5379589);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(18,0.3707353);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(19,0.5259096);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(20,0.2638274);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(21,0.2779976);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(22,0.6115999);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(23,0.461346);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(24,0.3760476);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(25,0.2665388);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(26,0.4026161);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(27,0.4634585);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(28,0.3862702);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(29,0.255359);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(30,0.6180485);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(31,0.4689186);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(32,0.402559);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(33,0.3833872);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(34,0.4743961);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(35,0.4629587);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(36,0.6697313);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(37,0.3620984);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(38,0.3876528);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(39,0.2632244);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(40,0.3612626);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(41,2.084809);
   VbbHcc_tags_Z_mass_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_9 = new TH1D("VbbHcc_tags_Z_mass_stack_9","",40,0,400);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(4,0.03400273);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(5,0.09217317);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(6,0.2436723);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(7,0.3336873);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(8,0.8968871);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(9,1.905085);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(10,2.346468);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(11,1.752207);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(12,1.583932);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(13,1.721257);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(14,1.339323);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(15,0.9352789);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(16,0.5924137);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(17,0.5356771);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(18,0.426673);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(19,0.3892685);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(20,0.4056577);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(21,0.3658083);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(22,0.3810707);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(23,0.3991504);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(24,0.4135706);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(25,0.3834285);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(26,0.4312878);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(27,0.4339648);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(28,0.418597);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(29,0.4386137);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(30,0.4384051);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(31,0.4070315);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(32,0.435489);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(33,0.4482526);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(34,0.4162514);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(35,0.4461201);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(36,0.464258);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(37,0.4682136);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(38,0.4375184);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(39,0.3782837);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(40,0.421597);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(41,16.48625);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(4,0.007121014);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(5,0.01175219);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(6,0.01920186);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(7,0.02287204);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(8,0.03737907);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(9,0.05420868);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(10,0.06056779);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(11,0.05210236);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(12,0.04970184);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(13,0.05175042);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(14,0.04529779);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(15,0.03794484);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(16,0.0303444);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(17,0.02843916);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(18,0.02551791);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(19,0.02440005);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(20,0.02496775);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(21,0.02387948);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(22,0.0244264);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(23,0.02466555);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(24,0.02551667);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(25,0.02456256);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(26,0.02597424);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(27,0.02581357);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(28,0.02549614);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(29,0.02612482);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(30,0.02602968);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(31,0.02547758);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(32,0.02590842);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(33,0.02645176);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(34,0.02543886);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(35,0.02668315);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(36,0.0271657);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(37,0.02674866);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(38,0.02593591);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(39,0.02467458);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(40,0.02525372);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(41,0.16018);
   VbbHcc_tags_Z_mass_stack_9->SetEntries(28234);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_10 = new TH1D("VbbHcc_tags_Z_mass_stack_10","",40,0,400);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(3,0.0004171548);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(4,0.01108648);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(5,0.03420177);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(6,0.08532189);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(7,0.1720422);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(8,0.3965361);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(9,0.8473417);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(10,1.088249);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(11,0.8360961);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(12,0.8170178);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(13,0.8137078);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(14,0.6625837);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(15,0.4490135);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(16,0.3313723);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(17,0.2839423);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(18,0.2417004);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(19,0.2577837);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(20,0.2347353);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(21,0.2195028);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(22,0.2326);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(23,0.2331099);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(24,0.2029611);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(25,0.2287497);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(26,0.2181888);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(27,0.2285151);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(28,0.2130303);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(29,0.227403);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(30,0.214934);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(31,0.219787);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(32,0.2201052);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(33,0.2150408);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(34,0.2054033);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(35,0.2003676);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(36,0.1943089);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(37,0.1959259);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(38,0.1893193);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(39,0.2061383);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(40,0.1809401);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(41,6.887167);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(3,0.0004171548);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(4,0.002099942);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(5,0.003645223);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(6,0.005750323);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(7,0.008135233);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(8,0.0123814);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(9,0.01813339);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(10,0.02052076);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(11,0.01796595);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(12,0.01777184);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(13,0.01776424);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(14,0.01602277);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(15,0.01316749);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(16,0.01132816);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(17,0.01045932);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(18,0.009695399);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(19,0.01001271);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(20,0.009499878);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(21,0.009240753);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(22,0.009496977);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(23,0.009492018);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(24,0.008852573);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(25,0.009395554);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(26,0.009201204);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(27,0.009423865);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(28,0.009090559);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(29,0.009378319);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(30,0.009117478);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(31,0.009253695);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(32,0.009266093);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(33,0.009110666);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(34,0.008910737);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(35,0.008802492);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(36,0.008681257);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(37,0.008706341);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(38,0.008581021);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(39,0.00893727);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(40,0.008393857);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(41,0.05165704);
   VbbHcc_tags_Z_mass_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_11 = new TH1D("VbbHcc_tags_Z_mass_stack_11","",40,0,400);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.006107201);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.0146891);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.01666369);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.002944518);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(12,0.002869457);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(13,0.008764532);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.002821306);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(16,0.003126194);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.002965507);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.002933425);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.002942707);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(27,0.002817849);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(29,0.002862625);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.03218806);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.004326308);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.006581001);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.00684717);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.002944518);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(12,0.002869457);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(13,0.005061218);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.002821306);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(16,0.003126194);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.002965507);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.002933425);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002942707);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(27,0.002817849);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(29,0.002862625);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.009721648);
   VbbHcc_tags_Z_mass_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_12 = new TH1D("VbbHcc_tags_Z_mass_stack_12","",40,0,400);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(5,0.0003838296);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(6,0.0003800229);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(8,0.002932515);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(9,0.007847777);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(10,0.006766586);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(11,0.002289361);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(12,0.003146501);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(13,0.0003800229);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(15,0.0007596122);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(17,0.0003747978);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(18,0.0004180535);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(19,0.0007623307);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(22,0.0007523317);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(23,0.0003608685);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(24,0.0002937382);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(26,0.0003599172);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(28,0.0003223444);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(29,0.000383191);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(31,0.0007808673);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(33,0.0003642893);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(34,0.0003886958);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(35,0.0004284568);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(36,0.0007294224);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(38,0.0003777023);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(40,0.0003867205);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(41,0.01569265);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(5,0.0003838296);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(6,0.0003800229);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(8,0.001044528);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(9,0.00175739);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(10,0.001575545);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(11,0.0009359989);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(12,0.001114121);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(13,0.0003800229);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(15,0.0005373711);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(17,0.0003747978);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(18,0.0004180535);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(19,0.0005391244);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(22,0.0005319807);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(23,0.0003608685);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(24,0.0002937382);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(26,0.0003599172);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(28,0.0003223444);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(29,0.000383191);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(31,0.0005527391);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(33,0.0003642893);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(34,0.0003886958);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(35,0.0004284568);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(36,0.0005171315);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(38,0.0003777023);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(40,0.0003867205);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(41,0.002459639);
   VbbHcc_tags_Z_mass_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_mass__1 = new TH1D("VbbHcc_tags_Z_mass__1","",40,0,400);
   VbbHcc_tags_Z_mass__1->SetBinContent(3,23);
   VbbHcc_tags_Z_mass__1->SetBinContent(4,426);
   VbbHcc_tags_Z_mass__1->SetBinContent(5,1545);
   VbbHcc_tags_Z_mass__1->SetBinContent(6,2522);
   VbbHcc_tags_Z_mass__1->SetBinContent(7,2875);
   VbbHcc_tags_Z_mass__1->SetBinContent(15,2076);
   VbbHcc_tags_Z_mass__1->SetBinContent(16,1951);
   VbbHcc_tags_Z_mass__1->SetBinContent(17,1964);
   VbbHcc_tags_Z_mass__1->SetBinContent(18,1795);
   VbbHcc_tags_Z_mass__1->SetBinContent(19,1723);
   VbbHcc_tags_Z_mass__1->SetBinContent(20,1643);
   VbbHcc_tags_Z_mass__1->SetBinContent(21,1610);
   VbbHcc_tags_Z_mass__1->SetBinContent(22,1511);
   VbbHcc_tags_Z_mass__1->SetBinContent(23,1383);
   VbbHcc_tags_Z_mass__1->SetBinContent(24,1379);
   VbbHcc_tags_Z_mass__1->SetBinContent(25,1318);
   VbbHcc_tags_Z_mass__1->SetBinContent(26,1293);
   VbbHcc_tags_Z_mass__1->SetBinContent(27,1348);
   VbbHcc_tags_Z_mass__1->SetBinContent(28,1147);
   VbbHcc_tags_Z_mass__1->SetBinContent(29,1152);
   VbbHcc_tags_Z_mass__1->SetBinContent(30,1162);
   VbbHcc_tags_Z_mass__1->SetBinContent(31,1026);
   VbbHcc_tags_Z_mass__1->SetBinContent(32,1086);
   VbbHcc_tags_Z_mass__1->SetBinContent(33,1011);
   VbbHcc_tags_Z_mass__1->SetBinContent(34,1023);
   VbbHcc_tags_Z_mass__1->SetBinContent(35,1011);
   VbbHcc_tags_Z_mass__1->SetBinContent(36,973);
   VbbHcc_tags_Z_mass__1->SetBinContent(37,953);
   VbbHcc_tags_Z_mass__1->SetBinContent(38,957);
   VbbHcc_tags_Z_mass__1->SetBinContent(39,893);
   VbbHcc_tags_Z_mass__1->SetBinContent(40,870);
   VbbHcc_tags_Z_mass__1->SetBinContent(41,37604);
   VbbHcc_tags_Z_mass__1->SetEntries(97224);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass__1->SetLineColor(ci);
   VbbHcc_tags_Z_mass__1->SetLineWidth(2);
   VbbHcc_tags_Z_mass__1->SetMarkerStyle(20);
   VbbHcc_tags_Z_mass__1->SetMarkerSize(1.2);
   VbbHcc_tags_Z_mass__1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass__1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass__1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__1->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_mass_fx1001[40] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_mass_fy1001[40] = {
   0,
   0,
   9.673606,
   1587.139,
   3903.799,
   5442.754,
   7931.403,
   5379.937,
   5218.459,
   3245.266,
   4510.521,
   5709.291,
   2450.144,
   8827.834,
   4661.794,
   2503.749,
   2437.235,
   4040.484,
   3099.658,
   4529.911,
   3967.845,
   4174.881,
   3281.562,
   1961.221,
   2762.11,
   4267.722,
   1839.283,
   2057.876,
   1690.291,
   3716.325,
   2530.602,
   2118.191,
   1154.821,
   2505.275,
   2262.021,
   1660.688,
   1981.146,
   1895.31,
   2596.06,
   1932.946};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fex1001[40] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_mass_fey1001[40] = {
   0,
   0,
   6.254794,
   610.5897,
   858.9721,
   1084.826,
   1990.621,
   931.2432,
   925.3212,
   586.8789,
   887.3967,
   1894.532,
   459.8817,
   2828.663,
   944.0977,
   542.0336,
   507.5561,
   882.63,
   722.477,
   1843.943,
   1655.205,
   1667.496,
   1691.452,
   523.0695,
   706.2281,
   1840.229,
   487.7155,
   615.4572,
   457.9587,
   1715.064,
   648.9795,
   599.7541,
   281.023,
   717.4082,
   666.2537,
   523.9894,
   602.1223,
   573.1124,
   727.6318,
   597.1335};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_Z_mass_fx1001,Graph_from_VbbHcc_tags_Z_mass_fy1001,Graph_from_VbbHcc_tags_Z_mass_fex1001,Graph_from_VbbHcc_tags_Z_mass_fey1001);
   gre->SetName("Graph_from_VbbHcc_tags_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_mass1001 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_mass1001","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->SetMinimum(12.82215);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->SetMaximum(12822.15);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_mass1001);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_mass","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__2 = new TH1D("data_mc_ratio__2","",40,0,400);
   data_mc_ratio__2->SetBinContent(3,2.377604);
   data_mc_ratio__2->SetBinContent(4,0.2684075);
   data_mc_ratio__2->SetBinContent(5,0.3957683);
   data_mc_ratio__2->SetBinContent(6,0.4633684);
   data_mc_ratio__2->SetBinContent(7,0.3624832);
   data_mc_ratio__2->SetBinContent(8,0.5397833);
   data_mc_ratio__2->SetBinContent(9,0.5451801);
   data_mc_ratio__2->SetBinContent(10,0.8227368);
   data_mc_ratio__2->SetBinContent(11,0.5609108);
   data_mc_ratio__2->SetBinContent(12,0.4249214);
   data_mc_ratio__2->SetBinContent(13,0.9599437);
   data_mc_ratio__2->SetBinContent(14,0.2497781);
   data_mc_ratio__2->SetBinContent(15,0.4453221);
   data_mc_ratio__2->SetBinContent(16,0.7792315);
   data_mc_ratio__2->SetBinContent(17,0.8058311);
   data_mc_ratio__2->SetBinContent(18,0.4442537);
   data_mc_ratio__2->SetBinContent(19,0.5558678);
   data_mc_ratio__2->SetBinContent(20,0.3627003);
   data_mc_ratio__2->SetBinContent(21,0.4057618);
   data_mc_ratio__2->SetBinContent(22,0.3619264);
   data_mc_ratio__2->SetBinContent(23,0.4214456);
   data_mc_ratio__2->SetBinContent(24,0.7031335);
   data_mc_ratio__2->SetBinContent(25,0.4771714);
   data_mc_ratio__2->SetBinContent(26,0.302972);
   data_mc_ratio__2->SetBinContent(27,0.7328944);
   data_mc_ratio__2->SetBinContent(28,0.5573707);
   data_mc_ratio__2->SetBinContent(29,0.6815393);
   data_mc_ratio__2->SetBinContent(30,0.3126745);
   data_mc_ratio__2->SetBinContent(31,0.4054372);
   data_mc_ratio__2->SetBinContent(32,0.5127017);
   data_mc_ratio__2->SetBinContent(33,0.8754601);
   data_mc_ratio__2->SetBinContent(34,0.4083384);
   data_mc_ratio__2->SetBinContent(35,0.4469456);
   data_mc_ratio__2->SetBinContent(36,0.5859018);
   data_mc_ratio__2->SetBinContent(37,0.4810348);
   data_mc_ratio__2->SetBinContent(38,0.5049305);
   data_mc_ratio__2->SetBinContent(39,0.3439828);
   data_mc_ratio__2->SetBinContent(40,0.4500902);
   data_mc_ratio__2->SetBinContent(41,0.5030131);
   data_mc_ratio__2->SetBinError(3,0.4957646);
   data_mc_ratio__2->SetBinError(4,0.01300439);
   data_mc_ratio__2->SetBinError(5,0.01006878);
   data_mc_ratio__2->SetBinError(6,0.009226859);
   data_mc_ratio__2->SetBinError(7,0.006760346);
   data_mc_ratio__2->SetBinError(8,0.01001662);
   data_mc_ratio__2->SetBinError(9,0.01022113);
   data_mc_ratio__2->SetBinError(10,0.01592228);
   data_mc_ratio__2->SetBinError(11,0.01115151);
   data_mc_ratio__2->SetBinError(12,0.008627068);
   data_mc_ratio__2->SetBinError(13,0.0197937);
   data_mc_ratio__2->SetBinError(14,0.005319247);
   data_mc_ratio__2->SetBinError(15,0.009773736);
   data_mc_ratio__2->SetBinError(16,0.0176416);
   data_mc_ratio__2->SetBinError(17,0.01818332);
   data_mc_ratio__2->SetBinError(18,0.01048573);
   data_mc_ratio__2->SetBinError(19,0.01339149);
   data_mc_ratio__2->SetBinError(20,0.008948065);
   data_mc_ratio__2->SetBinError(21,0.01011249);
   data_mc_ratio__2->SetBinError(22,0.009310823);
   data_mc_ratio__2->SetBinError(23,0.01133262);
   data_mc_ratio__2->SetBinError(24,0.01893458);
   data_mc_ratio__2->SetBinError(25,0.01314367);
   data_mc_ratio__2->SetBinError(26,0.008425645);
   data_mc_ratio__2->SetBinError(27,0.01996165);
   data_mc_ratio__2->SetBinError(28,0.01645745);
   data_mc_ratio__2->SetBinError(29,0.02008004);
   data_mc_ratio__2->SetBinError(30,0.009172536);
   data_mc_ratio__2->SetBinError(31,0.01265756);
   data_mc_ratio__2->SetBinError(32,0.01555786);
   data_mc_ratio__2->SetBinError(33,0.02753346);
   data_mc_ratio__2->SetBinError(34,0.01276681);
   data_mc_ratio__2->SetBinError(35,0.01405656);
   data_mc_ratio__2->SetBinError(36,0.01878315);
   data_mc_ratio__2->SetBinError(37,0.01558224);
   data_mc_ratio__2->SetBinError(38,0.01632209);
   data_mc_ratio__2->SetBinError(39,0.01151095);
   data_mc_ratio__2->SetBinError(40,0.01525949);
   data_mc_ratio__2->SetBinError(41,0.03119419);
   data_mc_ratio__2->SetMinimum(0.4);
   data_mc_ratio__2->SetMaximum(1.6);
   data_mc_ratio__2->SetEntries(134.8556);
   data_mc_ratio__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__2->SetLineColor(ci);
   data_mc_ratio__2->SetLineWidth(2);
   data_mc_ratio__2->SetMarkerStyle(20);
   data_mc_ratio__2->SetMarkerSize(1.2);
   data_mc_ratio__2->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__2->GetXaxis()->SetRange(1,30);
   data_mc_ratio__2->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__2->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__2->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__2->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__2->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__2->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__2->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__2->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__2->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__2->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__2->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__2->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__2->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__2->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1002[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1002[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1002[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1002[40] = {
   0,
   0,
   0.6465835,
   0.384711,
   0.2200349,
   0.1993157,
   0.2509797,
   0.1730956,
   0.177317,
   0.1808415,
   0.1967393,
   0.3318331,
   0.1876958,
   0.3204255,
   0.2025181,
   0.2164888,
   0.2082508,
   0.2184466,
   0.2330828,
   0.4070594,
   0.4171548,
   0.3994115,
   0.5154412,
   0.2667061,
   0.2556843,
   0.4311971,
   0.2651662,
   0.2990739,
   0.2709348,
   0.4614948,
   0.2564526,
   0.2831445,
   0.2433476,
   0.2863591,
   0.2945392,
   0.3155255,
   0.3039263,
   0.3023845,
   0.2802832,
   0.3089241};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1002,Graph_from_mc_statistical_error_fy1002,Graph_from_mc_statistical_error_fex1002,Graph_from_mc_statistical_error_fey1002);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1002 = new TH1F("Graph_Graph_from_mc_statistical_error1002","",100,0,440);
   Graph_Graph_from_mc_statistical_error1002->SetMinimum(0.2240998);
   Graph_Graph_from_mc_statistical_error1002->SetMaximum(1.7759);
   Graph_Graph_from_mc_statistical_error1002->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1002->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1002);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tags_16->cd();
   Z_mass_tags_16->Modified();
   Z_mass_tags_16->cd();
   Z_mass_tags_16->SetSelected(Z_mass_tags_16);
}
