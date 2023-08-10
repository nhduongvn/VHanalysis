void Z_dR_Bj1_both_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_17/Z_dR_Bj1_both_17
//=========  (Thu Aug 10 10:43:24 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_17 = new TCanvas("Z_dR_Bj1_both_17", "Z_dR_Bj1_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_17->SetHighLightColor(2);
   Z_dR_Bj1_both_17->Range(0,0,1,1);
   Z_dR_Bj1_both_17->SetFillColor(0);
   Z_dR_Bj1_both_17->SetFillStyle(4000);
   Z_dR_Bj1_both_17->SetBorderMode(0);
   Z_dR_Bj1_both_17->SetBorderSize(2);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.869122,6.314516,12.34719);
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
   st->SetMaximum(1.935577e+10);
   
   TH1F *st_stack_246 = new TH1F("st_stack_246","",30,0,6);
   st_stack_246->SetMinimum(0.001399893);
   st_stack_246->SetMaximum(6.69199e+10);
   st_stack_246->SetDirectory(0);
   st_stack_246->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_246->SetLineColor(ci);
   st_stack_246->GetXaxis()->SetRange(1,30);
   st_stack_246->GetXaxis()->SetLabelFont(42);
   st_stack_246->GetXaxis()->SetLabelSize(0.035);
   st_stack_246->GetXaxis()->SetTitleSize(0.035);
   st_stack_246->GetXaxis()->SetTitleFont(42);
   st_stack_246->GetYaxis()->SetTitle("Events/0.2");
   st_stack_246->GetYaxis()->SetLabelFont(42);
   st_stack_246->GetYaxis()->SetLabelSize(0.05);
   st_stack_246->GetYaxis()->SetTitleSize(0.057);
   st_stack_246->GetYaxis()->SetTitleOffset(1.2);
   st_stack_246->GetYaxis()->SetTitleFont(42);
   st_stack_246->GetZaxis()->SetLabelFont(42);
   st_stack_246->GetZaxis()->SetLabelSize(0.035);
   st_stack_246->GetZaxis()->SetTitleSize(0.035);
   st_stack_246->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_246);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,6187.599);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,27786.5);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,39043.5);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,20977.6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,14745.52);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,12426.23);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,7820.664);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,9820.328);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,20965.77);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,8013.595);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,6036.905);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,4011.448);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,6989.17);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,4066.944);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,4884.461);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,2715.365);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,2314.525);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,2204.56);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,1264.455);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,1413.504);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,1709.01);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,1609.905);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,764.043);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,264.5175);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,448.2527);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,421.683);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,106.732);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,611.4402);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,50.32591);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,17.54789);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,55.93876);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,750.6675);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,1941.817);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,14933.24);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,1894.503);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,1550.348);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,1425.683);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,1007.016);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,1284.924);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,14843.64);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,1718.603);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,1021.426);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,819.7048);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,1153.164);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,780.646);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,942.8048);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,620.2599);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,557.1642);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,556.4946);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,393.342);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,474.9425);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,546.9663);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,544.6171);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,284.104);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,66.90658);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,273.8878);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,271.902);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,39.72165);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,380.1557);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,27.41117);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,9.445606);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,35.61465);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(10320);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,31.51363);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,129.7083);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,134.2427);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,120.9356);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,108.1877);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,84.89368);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,64.31905);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,56.03425);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,44.64596);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,37.77029);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,31.56931);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,28.09888);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,29.51568);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,24.60824);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,20.92443);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,18.08437);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,16.40684);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,13.26503);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,10.20311);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,8.881607);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,8.254544);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,6.315359);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,5.422042);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,3.788811);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,2.262433);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,1.312228);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,1.472449);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,0.7904142);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,0.683926);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(30,0.4745222);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(31,0.3700553);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,2.316433);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,4.52024);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,4.479371);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,4.299064);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,4.265156);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,3.724458);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,3.139455);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,2.931215);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,2.655501);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,2.351199);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,2.24454);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,2.00619);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,2.232907);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,1.916116);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,1.805335);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,1.699138);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,1.588153);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,1.499502);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,1.281319);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,1.088739);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,1.195399);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,1.025867);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.9158259);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.6489994);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.5834072);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.4237247);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.4331387);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.3118127);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,0.3835762);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(30,0.2830289);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(31,0.1398718);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(12006);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(1,502.4425);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(2,2310.572);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(3,2931.72);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(4,2610.205);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(5,2127.365);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(6,1644.485);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(7,1311.509);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(8,1045.154);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(9,876.7627);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(10,739.8405);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(11,650.8911);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(12,584.3716);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(13,522.4498);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(14,462.961);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(15,400.9632);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(16,359.9047);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(17,292.6111);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(18,252.7229);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(19,215.7426);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(20,183.4366);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(21,144.3277);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(22,115.0615);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(23,92.25549);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(24,70.31873);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(25,49.3787);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(26,37.73124);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(27,23.85278);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(28,15.57719);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(29,8.724444);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(30,4.7969);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(31,7.561554);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(1,5.66589);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(2,12.13821);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(3,13.70808);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(4,12.92557);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(5,11.65181);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(6,10.2396);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(7,9.133513);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(8,8.155572);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(9,7.474712);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(10,6.864868);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(11,6.435531);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(12,6.103769);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(13,5.777685);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(14,5.435448);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(15,5.051931);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(16,4.797904);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(17,4.31725);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(18,4.014638);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(19,3.708567);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(20,3.425479);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(21,3.030489);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(22,2.70062);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(23,2.425904);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(24,2.109517);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(25,1.770224);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(26,1.545244);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(27,1.223239);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(28,0.9927923);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(29,0.7403272);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(30,0.5387356);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(31,0.6877012);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetEntries(333938);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(1,104.0704);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(2,380.497);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(3,399.5394);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(4,313.4659);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(5,199.7558);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(6,173.6023);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(7,128.1688);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(8,103.9834);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(9,92.95523);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(10,70.86139);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(11,73.47778);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(12,65.59009);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(13,52.01849);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(14,46.27734);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(15,44.57185);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(16,37.70569);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(17,30.26299);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(18,33.37529);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(19,19.96358);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(20,20.56175);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(21,15.80929);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(22,12.54119);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(23,15.60617);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(24,6.451341);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(25,3.999035);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(26,5.229402);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(27,2.546904);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(28,2.227958);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(29,1.416299);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(30,0.5037142);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(31,0.5739678);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(1,3.467091);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(2,11.87092);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(3,12.40875);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(4,12.66196);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(5,9.632654);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(6,9.702078);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(7,8.316867);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(8,6.073352);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(9,6.896119);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(10,5.278226);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(11,6.536543);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(12,5.353198);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(13,4.154836);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(14,3.161884);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(15,3.190986);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(16,4.630216);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(17,3.631574);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(18,4.614678);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(19,1.958379);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(20,3.33331);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(21,1.898172);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(22,3.073057);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(23,4.099726);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(24,1.109142);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(25,0.7207507);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(26,1.059697);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(27,0.6330815);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(28,0.6921959);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(29,0.4589104);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(30,0.3747368);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(31,0.2182876);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetEntries(18216);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(1,19.78559);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(2,52.33722);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(3,37.90348);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(4,25.74597);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(5,27.29596);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(6,12.51571);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(7,12.2431);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(8,10.95424);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(9,8.83072);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(10,7.853584);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(11,6.768974);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(12,3.605741);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(13,2.754462);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(14,5.202295);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(15,2.008367);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(16,4.291257);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(17,3.091559);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(18,2.023811);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(19,2.97331);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(20,1.469776);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(21,1.072729);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(22,9.110217);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(23,1.001041);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(24,0.3129792);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(25,0.8595754);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(26,0.6484788);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(27,0.1538099);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(28,0.09730004);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(29,0.3772473);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(30,0.09609274);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(31,0.001207297);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(1,1.931388);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(2,4.847136);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(3,4.272287);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(4,3.150062);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(5,7.298285);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(6,2.070145);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(7,2.087872);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(8,2.024335);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(9,2.480695);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(10,1.900222);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(11,1.797414);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(12,0.6988651);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(13,0.5587969);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(14,1.735424);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(15,0.4789714);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(16,1.700983);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(17,1.252207);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(18,0.5283824);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(19,1.242131);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(20,0.5049692);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(21,0.3817346);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(22,6.775898);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(23,0.3312957);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(24,0.1950542);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(25,0.3116655);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(26,0.2580498);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(27,0.09707464);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(28,0.08528172);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(29,0.3760419);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(30,0.08527317);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(31,0.001207297);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetEntries(2376);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(4,0.6306118);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(4,0.4459099);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(12,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,0.4958844);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,1.983537);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,0.9917687);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,0.4958844);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(7,0.4958844);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(12,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(14,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(17,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(26,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.3506432);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,0.7012864);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,0.4958844);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.3506432);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(7,0.3506432);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(12,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(14,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(17,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(26,0.2479422);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,2.27903);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,11.14193);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,5.824189);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,6.077415);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,3.798384);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,1.519354);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,1.772579);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,1.266128);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,2.27903);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,3.038707);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(11,1.519354);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(16,1.012902);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(18,1.012902);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(19,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(20,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,1.679709);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,1.214427);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.240547);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,0.9807386);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,0.6202735);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,0.669972);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,0.5662297);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.8771992);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(11,0.6202735);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.4385996);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.4385996);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.3581151);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.3581151);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(16,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(18,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(19,0.4385996);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(20,0.3581151);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(22,0.2532256);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(1,1.818609);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(2,8.009549);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(3,8.586303);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(4,6.194273);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(5,4.117291);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(6,2.842098);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(7,2.257009);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(8,1.773602);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(9,1.588574);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(10,1.543568);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(11,1.396879);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(12,1.331869);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(13,1.160176);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(14,1.003486);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(15,0.8484621);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(16,0.6717686);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(17,0.5334143);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(18,0.3967269);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(19,0.2800425);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(20,0.2016973);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(21,0.2100319);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(22,0.1600243);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(23,0.1583574);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(24,0.1166844);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(25,0.0933475);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(26,0.05334143);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(27,0.04667375);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(28,0.02000303);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(29,0.00166692);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(31,0.00166692);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(1,0.05505884);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(2,0.1155477);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(3,0.1196356);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(4,0.1016138);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(5,0.08284439);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(6,0.06882985);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(7,0.0613372);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(8,0.05437327);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(9,0.05145897);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(10,0.05072478);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(11,0.04825437);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(12,0.04711813);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(13,0.04397636);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(14,0.04089902);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(15,0.03760742);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(16,0.03346318);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(17,0.02981876);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(18,0.02571598);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(19,0.02160575);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(20,0.01833612);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(21,0.01871113);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(22,0.01633241);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(23,0.01624712);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(24,0.01394645);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(25,0.01247408);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(26,0.009429521);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(27,0.008820509);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(28,0.005774379);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(29,0.00166692);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(31,0.00166692);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetEntries(28446);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(1,0.6853624);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(2,3.158319);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(3,3.822069);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(4,2.947599);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(5,1.977119);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(6,1.375297);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(7,0.9929234);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(8,0.8000743);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(9,0.6899342);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(10,0.5935097);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(11,0.5714817);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(12,0.5120476);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(13,0.444301);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(14,0.4118824);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(15,0.3399796);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(16,0.2659987);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(17,0.244802);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(18,0.1853679);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(19,0.1737304);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(20,0.1433899);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(21,0.1209463);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(22,0.09808704);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(23,0.08229336);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(24,0.06774655);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(25,0.0415623);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(26,0.03906856);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(27,0.01662492);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(28,0.005818722);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(29,0.003324984);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(30,0.000415623);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(31,0.000415623);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(1,0.01687757);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(2,0.03623079);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(3,0.03985649);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(4,0.03500128);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(5,0.02866594);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(6,0.02390826);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(7,0.02031457);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(8,0.01823539);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(9,0.01693377);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(10,0.01570593);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(11,0.01541171);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(12,0.01458831);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(13,0.01358903);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(14,0.01308388);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(15,0.01188711);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(16,0.01051452);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(17,0.01008689);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(18,0.008777423);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(19,0.008497433);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(20,0.007719855);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(21,0.007089998);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(22,0.006384922);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(23,0.005848334);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(24,0.00530632);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(25,0.00415623);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(26,0.004029615);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(27,0.002628631);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(28,0.001555119);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(29,0.001175559);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(30,0.000415623);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(31,0.000415623);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.01264201);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.03476553);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.03634578);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.01738276);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.01106176);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.006321005);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.004740753);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(8,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(12,0.004740753);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.004469625);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.007412035);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.007578618);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.0052411);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.004180952);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.002737075);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(8,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(9,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(10,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(12,0.002737075);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(13,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(14,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(15,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(18,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(20,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(1,0.002491268);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(2,0.01557042);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(3,0.0145324);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(4,0.008096621);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(5,0.003944507);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(6,0.00332169);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(7,0.002283662);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(8,0.002698874);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(9,0.001245634);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(10,0.00145324);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(11,0.00145324);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(12,0.001660845);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(13,0.001038028);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(15,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(16,0.000622817);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(17,0.0004152113);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(18,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(21,0.0008304226);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(1,0.0007191671);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(2,0.001797918);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(3,0.001736954);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(4,0.001296497);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(5,0.0009049321);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(6,0.0008304226);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(7,0.0006885501);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(8,0.0007485328);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(9,0.0005085279);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(10,0.0005492729);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(11,0.0005492729);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(12,0.0005871975);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(13,0.0004642204);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(15,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(16,0.0003595835);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(17,0.0002935987);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(18,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(21,0.0004152113);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1__675 = new TH1D("VbbHcc_both_Z_dR_Bj1__675","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(1,3269);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(2,10866);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(3,10082);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(4,7547);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(5,5939);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(6,4684);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(7,3671);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(8,3062);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(9,2541);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(10,2179);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(11,1939);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(12,1776);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(13,1563);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(14,1326);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(15,1190);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(16,1095);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(17,892);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(18,795);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(19,697);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(20,584);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(21,399);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(22,384);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(23,345);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(24,240);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(25,200);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(26,156);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(27,108);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(28,64);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(29,41);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(30,22);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(31,28);
   VbbHcc_both_Z_dR_Bj1__675->SetEntries(67713);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1__675->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1__675->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1__675->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1__675->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1__675->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1__675->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__675->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__675->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__675->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__675->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__675->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__675->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__675->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1__675->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__675->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__675->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__675->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__675->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__675->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fx1491[30] = {
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
   5.9};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fy1491[30] = {
   6850.706,
   30684.28,
   42566.18,
   24064.08,
   17218.28,
   14347.97,
   9342.43,
   11040.55,
   21993.78,
   8875.101,
   6803.417,
   4696.288,
   7598.277,
   4608.166,
   5354.625,
   3137.303,
   2657.924,
   2507.544,
   1514.553,
   1628.707,
   1878.806,
   1753.445,
   878.5688,
   345.5738,
   504.8873,
   466.9463,
   134.8214,
   630.1591,
   61.53282,
   23.41953};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fex1491[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fey1491[30] = {
   750.7034,
   1941.904,
   14933.25,
   1894.597,
   1550.445,
   1425.759,
   1007.099,
   1284.969,
   14843.64,
   1718.628,
   1021.472,
   819.748,
   1153.189,
   780.6757,
   942.8256,
   620.3006,
   557.1965,
   556.5307,
   393.3686,
   474.9682,
   546.9795,
   544.6757,
   284.1456,
   66.95244,
   273.8952,
   271.909,
   39.748,
   380.1577,
   27.43027,
   9.472989};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_fx1491,Graph_from_VbbHcc_both_Z_dR_Bj1_fy1491,Graph_from_VbbHcc_both_Z_dR_Bj1_fex1491,Graph_from_VbbHcc_both_Z_dR_Bj1_fey1491);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetMinimum(12.55189);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetMaximum(63247.98);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_both_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__676 = new TH1D("data_mc_ratio__676","",30,0,6);
   data_mc_ratio__676->SetBinContent(1,0.4771771);
   data_mc_ratio__676->SetBinContent(2,0.3541227);
   data_mc_ratio__676->SetBinContent(3,0.2368547);
   data_mc_ratio__676->SetBinContent(4,0.313621);
   data_mc_ratio__676->SetBinContent(5,0.3449241);
   data_mc_ratio__676->SetBinContent(6,0.3264574);
   data_mc_ratio__676->SetBinContent(7,0.3929385);
   data_mc_ratio__676->SetBinContent(8,0.2773414);
   data_mc_ratio__676->SetBinContent(9,0.1155327);
   data_mc_ratio__676->SetBinContent(10,0.2455183);
   data_mc_ratio__676->SetBinContent(11,0.2850038);
   data_mc_ratio__676->SetBinContent(12,0.378171);
   data_mc_ratio__676->SetBinContent(13,0.2057045);
   data_mc_ratio__676->SetBinContent(14,0.2877501);
   data_mc_ratio__676->SetBinContent(15,0.2222378);
   data_mc_ratio__676->SetBinContent(16,0.3490259);
   data_mc_ratio__676->SetBinContent(17,0.3356003);
   data_mc_ratio__676->SetBinContent(18,0.3170433);
   data_mc_ratio__676->SetBinContent(19,0.4602019);
   data_mc_ratio__676->SetBinContent(20,0.3585666);
   data_mc_ratio__676->SetBinContent(21,0.2123689);
   data_mc_ratio__676->SetBinContent(22,0.2189975);
   data_mc_ratio__676->SetBinContent(23,0.3926841);
   data_mc_ratio__676->SetBinContent(24,0.6944971);
   data_mc_ratio__676->SetBinContent(25,0.396128);
   data_mc_ratio__676->SetBinContent(26,0.3340855);
   data_mc_ratio__676->SetBinContent(27,0.8010595);
   data_mc_ratio__676->SetBinContent(28,0.1015617);
   data_mc_ratio__676->SetBinContent(29,0.6663111);
   data_mc_ratio__676->SetBinContent(30,0.9393868);
   data_mc_ratio__676->SetBinContent(31,0.4344613);
   data_mc_ratio__676->SetBinError(1,0.00834588);
   data_mc_ratio__676->SetBinError(2,0.003397183);
   data_mc_ratio__676->SetBinError(3,0.002358895);
   data_mc_ratio__676->SetBinError(4,0.003610089);
   data_mc_ratio__676->SetBinError(5,0.004475761);
   data_mc_ratio__676->SetBinError(6,0.004769996);
   data_mc_ratio__676->SetBinError(7,0.006485334);
   data_mc_ratio__676->SetBinError(8,0.005012011);
   data_mc_ratio__676->SetBinError(9,0.002291936);
   data_mc_ratio__676->SetBinError(10,0.005259631);
   data_mc_ratio__676->SetBinError(11,0.006472347);
   data_mc_ratio__676->SetBinError(12,0.008973602);
   data_mc_ratio__676->SetBinError(13,0.005203126);
   data_mc_ratio__676->SetBinError(14,0.00790212);
   data_mc_ratio__676->SetBinError(15,0.006442351);
   data_mc_ratio__676->SetBinError(16,0.01054753);
   data_mc_ratio__676->SetBinError(17,0.01123673);
   data_mc_ratio__676->SetBinError(18,0.01124437);
   data_mc_ratio__676->SetBinError(19,0.01743139);
   data_mc_ratio__676->SetBinError(20,0.01483759);
   data_mc_ratio__676->SetBinError(21,0.01063174);
   data_mc_ratio__676->SetBinError(22,0.01117567);
   data_mc_ratio__676->SetBinError(23,0.0211414);
   data_mc_ratio__676->SetBinError(24,0.04482959);
   data_mc_ratio__676->SetBinError(25,0.02801048);
   data_mc_ratio__676->SetBinError(26,0.02674825);
   data_mc_ratio__676->SetBinError(27,0.07708199);
   data_mc_ratio__676->SetBinError(28,0.01269521);
   data_mc_ratio__676->SetBinError(29,0.1040603);
   data_mc_ratio__676->SetBinError(30,0.2002779);
   data_mc_ratio__676->SetBinError(31,0.2537888);
   data_mc_ratio__676->SetMinimum(0.4);
   data_mc_ratio__676->SetMaximum(1.6);
   data_mc_ratio__676->SetEntries(219.1016);
   data_mc_ratio__676->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__676->SetLineColor(ci);
   data_mc_ratio__676->SetLineWidth(2);
   data_mc_ratio__676->SetMarkerStyle(20);
   data_mc_ratio__676->SetMarkerSize(1.2);
   data_mc_ratio__676->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__676->GetXaxis()->SetRange(1,30);
   data_mc_ratio__676->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__676->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__676->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__676->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__676->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__676->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__676->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__676->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__676->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__676->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__676->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__676->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__676->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__676->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__676->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__676->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__676->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1492[30] = {
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
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1492[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1492[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1492[30] = {
   0.1095805,
   0.06328661,
   0.3508243,
   0.07873135,
   0.09004647,
   0.09937009,
   0.1077984,
   0.1163864,
   0.674902,
   0.193646,
   0.150141,
   0.1745523,
   0.1517698,
   0.1694114,
   0.1760769,
   0.1977178,
   0.209636,
   0.2219426,
   0.259726,
   0.2916228,
   0.2911314,
   0.3106317,
   0.3234187,
   0.1937428,
   0.5424879,
   0.5823132,
   0.2948196,
   0.6032726,
   0.4457827,
   0.4044909};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1492,Graph_from_mc_statistical_error_fy1492,Graph_from_mc_statistical_error_fex1492,Graph_from_mc_statistical_error_fey1492);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1492 = new TH1F("Graph_Graph_from_mc_statistical_error1492","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1492->SetMinimum(0.1901177);
   Graph_Graph_from_mc_statistical_error1492->SetMaximum(1.809882);
   Graph_Graph_from_mc_statistical_error1492->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1492->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1492->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1492);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->SetSelected(Z_dR_Bj1_both_17);
}
