void Z_mass_both_16_logY()
{
//=========Macro generated from canvas: Z_mass_both_16/Z_mass_both_16
//=========  (Thu Aug 10 12:21:20 2023) by ROOT version 6.14/09
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
   topPad->Range(-45.96762,-2.823222,315.7258,10.76339);
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
   st->SetMaximum(7.984305e+08);
   
   TH1F *st_stack_193 = new TH1F("st_stack_193","",40,0,400);
   st_stack_193->SetMinimum(0.001550119);
   st_stack_193->SetMaximum(2.539366e+09);
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
   VbbHcc_both_Z_mass_stack_1->SetBinContent(3,6.550621);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(4,1801.695);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(5,6717.763);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(6,8079.068);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(7,9688.977);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(8,8477.083);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(9,6977.902);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(10,6279.461);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(11,5030.918);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(12,6080.856);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(13,3316.23);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(14,6486.068);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(15,4730.08);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(16,2591.331);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(17,2840.36);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(18,4948.094);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(19,2828.14);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(20,3759.875);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(21,2679.361);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(22,1712.384);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(23,3944.511);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(24,4102.309);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(25,1858.293);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(26,4255.815);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(27,1886.357);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(28,1712.111);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(29,1473.502);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(30,2525.258);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(31,3484.741);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(32,2690.899);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(33,894.4378);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(34,2935.515);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(35,1437.871);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(36,1452.326);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(37,885.2892);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(38,1936.093);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(39,1687.122);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(40,2308.456);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(41,50173.73);
   VbbHcc_both_Z_mass_stack_1->SetBinError(3,6.550621);
   VbbHcc_both_Z_mass_stack_1->SetBinError(4,657.3715);
   VbbHcc_both_Z_mass_stack_1->SetBinError(5,1995.426);
   VbbHcc_both_Z_mass_stack_1->SetBinError(6,1949.666);
   VbbHcc_both_Z_mass_stack_1->SetBinError(7,2085.922);
   VbbHcc_both_Z_mass_stack_1->SetBinError(8,1271.922);
   VbbHcc_both_Z_mass_stack_1->SetBinError(9,1167.579);
   VbbHcc_both_Z_mass_stack_1->SetBinError(10,1915.117);
   VbbHcc_both_Z_mass_stack_1->SetBinError(11,968.9007);
   VbbHcc_both_Z_mass_stack_1->SetBinError(12,1912.66);
   VbbHcc_both_Z_mass_stack_1->SetBinError(13,630.5052);
   VbbHcc_both_Z_mass_stack_1->SetBinError(14,1771.834);
   VbbHcc_both_Z_mass_stack_1->SetBinError(15,998.1861);
   VbbHcc_both_Z_mass_stack_1->SetBinError(16,532.0105);
   VbbHcc_both_Z_mass_stack_1->SetBinError(17,661.6535);
   VbbHcc_both_Z_mass_stack_1->SetBinError(18,1854.335);
   VbbHcc_both_Z_mass_stack_1->SetBinError(19,684.9476);
   VbbHcc_both_Z_mass_stack_1->SetBinError(20,1796.021);
   VbbHcc_both_Z_mass_stack_1->SetBinError(21,683.1724);
   VbbHcc_both_Z_mass_stack_1->SetBinError(22,481.7276);
   VbbHcc_both_Z_mass_stack_1->SetBinError(23,1749.491);
   VbbHcc_both_Z_mass_stack_1->SetBinError(24,1652.992);
   VbbHcc_both_Z_mass_stack_1->SetBinError(25,566.0208);
   VbbHcc_both_Z_mass_stack_1->SetBinError(26,1784.542);
   VbbHcc_both_Z_mass_stack_1->SetBinError(27,538.1402);
   VbbHcc_both_Z_mass_stack_1->SetBinError(28,556.2598);
   VbbHcc_both_Z_mass_stack_1->SetBinError(29,455.7498);
   VbbHcc_both_Z_mass_stack_1->SetBinError(30,1567.241);
   VbbHcc_both_Z_mass_stack_1->SetBinError(31,1643.376);
   VbbHcc_both_Z_mass_stack_1->SetBinError(32,737.7372);
   VbbHcc_both_Z_mass_stack_1->SetBinError(33,279.2195);
   VbbHcc_both_Z_mass_stack_1->SetBinError(34,837.4187);
   VbbHcc_both_Z_mass_stack_1->SetBinError(35,517.3263);
   VbbHcc_both_Z_mass_stack_1->SetBinError(36,516.5169);
   VbbHcc_both_Z_mass_stack_1->SetBinError(37,292.2207);
   VbbHcc_both_Z_mass_stack_1->SetBinError(38,633.419);
   VbbHcc_both_Z_mass_stack_1->SetBinError(39,586.9803);
   VbbHcc_both_Z_mass_stack_1->SetBinError(40,679.4778);
   VbbHcc_both_Z_mass_stack_1->SetBinError(41,3690.489);
   VbbHcc_both_Z_mass_stack_1->SetEntries(9914);

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
   VbbHcc_both_Z_mass_stack_2->SetBinContent(3,0.02058503);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(4,2.281374);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(5,7.712601);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(6,11.46231);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(7,15.44843);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(8,21.0657);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(9,24.18279);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(10,23.52504);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(11,23.74116);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(12,28.21941);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(13,23.60846);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(14,19.15302);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(15,20.30821);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(16,17.69814);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(17,19.93951);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(18,17.01893);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(19,18.49865);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(20,15.55217);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(21,14.63883);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(22,11.3427);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(23,11.77878);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(24,17.8751);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(25,9.470247);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(26,15.3301);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(27,9.829963);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(28,11.852);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(29,9.70013);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(30,10.70355);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(31,7.01944);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(32,9.35607);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(33,8.558985);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(34,7.758841);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(35,8.591554);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(36,6.614422);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(37,8.030008);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(38,8.121081);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(39,6.62263);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(40,4.659874);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(41,250.6198);
   VbbHcc_both_Z_mass_stack_2->SetBinError(3,0.06947119);
   VbbHcc_both_Z_mass_stack_2->SetBinError(4,0.5567959);
   VbbHcc_both_Z_mass_stack_2->SetBinError(5,1.205854);
   VbbHcc_both_Z_mass_stack_2->SetBinError(6,1.389666);
   VbbHcc_both_Z_mass_stack_2->SetBinError(7,1.534841);
   VbbHcc_both_Z_mass_stack_2->SetBinError(8,1.963045);
   VbbHcc_both_Z_mass_stack_2->SetBinError(9,2.096651);
   VbbHcc_both_Z_mass_stack_2->SetBinError(10,2.064095);
   VbbHcc_both_Z_mass_stack_2->SetBinError(11,2.029777);
   VbbHcc_both_Z_mass_stack_2->SetBinError(12,2.294144);
   VbbHcc_both_Z_mass_stack_2->SetBinError(13,2.121619);
   VbbHcc_both_Z_mass_stack_2->SetBinError(14,1.681303);
   VbbHcc_both_Z_mass_stack_2->SetBinError(15,1.870915);
   VbbHcc_both_Z_mass_stack_2->SetBinError(16,1.82833);
   VbbHcc_both_Z_mass_stack_2->SetBinError(17,1.936741);
   VbbHcc_both_Z_mass_stack_2->SetBinError(18,1.742461);
   VbbHcc_both_Z_mass_stack_2->SetBinError(19,1.84901);
   VbbHcc_both_Z_mass_stack_2->SetBinError(20,1.728762);
   VbbHcc_both_Z_mass_stack_2->SetBinError(21,1.635362);
   VbbHcc_both_Z_mass_stack_2->SetBinError(22,1.383885);
   VbbHcc_both_Z_mass_stack_2->SetBinError(23,1.448984);
   VbbHcc_both_Z_mass_stack_2->SetBinError(24,1.920545);
   VbbHcc_both_Z_mass_stack_2->SetBinError(25,1.327861);
   VbbHcc_both_Z_mass_stack_2->SetBinError(26,1.72158);
   VbbHcc_both_Z_mass_stack_2->SetBinError(27,1.3149);
   VbbHcc_both_Z_mass_stack_2->SetBinError(28,1.490288);
   VbbHcc_both_Z_mass_stack_2->SetBinError(29,1.208935);
   VbbHcc_both_Z_mass_stack_2->SetBinError(30,1.409695);
   VbbHcc_both_Z_mass_stack_2->SetBinError(31,1.058302);
   VbbHcc_both_Z_mass_stack_2->SetBinError(32,1.37431);
   VbbHcc_both_Z_mass_stack_2->SetBinError(33,1.298598);
   VbbHcc_both_Z_mass_stack_2->SetBinError(34,1.189875);
   VbbHcc_both_Z_mass_stack_2->SetBinError(35,1.292148);
   VbbHcc_both_Z_mass_stack_2->SetBinError(36,1.049727);
   VbbHcc_both_Z_mass_stack_2->SetBinError(37,1.222394);
   VbbHcc_both_Z_mass_stack_2->SetBinError(38,1.163498);
   VbbHcc_both_Z_mass_stack_2->SetBinError(39,1.091967);
   VbbHcc_both_Z_mass_stack_2->SetBinError(40,0.9207672);
   VbbHcc_both_Z_mass_stack_2->SetBinError(41,6.862755);
   VbbHcc_both_Z_mass_stack_2->SetEntries(9807);

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
   VbbHcc_both_Z_mass_stack_3->SetBinContent(3,1.976444);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(4,46.3177);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(5,159.2981);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(6,269.2432);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(7,353.6529);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(8,438.7064);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(9,508.7361);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(10,554.4606);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(11,561.2529);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(12,575.417);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(13,557.7843);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(14,528.0265);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(15,492.1077);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(16,447.1136);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(17,408.6685);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(18,375.74);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(19,336.0434);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(20,308.373);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(21,286.1078);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(22,277.1017);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(23,254.2654);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(24,234.7831);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(25,232.4664);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(26,209.2692);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(27,206.2009);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(28,195.9313);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(29,187.0555);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(30,181.1305);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(31,175.7065);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(32,166.3574);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(33,162.4639);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(34,153.7859);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(35,147.4662);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(36,143.6612);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(37,137.9043);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(38,130.8956);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(39,127.7387);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(40,124.4253);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(41,4771.606);
   VbbHcc_both_Z_mass_stack_3->SetBinError(3,0.373893);
   VbbHcc_both_Z_mass_stack_3->SetBinError(4,1.792122);
   VbbHcc_both_Z_mass_stack_3->SetBinError(5,3.306423);
   VbbHcc_both_Z_mass_stack_3->SetBinError(6,4.297446);
   VbbHcc_both_Z_mass_stack_3->SetBinError(7,4.937393);
   VbbHcc_both_Z_mass_stack_3->SetBinError(8,5.519778);
   VbbHcc_both_Z_mass_stack_3->SetBinError(9,5.951291);
   VbbHcc_both_Z_mass_stack_3->SetBinError(10,6.241359);
   VbbHcc_both_Z_mass_stack_3->SetBinError(11,6.280112);
   VbbHcc_both_Z_mass_stack_3->SetBinError(12,6.363436);
   VbbHcc_both_Z_mass_stack_3->SetBinError(13,6.259094);
   VbbHcc_both_Z_mass_stack_3->SetBinError(14,6.088539);
   VbbHcc_both_Z_mass_stack_3->SetBinError(15,5.898549);
   VbbHcc_both_Z_mass_stack_3->SetBinError(16,5.597094);
   VbbHcc_both_Z_mass_stack_3->SetBinError(17,5.347399);
   VbbHcc_both_Z_mass_stack_3->SetBinError(18,5.112047);
   VbbHcc_both_Z_mass_stack_3->SetBinError(19,4.829669);
   VbbHcc_both_Z_mass_stack_3->SetBinError(20,4.630434);
   VbbHcc_both_Z_mass_stack_3->SetBinError(21,4.444389);
   VbbHcc_both_Z_mass_stack_3->SetBinError(22,4.381204);
   VbbHcc_both_Z_mass_stack_3->SetBinError(23,4.17867);
   VbbHcc_both_Z_mass_stack_3->SetBinError(24,4.020266);
   VbbHcc_both_Z_mass_stack_3->SetBinError(25,4.017106);
   VbbHcc_both_Z_mass_stack_3->SetBinError(26,3.810176);
   VbbHcc_both_Z_mass_stack_3->SetBinError(27,3.784021);
   VbbHcc_both_Z_mass_stack_3->SetBinError(28,3.669149);
   VbbHcc_both_Z_mass_stack_3->SetBinError(29,3.584122);
   VbbHcc_both_Z_mass_stack_3->SetBinError(30,3.550749);
   VbbHcc_both_Z_mass_stack_3->SetBinError(31,3.498579);
   VbbHcc_both_Z_mass_stack_3->SetBinError(32,3.412298);
   VbbHcc_both_Z_mass_stack_3->SetBinError(33,3.365328);
   VbbHcc_both_Z_mass_stack_3->SetBinError(34,3.264529);
   VbbHcc_both_Z_mass_stack_3->SetBinError(35,3.209085);
   VbbHcc_both_Z_mass_stack_3->SetBinError(36,3.169245);
   VbbHcc_both_Z_mass_stack_3->SetBinError(37,3.086633);
   VbbHcc_both_Z_mass_stack_3->SetBinError(38,3.013974);
   VbbHcc_both_Z_mass_stack_3->SetBinError(39,2.976428);
   VbbHcc_both_Z_mass_stack_3->SetBinError(40,2.944741);
   VbbHcc_both_Z_mass_stack_3->SetBinError(41,18.25448);
   VbbHcc_both_Z_mass_stack_3->SetEntries(238439);

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
   VbbHcc_both_Z_mass_stack_4->SetBinContent(3,0.6107919);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(4,7.928065);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(5,14.63902);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(6,31.238);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(7,69.86471);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(8,84.77995);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(9,143.2836);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(10,168.4699);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(11,117.0859);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(12,65.88778);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(13,65.69817);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(14,44.97475);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(15,49.6398);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(16,34.91254);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(17,34.7645);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(18,37.66624);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(19,36.76193);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(20,36.84655);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(21,27.66518);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(22,36.73843);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(23,28.35083);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(24,26.48798);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(25,26.41767);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(26,25.28156);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(27,19.67348);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(28,25.2298);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(29,15.44724);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(30,25.99318);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(31,21.12222);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(32,24.50178);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(33,20.43304);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(34,26.66937);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(35,19.36709);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(36,18.12844);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(37,15.66283);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(38,20.49039);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(39,17.82644);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(40,15.71463);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(41,679.7668);
   VbbHcc_both_Z_mass_stack_4->SetBinError(3,0.3333214);
   VbbHcc_both_Z_mass_stack_4->SetBinError(4,3.081485);
   VbbHcc_both_Z_mass_stack_4->SetBinError(5,1.691888);
   VbbHcc_both_Z_mass_stack_4->SetBinError(6,4.646856);
   VbbHcc_both_Z_mass_stack_4->SetBinError(7,7.749239);
   VbbHcc_both_Z_mass_stack_4->SetBinError(8,6.773782);
   VbbHcc_both_Z_mass_stack_4->SetBinError(9,8.513045);
   VbbHcc_both_Z_mass_stack_4->SetBinError(10,10.77062);
   VbbHcc_both_Z_mass_stack_4->SetBinError(11,9.40827);
   VbbHcc_both_Z_mass_stack_4->SetBinError(12,5.697193);
   VbbHcc_both_Z_mass_stack_4->SetBinError(13,7.72612);
   VbbHcc_both_Z_mass_stack_4->SetBinError(14,3.810018);
   VbbHcc_both_Z_mass_stack_4->SetBinError(15,7.084327);
   VbbHcc_both_Z_mass_stack_4->SetBinError(16,3.478762);
   VbbHcc_both_Z_mass_stack_4->SetBinError(17,4.267138);
   VbbHcc_both_Z_mass_stack_4->SetBinError(18,4.299177);
   VbbHcc_both_Z_mass_stack_4->SetBinError(19,5.336283);
   VbbHcc_both_Z_mass_stack_4->SetBinError(20,5.340803);
   VbbHcc_both_Z_mass_stack_4->SetBinError(21,2.292064);
   VbbHcc_both_Z_mass_stack_4->SetBinError(22,5.61707);
   VbbHcc_both_Z_mass_stack_4->SetBinError(23,4.218616);
   VbbHcc_both_Z_mass_stack_4->SetBinError(24,4.302397);
   VbbHcc_both_Z_mass_stack_4->SetBinError(25,4.138471);
   VbbHcc_both_Z_mass_stack_4->SetBinError(26,3.252287);
   VbbHcc_both_Z_mass_stack_4->SetBinError(27,1.920226);
   VbbHcc_both_Z_mass_stack_4->SetBinError(28,4.088887);
   VbbHcc_both_Z_mass_stack_4->SetBinError(29,1.59073);
   VbbHcc_both_Z_mass_stack_4->SetBinError(30,4.761516);
   VbbHcc_both_Z_mass_stack_4->SetBinError(31,3.189546);
   VbbHcc_both_Z_mass_stack_4->SetBinError(32,4.757081);
   VbbHcc_both_Z_mass_stack_4->SetBinError(33,3.739512);
   VbbHcc_both_Z_mass_stack_4->SetBinError(34,4.844346);
   VbbHcc_both_Z_mass_stack_4->SetBinError(35,3.464989);
   VbbHcc_both_Z_mass_stack_4->SetBinError(36,3.223681);
   VbbHcc_both_Z_mass_stack_4->SetBinError(37,2.944142);
   VbbHcc_both_Z_mass_stack_4->SetBinError(38,4.212832);
   VbbHcc_both_Z_mass_stack_4->SetBinError(39,3.042864);
   VbbHcc_both_Z_mass_stack_4->SetBinError(40,2.611632);
   VbbHcc_both_Z_mass_stack_4->SetBinError(41,20.34138);
   VbbHcc_both_Z_mass_stack_4->SetEntries(15488);

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
   VbbHcc_both_Z_mass_stack_5->SetBinContent(3,0.06059546);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(4,0.9255607);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(5,11.36136);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(6,5.260923);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(7,8.927463);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(8,7.778411);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(9,8.304193);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(10,4.778321);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(11,6.702832);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(12,5.51333);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(13,5.215648);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(14,4.466489);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(15,4.760751);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(16,3.375244);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(17,6.813644);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(18,4.033144);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(19,3.672411);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(20,2.70916);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(21,2.632765);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(22,5.662864);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(23,2.709316);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(24,3.367837);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(25,9.109382);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(26,1.482759);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(27,1.437936);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(28,2.146112);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(29,2.438524);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(30,0.9708642);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(31,2.191);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(32,1.435946);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(33,4.013659);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(34,1.849187);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(35,2.160172);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(36,0.9914213);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(37,0.7087105);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(38,2.64387);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(39,2.557417);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(40,0.6328487);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(41,62.80149);
   VbbHcc_both_Z_mass_stack_5->SetBinError(3,0.05232237);
   VbbHcc_both_Z_mass_stack_5->SetBinError(4,0.3402514);
   VbbHcc_both_Z_mass_stack_5->SetBinError(5,7.256024);
   VbbHcc_both_Z_mass_stack_5->SetBinError(6,1.227595);
   VbbHcc_both_Z_mass_stack_5->SetBinError(7,2.203139);
   VbbHcc_both_Z_mass_stack_5->SetBinError(8,1.872711);
   VbbHcc_both_Z_mass_stack_5->SetBinError(9,2.032107);
   VbbHcc_both_Z_mass_stack_5->SetBinError(10,0.7782502);
   VbbHcc_both_Z_mass_stack_5->SetBinError(11,1.693332);
   VbbHcc_both_Z_mass_stack_5->SetBinError(12,1.191731);
   VbbHcc_both_Z_mass_stack_5->SetBinError(13,1.665957);
   VbbHcc_both_Z_mass_stack_5->SetBinError(14,1.239505);
   VbbHcc_both_Z_mass_stack_5->SetBinError(15,1.25944);
   VbbHcc_both_Z_mass_stack_5->SetBinError(16,0.7200195);
   VbbHcc_both_Z_mass_stack_5->SetBinError(17,2.056091);
   VbbHcc_both_Z_mass_stack_5->SetBinError(18,1.310563);
   VbbHcc_both_Z_mass_stack_5->SetBinError(19,1.195264);
   VbbHcc_both_Z_mass_stack_5->SetBinError(20,0.6113421);
   VbbHcc_both_Z_mass_stack_5->SetBinError(21,0.5071231);
   VbbHcc_both_Z_mass_stack_5->SetBinError(22,1.828623);
   VbbHcc_both_Z_mass_stack_5->SetBinError(23,1.275097);
   VbbHcc_both_Z_mass_stack_5->SetBinError(24,1.223757);
   VbbHcc_both_Z_mass_stack_5->SetBinError(25,7.287428);
   VbbHcc_both_Z_mass_stack_5->SetBinError(26,0.3869134);
   VbbHcc_both_Z_mass_stack_5->SetBinError(27,0.3592394);
   VbbHcc_both_Z_mass_stack_5->SetBinError(28,1.206553);
   VbbHcc_both_Z_mass_stack_5->SetBinError(29,1.104144);
   VbbHcc_both_Z_mass_stack_5->SetBinError(30,0.3201502);
   VbbHcc_both_Z_mass_stack_5->SetBinError(31,0.5736105);
   VbbHcc_both_Z_mass_stack_5->SetBinError(32,0.3705095);
   VbbHcc_both_Z_mass_stack_5->SetBinError(33,1.619425);
   VbbHcc_both_Z_mass_stack_5->SetBinError(34,0.5591771);
   VbbHcc_both_Z_mass_stack_5->SetBinError(35,1.15305);
   VbbHcc_both_Z_mass_stack_5->SetBinError(36,0.3131323);
   VbbHcc_both_Z_mass_stack_5->SetBinError(37,0.2272089);
   VbbHcc_both_Z_mass_stack_5->SetBinError(38,1.195233);
   VbbHcc_both_Z_mass_stack_5->SetBinError(39,1.183475);
   VbbHcc_both_Z_mass_stack_5->SetBinError(40,0.276284);
   VbbHcc_both_Z_mass_stack_5->SetBinError(41,4.077426);
   VbbHcc_both_Z_mass_stack_5->SetEntries(3431);

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
   VbbHcc_both_Z_mass_stack_6->SetBinContent(7,0.08576627);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(14,0.1333553);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(18,0.1535887);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(20,0.1440206);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(21,0.139529);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(24,0.1368996);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(27,0.1344897);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(41,0.6208321);
   VbbHcc_both_Z_mass_stack_6->SetBinError(7,0.08576627);
   VbbHcc_both_Z_mass_stack_6->SetBinError(14,0.1333553);
   VbbHcc_both_Z_mass_stack_6->SetBinError(18,0.1535887);
   VbbHcc_both_Z_mass_stack_6->SetBinError(20,0.1440206);
   VbbHcc_both_Z_mass_stack_6->SetBinError(21,0.139529);
   VbbHcc_both_Z_mass_stack_6->SetBinError(24,0.1368996);
   VbbHcc_both_Z_mass_stack_6->SetBinError(27,0.1344897);
   VbbHcc_both_Z_mass_stack_6->SetBinError(41,0.3106993);
   VbbHcc_both_Z_mass_stack_6->SetEntries(11);

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
   VbbHcc_both_Z_mass_stack_7->SetBinContent(7,0.3418711);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(8,0.1294485);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(9,0.4550989);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(10,0.8395587);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(12,0.1238666);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(13,0.2250811);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(14,0.3603228);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(15,0.2376334);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(17,0.1075422);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(18,0.2453737);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(19,0.1192266);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(20,0.1194362);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(26,0.1245696);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(27,0.1096857);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(28,0.2370689);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(31,0.1971196);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(32,0.1156937);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(38,0.1175925);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(41,1.811729);
   VbbHcc_both_Z_mass_stack_7->SetBinError(7,0.1973798);
   VbbHcc_both_Z_mass_stack_7->SetBinError(8,0.1294485);
   VbbHcc_both_Z_mass_stack_7->SetBinError(9,0.2284146);
   VbbHcc_both_Z_mass_stack_7->SetBinError(10,0.3178443);
   VbbHcc_both_Z_mass_stack_7->SetBinError(12,0.1238666);
   VbbHcc_both_Z_mass_stack_7->SetBinError(13,0.1591815);
   VbbHcc_both_Z_mass_stack_7->SetBinError(14,0.2083093);
   VbbHcc_both_Z_mass_stack_7->SetBinError(15,0.1680345);
   VbbHcc_both_Z_mass_stack_7->SetBinError(17,0.1075422);
   VbbHcc_both_Z_mass_stack_7->SetBinError(18,0.1738619);
   VbbHcc_both_Z_mass_stack_7->SetBinError(19,0.1192266);
   VbbHcc_both_Z_mass_stack_7->SetBinError(20,0.1194362);
   VbbHcc_both_Z_mass_stack_7->SetBinError(26,0.1245696);
   VbbHcc_both_Z_mass_stack_7->SetBinError(27,0.1096857);
   VbbHcc_both_Z_mass_stack_7->SetBinError(28,0.1676737);
   VbbHcc_both_Z_mass_stack_7->SetBinError(31,0.1417745);
   VbbHcc_both_Z_mass_stack_7->SetBinError(32,0.1156937);
   VbbHcc_both_Z_mass_stack_7->SetBinError(38,0.1175925);
   VbbHcc_both_Z_mass_stack_7->SetBinError(41,0.4589432);
   VbbHcc_both_Z_mass_stack_7->SetEntries(52);

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
   VbbHcc_both_Z_mass_stack_8->SetBinContent(7,1.062282);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(8,2.07967);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(9,3.457834);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(10,6.541722);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(11,3.033148);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(12,0.2662642);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(13,1.29456);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(14,0.5185294);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(15,1.594965);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(16,0.5455646);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(17,1.594466);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(18,0.7765187);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(19,0.5470144);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(20,0.269703);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(21,0.5491008);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(22,0.8249481);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(23,0.5398945);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(24,0.5287579);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(25,0.5017824);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(26,0.2779976);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(27,0.2937391);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(28,0.8190524);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(29,0.2586989);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(30,1.367792);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(31,0.5409468);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(32,0.266399);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(33,0.6098351);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(34,0.2873339);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(35,0.2628001);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(36,1.26248);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(37,0.2638994);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(40,0.2576367);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(41,12.56056);
   VbbHcc_both_Z_mass_stack_8->SetBinError(7,0.5317923);
   VbbHcc_both_Z_mass_stack_8->SetBinError(8,0.7354168);
   VbbHcc_both_Z_mass_stack_8->SetBinError(9,0.9601175);
   VbbHcc_both_Z_mass_stack_8->SetBinError(10,1.313888);
   VbbHcc_both_Z_mass_stack_8->SetBinError(11,0.8835239);
   VbbHcc_both_Z_mass_stack_8->SetBinError(12,0.2662642);
   VbbHcc_both_Z_mass_stack_8->SetBinError(13,0.5798548);
   VbbHcc_both_Z_mass_stack_8->SetBinError(14,0.3666984);
   VbbHcc_both_Z_mass_stack_8->SetBinError(15,0.6540614);
   VbbHcc_both_Z_mass_stack_8->SetBinError(16,0.3865353);
   VbbHcc_both_Z_mass_stack_8->SetBinError(17,0.6517575);
   VbbHcc_both_Z_mass_stack_8->SetBinError(18,0.4483627);
   VbbHcc_both_Z_mass_stack_8->SetBinError(19,0.3872112);
   VbbHcc_both_Z_mass_stack_8->SetBinError(20,0.269703);
   VbbHcc_both_Z_mass_stack_8->SetBinError(21,0.3892203);
   VbbHcc_both_Z_mass_stack_8->SetBinError(22,0.4768813);
   VbbHcc_both_Z_mass_stack_8->SetBinError(23,0.3819882);
   VbbHcc_both_Z_mass_stack_8->SetBinError(24,0.3760476);
   VbbHcc_both_Z_mass_stack_8->SetBinError(25,0.3548185);
   VbbHcc_both_Z_mass_stack_8->SetBinError(26,0.2779976);
   VbbHcc_both_Z_mass_stack_8->SetBinError(27,0.2937391);
   VbbHcc_both_Z_mass_stack_8->SetBinError(28,0.4734488);
   VbbHcc_both_Z_mass_stack_8->SetBinError(29,0.2586989);
   VbbHcc_both_Z_mass_stack_8->SetBinError(30,0.6125526);
   VbbHcc_both_Z_mass_stack_8->SetBinError(31,0.3830836);
   VbbHcc_both_Z_mass_stack_8->SetBinError(32,0.266399);
   VbbHcc_both_Z_mass_stack_8->SetBinError(33,0.3747044);
   VbbHcc_both_Z_mass_stack_8->SetBinError(34,0.2873339);
   VbbHcc_both_Z_mass_stack_8->SetBinError(35,0.2628001);
   VbbHcc_both_Z_mass_stack_8->SetBinError(36,0.5708307);
   VbbHcc_both_Z_mass_stack_8->SetBinError(37,0.2638994);
   VbbHcc_both_Z_mass_stack_8->SetBinError(40,0.2576367);
   VbbHcc_both_Z_mass_stack_8->SetBinError(41,1.831314);
   VbbHcc_both_Z_mass_stack_8->SetEntries(175);

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
   VbbHcc_both_Z_mass_stack_9->SetBinContent(4,0.0319477);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(5,0.1487573);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(6,0.3493244);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(7,0.6316309);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(8,1.506799);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(9,3.119438);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(10,3.611238);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(11,2.593809);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(12,2.164203);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(13,2.158231);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(14,1.60569);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(15,1.036947);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(16,0.6324022);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(17,0.573781);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(18,0.4331552);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(19,0.4309149);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(20,0.3947722);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(21,0.3451929);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(22,0.3583298);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(23,0.3799611);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(24,0.3671897);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(25,0.3529475);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(26,0.3894748);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(27,0.3830754);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(28,0.3724389);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(29,0.3454757);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(30,0.3824012);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(31,0.35877);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(32,0.3431467);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(33,0.3669262);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(34,0.3617004);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(35,0.384838);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(36,0.3734556);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(37,0.3606905);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(38,0.3527211);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(39,0.2997898);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(40,0.3127675);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(41,12.43716);
   VbbHcc_both_Z_mass_stack_9->SetBinError(4,0.007153287);
   VbbHcc_both_Z_mass_stack_9->SetBinError(5,0.01533663);
   VbbHcc_both_Z_mass_stack_9->SetBinError(6,0.02305403);
   VbbHcc_both_Z_mass_stack_9->SetBinError(7,0.03126777);
   VbbHcc_both_Z_mass_stack_9->SetBinError(8,0.04878129);
   VbbHcc_both_Z_mass_stack_9->SetBinError(9,0.0697315);
   VbbHcc_both_Z_mass_stack_9->SetBinError(10,0.07508579);
   VbbHcc_both_Z_mass_stack_9->SetBinError(11,0.06346146);
   VbbHcc_both_Z_mass_stack_9->SetBinError(12,0.05793478);
   VbbHcc_both_Z_mass_stack_9->SetBinError(13,0.05772493);
   VbbHcc_both_Z_mass_stack_9->SetBinError(14,0.04973959);
   VbbHcc_both_Z_mass_stack_9->SetBinError(15,0.04026302);
   VbbHcc_both_Z_mass_stack_9->SetBinError(16,0.03135399);
   VbbHcc_both_Z_mass_stack_9->SetBinError(17,0.02955554);
   VbbHcc_both_Z_mass_stack_9->SetBinError(18,0.02561413);
   VbbHcc_both_Z_mass_stack_9->SetBinError(19,0.0256059);
   VbbHcc_both_Z_mass_stack_9->SetBinError(20,0.02435442);
   VbbHcc_both_Z_mass_stack_9->SetBinError(21,0.02338988);
   VbbHcc_both_Z_mass_stack_9->SetBinError(22,0.0233982);
   VbbHcc_both_Z_mass_stack_9->SetBinError(23,0.02417259);
   VbbHcc_both_Z_mass_stack_9->SetBinError(24,0.02407849);
   VbbHcc_both_Z_mass_stack_9->SetBinError(25,0.02352116);
   VbbHcc_both_Z_mass_stack_9->SetBinError(26,0.02473391);
   VbbHcc_both_Z_mass_stack_9->SetBinError(27,0.0241714);
   VbbHcc_both_Z_mass_stack_9->SetBinError(28,0.02376431);
   VbbHcc_both_Z_mass_stack_9->SetBinError(29,0.02295086);
   VbbHcc_both_Z_mass_stack_9->SetBinError(30,0.02411877);
   VbbHcc_both_Z_mass_stack_9->SetBinError(31,0.02387373);
   VbbHcc_both_Z_mass_stack_9->SetBinError(32,0.02325116);
   VbbHcc_both_Z_mass_stack_9->SetBinError(33,0.02381776);
   VbbHcc_both_Z_mass_stack_9->SetBinError(34,0.02378418);
   VbbHcc_both_Z_mass_stack_9->SetBinError(35,0.02469142);
   VbbHcc_both_Z_mass_stack_9->SetBinError(36,0.02425043);
   VbbHcc_both_Z_mass_stack_9->SetBinError(37,0.02349651);
   VbbHcc_both_Z_mass_stack_9->SetBinError(38,0.02343456);
   VbbHcc_both_Z_mass_stack_9->SetBinError(39,0.02180208);
   VbbHcc_both_Z_mass_stack_9->SetBinError(40,0.02192202);
   VbbHcc_both_Z_mass_stack_9->SetBinError(41,0.138916);
   VbbHcc_both_Z_mass_stack_9->SetEntries(28649);

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
   VbbHcc_both_Z_mass_stack_10->SetBinContent(3,0.0004185765);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(4,0.01229296);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(5,0.05109239);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(6,0.1241763);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(7,0.2746303);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(8,0.6714606);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(9,1.330553);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(10,1.595616);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(11,1.206999);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(12,1.070553);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(13,0.980183);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(14,0.7666234);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(15,0.5314595);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(16,0.3538721);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(17,0.3151011);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(18,0.251275);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(19,0.2758819);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(20,0.2347535);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(21,0.2160779);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(22,0.2277198);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(23,0.2232017);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(24,0.196068);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(25,0.2121251);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(26,0.212918);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(27,0.1925311);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(28,0.1891168);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(29,0.1899984);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(30,0.1878279);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(31,0.1817013);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(32,0.1739138);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(33,0.1764393);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(34,0.1610374);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(35,0.1658527);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(36,0.1603132);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(37,0.1606427);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(38,0.1509246);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(39,0.1434461);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(40,0.1513802);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(41,5.394713);
   VbbHcc_both_Z_mass_stack_10->SetBinError(3,0.0004185765);
   VbbHcc_both_Z_mass_stack_10->SetBinError(4,0.002214735);
   VbbHcc_both_Z_mass_stack_10->SetBinError(5,0.00443809);
   VbbHcc_both_Z_mass_stack_10->SetBinError(6,0.006957075);
   VbbHcc_both_Z_mass_stack_10->SetBinError(7,0.01029782);
   VbbHcc_both_Z_mass_stack_10->SetBinError(8,0.01611496);
   VbbHcc_both_Z_mass_stack_10->SetBinError(9,0.02272932);
   VbbHcc_both_Z_mass_stack_10->SetBinError(10,0.02486564);
   VbbHcc_both_Z_mass_stack_10->SetBinError(11,0.02158844);
   VbbHcc_both_Z_mass_stack_10->SetBinError(12,0.0203428);
   VbbHcc_both_Z_mass_stack_10->SetBinError(13,0.01948207);
   VbbHcc_both_Z_mass_stack_10->SetBinError(14,0.01722236);
   VbbHcc_both_Z_mass_stack_10->SetBinError(15,0.0143365);
   VbbHcc_both_Z_mass_stack_10->SetBinError(16,0.01169667);
   VbbHcc_both_Z_mass_stack_10->SetBinError(17,0.01101844);
   VbbHcc_both_Z_mass_stack_10->SetBinError(18,0.009862733);
   VbbHcc_both_Z_mass_stack_10->SetBinError(19,0.01033867);
   VbbHcc_both_Z_mass_stack_10->SetBinError(20,0.009514943);
   VbbHcc_both_Z_mass_stack_10->SetBinError(21,0.009145056);
   VbbHcc_both_Z_mass_stack_10->SetBinError(22,0.009396626);
   VbbHcc_both_Z_mass_stack_10->SetBinError(23,0.009326745);
   VbbHcc_both_Z_mass_stack_10->SetBinError(24,0.008702963);
   VbbHcc_both_Z_mass_stack_10->SetBinError(25,0.009049935);
   VbbHcc_both_Z_mass_stack_10->SetBinError(26,0.009090057);
   VbbHcc_both_Z_mass_stack_10->SetBinError(27,0.008648499);
   VbbHcc_both_Z_mass_stack_10->SetBinError(28,0.008539224);
   VbbHcc_both_Z_mass_stack_10->SetBinError(29,0.008573931);
   VbbHcc_both_Z_mass_stack_10->SetBinError(30,0.008536575);
   VbbHcc_both_Z_mass_stack_10->SetBinError(31,0.008402891);
   VbbHcc_both_Z_mass_stack_10->SetBinError(32,0.00821281);
   VbbHcc_both_Z_mass_stack_10->SetBinError(33,0.008248277);
   VbbHcc_both_Z_mass_stack_10->SetBinError(34,0.007871205);
   VbbHcc_both_Z_mass_stack_10->SetBinError(35,0.008007653);
   VbbHcc_both_Z_mass_stack_10->SetBinError(36,0.007904532);
   VbbHcc_both_Z_mass_stack_10->SetBinError(37,0.007891531);
   VbbHcc_both_Z_mass_stack_10->SetBinError(38,0.00765417);
   VbbHcc_both_Z_mass_stack_10->SetBinError(39,0.007471553);
   VbbHcc_both_Z_mass_stack_10->SetBinError(40,0.007683813);
   VbbHcc_both_Z_mass_stack_10->SetBinError(41,0.04571977);
   VbbHcc_both_Z_mass_stack_10->SetEntries(50073);

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
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.002869221);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(7,0.002864632);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.02943437);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.005401085);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.002944518);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.002869457);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.005891746);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.005754562);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.003126194);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.006089877);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(19,0.002933425);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(29,0.002862625);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(33,0.002965507);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.02868894);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.002869221);
   VbbHcc_both_Z_mass_stack_11->SetBinError(7,0.002864632);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.00932236);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.003830529);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.002944518);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.002869457);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.004166897);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.004069859);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.003126194);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.004313037);
   VbbHcc_both_Z_mass_stack_11->SetBinError(19,0.002933425);
   VbbHcc_both_Z_mass_stack_11->SetBinError(29,0.002862625);
   VbbHcc_both_Z_mass_stack_11->SetBinError(33,0.002965507);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.009113134);
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
   VbbHcc_both_Z_mass_stack_12->SetBinContent(5,0.0008032758);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(6,0.0003800229);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(7,0.0007307962);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(8,0.002207558);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(9,0.009009701);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(10,0.007902191);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(11,0.003359404);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(12,0.002367581);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(13,0.0003800229);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(14,0.0003784625);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(15,0.001093998);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(16,0.0003961891);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(17,0.0004203609);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(18,0.0004180535);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(19,0.001170703);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(20,0.000375922);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(21,0.0003876622);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(22,0.000375165);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(23,0.000406932);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(27,0.0003915395);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(28,0.0003747978);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(29,0.000383191);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(30,0.001536322);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(31,0.0007808673);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(32,0.0003711102);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(33,0.0003642893);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(34,0.0003912579);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(36,0.0003911355);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(38,0.0003777023);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(39,0.000387588);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(40,0.0003867205);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(41,0.01325337);
   VbbHcc_both_Z_mass_stack_12->SetBinError(5,0.0005685598);
   VbbHcc_both_Z_mass_stack_12->SetBinError(6,0.0003800229);
   VbbHcc_both_Z_mass_stack_12->SetBinError(7,0.0005226871);
   VbbHcc_both_Z_mass_stack_12->SetBinError(8,0.0009100865);
   VbbHcc_both_Z_mass_stack_12->SetBinError(9,0.001881083);
   VbbHcc_both_Z_mass_stack_12->SetBinError(10,0.001706729);
   VbbHcc_both_Z_mass_stack_12->SetBinError(11,0.001124118);
   VbbHcc_both_Z_mass_stack_12->SetBinError(12,0.0009684528);
   VbbHcc_both_Z_mass_stack_12->SetBinError(13,0.0003800229);
   VbbHcc_both_Z_mass_stack_12->SetBinError(14,0.0003784625);
   VbbHcc_both_Z_mass_stack_12->SetBinError(15,0.0006342248);
   VbbHcc_both_Z_mass_stack_12->SetBinError(16,0.0003961891);
   VbbHcc_both_Z_mass_stack_12->SetBinError(17,0.0004203609);
   VbbHcc_both_Z_mass_stack_12->SetBinError(18,0.0004180535);
   VbbHcc_both_Z_mass_stack_12->SetBinError(19,0.0006763305);
   VbbHcc_both_Z_mass_stack_12->SetBinError(20,0.000375922);
   VbbHcc_both_Z_mass_stack_12->SetBinError(21,0.0003876622);
   VbbHcc_both_Z_mass_stack_12->SetBinError(22,0.000375165);
   VbbHcc_both_Z_mass_stack_12->SetBinError(23,0.000406932);
   VbbHcc_both_Z_mass_stack_12->SetBinError(27,0.0003915395);
   VbbHcc_both_Z_mass_stack_12->SetBinError(28,0.0003747978);
   VbbHcc_both_Z_mass_stack_12->SetBinError(29,0.000383191);
   VbbHcc_both_Z_mass_stack_12->SetBinError(30,0.0007688147);
   VbbHcc_both_Z_mass_stack_12->SetBinError(31,0.0005527391);
   VbbHcc_both_Z_mass_stack_12->SetBinError(32,0.0003711102);
   VbbHcc_both_Z_mass_stack_12->SetBinError(33,0.0003642893);
   VbbHcc_both_Z_mass_stack_12->SetBinError(34,0.0003912579);
   VbbHcc_both_Z_mass_stack_12->SetBinError(36,0.0003911355);
   VbbHcc_both_Z_mass_stack_12->SetBinError(38,0.0003777023);
   VbbHcc_both_Z_mass_stack_12->SetBinError(39,0.000387588);
   VbbHcc_both_Z_mass_stack_12->SetBinError(40,0.0003867205);
   VbbHcc_both_Z_mass_stack_12->SetBinError(41,0.002250444);
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
   VbbHcc_both_Z_mass__529->SetBinContent(4,546);
   VbbHcc_both_Z_mass__529->SetBinContent(5,2020);
   VbbHcc_both_Z_mass__529->SetBinContent(6,3193);
   VbbHcc_both_Z_mass__529->SetBinContent(7,3787);
   VbbHcc_both_Z_mass__529->SetBinContent(15,2651);
   VbbHcc_both_Z_mass__529->SetBinContent(16,2429);
   VbbHcc_both_Z_mass__529->SetBinContent(17,2337);
   VbbHcc_both_Z_mass__529->SetBinContent(18,2118);
   VbbHcc_both_Z_mass__529->SetBinContent(19,2032);
   VbbHcc_both_Z_mass__529->SetBinContent(20,1866);
   VbbHcc_both_Z_mass__529->SetBinContent(21,1770);
   VbbHcc_both_Z_mass__529->SetBinContent(22,1721);
   VbbHcc_both_Z_mass__529->SetBinContent(23,1559);
   VbbHcc_both_Z_mass__529->SetBinContent(24,1451);
   VbbHcc_both_Z_mass__529->SetBinContent(25,1387);
   VbbHcc_both_Z_mass__529->SetBinContent(26,1405);
   VbbHcc_both_Z_mass__529->SetBinContent(27,1359);
   VbbHcc_both_Z_mass__529->SetBinContent(28,1176);
   VbbHcc_both_Z_mass__529->SetBinContent(29,1183);
   VbbHcc_both_Z_mass__529->SetBinContent(30,1165);
   VbbHcc_both_Z_mass__529->SetBinContent(31,1069);
   VbbHcc_both_Z_mass__529->SetBinContent(32,1003);
   VbbHcc_both_Z_mass__529->SetBinContent(33,1010);
   VbbHcc_both_Z_mass__529->SetBinContent(34,1032);
   VbbHcc_both_Z_mass__529->SetBinContent(35,962);
   VbbHcc_both_Z_mass__529->SetBinContent(36,932);
   VbbHcc_both_Z_mass__529->SetBinContent(37,927);
   VbbHcc_both_Z_mass__529->SetBinContent(38,911);
   VbbHcc_both_Z_mass__529->SetBinContent(39,854);
   VbbHcc_both_Z_mass__529->SetBinContent(40,801);
   VbbHcc_both_Z_mass__529->SetBinContent(41,31695);
   VbbHcc_both_Z_mass__529->SetEntries(102720);

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
   9.219456,
   1859.192,
   6910.974,
   8396.749,
   10139.27,
   9033.803,
   7670.81,
   7043.296,
   5746.541,
   6759.524,
   3973.201,
   7086.074,
   5300.304,
   3095.966,
   3313.138,
   5384.419,
   3224.494,
   4124.519,
   3011.656,
   2044.641,
   4242.759,
   4386.052,
   2136.824,
   4508.184,
   2124.613,
   1948.888,
   1688.941,
   2745.995,
   3692.059,
   2893.45,
   1091.064,
   3126.389,
   1616.27,
   1623.518,
   1048.38,
   2098.866,
   1842.311,
   2454.611};
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
   6.57032,
   657.3815,
   1995.443,
   1949.677,
   2085.944,
   1271.955,
   1167.629,
   1915.159,
   968.9708,
   1912.681,
   630.5896,
   1771.849,
   998.2314,
   532.0551,
   661.6952,
   1854.348,
   684.9891,
   1796.036,
   683.1929,
   481.786,
   1749.502,
   1653.004,
   566.0987,
   1784.55,
   538.1588,
   556.2904,
   455.7697,
   1567.253,
   1643.383,
   737.7619,
   279.2728,
   837.4402,
   517.3508,
   516.5382,
   292.2546,
   633.4424,
   586.9979,
   679.4899};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_both_Z_mass_fx1385,Graph_from_VbbHcc_both_Z_mass_fy1385,Graph_from_VbbHcc_both_Z_mass_fex1385,Graph_from_VbbHcc_both_Z_mass_fey1385);
   gre->SetName("Graph_from_VbbHcc_both_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_mass1385 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_mass1385","",100,0,440);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->SetMinimum(13.44774);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->SetMaximum(13447.74);
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
   data_mc_ratio__530->SetBinContent(3,2.169325);
   data_mc_ratio__530->SetBinContent(4,0.2936759);
   data_mc_ratio__530->SetBinContent(5,0.2922887);
   data_mc_ratio__530->SetBinContent(6,0.3802662);
   data_mc_ratio__530->SetBinContent(7,0.3734983);
   data_mc_ratio__530->SetBinContent(8,0.4416744);
   data_mc_ratio__530->SetBinContent(9,0.5060743);
   data_mc_ratio__530->SetBinContent(10,0.5122601);
   data_mc_ratio__530->SetBinContent(11,0.6155007);
   data_mc_ratio__530->SetBinContent(12,0.49826);
   data_mc_ratio__530->SetBinContent(13,0.7656295);
   data_mc_ratio__530->SetBinContent(14,0.4068544);
   data_mc_ratio__530->SetBinContent(15,0.50016);
   data_mc_ratio__530->SetBinContent(16,0.7845694);
   data_mc_ratio__530->SetBinContent(17,0.7053736);
   data_mc_ratio__530->SetBinContent(18,0.3933572);
   data_mc_ratio__530->SetBinContent(19,0.6301765);
   data_mc_ratio__530->SetBinContent(20,0.4524163);
   data_mc_ratio__530->SetBinContent(21,0.5877166);
   data_mc_ratio__530->SetBinContent(22,0.8417124);
   data_mc_ratio__530->SetBinContent(23,0.3674496);
   data_mc_ratio__530->SetBinContent(24,0.3308214);
   data_mc_ratio__530->SetBinContent(25,0.6490943);
   data_mc_ratio__530->SetBinContent(26,0.3116554);
   data_mc_ratio__530->SetBinContent(27,0.639646);
   data_mc_ratio__530->SetBinContent(28,0.603421);
   data_mc_ratio__530->SetBinContent(29,0.7004391);
   data_mc_ratio__530->SetBinContent(30,0.4242542);
   data_mc_ratio__530->SetBinContent(31,0.2895403);
   data_mc_ratio__530->SetBinContent(32,0.3466451);
   data_mc_ratio__530->SetBinContent(33,0.925702);
   data_mc_ratio__530->SetBinContent(34,0.3300933);
   data_mc_ratio__530->SetBinContent(35,0.5951977);
   data_mc_ratio__530->SetBinContent(36,0.5740621);
   data_mc_ratio__530->SetBinContent(37,0.8842211);
   data_mc_ratio__530->SetBinContent(38,0.434044);
   data_mc_ratio__530->SetBinContent(39,0.4635482);
   data_mc_ratio__530->SetBinContent(40,0.3263247);
   data_mc_ratio__530->SetBinContent(41,0.5662714);
   data_mc_ratio__530->SetBinError(3,0.4850759);
   data_mc_ratio__530->SetBinError(4,0.01256817);
   data_mc_ratio__530->SetBinError(5,0.006503339);
   data_mc_ratio__530->SetBinError(6,0.006729585);
   data_mc_ratio__530->SetBinError(7,0.006069333);
   data_mc_ratio__530->SetBinError(8,0.006992232);
   data_mc_ratio__530->SetBinError(9,0.008122441);
   data_mc_ratio__530->SetBinError(10,0.008528198);
   data_mc_ratio__530->SetBinError(11,0.0103493);
   data_mc_ratio__530->SetBinError(12,0.008585586);
   data_mc_ratio__530->SetBinError(13,0.01388158);
   data_mc_ratio__530->SetBinError(14,0.007577338);
   data_mc_ratio__530->SetBinError(15,0.009714134);
   data_mc_ratio__530->SetBinError(16,0.01591907);
   data_mc_ratio__530->SetBinError(17,0.01459116);
   data_mc_ratio__530->SetBinError(18,0.008547206);
   data_mc_ratio__530->SetBinError(19,0.01397978);
   data_mc_ratio__530->SetBinError(20,0.01047327);
   data_mc_ratio__530->SetBinError(21,0.01396952);
   data_mc_ratio__530->SetBinError(22,0.02028959);
   data_mc_ratio__530->SetBinError(23,0.00930625);
   data_mc_ratio__530->SetBinError(24,0.008684802);
   data_mc_ratio__530->SetBinError(25,0.01742888);
   data_mc_ratio__530->SetBinError(26,0.008314508);
   data_mc_ratio__530->SetBinError(27,0.01735122);
   data_mc_ratio__530->SetBinError(28,0.01759611);
   data_mc_ratio__530->SetBinError(29,0.0203647);
   data_mc_ratio__530->SetBinError(30,0.01242977);
   data_mc_ratio__530->SetBinError(31,0.008855644);
   data_mc_ratio__530->SetBinError(32,0.01094547);
   data_mc_ratio__530->SetBinError(33,0.02912799);
   data_mc_ratio__530->SetBinError(34,0.01027535);
   data_mc_ratio__530->SetBinError(35,0.01918994);
   data_mc_ratio__530->SetBinError(36,0.01880403);
   data_mc_ratio__530->SetBinError(37,0.02904163);
   data_mc_ratio__530->SetBinError(38,0.01438052);
   data_mc_ratio__530->SetBinError(39,0.01586229);
   data_mc_ratio__530->SetBinError(40,0.01153012);
   data_mc_ratio__530->SetBinError(41,0.03747361);
   data_mc_ratio__530->SetMinimum(0.4);
   data_mc_ratio__530->SetMaximum(1.6);
   data_mc_ratio__530->SetEntries(132.9319);
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
   0.712658,
   0.3535845,
   0.2887354,
   0.2321942,
   0.2057292,
   0.1407995,
   0.1522172,
   0.2719124,
   0.1686181,
   0.2829609,
   0.1587107,
   0.2500467,
   0.1883347,
   0.1718543,
   0.1997186,
   0.3443915,
   0.2124331,
   0.4354534,
   0.2268496,
   0.2356335,
   0.4123501,
   0.3768773,
   0.2649253,
   0.3958468,
   0.2532974,
   0.2854399,
   0.2698553,
   0.5707413,
   0.4451128,
   0.2549766,
   0.2559637,
   0.2678618,
   0.3200894,
   0.3181599,
   0.2787677,
   0.3018023,
   0.3186204,
   0.2768219};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1386,Graph_from_mc_statistical_error_fy1386,Graph_from_mc_statistical_error_fex1386,Graph_from_mc_statistical_error_fey1386);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1386 = new TH1F("Graph_Graph_from_mc_statistical_error1386","",100,0,440);
   Graph_Graph_from_mc_statistical_error1386->SetMinimum(0.1448103);
   Graph_Graph_from_mc_statistical_error1386->SetMaximum(1.85519);
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
