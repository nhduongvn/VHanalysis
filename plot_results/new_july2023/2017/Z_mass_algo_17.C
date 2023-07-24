void Z_mass_algo_17()
{
//=========Macro generated from canvas: Z_mass_algo_17/Z_mass_algo_17
//=========  (Mon Jul 24 10:11:34 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_algo_17 = new TCanvas("Z_mass_algo_17", "Z_mass_algo_17",0,0,600,600);
   Z_mass_algo_17->SetHighLightColor(2);
   Z_mass_algo_17->Range(0,0,1,1);
   Z_mass_algo_17->SetFillColor(0);
   Z_mass_algo_17->SetFillStyle(4000);
   Z_mass_algo_17->SetBorderMode(0);
   Z_mass_algo_17->SetBorderSize(2);
   Z_mass_algo_17->SetFrameFillStyle(1000);
   Z_mass_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-32.28123,315.7258,32258.94);
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
   st->SetMaximum(27647.45);
   
   TH1F *st_stack_98 = new TH1F("st_stack_98","",40,0,400);
   st_stack_98->SetMinimum(0.01);
   st_stack_98->SetMaximum(29029.82);
   st_stack_98->SetDirectory(0);
   st_stack_98->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_98->SetLineColor(ci);
   st_stack_98->GetXaxis()->SetRange(1,30);
   st_stack_98->GetXaxis()->SetLabelFont(42);
   st_stack_98->GetXaxis()->SetLabelSize(0.035);
   st_stack_98->GetXaxis()->SetTitleSize(0.035);
   st_stack_98->GetXaxis()->SetTitleFont(42);
   st_stack_98->GetYaxis()->SetTitle("Events/10.0");
   st_stack_98->GetYaxis()->SetLabelFont(42);
   st_stack_98->GetYaxis()->SetLabelSize(0.05);
   st_stack_98->GetYaxis()->SetTitleSize(0.057);
   st_stack_98->GetYaxis()->SetTitleOffset(1.2);
   st_stack_98->GetYaxis()->SetTitleFont(42);
   st_stack_98->GetZaxis()->SetLabelFont(42);
   st_stack_98->GetZaxis()->SetLabelSize(0.035);
   st_stack_98->GetZaxis()->SetTitleSize(0.035);
   st_stack_98->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_98);
   
   
   TH1D *VbbHcc_algo_Z_mass_stack_1 = new TH1D("VbbHcc_algo_Z_mass_stack_1","",40,0,400);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(4,578.6484);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(5,3106.744);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(6,6142.951);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(7,12081.17);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(8,11862.98);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(9,9924.484);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(10,9945.643);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(11,7150.466);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(12,9614.246);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(13,6607.206);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(14,7346.723);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(15,8801.673);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(16,5192.898);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(17,4890.618);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(18,3514.712);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(19,3952.262);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(20,2991.871);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(21,3168.277);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(22,2815.94);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(23,2203.013);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(24,2657.489);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(25,2125.611);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(26,3018.47);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(27,2124.398);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(28,2333.197);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(29,1774.915);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(30,820.4863);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(31,985.664);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(32,1047.474);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(33,1803.8);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(34,2740.773);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(35,1110.798);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(36,686.5669);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(37,1668.832);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(38,1310.1);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(39,624.8343);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(40,819.7074);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(41,33169.16);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(4,408.6619);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(5,879.3452);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(6,1152.376);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(7,1673.58);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(8,1580.317);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(9,1282.876);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(10,1407.045);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(11,980.7465);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(12,1998.847);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(13,933.7011);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(14,1094.177);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(15,2256.377);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(16,838.0539);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(17,897.4199);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(18,629.7045);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(19,698.3182);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(20,612.2384);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(21,675.3832);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(22,635.6842);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(23,425.4351);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(24,600.8763);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(25,464.1117);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(26,701.5466);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(27,625.9001);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(28,555.3049);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(29,524.5556);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(30,100.6291);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(31,111.7972);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(32,331.5523);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(33,597.3826);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(34,1562.196);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(35,295.1923);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(36,310.0707);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(37,495.3588);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(38,455.3909);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(39,89.86208);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(40,323.8709);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(41,2016.651);
   VbbHcc_algo_Z_mass_stack_1->SetEntries(13510);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_2 = new TH1D("VbbHcc_algo_Z_mass_stack_2","",40,0,400);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(4,0.8183988);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(5,5.659685);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(6,13.9234);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(7,23.87293);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(8,29.5711);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(9,36.53865);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(10,44.61099);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(11,55.36885);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(12,54.40908);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(13,56.08641);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(14,53.29779);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(15,57.24892);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(16,51.17311);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(17,39.75416);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(18,38.96146);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(19,39.49173);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(20,33.15369);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(21,34.41844);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(22,30.49133);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(23,28.19552);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(24,27.18856);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(25,23.96893);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(26,23.0739);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(27,18.64482);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(28,20.33589);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(29,17.44779);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(30,17.71676);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(31,16.66637);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(32,15.04521);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(33,13.97995);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(34,14.67546);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(35,17.24142);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(36,14.51856);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(37,10.23722);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(38,9.17682);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(39,11.83722);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(40,10.50646);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(41,413.1733);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(4,0.3935021);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(5,1.049829);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(6,1.504563);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(7,2.198154);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(8,2.341254);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(9,2.643847);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(10,2.891064);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(11,3.259373);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(12,3.224001);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(13,3.250132);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(14,3.128724);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(15,3.260311);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(16,3.05462);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(17,2.52961);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(18,2.681571);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(19,2.73144);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(20,2.418076);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(21,2.523788);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(22,2.267389);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(23,2.301303);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(24,2.202293);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(25,2.066724);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(26,2.029363);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(27,1.682968);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(28,1.92164);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(29,1.721302);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(30,1.833524);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(31,1.668896);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(32,1.623796);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(33,1.587416);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(34,1.502627);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(35,1.960918);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(36,1.614442);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(37,1.291815);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(38,1.197286);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(39,1.420148);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(40,1.36626);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(41,8.567184);
   VbbHcc_algo_Z_mass_stack_2->SetEntries(19837);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_3 = new TH1D("VbbHcc_algo_Z_mass_stack_3","",40,0,400);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(3,0.1476203);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(4,10.22712);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(5,65.35941);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(6,150.5117);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(7,252.3902);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(8,375.8756);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(9,495.952);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(10,621.066);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(11,680.1417);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(12,733.0638);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(13,737.57);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(14,705.6826);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(15,653.5181);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(16,594.3413);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(17,537.7542);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(18,481.2799);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(19,434.1108);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(20,390.0345);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(21,354.9584);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(22,324.8512);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(23,303.6048);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(24,273.997);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(25,267.1567);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(26,237.9915);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(27,232.0567);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(28,209.4701);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(29,200.5255);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(30,187.0434);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(31,172.0864);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(32,166.9925);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(33,158.2187);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(34,149.3013);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(35,147.6084);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(36,132.904);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(37,134.202);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(38,125.5581);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(39,118.0027);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(40,115.2704);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(41,4752.243);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(3,0.08743412);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(4,0.8688562);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(5,2.130169);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(6,3.275452);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(7,4.275649);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(8,5.304833);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(9,6.080594);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(10,6.839849);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(11,7.149564);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(12,7.449004);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(13,7.465516);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(14,7.281217);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(15,6.978941);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(16,6.648865);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(17,6.29665);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(18,5.94012);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(19,5.637626);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(20,5.297232);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(21,5.050545);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(22,4.837149);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(23,4.668866);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(24,4.412496);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(25,4.357688);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(26,4.110847);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(27,4.051967);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(28,3.848108);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(29,3.765643);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(30,3.62679);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(31,3.497586);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(32,3.444305);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(33,3.370665);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(34,3.259066);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(35,3.242838);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(36,3.081661);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(37,3.103787);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(38,2.997591);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(39,2.901636);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(40,2.855769);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(41,18.60777);
   VbbHcc_algo_Z_mass_stack_3->SetEntries(257832);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_4 = new TH1D("VbbHcc_algo_Z_mass_stack_4","",40,0,400);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(4,3.316609);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(5,7.723129);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(6,25.83354);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(7,34.67174);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(8,74.73697);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(9,157.7336);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(10,191.4576);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(11,128.1918);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(12,76.30746);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(13,35.56829);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(14,47.41124);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(15,36.90477);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(16,32.72438);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(17,37.86728);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(18,29.04275);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(19,19.80494);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(20,18.03879);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(21,22.69622);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(22,15.97386);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(23,17.50548);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(24,15.31107);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(25,14.89034);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(26,15.14502);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(27,10.96723);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(28,8.523603);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(29,7.766817);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(30,9.317083);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(31,9.414825);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(32,11.3478);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(33,6.464322);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(34,6.180034);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(35,8.212759);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(36,6.253602);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(37,7.202529);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(38,4.385663);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(39,4.962027);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(40,4.382585);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(41,239.6504);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(4,2.968651);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(5,1.763055);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(6,5.316608);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(7,5.796824);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(8,8.732161);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(9,10.69836);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(10,11.62636);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(11,9.374067);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(12,8.701779);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(13,4.379752);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(14,7.624994);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(15,6.17649);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(16,3.021252);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(17,8.164069);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(18,3.826969);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(19,2.179118);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(20,2.074195);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(21,4.019807);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(22,3.065682);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(23,3.083214);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(24,1.814066);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(25,3.675156);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(26,1.976879);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(27,1.574397);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(28,1.354352);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(29,1.192525);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(30,1.503309);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(31,1.490836);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(32,3.288371);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(33,1.031614);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(34,0.9935891);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(35,1.287225);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(36,1.055778);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(37,1.150084);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(38,0.8496384);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(39,0.8636875);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(40,0.887098);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(41,7.853388);
   VbbHcc_algo_Z_mass_stack_4->SetEntries(8463);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_5 = new TH1D("VbbHcc_algo_Z_mass_stack_5","",40,0,400);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(4,0.1335962);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(5,10.0141);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(6,25.84277);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(7,46.92339);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(8,48.63997);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(9,40.15948);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(10,35.3303);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(11,40.7969);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(12,25.3775);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(13,25.70499);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(14,31.59582);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(15,22.14704);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(16,21.23037);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(17,15.47139);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(18,14.27681);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(19,14.71623);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(20,12.98482);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(21,12.34742);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(22,8.772586);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(23,8.178725);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(24,6.797501);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(25,7.121358);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(26,7.679657);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(27,5.239402);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(28,4.354521);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(29,6.418997);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(30,7.965653);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(31,5.142005);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(32,3.651994);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(33,2.27943);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(34,4.07004);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(35,6.043858);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(36,6.049213);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(37,10.29446);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(38,3.826831);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(39,2.094165);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(40,2.41142);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(41,165.0629);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(4,0.09713256);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(5,3.325933);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(6,8.535359);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(7,8.876098);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(8,10.26513);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(9,6.092025);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(10,5.166281);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(11,5.787791);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(12,4.065068);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(13,4.186274);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(14,4.948043);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(15,3.649418);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(16,4.007656);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(17,2.944532);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(18,2.82297);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(19,3.272894);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(20,2.600334);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(21,2.334424);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(22,1.885706);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(23,2.053697);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(24,0.9919952);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(25,1.595959);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(26,1.303711);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(27,0.9520879);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(28,1.808305);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(29,1.960207);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(30,2.38848);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(31,1.863181);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(32,1.274144);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(33,0.5502035);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(34,1.35882);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(35,1.928822);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(36,2.245296);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(37,5.872172);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(38,1.622849);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(39,0.4893678);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(40,0.6204615);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(41,18.21519);
   VbbHcc_algo_Z_mass_stack_5->SetEntries(3604);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_6 = new TH1D("VbbHcc_algo_Z_mass_stack_6","",40,0,400);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(7,0.2569566);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(8,0.4246473);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(9,0.1832796);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(10,0.4448404);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(14,0.1723813);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(16,0.2090628);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(17,0.2503705);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(20,0.4809264);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(21,0.249543);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(35,0.1527423);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(36,0.2358588);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(37,0.2494577);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(41,1.553871);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(7,0.2569566);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(8,0.3066541);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(9,0.1832796);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(10,0.3146236);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(14,0.1723813);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(16,0.2090628);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(17,0.2503705);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(20,0.3402351);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(21,0.249543);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(35,0.1527423);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(36,0.2358588);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(37,0.2494577);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(41,0.6140005);
   VbbHcc_algo_Z_mass_stack_6->SetEntries(22);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_7 = new TH1D("VbbHcc_algo_Z_mass_stack_7","",40,0,400);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(6,0.3657877);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(7,0.9946726);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(8,2.025947);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(9,3.226042);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(10,4.382248);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(11,2.119588);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(12,0.5463167);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(13,0.4623881);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(14,0.4886709);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(15,0.2170008);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(16,0.1247336);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(22,0.1773891);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(23,0.1697829);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(27,0.1745527);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(30,0.182755);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(32,0.1080167);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(41,1.979333);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(6,0.2453822);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(7,0.4083409);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(8,0.5871176);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(9,0.7324508);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(10,0.8854463);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(11,0.6181313);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(12,0.2797663);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(13,0.2755754);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(14,0.2868111);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(15,0.2170008);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(16,0.1247336);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(22,0.1773891);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(23,0.1697829);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(27,0.1745527);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(30,0.182755);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(32,0.1080167);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(41,0.6023663);
   VbbHcc_algo_Z_mass_stack_7->SetEntries(106);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_8 = new TH1D("VbbHcc_algo_Z_mass_stack_8","",40,0,400);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(6,0.3382628);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(7,0.8437505);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(8,2.327555);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(9,2.700522);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(10,4.01832);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(11,1.411317);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(12,0.6975559);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(13,0.463811);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(14,0.7102842);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(15,0.2380403);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(16,0.2337005);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(17,0.2170245);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(19,0.2374651);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(21,0.2674509);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(23,0.4203369);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(24,0.2184959);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(26,0.1937502);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(27,0.1957738);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(29,0.2072259);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(36,0.1620239);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(41,2.044034);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(6,0.241722);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(7,0.4276861);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(8,0.7045513);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(9,0.7610838);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(10,0.9342578);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(11,0.5845293);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(12,0.4027859);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(13,0.3279998);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(14,0.4100865);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(15,0.2380403);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(16,0.2337005);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(17,0.2170245);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(19,0.2374651);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(21,0.2674509);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(23,0.2981214);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(24,0.2184959);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(26,0.1937502);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(27,0.1957738);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(29,0.2072259);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(36,0.1620239);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(41,0.661786);
   VbbHcc_algo_Z_mass_stack_8->SetEntries(86);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_9 = new TH1D("VbbHcc_algo_Z_mass_stack_9","",40,0,400);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(4,0.001659861);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(5,0.02198868);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(6,0.06205158);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(7,0.1407384);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(8,0.2330537);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(9,0.514083);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(10,0.767083);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(11,1.167606);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(12,1.267481);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(13,1.159913);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(14,0.8174013);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(15,0.4154932);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(16,0.1808839);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(17,0.1653345);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(18,0.1089505);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(19,0.0816985);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(20,0.09751409);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(21,0.05199556);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(22,0.0786248);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(23,0.05163829);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(24,0.05899848);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(25,0.04003824);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(26,0.02836172);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(27,0.05561205);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(28,0.05080265);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(29,0.0409604);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(30,0.0281026);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(31,0.03576477);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(32,0.03055566);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(33,0.02629392);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(34,0.03952287);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(35,0.03084232);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(36,0.03466989);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(37,0.01774841);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(38,0.02216544);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(39,0.02910574);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(40,0.03208867);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(41,1.687247);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(4,0.001659861);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(5,0.006253984);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(6,0.01049835);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(7,0.01672191);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(8,0.02160459);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(9,0.03219959);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(10,0.03936322);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(11,0.04789123);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(12,0.04977258);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(13,0.04814773);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(14,0.03974842);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(15,0.02801941);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(16,0.01824831);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(17,0.0174681);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(18,0.01432049);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(19,0.01221928);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(20,0.01356038);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(21,0.009683396);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(22,0.01231807);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(23,0.009692944);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(24,0.01034546);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(25,0.008449158);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(26,0.007122625);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(27,0.01013399);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(28,0.01052848);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(29,0.008622525);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(30,0.006977568);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(31,0.008149943);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(32,0.0075163);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(33,0.006913262);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(34,0.008611492);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(35,0.00807636);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(36,0.00811295);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(37,0.005701662);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(38,0.006431267);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(39,0.007225726);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(40,0.007886413);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(41,0.05688745);
   VbbHcc_algo_Z_mass_stack_9->SetEntries(5585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_10 = new TH1D("VbbHcc_algo_Z_mass_stack_10","",40,0,400);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(4,0.001887846);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(5,0.01402054);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(6,0.03190826);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(7,0.08035465);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(8,0.195897);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(9,0.3778003);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(10,0.5452824);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(11,0.6790653);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(12,0.8077733);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(13,0.7515942);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(14,0.5032507);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(15,0.2737719);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(16,0.1525196);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(17,0.1120531);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(18,0.08492138);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(19,0.07716309);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(20,0.0690216);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(21,0.06696025);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(22,0.06662968);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(23,0.06520587);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(24,0.06196882);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(25,0.06032567);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(26,0.04805312);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(27,0.05399195);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(28,0.04719947);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(29,0.05498232);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(30,0.04720045);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(31,0.0392347);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(32,0.03980715);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(33,0.03235123);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(34,0.03414565);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(35,0.03773231);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(36,0.03889731);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(37,0.02848867);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(38,0.0241421);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(39,0.01674636);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(40,0.03350968);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(41,1.377465);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(4,0.0009458587);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(5,0.002522067);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(6,0.003740855);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(7,0.006004032);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(8,0.009304244);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(9,0.01297707);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(10,0.01557882);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(11,0.0173856);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(12,0.01896282);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(13,0.01826546);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(14,0.01496874);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(15,0.01099598);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(16,0.008229996);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(17,0.007044641);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(18,0.006074474);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(19,0.005843404);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(20,0.005529298);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(21,0.005434725);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(22,0.005387199);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(23,0.005296493);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(24,0.005242598);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(25,0.00515008);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(26,0.004556137);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(27,0.004871293);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(28,0.004563814);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(29,0.004905993);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(30,0.00456132);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(31,0.004149565);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(32,0.004185194);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(33,0.003794899);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(34,0.003871323);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(35,0.004115603);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(36,0.004121128);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(37,0.003461227);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(38,0.003291776);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(39,0.002698629);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(40,0.003842924);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(41,0.02469568);
   VbbHcc_algo_Z_mass_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_11 = new TH1D("VbbHcc_algo_Z_mass_stack_11","",40,0,400);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(6,0.002006407);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(7,-0.000335591);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(8,0.03462477);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(9,0.1177391);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(10,0.1155101);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(11,0.06009662);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(12,0.01703292);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(13,0.009499986);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(14,0.001848652);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(15,0.008858254);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(16,0.004978788);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(17,0.001658231);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(18,0.003362852);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(19,0.004725742);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(20,0.001894827);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(21,0.001639841);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(22,0.001991154);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(23,0.001414974);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(26,0.001245676);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(27,0.001991154);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(28,0.003439846);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(31,0.003509258);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(32,0.001245676);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(34,0.001441091);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(35,0.00175958);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(36,0.003023589);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(37,0.003929003);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(40,0.001968946);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(41,0.05100313);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(6,0.002006407);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(7,0.002188879);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(8,0.007866041);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(9,0.01535951);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(10,0.01513406);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(11,0.01054772);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(12,0.005592327);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(13,0.004413876);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(14,0.001848652);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(15,0.003995867);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(16,0.002913296);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(17,0.001658231);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(18,0.002402064);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(19,0.002776031);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(20,0.001894827);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(21,0.001639841);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(22,0.001991154);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(23,0.001414974);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(26,0.001245676);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(27,0.001991154);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(28,0.002432567);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(31,0.002501666);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(32,0.001245676);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(34,0.001441091);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(35,0.00175958);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(36,0.002309631);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(37,0.002778617);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(40,0.001968946);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(41,0.009576881);
   VbbHcc_algo_Z_mass_stack_11->SetEntries(279);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_12 = new TH1D("VbbHcc_algo_Z_mass_stack_12","",40,0,400);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(6,0.001777072);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(7,0.006060044);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(8,0.01557001);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(9,0.03682069);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(10,0.04904719);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(11,0.02824452);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(12,0.007301983);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(13,0.003018531);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(14,0.003556588);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(15,0.002100602);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(16,0.000164728);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(17,0.001489661);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(18,0.001096762);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(19,0.001711137);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(20,0.0002468799);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(21,0.0005089594);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(22,0.001759012);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(24,0.001220393);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(25,0.00101221);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(27,0.0001631598);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(29,0.0006285843);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(30,0.0009338918);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(31,0.0002597042);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(32,0.0006340083);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(33,0.0006331264);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(34,0.0004525257);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(35,0.0004849273);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(36,0.0006988916);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(37,0.0002618999);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(38,0.0001971885);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(39,0.0002137899);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(41,0.01983463);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(6,0.0006130083);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(7,0.001231934);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(8,0.001956401);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(9,0.002946605);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(10,0.003411584);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(11,0.002609782);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(12,0.001349354);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(13,0.0008491319);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(14,0.0009270668);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(15,0.0007441218);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(16,0.000164728);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(17,0.0006136038);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(18,0.0005046154);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(19,0.0006517458);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(20,0.0002468799);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(21,0.0003600859);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(22,0.0006700861);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(24,0.0005472772);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(25,0.0005065148);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(27,0.0001631598);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(29,0.0003638778);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(30,0.0004720966);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(31,0.0002597042);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(32,0.0003738214);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(33,0.0003794919);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(34,0.0003223069);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(35,0.0003437877);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(36,0.0004103213);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(37,0.0002618999);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(38,0.0001971885);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(39,0.0002137899);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(41,0.002179458);
   VbbHcc_algo_Z_mass_stack_12->SetEntries(816);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_mass__195 = new TH1D("VbbHcc_algo_Z_mass__195","",40,0,400);
   VbbHcc_algo_Z_mass__195->SetBinContent(4,28);
   VbbHcc_algo_Z_mass__195->SetBinContent(5,206);
   VbbHcc_algo_Z_mass__195->SetBinContent(6,486);
   VbbHcc_algo_Z_mass__195->SetBinContent(7,836);
   VbbHcc_algo_Z_mass__195->SetBinContent(15,1034);
   VbbHcc_algo_Z_mass__195->SetBinContent(16,868);
   VbbHcc_algo_Z_mass__195->SetBinContent(17,863);
   VbbHcc_algo_Z_mass__195->SetBinContent(18,789);
   VbbHcc_algo_Z_mass__195->SetBinContent(19,693);
   VbbHcc_algo_Z_mass__195->SetBinContent(20,704);
   VbbHcc_algo_Z_mass__195->SetBinContent(21,642);
   VbbHcc_algo_Z_mass__195->SetBinContent(22,648);
   VbbHcc_algo_Z_mass__195->SetBinContent(23,552);
   VbbHcc_algo_Z_mass__195->SetBinContent(24,534);
   VbbHcc_algo_Z_mass__195->SetBinContent(25,485);
   VbbHcc_algo_Z_mass__195->SetBinContent(26,458);
   VbbHcc_algo_Z_mass__195->SetBinContent(27,459);
   VbbHcc_algo_Z_mass__195->SetBinContent(28,421);
   VbbHcc_algo_Z_mass__195->SetBinContent(29,367);
   VbbHcc_algo_Z_mass__195->SetBinContent(30,391);
   VbbHcc_algo_Z_mass__195->SetBinContent(31,340);
   VbbHcc_algo_Z_mass__195->SetBinContent(32,294);
   VbbHcc_algo_Z_mass__195->SetBinContent(33,329);
   VbbHcc_algo_Z_mass__195->SetBinContent(34,282);
   VbbHcc_algo_Z_mass__195->SetBinContent(35,263);
   VbbHcc_algo_Z_mass__195->SetBinContent(36,270);
   VbbHcc_algo_Z_mass__195->SetBinContent(37,235);
   VbbHcc_algo_Z_mass__195->SetBinContent(38,247);
   VbbHcc_algo_Z_mass__195->SetBinContent(39,257);
   VbbHcc_algo_Z_mass__195->SetBinContent(40,197);
   VbbHcc_algo_Z_mass__195->SetBinContent(41,8134);
   VbbHcc_algo_Z_mass__195->SetEntries(29782);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass__195->SetLineColor(ci);
   VbbHcc_algo_Z_mass__195->SetLineWidth(2);
   VbbHcc_algo_Z_mass__195->SetMarkerStyle(20);
   VbbHcc_algo_Z_mass__195->SetMarkerSize(1.2);
   VbbHcc_algo_Z_mass__195->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass__195->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__195->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass__195->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass__195->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__195->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__195->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass__195->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass__195->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass__195->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__195->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__195->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass__195->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass__195->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__195->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_mass_fx1195[40] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_mass_fy1195[40] = {
   0,
   0,
   0.1476203,
   593.1477,
   3195.537,
   6359.864,
   12441.35,
   12397.06,
   10662.02,
   10848.43,
   8060.431,
   10506.75,
   7464.985,
   8187.408,
   9572.647,
   5893.273,
   5522.213,
   4078.471,
   4460.788,
   3446.732,
   3593.336,
   3196.356,
   2561.206,
   2981.124,
   2438.85,
   3302.631,
   2391.788,
   2575.982,
   2007.377,
   1042.788,
   1189.052,
   1244.692,
   1984.802,
   2915.075,
   1290.128,
   846.7674,
   1831.068,
   1453.094,
   761.7764,
   952.3459};
   Double_t Graph_from_VbbHcc_algo_Z_mass_fex1195[40] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_mass_fey1195[40] = {
   0,
   0,
   0.08743412,
   408.6738,
   879.3565,
   1152.425,
   1673.621,
   1580.385,
   1282.952,
   1407.123,
   980.8402,
   1998.887,
   933.7564,
   1094.243,
   2256.401,
   838.1009,
   897.4875,
   629.7562,
   698.3574,
   612.2752,
   675.4229,
   635.7169,
   425.4832,
   600.9001,
   464.1541,
   701.5656,
   625.9182,
   555.3262,
   524.577,
   100.7508,
   111.8898,
   331.5929,
   597.3953,
   1562.201,
   295.2258,
   310.1002,
   495.4064,
   455.406,
   89.92561,
   323.8882};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_algo_Z_mass_fx1195,Graph_from_VbbHcc_algo_Z_mass_fy1195,Graph_from_VbbHcc_algo_Z_mass_fex1195,Graph_from_VbbHcc_algo_Z_mass_fey1195);
   gre->SetName("Graph_from_VbbHcc_algo_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_mass1195 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_mass1195","",100,0,440);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->SetMaximum(15526.47);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_mass1195->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_mass1195);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_mass","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_mass","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__196 = new TH1D("data_mc_ratio__196","",40,0,400);
   data_mc_ratio__196->SetBinContent(4,0.04720578);
   data_mc_ratio__196->SetBinContent(5,0.06446492);
   data_mc_ratio__196->SetBinContent(6,0.07641673);
   data_mc_ratio__196->SetBinContent(7,0.06719527);
   data_mc_ratio__196->SetBinContent(8,0.07429181);
   data_mc_ratio__196->SetBinContent(9,0.09454115);
   data_mc_ratio__196->SetBinContent(10,0.1061905);
   data_mc_ratio__196->SetBinContent(11,0.1347323);
   data_mc_ratio__196->SetBinContent(12,0.1061223);
   data_mc_ratio__196->SetBinContent(13,0.1498998);
   data_mc_ratio__196->SetBinContent(14,0.1258029);
   data_mc_ratio__196->SetBinContent(15,0.1080161);
   data_mc_ratio__196->SetBinContent(16,0.1472866);
   data_mc_ratio__196->SetBinContent(17,0.1562779);
   data_mc_ratio__196->SetBinContent(18,0.1934549);
   data_mc_ratio__196->SetBinContent(19,0.1553537);
   data_mc_ratio__196->SetBinContent(20,0.2042514);
   data_mc_ratio__196->SetBinContent(21,0.1786641);
   data_mc_ratio__196->SetBinContent(22,0.2027309);
   data_mc_ratio__196->SetBinContent(23,0.2155235);
   data_mc_ratio__196->SetBinContent(24,0.1791271);
   data_mc_ratio__196->SetBinContent(25,0.1988643);
   data_mc_ratio__196->SetBinContent(26,0.1386773);
   data_mc_ratio__196->SetBinContent(27,0.1919066);
   data_mc_ratio__196->SetBinContent(28,0.1634328);
   data_mc_ratio__196->SetBinContent(29,0.1828256);
   data_mc_ratio__196->SetBinContent(30,0.3749563);
   data_mc_ratio__196->SetBinContent(31,0.285942);
   data_mc_ratio__196->SetBinContent(32,0.236203);
   data_mc_ratio__196->SetBinContent(33,0.1657596);
   data_mc_ratio__196->SetBinContent(34,0.0967385);
   data_mc_ratio__196->SetBinContent(35,0.2038558);
   data_mc_ratio__196->SetBinContent(36,0.3188597);
   data_mc_ratio__196->SetBinContent(37,0.1283404);
   data_mc_ratio__196->SetBinContent(38,0.1699822);
   data_mc_ratio__196->SetBinContent(39,0.3373693);
   data_mc_ratio__196->SetBinContent(40,0.2068576);
   data_mc_ratio__196->SetBinContent(41,0.2099205);
   data_mc_ratio__196->SetBinError(4,0.008921054);
   data_mc_ratio__196->SetBinError(5,0.004491484);
   data_mc_ratio__196->SetBinError(6,0.003466333);
   data_mc_ratio__196->SetBinError(7,0.002323997);
   data_mc_ratio__196->SetBinError(8,0.002447998);
   data_mc_ratio__196->SetBinError(9,0.002977766);
   data_mc_ratio__196->SetBinError(10,0.003128667);
   data_mc_ratio__196->SetBinError(11,0.004088431);
   data_mc_ratio__196->SetBinError(12,0.003178112);
   data_mc_ratio__196->SetBinError(13,0.004481115);
   data_mc_ratio__196->SetBinError(14,0.003919875);
   data_mc_ratio__196->SetBinError(15,0.003359141);
   data_mc_ratio__196->SetBinError(16,0.004999232);
   data_mc_ratio__196->SetBinError(17,0.005319763);
   data_mc_ratio__196->SetBinError(18,0.006887175);
   data_mc_ratio__196->SetBinError(19,0.005901399);
   data_mc_ratio__196->SetBinError(20,0.007698016);
   data_mc_ratio__196->SetBinError(21,0.007051309);
   data_mc_ratio__196->SetBinError(22,0.007964021);
   data_mc_ratio__196->SetBinError(23,0.009173289);
   data_mc_ratio__196->SetBinError(24,0.007751587);
   data_mc_ratio__196->SetBinError(25,0.009029961);
   data_mc_ratio__196->SetBinError(26,0.006479965);
   data_mc_ratio__196->SetBinError(27,0.008957435);
   data_mc_ratio__196->SetBinError(28,0.007965228);
   data_mc_ratio__196->SetBinError(29,0.009543419);
   data_mc_ratio__196->SetBinError(30,0.01896235);
   data_mc_ratio__196->SetBinError(31,0.01550738);
   data_mc_ratio__196->SetBinError(32,0.01377564);
   data_mc_ratio__196->SetBinError(33,0.009138623);
   data_mc_ratio__196->SetBinError(34,0.005760694);
   data_mc_ratio__196->SetBinError(35,0.01257028);
   data_mc_ratio__196->SetBinError(36,0.01940518);
   data_mc_ratio__196->SetBinError(37,0.008372002);
   data_mc_ratio__196->SetBinError(38,0.01081571);
   data_mc_ratio__196->SetBinError(39,0.02104452);
   data_mc_ratio__196->SetBinError(40,0.01473799);
   data_mc_ratio__196->SetBinError(41,0.01117163);
   data_mc_ratio__196->SetMinimum(0.4);
   data_mc_ratio__196->SetMaximum(1.6);
   data_mc_ratio__196->SetEntries(613.0664);
   data_mc_ratio__196->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__196->SetLineColor(ci);
   data_mc_ratio__196->SetLineWidth(2);
   data_mc_ratio__196->SetMarkerStyle(20);
   data_mc_ratio__196->SetMarkerSize(1.2);
   data_mc_ratio__196->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__196->GetXaxis()->SetRange(1,30);
   data_mc_ratio__196->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__196->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__196->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__196->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__196->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__196->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__196->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__196->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__196->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__196->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__196->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__196->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__196->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__196->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__196->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__196->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__196->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1196[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1196[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1196[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1196[40] = {
   0,
   0,
   0.5922908,
   0.6889917,
   0.2751827,
   0.1812028,
   0.1345208,
   0.1274807,
   0.1203292,
   0.1297075,
   0.1216858,
   0.1902479,
   0.1250848,
   0.1336495,
   0.2357134,
   0.1422132,
   0.1625232,
   0.1544099,
   0.1565547,
   0.1776393,
   0.1879654,
   0.198888,
   0.1661261,
   0.2015683,
   0.1903168,
   0.2124263,
   0.2616947,
   0.2155784,
   0.2613246,
   0.09661674,
   0.0941,
   0.2664056,
   0.3009848,
   0.5359042,
   0.2288345,
   0.3662166,
   0.2705559,
   0.3134044,
   0.1180472,
   0.3400952};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1196,Graph_from_mc_statistical_error_fy1196,Graph_from_mc_statistical_error_fex1196,Graph_from_mc_statistical_error_fey1196);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1196 = new TH1F("Graph_Graph_from_mc_statistical_error1196","",100,0,440);
   Graph_Graph_from_mc_statistical_error1196->SetMinimum(0.17321);
   Graph_Graph_from_mc_statistical_error1196->SetMaximum(1.82679);
   Graph_Graph_from_mc_statistical_error1196->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1196->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1196->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1196->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1196->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1196->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1196->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1196->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1196->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1196->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1196->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1196->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1196->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1196->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1196->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1196->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1196);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_algo_17->cd();
   Z_mass_algo_17->Modified();
   Z_mass_algo_17->cd();
   Z_mass_algo_17->SetSelected(Z_mass_algo_17);
}
