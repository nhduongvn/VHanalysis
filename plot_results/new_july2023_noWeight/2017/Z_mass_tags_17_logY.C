void Z_mass_tags_17_logY()
{
//=========Macro generated from canvas: Z_mass_tags_17/Z_mass_tags_17
//=========  (Thu Aug 10 12:31:05 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_17 = new TCanvas("Z_mass_tags_17", "Z_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_17->SetHighLightColor(2);
   Z_mass_tags_17->Range(0,0,1,1);
   Z_mass_tags_17->SetFillColor(0);
   Z_mass_tags_17->SetFillStyle(4000);
   Z_mass_tags_17->SetBorderMode(0);
   Z_mass_tags_17->SetBorderSize(2);
   Z_mass_tags_17->SetFrameFillStyle(1000);
   Z_mass_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.840009,315.7258,11.32509);
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
   st->SetMaximum(2.471105e+09);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",40,0,400);
   st_stack_2->SetMinimum(0.00149333);
   st_stack_2->SetMaximum(8.101712e+09);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetRange(1,30);
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetLabelSize(0.035);
   st_stack_2->GetXaxis()->SetTitleSize(0.035);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/10.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetLabelSize(0.05);
   st_stack_2->GetYaxis()->SetTitleSize(0.057);
   st_stack_2->GetYaxis()->SetTitleOffset(1.2);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetLabelSize(0.035);
   st_stack_2->GetZaxis()->SetTitleSize(0.035);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *VbbHcc_tags_Z_mass_stack_1 = new TH1D("VbbHcc_tags_Z_mass_stack_1","",40,0,400);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(3,6.808747);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(4,950.1548);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(5,1569.694);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(6,4931.915);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(7,5930.645);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(8,6753.033);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(9,4996.814);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(10,5466.938);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(11,2999.409);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(12,2198.775);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(13,4433.283);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(14,3849.222);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(15,4821.234);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(16,2494.788);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(17,3331.361);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(18,3397.988);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(19,4945.731);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(20,3023.652);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(21,4369.53);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(22,16484.06);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(23,2815.123);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(24,2493.314);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(25,3137.67);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(26,1775.564);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(27,2194.55);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(28,2031.071);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(29,2191.611);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(30,1421.859);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(31,1404.763);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(32,1690.569);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(33,1308.256);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(34,1836.568);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(35,2147.174);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(36,2245.443);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(37,1297.431);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(38,2716.803);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(39,2287.372);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(40,1667.157);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(41,83983.33);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(3,6.808747);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(4,389.1763);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(5,401.5488);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(6,910.0762);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(7,990.1854);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(8,1093.33);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(9,908.2072);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(10,983.7422);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(11,566.0258);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(12,414.2947);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(13,864.9388);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(14,818.5155);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(15,943.6781);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(16,558.2591);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(17,727.2163);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(18,1306.502);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(19,980.2371);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(20,675.2199);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(21,1412.036);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(22,14817.71);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(23,720.2189);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(24,616.3648);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(25,768.7881);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(26,482.1196);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(27,611.5053);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(28,609.4687);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(29,611.4699);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(30,399.009);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(31,398.4731);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(32,545.3311);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(33,396.7312);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(34,549.3024);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(35,554.578);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(36,612.9295);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(37,473.1727);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(38,764.445);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(39,613.0893);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(40,545.7995);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(41,15136.44);
   VbbHcc_tags_Z_mass_stack_1->SetEntries(10314);

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
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(3,0.04712387);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(4,2.127893);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(5,7.044191);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(6,12.46127);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(7,12.93201);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(8,18.33539);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(9,15.11168);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(10,19.37164);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(11,17.76442);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(12,22.2221);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(13,22.30119);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(14,23.29287);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(15,19.15489);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(16,19.63339);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(17,18.21078);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(18,20.16901);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(19,15.94716);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(20,21.80221);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(21,18.78439);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(22,14.12065);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(23,14.80727);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(24,13.81547);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(25,14.36534);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(26,14.39394);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(27,15.2079);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(28,12.88048);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(29,16.07244);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(30,13.37289);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(31,11.29762);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(32,14.47859);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(33,10.62557);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(34,12.46402);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(35,11.60638);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(36,10.76986);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(37,12.16404);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(38,9.841799);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(39,10.16673);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(40,8.679394);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(41,418.4972);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(3,0.04712387);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(4,0.5743541);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(5,0.8918992);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(6,1.316777);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(7,1.237828);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(8,1.660595);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(9,1.464316);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(10,1.742575);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(11,1.58118);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(12,1.902431);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(13,1.947785);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(14,1.886221);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(15,1.705522);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(16,1.662224);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(17,1.533502);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(18,1.782623);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(19,1.552315);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(20,1.867492);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(21,1.700776);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(22,1.387362);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(23,1.516544);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(24,1.404348);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(25,1.471914);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(26,1.528113);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(27,1.560027);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(28,1.3459);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(29,1.69405);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(30,1.4165);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(31,1.251285);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(32,1.492955);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(33,1.259377);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(34,1.458341);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(35,1.34403);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(36,1.240312);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(37,1.39461);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(38,1.198894);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(39,1.273631);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(40,1.174515);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(41,8.051581);
   VbbHcc_tags_Z_mass_stack_2->SetEntries(11980);

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
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(3,1.062355);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(4,35.08235);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(5,130.2007);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(6,215.9479);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(7,267.4723);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(8,309.8413);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(9,345.2576);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(10,375.726);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(11,413.921);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(12,437.8977);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(13,453.1005);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(14,450.5617);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(15,439.0268);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(16,422.8622);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(17,405.6075);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(18,388.2836);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(19,372.3038);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(20,349.8061);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(21,336.9263);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(22,322.5818);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(23,310.9373);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(24,297.5141);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(25,297.6113);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(26,279.5739);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(27,273.6988);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(28,264.0647);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(29,265.6578);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(30,258.3513);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(31,240.3176);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(32,244.5431);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(33,243.5677);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(34,233.6004);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(35,221.7337);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(36,222.3973);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(37,211.8127);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(38,204.9313);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(39,205.191);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(40,198.452);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(41,7920.221);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(3,0.2392457);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(4,1.464324);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(5,2.823245);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(6,3.642332);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(7,4.047498);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(8,4.378971);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(9,4.6369);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(10,4.837971);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(11,5.086393);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(12,5.236473);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(13,5.328577);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(14,5.314726);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(15,5.235162);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(16,5.132716);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(17,5.034533);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(18,4.924917);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(19,4.81774);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(20,4.664046);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(21,4.569709);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(22,4.474464);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(23,4.398653);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(24,4.294222);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(25,4.303912);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(26,4.169863);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(27,4.128812);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(28,4.062544);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(29,4.073766);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(30,4.020184);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(31,3.873254);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(32,3.899684);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(33,3.902277);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(34,3.819868);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(35,3.713073);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(36,3.734145);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(37,3.642966);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(38,3.577717);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(39,3.586891);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(40,3.521009);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(41,22.27268);
   VbbHcc_tags_Z_mass_stack_3->SetEntries(317372);

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
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(4,2.989387);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(5,14.85129);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(6,25.42624);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(7,38.00471);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(8,64.07719);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(9,114.9344);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(10,162.0005);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(11,123.1226);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(12,72.40551);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(13,54.04175);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(14,46.69165);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(15,38.72666);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(16,40.37601);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(17,42.22829);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(18,32.69599);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(19,31.27767);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(20,30.34357);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(21,32.07859);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(22,33.34217);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(23,36.09396);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(24,29.46963);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(25,28.18455);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(26,39.70914);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(27,25.42744);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(28,31.87163);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(29,25.01729);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(30,25.06493);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(31,31.17914);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(32,25.69725);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(33,22.41993);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(34,23.58061);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(35,38.11076);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(36,23.80066);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(37,21.74825);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(38,25.44279);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(39,17.61211);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(40,18.92834);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(41,895.4506);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(4,0.8587305);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(5,3.196862);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(6,2.516197);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(7,2.907633);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(8,5.288414);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(9,6.625904);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(10,7.843098);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(11,7.350841);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(12,5.443326);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(13,5.050299);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(14,4.93413);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(15,3.891381);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(16,3.998334);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(17,5.530025);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(18,4.517377);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(19,3.695913);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(20,3.640201);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(21,2.668756);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(22,5.22703);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(23,5.337765);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(24,3.678422);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(25,3.590448);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(26,6.53444);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(27,2.40385);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(28,5.244617);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(29,4.344028);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(30,2.402633);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(31,5.266181);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(32,2.403492);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(33,3.39791);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(34,3.523885);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(35,7.064301);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(36,2.377484);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(37,3.372313);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(38,4.398526);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(39,2.021126);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(40,2.15692);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(41,17.14691);
   VbbHcc_tags_Z_mass_stack_4->SetEntries(17051);

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
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(4,0.7260113);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(5,3.151545);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(6,10.58606);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(7,11.38599);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(8,13.54681);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(9,16.65849);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(10,8.745624);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(11,6.858257);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(12,4.988961);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(13,6.312337);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(14,4.226967);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(15,4.778877);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(16,7.315974);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(17,4.367524);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(18,3.037718);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(19,2.814384);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(20,2.441406);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(21,3.292905);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(22,2.783255);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(23,3.420699);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(24,3.397764);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(25,12.12589);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(26,3.205781);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(27,2.937211);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(28,1.809619);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(29,3.205343);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(30,2.264841);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(31,0.8831648);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(32,1.648347);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(33,1.405228);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(34,1.246494);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(35,1.571907);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(36,2.423976);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(37,1.867351);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(38,1.29224);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(39,2.765699);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(40,1.363773);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(41,80.81417);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(4,0.2321444);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(5,1.360709);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(6,2.769148);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(7,2.956469);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(8,3.231244);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(9,6.989313);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(10,2.194906);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(11,1.489786);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(12,0.8529153);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(13,1.449909);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(14,0.7285142);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(15,1.347668);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(16,2.141351);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(17,1.699307);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(18,0.6282071);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(19,0.5387807);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(20,0.5867234);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(21,1.260513);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(22,0.6564303);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(23,1.302266);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(24,0.7837976);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(25,6.945609);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(26,1.288325);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(27,1.696382);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(28,0.5129559);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(29,1.293887);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(30,1.207153);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(31,0.3177589);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(32,0.4888403);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(33,0.5039098);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(34,0.3797043);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(35,0.529266);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(36,0.5612155);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(37,0.5809345);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(38,0.4920938);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(39,1.276363);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(40,0.4177844);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(41,4.803744);
   VbbHcc_tags_Z_mass_stack_5->SetEntries(2254);

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
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(15,0.3153059);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(26,0.3153059);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(41,0.3153059);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(11,0.3153059);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(12,0.3153059);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(15,0.3153059);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(26,0.3153059);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(41,0.3153059);
   VbbHcc_tags_Z_mass_stack_6->SetEntries(5);

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
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(5,0.4958844);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,0.4958844);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,0.7438266);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.4958844);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(16,0.4958844);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(19,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(25,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(30,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(32,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,1.983537);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(5,0.3506432);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(8,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.3506432);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.4294485);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.3506432);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(16,0.3506432);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(19,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(25,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(30,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(32,0.2479422);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,0.7012864);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(24);

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
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(6,0.7596768);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(7,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(8,2.025805);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(9,2.025805);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(10,6.837091);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(11,2.025805);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(12,1.772579);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(13,0.5064512);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(14,1.012902);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(15,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(16,0.5064512);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(17,0.5064512);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(20,0.5064512);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(23,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(24,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(27,0.5064512);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(30,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(33,1.519354);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(34,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(35,0.5064512);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(36,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(37,1.266128);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(38,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(39,0.5064512);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(40,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(41,18.99192);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(6,0.4385996);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(7,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(8,0.7162302);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(9,0.7162302);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(10,1.315799);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(11,0.7162302);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(12,0.669972);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(13,0.3581151);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(14,0.5064512);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(15,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(16,0.3581151);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(17,0.3581151);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(18,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(20,0.3581151);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(21,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(22,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(23,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(24,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(26,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(27,0.3581151);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(30,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(33,0.6202735);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(34,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(35,0.3581151);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(36,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(37,0.5662297);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(38,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(39,0.3581151);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(40,0.2532256);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(41,2.192998);
   VbbHcc_tags_Z_mass_stack_8->SetEntries(178);

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
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(4,0.0193814);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(5,0.1082128);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(6,0.2115803);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(7,0.3537106);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(8,0.815634);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(9,1.94137);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(10,2.589032);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(11,2.151336);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(12,1.821852);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(13,1.907453);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(14,1.66034);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(15,1.125736);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(16,0.6864247);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(17,0.5652909);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(18,0.4877653);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(19,0.3908583);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(20,0.4393118);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(21,0.3892432);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(22,0.4070095);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(23,0.3973188);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(24,0.4102397);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(25,0.4312362);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(26,0.4635385);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(27,0.4457723);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(28,0.4506176);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(29,0.4344664);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(30,0.4312362);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(31,0.4312362);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(32,0.4167002);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(33,0.4926106);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(34,0.5168374);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(35,0.4586932);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(36,0.4877653);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(37,0.4102397);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(38,0.4909955);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(39,0.5055316);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(40,0.4538478);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(41,20.34563);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(4,0.005594929);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(5,0.0132203);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(6,0.01848586);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(7,0.02390155);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(8,0.03629524);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(9,0.05599589);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(10,0.06466521);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(11,0.05894623);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(12,0.05424485);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(13,0.05550459);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(14,0.05178459);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(15,0.04264031);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(16,0.03329649);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(17,0.03021607);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(18,0.02806774);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(19,0.02512532);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(20,0.02663719);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(21,0.02507336);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(22,0.02563919);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(23,0.02533212);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(24,0.02574073);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(25,0.02639123);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(26,0.02736182);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(27,0.02683234);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(28,0.02697777);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(29,0.02648989);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(30,0.02639123);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(31,0.02639123);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(32,0.02594262);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(33,0.0282068);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(34,0.02889209);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(35,0.02721843);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(36,0.02806774);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(37,0.02574073);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(38,0.02816053);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(39,0.02857433);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(40,0.02707429);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(41,0.1812748);
   VbbHcc_tags_Z_mass_stack_9->SetEntries(28819);

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
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(3,0.0004146255);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(4,0.01160952);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(5,0.0373163);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(6,0.09246149);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(7,0.1898985);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(8,0.4328691);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(9,0.9208833);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(10,1.185829);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(11,0.9163224);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(12,0.8939327);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(13,0.8831524);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(14,0.7214484);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(15,0.4909166);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(16,0.3619681);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(17,0.3113838);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(18,0.2620433);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(19,0.2782137);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(20,0.2574825);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(21,0.2379951);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(22,0.2554093);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(23,0.2533362);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(24,0.2218247);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(25,0.2508484);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(26,0.2363366);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(27,0.2479461);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(28,0.2297025);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(29,0.2483607);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(30,0.2346781);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(31,0.2384097);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(32,0.2359219);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(33,0.2342634);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(34,0.2243124);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(35,0.2185077);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(36,0.211459);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(37,0.2127029);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(38,0.204825);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(39,0.2243124);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(40,0.1961179);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(41,7.488552);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(3,0.0004146255);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(4,0.002193992);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(5,0.003933483);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(6,0.00619168);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(7,0.008873374);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(8,0.01339696);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(9,0.01954026);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(10,0.02217375);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(11,0.01949181);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(12,0.0192522);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(13,0.01913577);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(14,0.0172954);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(15,0.01426697);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(16,0.01225076);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(17,0.01136256);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(18,0.01042352);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(19,0.01074032);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(20,0.01033242);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(21,0.009933722);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(22,0.01029074);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(23,0.01024889);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(24,0.009590316);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(25,0.01019844);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(26,0.009899049);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(27,0.01013927);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(28,0.009759126);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(29,0.01014774);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(30,0.009864254);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(31,0.009942371);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(32,0.009890362);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(33,0.009855536);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(34,0.009643944);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(35,0.009518343);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(36,0.009363563);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(37,0.009391062);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(38,0.009215513);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(39,0.009643944);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(40,0.00901751);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(41,0.05572203);
   VbbHcc_tags_Z_mass_stack_10->SetEntries(49090);

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
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.003160502);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(7,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(8,0.004740753);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.01422226);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.02370377);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.02528402);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(12,0.003160502);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(16,0.004740753);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(17,0.003160502);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.003160502);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.003160502);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(24,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(30,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(32,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(35,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(36,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(37,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(40,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.02370377);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.002234813);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(7,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(8,0.002737075);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.004740753);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.006120286);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.006321005);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(12,0.002234813);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(13,0.002234813);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(14,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(16,0.002737075);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(17,0.002234813);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.002234813);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(20,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002234813);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(24,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(25,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(26,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(30,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(32,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(35,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(36,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(37,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(40,0.001580251);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.006120286);
   VbbHcc_tags_Z_mass_stack_11->SetEntries(87);

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
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(4,0.0002076057);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(5,0.0002076057);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(7,0.000622817);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(8,0.002906479);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(9,0.008511832);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(10,0.009965071);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(11,0.006850987);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(12,0.002491268);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(13,0.0004152113);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(14,0.0004152113);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(16,0.000622817);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(17,0.001038028);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(18,0.001038028);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(22,0.000622817);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(23,0.0008304226);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(24,0.0008304226);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(25,0.000622817);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(27,0.000622817);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(29,0.0002076057);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(32,0.0004152113);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(33,0.000622817);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(34,0.0004152113);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(35,0.0004152113);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(36,0.0002076057);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(37,0.0004152113);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(38,0.0004152113);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(39,0.0004152113);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(40,0.0004152113);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(41,0.01307916);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(4,0.0002076057);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(5,0.0002076057);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(7,0.0003595835);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(8,0.0007767892);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(9,0.001329325);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(10,0.001438334);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(11,0.001192604);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(12,0.0007191671);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(13,0.0002935987);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(14,0.0002935987);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(16,0.0003595835);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(17,0.0004642204);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(18,0.0004642204);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(22,0.0003595835);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(23,0.0004152113);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(24,0.0004152113);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(25,0.0003595835);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(27,0.0003595835);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(29,0.0002076057);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(32,0.0002935987);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(33,0.0003595835);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(34,0.0002935987);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(35,0.0002935987);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(36,0.0002076057);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(37,0.0002935987);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(38,0.0002935987);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(39,0.0002935987);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(40,0.0002935987);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(41,0.001647819);
   VbbHcc_tags_Z_mass_stack_12->SetEntries(277);

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
   
   TH1D *VbbHcc_tags_Z_mass__4 = new TH1D("VbbHcc_tags_Z_mass__4","",40,0,400);
   VbbHcc_tags_Z_mass__4->SetBinContent(3,7);
   VbbHcc_tags_Z_mass__4->SetBinContent(4,279);
   VbbHcc_tags_Z_mass__4->SetBinContent(5,1023);
   VbbHcc_tags_Z_mass__4->SetBinContent(6,1611);
   VbbHcc_tags_Z_mass__4->SetBinContent(7,1920);
   VbbHcc_tags_Z_mass__4->SetBinContent(15,1551);
   VbbHcc_tags_Z_mass__4->SetBinContent(16,1452);
   VbbHcc_tags_Z_mass__4->SetBinContent(17,1396);
   VbbHcc_tags_Z_mass__4->SetBinContent(18,1327);
   VbbHcc_tags_Z_mass__4->SetBinContent(19,1274);
   VbbHcc_tags_Z_mass__4->SetBinContent(20,1228);
   VbbHcc_tags_Z_mass__4->SetBinContent(21,1164);
   VbbHcc_tags_Z_mass__4->SetBinContent(22,1080);
   VbbHcc_tags_Z_mass__4->SetBinContent(23,981);
   VbbHcc_tags_Z_mass__4->SetBinContent(24,999);
   VbbHcc_tags_Z_mass__4->SetBinContent(25,943);
   VbbHcc_tags_Z_mass__4->SetBinContent(26,911);
   VbbHcc_tags_Z_mass__4->SetBinContent(27,842);
   VbbHcc_tags_Z_mass__4->SetBinContent(28,899);
   VbbHcc_tags_Z_mass__4->SetBinContent(29,859);
   VbbHcc_tags_Z_mass__4->SetBinContent(30,748);
   VbbHcc_tags_Z_mass__4->SetBinContent(31,782);
   VbbHcc_tags_Z_mass__4->SetBinContent(32,766);
   VbbHcc_tags_Z_mass__4->SetBinContent(33,775);
   VbbHcc_tags_Z_mass__4->SetBinContent(34,705);
   VbbHcc_tags_Z_mass__4->SetBinContent(35,700);
   VbbHcc_tags_Z_mass__4->SetBinContent(36,655);
   VbbHcc_tags_Z_mass__4->SetBinContent(37,708);
   VbbHcc_tags_Z_mass__4->SetBinContent(38,649);
   VbbHcc_tags_Z_mass__4->SetBinContent(39,640);
   VbbHcc_tags_Z_mass__4->SetBinContent(40,628);
   VbbHcc_tags_Z_mass__4->SetBinContent(41,26210);
   VbbHcc_tags_Z_mass__4->SetEntries(68570);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass__4->SetLineColor(ci);
   VbbHcc_tags_Z_mass__4->SetLineWidth(2);
   VbbHcc_tags_Z_mass__4->SetMarkerStyle(20);
   VbbHcc_tags_Z_mass__4->SetMarkerSize(1.2);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__4->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_mass_fx1003[40] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_mass_fy1003[40] = {
   0,
   0,
   7.91864,
   991.1117,
   1725.584,
   5197.404,
   6261.239,
   7162.364,
   5494.183,
   6044.171,
   3567.012,
   2741.099,
   4972.339,
   4377.392,
   5325.109,
   2987.031,
   3803.163,
   3843.182,
   5368.992,
   3429.25,
   4761.496,
   16857.81,
   3181.287,
   2838.398,
   3490.889,
   2113.717,
   2513.022,
   2342.378,
   2502.247,
   1722.081,
   1689.11,
   1977.838,
   1588.521,
   2108.455,
   2421.382,
   2505.789,
   1546.915,
   2959.26,
   2524.345,
   1895.486};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fex1003[40] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_mass_fey1003[40] = {
   0,
   0,
   6.813112,
   389.1805,
   401.5749,
   910.0922,
   990.2031,
   1093.357,
   908.2716,
   983.7903,
   566.1012,
   414.3695,
   864.9734,
   818.5503,
   943.7032,
   558.3038,
   727.2584,
   1306.521,
   980.2573,
   675.2487,
   1412.047,
   14817.71,
   720.255,
   616.3929,
   768.8413,
   482.1862,
   611.5284,
   609.5065,
   611.5026,
   399.041,
   398.5288,
   545.3527,
   396.7677,
   549.3291,
   554.6374,
   612.947,
   473.2015,
   764.4672,
   613.1059,
   545.8166};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_Z_mass_fx1003,Graph_from_VbbHcc_tags_Z_mass_fy1003,Graph_from_VbbHcc_tags_Z_mass_fex1003,Graph_from_VbbHcc_tags_Z_mass_fey1003);
   gre->SetName("Graph_from_VbbHcc_tags_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_mass1003 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_mass1003","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetMinimum(34.84307);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetMaximum(34843.07);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_mass1003);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_mass","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__5 = new TH1D("data_mc_ratio__5","",40,0,400);
   data_mc_ratio__5->SetBinContent(3,0.8839902);
   data_mc_ratio__5->SetBinContent(4,0.2815021);
   data_mc_ratio__5->SetBinContent(5,0.5928429);
   data_mc_ratio__5->SetBinContent(6,0.3099625);
   data_mc_ratio__5->SetBinContent(7,0.3066486);
   data_mc_ratio__5->SetBinContent(8,0.2845429);
   data_mc_ratio__5->SetBinContent(9,0.3452743);
   data_mc_ratio__5->SetBinContent(10,0.3171651);
   data_mc_ratio__5->SetBinContent(11,0.5287338);
   data_mc_ratio__5->SetBinContent(12,0.656671);
   data_mc_ratio__5->SetBinContent(13,0.3432992);
   data_mc_ratio__5->SetBinContent(14,0.3595748);
   data_mc_ratio__5->SetBinContent(15,0.2912616);
   data_mc_ratio__5->SetBinContent(16,0.4861014);
   data_mc_ratio__5->SetBinContent(17,0.3670629);
   data_mc_ratio__5->SetBinContent(18,0.3452868);
   data_mc_ratio__5->SetBinContent(19,0.2372885);
   data_mc_ratio__5->SetBinContent(20,0.3580958);
   data_mc_ratio__5->SetBinContent(21,0.244461);
   data_mc_ratio__5->SetBinContent(22,0.06406527);
   data_mc_ratio__5->SetBinContent(23,0.3083657);
   data_mc_ratio__5->SetBinContent(24,0.351959);
   data_mc_ratio__5->SetBinContent(25,0.2701317);
   data_mc_ratio__5->SetBinContent(26,0.4309943);
   data_mc_ratio__5->SetBinContent(27,0.3350548);
   data_mc_ratio__5->SetBinContent(28,0.383798);
   data_mc_ratio__5->SetBinContent(29,0.3432915);
   data_mc_ratio__5->SetBinContent(30,0.4343581);
   data_mc_ratio__5->SetBinContent(31,0.4629657);
   data_mc_ratio__5->SetBinContent(32,0.3872915);
   data_mc_ratio__5->SetBinContent(33,0.4878752);
   data_mc_ratio__5->SetBinContent(34,0.3343681);
   data_mc_ratio__5->SetBinContent(35,0.2890911);
   data_mc_ratio__5->SetBinContent(36,0.2613947);
   data_mc_ratio__5->SetBinContent(37,0.4576852);
   data_mc_ratio__5->SetBinContent(38,0.2193116);
   data_mc_ratio__5->SetBinContent(39,0.2535311);
   data_mc_ratio__5->SetBinContent(40,0.3313135);
   data_mc_ratio__5->SetBinContent(41,0.2807789);
   data_mc_ratio__5->SetBinError(3,0.3341169);
   data_mc_ratio__5->SetBinError(4,0.01685309);
   data_mc_ratio__5->SetBinError(5,0.01853539);
   data_mc_ratio__5->SetBinError(6,0.007722561);
   data_mc_ratio__5->SetBinError(7,0.006998264);
   data_mc_ratio__5->SetBinError(8,0.006302977);
   data_mc_ratio__5->SetBinError(9,0.007927397);
   data_mc_ratio__5->SetBinError(10,0.007243931);
   data_mc_ratio__5->SetBinError(11,0.01217492);
   data_mc_ratio__5->SetBinError(12,0.01547788);
   data_mc_ratio__5->SetBinError(13,0.008309139);
   data_mc_ratio__5->SetBinError(14,0.009063311);
   data_mc_ratio__5->SetBinError(15,0.007395668);
   data_mc_ratio__5->SetBinError(16,0.01275685);
   data_mc_ratio__5->SetBinError(17,0.009824213);
   data_mc_ratio__5->SetBinError(18,0.009478607);
   data_mc_ratio__5->SetBinError(19,0.006648014);
   data_mc_ratio__5->SetBinError(20,0.0102188);
   data_mc_ratio__5->SetBinError(21,0.007165278);
   data_mc_ratio__5->SetBinError(22,0.001949444);
   data_mc_ratio__5->SetBinError(23,0.00984536);
   data_mc_ratio__5->SetBinError(24,0.01113549);
   data_mc_ratio__5->SetBinError(25,0.0087967);
   data_mc_ratio__5->SetBinError(26,0.01427948);
   data_mc_ratio__5->SetBinError(27,0.01154675);
   data_mc_ratio__5->SetBinError(28,0.01280038);
   data_mc_ratio__5->SetBinError(29,0.01171295);
   data_mc_ratio__5->SetBinError(30,0.01588171);
   data_mc_ratio__5->SetBinError(31,0.01655562);
   data_mc_ratio__5->SetBinError(32,0.01399341);
   data_mc_ratio__5->SetBinError(33,0.017525);
   data_mc_ratio__5->SetBinError(34,0.01259303);
   data_mc_ratio__5->SetBinError(35,0.01092662);
   data_mc_ratio__5->SetBinError(36,0.01021354);
   data_mc_ratio__5->SetBinError(37,0.01720086);
   data_mc_ratio__5->SetBinError(38,0.008608732);
   data_mc_ratio__5->SetBinError(39,0.0100217);
   data_mc_ratio__5->SetBinError(40,0.01322085);
   data_mc_ratio__5->SetBinError(41,0.04556185);
   data_mc_ratio__5->SetMinimum(0.4);
   data_mc_ratio__5->SetMaximum(1.6);
   data_mc_ratio__5->SetEntries(203.2373);
   data_mc_ratio__5->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__5->SetLineColor(ci);
   data_mc_ratio__5->SetLineWidth(2);
   data_mc_ratio__5->SetMarkerStyle(20);
   data_mc_ratio__5->SetMarkerSize(1.2);
   data_mc_ratio__5->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__5->GetXaxis()->SetRange(1,30);
   data_mc_ratio__5->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__5->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__5->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__5->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__5->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__5->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__5->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__5->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__5->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__5->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__5->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__5->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__5->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__5->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__5->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__5->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__5->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1004[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1004[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1004[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1004[40] = {
   0,
   0,
   0.8603891,
   0.3926707,
   0.2327183,
   0.1751052,
   0.1581481,
   0.1526532,
   0.1653152,
   0.1627668,
   0.1587046,
   0.1511691,
   0.1739571,
   0.186995,
   0.1772176,
   0.1869093,
   0.1912246,
   0.3399581,
   0.1825775,
   0.1969086,
   0.2965554,
   0.878982,
   0.2264036,
   0.2171622,
   0.2202423,
   0.2281224,
   0.2433438,
   0.2602085,
   0.2443814,
   0.2317202,
   0.2359401,
   0.2757317,
   0.2497718,
   0.2605364,
   0.2290582,
   0.2446124,
   0.3059002,
   0.2583305,
   0.2428772,
   0.2879561};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1004,Graph_from_mc_statistical_error_fy1004,Graph_from_mc_statistical_error_fex1004,Graph_from_mc_statistical_error_fey1004);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1004 = new TH1F("Graph_Graph_from_mc_statistical_error1004","",100,0,440);
   Graph_Graph_from_mc_statistical_error1004->SetMinimum(0.1089162);
   Graph_Graph_from_mc_statistical_error1004->SetMaximum(2.054778);
   Graph_Graph_from_mc_statistical_error1004->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1004->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1004);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tags_17->cd();
   Z_mass_tags_17->Modified();
   Z_mass_tags_17->cd();
   Z_mass_tags_17->SetSelected(Z_mass_tags_17);
}
