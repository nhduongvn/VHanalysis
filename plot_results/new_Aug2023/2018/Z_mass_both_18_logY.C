void Z_mass_both_18_logY()
{
//=========Macro generated from canvas: Z_mass_both_18/Z_mass_both_18
//=========  (Tue Aug 22 09:18:01 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_18 = new TCanvas("Z_mass_both_18", "Z_mass_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_18->SetHighLightColor(2);
   Z_mass_both_18->Range(0,0,1,1);
   Z_mass_both_18->SetFillColor(0);
   Z_mass_both_18->SetFillStyle(4000);
   Z_mass_both_18->SetBorderMode(0);
   Z_mass_both_18->SetBorderSize(2);
   Z_mass_both_18->SetFrameFillStyle(1000);
   Z_mass_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.829287,315.7258,10.96405);
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
   st->SetMaximum(1.195285e+09);
   
   TH1F *st_stack_195 = new TH1F("st_stack_195","",40,0,400);
   st_stack_195->SetMinimum(0.001529348);
   st_stack_195->SetMaximum(3.843432e+09);
   st_stack_195->SetDirectory(0);
   st_stack_195->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_195->SetLineColor(ci);
   st_stack_195->GetXaxis()->SetRange(1,30);
   st_stack_195->GetXaxis()->SetLabelFont(42);
   st_stack_195->GetXaxis()->SetLabelSize(0.035);
   st_stack_195->GetXaxis()->SetTitleSize(0.035);
   st_stack_195->GetXaxis()->SetTitleFont(42);
   st_stack_195->GetYaxis()->SetTitle("Events/10.0");
   st_stack_195->GetYaxis()->SetLabelFont(42);
   st_stack_195->GetYaxis()->SetLabelSize(0.05);
   st_stack_195->GetYaxis()->SetTitleSize(0.057);
   st_stack_195->GetYaxis()->SetTitleOffset(1.2);
   st_stack_195->GetYaxis()->SetTitleFont(42);
   st_stack_195->GetZaxis()->SetLabelFont(42);
   st_stack_195->GetZaxis()->SetLabelSize(0.035);
   st_stack_195->GetZaxis()->SetTitleSize(0.035);
   st_stack_195->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_195);
   
   
   TH1D *VbbHcc_both_Z_mass_stack_1 = new TH1D("VbbHcc_both_Z_mass_stack_1","",40,0,400);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(3,8.487937);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(4,824.8944);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(5,4624.449);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(6,8990.615);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(7,11047.55);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(8,9507.809);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(9,9011.031);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(10,5015.075);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(11,6953.864);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(12,6452.275);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(13,5169.485);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(14,6448.001);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(15,4507.674);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(16,4401.718);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(17,4436.83);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(18,5207.03);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(19,5388.634);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(20,3593.196);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(21,3032.891);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(22,6252.701);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(23,3642.513);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(24,2418.834);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(25,4466.595);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(26,1534.947);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(27,1896.748);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(28,1791.689);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(29,3116.402);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(30,1970.114);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(31,3162.392);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(32,1730.618);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(33,1169.827);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(34,1343.612);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(35,1570.73);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(36,1828.622);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(37,2397.23);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(38,1074.959);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(39,2001.761);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(40,2306.85);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(41,71568.15);
   VbbHcc_both_Z_mass_stack_1->SetBinError(3,8.487937);
   VbbHcc_both_Z_mass_stack_1->SetBinError(4,380.4863);
   VbbHcc_both_Z_mass_stack_1->SetBinError(5,1027.563);
   VbbHcc_both_Z_mass_stack_1->SetBinError(6,1588.354);
   VbbHcc_both_Z_mass_stack_1->SetBinError(7,2589.055);
   VbbHcc_both_Z_mass_stack_1->SetBinError(8,1441.771);
   VbbHcc_both_Z_mass_stack_1->SetBinError(9,1730.537);
   VbbHcc_both_Z_mass_stack_1->SetBinError(10,1039.071);
   VbbHcc_both_Z_mass_stack_1->SetBinError(11,1320.993);
   VbbHcc_both_Z_mass_stack_1->SetBinError(12,2301.715);
   VbbHcc_both_Z_mass_stack_1->SetBinError(13,931.71);
   VbbHcc_both_Z_mass_stack_1->SetBinError(14,1247.728);
   VbbHcc_both_Z_mass_stack_1->SetBinError(15,940.833);
   VbbHcc_both_Z_mass_stack_1->SetBinError(16,939.3642);
   VbbHcc_both_Z_mass_stack_1->SetBinError(17,932.2479);
   VbbHcc_both_Z_mass_stack_1->SetBinError(18,1156.772);
   VbbHcc_both_Z_mass_stack_1->SetBinError(19,1488.67);
   VbbHcc_both_Z_mass_stack_1->SetBinError(20,815.9543);
   VbbHcc_both_Z_mass_stack_1->SetBinError(21,913.7763);
   VbbHcc_both_Z_mass_stack_1->SetBinError(22,1529.419);
   VbbHcc_both_Z_mass_stack_1->SetBinError(23,915.2399);
   VbbHcc_both_Z_mass_stack_1->SetBinError(24,667.4545);
   VbbHcc_both_Z_mass_stack_1->SetBinError(25,1172.48);
   VbbHcc_both_Z_mass_stack_1->SetBinError(26,348.0848);
   VbbHcc_both_Z_mass_stack_1->SetBinError(27,536.3755);
   VbbHcc_both_Z_mass_stack_1->SetBinError(28,468.6385);
   VbbHcc_both_Z_mass_stack_1->SetBinError(29,882.3444);
   VbbHcc_both_Z_mass_stack_1->SetBinError(30,555.0143);
   VbbHcc_both_Z_mass_stack_1->SetBinError(31,920.9438);
   VbbHcc_both_Z_mass_stack_1->SetBinError(32,429.5266);
   VbbHcc_both_Z_mass_stack_1->SetBinError(33,181.8797);
   VbbHcc_both_Z_mass_stack_1->SetBinError(34,426.7935);
   VbbHcc_both_Z_mass_stack_1->SetBinError(35,534.2641);
   VbbHcc_both_Z_mass_stack_1->SetBinError(36,442.0232);
   VbbHcc_both_Z_mass_stack_1->SetBinError(37,716.6224);
   VbbHcc_both_Z_mass_stack_1->SetBinError(38,184.7708);
   VbbHcc_both_Z_mass_stack_1->SetBinError(39,689.0064);
   VbbHcc_both_Z_mass_stack_1->SetBinError(40,710.671);
   VbbHcc_both_Z_mass_stack_1->SetBinError(41,3800.373);
   VbbHcc_both_Z_mass_stack_1->SetEntries(9895);

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
   VbbHcc_both_Z_mass_stack_2->SetBinContent(4,3.437499);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(5,12.10041);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(6,19.14113);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(7,27.94027);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(8,35.3981);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(9,37.22144);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(10,40.15269);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(11,41.40523);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(12,38.19754);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(13,41.14135);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(14,40.99587);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(15,38.79662);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(16,33.7002);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(17,30.56533);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(18,33.13525);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(19,28.47151);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(20,25.23042);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(21,27.18126);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(22,23.35213);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(23,23.60059);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(24,17.865);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(25,21.00066);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(26,21.86);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(27,14.13509);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(28,14.9887);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(29,17.25006);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(30,15.57928);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(31,17.80276);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(32,14.4485);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(33,15.86923);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(34,14.78397);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(35,13.44154);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(36,10.13533);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(37,12.51356);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(38,10.1137);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(39,11.44906);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(40,13.08472);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(41,468.1616);
   VbbHcc_both_Z_mass_stack_2->SetBinError(4,0.8594458);
   VbbHcc_both_Z_mass_stack_2->SetBinError(5,1.49342);
   VbbHcc_both_Z_mass_stack_2->SetBinError(6,1.918841);
   VbbHcc_both_Z_mass_stack_2->SetBinError(7,2.335381);
   VbbHcc_both_Z_mass_stack_2->SetBinError(8,2.703573);
   VbbHcc_both_Z_mass_stack_2->SetBinError(9,2.698337);
   VbbHcc_both_Z_mass_stack_2->SetBinError(10,2.729399);
   VbbHcc_both_Z_mass_stack_2->SetBinError(11,2.857086);
   VbbHcc_both_Z_mass_stack_2->SetBinError(12,2.778594);
   VbbHcc_both_Z_mass_stack_2->SetBinError(13,2.876407);
   VbbHcc_both_Z_mass_stack_2->SetBinError(14,2.904528);
   VbbHcc_both_Z_mass_stack_2->SetBinError(15,2.853186);
   VbbHcc_both_Z_mass_stack_2->SetBinError(16,2.610058);
   VbbHcc_both_Z_mass_stack_2->SetBinError(17,2.464055);
   VbbHcc_both_Z_mass_stack_2->SetBinError(18,2.587801);
   VbbHcc_both_Z_mass_stack_2->SetBinError(19,2.375505);
   VbbHcc_both_Z_mass_stack_2->SetBinError(20,2.252852);
   VbbHcc_both_Z_mass_stack_2->SetBinError(21,2.425008);
   VbbHcc_both_Z_mass_stack_2->SetBinError(22,2.198972);
   VbbHcc_both_Z_mass_stack_2->SetBinError(23,2.118512);
   VbbHcc_both_Z_mass_stack_2->SetBinError(24,1.732014);
   VbbHcc_both_Z_mass_stack_2->SetBinError(25,2.201629);
   VbbHcc_both_Z_mass_stack_2->SetBinError(26,2.066298);
   VbbHcc_both_Z_mass_stack_2->SetBinError(27,1.65981);
   VbbHcc_both_Z_mass_stack_2->SetBinError(28,1.756974);
   VbbHcc_both_Z_mass_stack_2->SetBinError(29,1.80858);
   VbbHcc_both_Z_mass_stack_2->SetBinError(30,1.747413);
   VbbHcc_both_Z_mass_stack_2->SetBinError(31,1.904926);
   VbbHcc_both_Z_mass_stack_2->SetBinError(32,1.67973);
   VbbHcc_both_Z_mass_stack_2->SetBinError(33,1.752713);
   VbbHcc_both_Z_mass_stack_2->SetBinError(34,1.66923);
   VbbHcc_both_Z_mass_stack_2->SetBinError(35,1.569929);
   VbbHcc_both_Z_mass_stack_2->SetBinError(36,1.412651);
   VbbHcc_both_Z_mass_stack_2->SetBinError(37,1.566722);
   VbbHcc_both_Z_mass_stack_2->SetBinError(38,1.334183);
   VbbHcc_both_Z_mass_stack_2->SetBinError(39,1.4068);
   VbbHcc_both_Z_mass_stack_2->SetBinError(40,1.686191);
   VbbHcc_both_Z_mass_stack_2->SetBinError(41,9.914315);
   VbbHcc_both_Z_mass_stack_2->SetEntries(14948);

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
   VbbHcc_both_Z_mass_stack_3->SetBinContent(2,0.08904539);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(3,3.112532);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(4,68.16529);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(5,240.7693);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(6,425.3814);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(7,577.7327);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(8,729.9529);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(9,848.6293);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(10,934.3248);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(11,966.2719);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(12,999.5043);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(13,994.7482);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(14,944.0749);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(15,866.4227);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(16,800.3916);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(17,731.1274);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(18,681.1282);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(19,630.9778);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(20,553.4234);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(21,522.8171);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(22,482.4403);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(23,475.2817);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(24,427.8782);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(25,415.5786);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(26,407.4474);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(27,367.0858);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(28,359.7165);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(29,348.8505);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(30,336.4172);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(31,329.0268);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(32,310.3059);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(33,296.3616);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(34,283.1873);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(35,279.1074);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(36,270.0094);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(37,259.6719);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(38,258.6968);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(39,247.1245);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(40,245.3386);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(41,9342.52);
   VbbHcc_both_Z_mass_stack_3->SetBinError(2,0.0632433);
   VbbHcc_both_Z_mass_stack_3->SetBinError(3,0.6025468);
   VbbHcc_both_Z_mass_stack_3->SetBinError(4,2.386907);
   VbbHcc_both_Z_mass_stack_3->SetBinError(5,4.634455);
   VbbHcc_both_Z_mass_stack_3->SetBinError(6,5.879192);
   VbbHcc_both_Z_mass_stack_3->SetBinError(7,6.711957);
   VbbHcc_both_Z_mass_stack_3->SetBinError(8,7.667924);
   VbbHcc_both_Z_mass_stack_3->SetBinError(9,8.770921);
   VbbHcc_both_Z_mass_stack_3->SetBinError(10,9.194868);
   VbbHcc_both_Z_mass_stack_3->SetBinError(11,9.135874);
   VbbHcc_both_Z_mass_stack_3->SetBinError(12,9.114864);
   VbbHcc_both_Z_mass_stack_3->SetBinError(13,9.059565);
   VbbHcc_both_Z_mass_stack_3->SetBinError(14,8.852982);
   VbbHcc_both_Z_mass_stack_3->SetBinError(15,8.454529);
   VbbHcc_both_Z_mass_stack_3->SetBinError(16,8.318512);
   VbbHcc_both_Z_mass_stack_3->SetBinError(17,7.672731);
   VbbHcc_both_Z_mass_stack_3->SetBinError(18,7.42625);
   VbbHcc_both_Z_mass_stack_3->SetBinError(19,8.034605);
   VbbHcc_both_Z_mass_stack_3->SetBinError(20,6.759188);
   VbbHcc_both_Z_mass_stack_3->SetBinError(21,6.612067);
   VbbHcc_both_Z_mass_stack_3->SetBinError(22,6.118872);
   VbbHcc_both_Z_mass_stack_3->SetBinError(23,6.81246);
   VbbHcc_both_Z_mass_stack_3->SetBinError(24,5.864711);
   VbbHcc_both_Z_mass_stack_3->SetBinError(25,5.933033);
   VbbHcc_both_Z_mass_stack_3->SetBinError(26,6.487056);
   VbbHcc_both_Z_mass_stack_3->SetBinError(27,5.776871);
   VbbHcc_both_Z_mass_stack_3->SetBinError(28,5.35643);
   VbbHcc_both_Z_mass_stack_3->SetBinError(29,5.339887);
   VbbHcc_both_Z_mass_stack_3->SetBinError(30,5.11291);
   VbbHcc_both_Z_mass_stack_3->SetBinError(31,5.131677);
   VbbHcc_both_Z_mass_stack_3->SetBinError(32,4.992272);
   VbbHcc_both_Z_mass_stack_3->SetBinError(33,5.03385);
   VbbHcc_both_Z_mass_stack_3->SetBinError(34,4.712772);
   VbbHcc_both_Z_mass_stack_3->SetBinError(35,4.849579);
   VbbHcc_both_Z_mass_stack_3->SetBinError(36,4.704814);
   VbbHcc_both_Z_mass_stack_3->SetBinError(37,4.60514);
   VbbHcc_both_Z_mass_stack_3->SetBinError(38,5.562885);
   VbbHcc_both_Z_mass_stack_3->SetBinError(39,4.429008);
   VbbHcc_both_Z_mass_stack_3->SetBinError(40,5.581497);
   VbbHcc_both_Z_mass_stack_3->SetBinError(41,28.34794);
   VbbHcc_both_Z_mass_stack_3->SetEntries(416844);

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
   VbbHcc_both_Z_mass_stack_4->SetBinContent(3,0.4773284);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(4,8.007769);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(5,29.04679);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(6,42.82941);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(7,82.00039);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(8,132.3012);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(9,207.1384);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(10,277.2576);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(11,184.2977);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(12,119.0623);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(13,76.37803);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(14,86.0375);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(15,65.2267);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(16,60.27529);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(17,61.61061);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(18,63.50792);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(19,52.39007);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(20,60.50543);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(21,47.05712);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(22,48.6235);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(23,45.06733);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(24,44.46705);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(25,41.22772);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(26,49.00975);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(27,48.20074);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(28,42.52968);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(29,34.38147);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(30,31.59054);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(31,32.61706);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(32,40.56306);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(33,30.64358);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(34,34.70545);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(35,33.46618);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(36,27.19906);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(37,34.85661);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(38,41.41738);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(39,25.4743);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(40,28.54676);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(41,1226.169);
   VbbHcc_both_Z_mass_stack_4->SetBinError(3,0.4773284);
   VbbHcc_both_Z_mass_stack_4->SetBinError(4,1.975955);
   VbbHcc_both_Z_mass_stack_4->SetBinError(5,5.222037);
   VbbHcc_both_Z_mass_stack_4->SetBinError(6,3.998334);
   VbbHcc_both_Z_mass_stack_4->SetBinError(7,7.65108);
   VbbHcc_both_Z_mass_stack_4->SetBinError(8,9.272214);
   VbbHcc_both_Z_mass_stack_4->SetBinError(9,14.6342);
   VbbHcc_both_Z_mass_stack_4->SetBinError(10,11.2441);
   VbbHcc_both_Z_mass_stack_4->SetBinError(11,10.22482);
   VbbHcc_both_Z_mass_stack_4->SetBinError(12,8.544548);
   VbbHcc_both_Z_mass_stack_4->SetBinError(13,4.87968);
   VbbHcc_both_Z_mass_stack_4->SetBinError(14,7.523554);
   VbbHcc_both_Z_mass_stack_4->SetBinError(15,4.594351);
   VbbHcc_both_Z_mass_stack_4->SetBinError(16,5.750652);
   VbbHcc_both_Z_mass_stack_4->SetBinError(17,5.726846);
   VbbHcc_both_Z_mass_stack_4->SetBinError(18,6.363702);
   VbbHcc_both_Z_mass_stack_4->SetBinError(19,4.200959);
   VbbHcc_both_Z_mass_stack_4->SetBinError(20,12.72928);
   VbbHcc_both_Z_mass_stack_4->SetBinError(21,4.136761);
   VbbHcc_both_Z_mass_stack_4->SetBinError(22,7.338289);
   VbbHcc_both_Z_mass_stack_4->SetBinError(23,4.329573);
   VbbHcc_both_Z_mass_stack_4->SetBinError(24,5.129535);
   VbbHcc_both_Z_mass_stack_4->SetBinError(25,3.9818);
   VbbHcc_both_Z_mass_stack_4->SetBinError(26,7.426826);
   VbbHcc_both_Z_mass_stack_4->SetBinError(27,7.013235);
   VbbHcc_both_Z_mass_stack_4->SetBinError(28,5.136166);
   VbbHcc_both_Z_mass_stack_4->SetBinError(29,3.336807);
   VbbHcc_both_Z_mass_stack_4->SetBinError(30,5.267222);
   VbbHcc_both_Z_mass_stack_4->SetBinError(31,3.481609);
   VbbHcc_both_Z_mass_stack_4->SetBinError(32,5.623942);
   VbbHcc_both_Z_mass_stack_4->SetBinError(33,3.208694);
   VbbHcc_both_Z_mass_stack_4->SetBinError(34,5.296279);
   VbbHcc_both_Z_mass_stack_4->SetBinError(35,4.951648);
   VbbHcc_both_Z_mass_stack_4->SetBinError(36,2.892201);
   VbbHcc_both_Z_mass_stack_4->SetBinError(37,4.004429);
   VbbHcc_both_Z_mass_stack_4->SetBinError(38,10.19569);
   VbbHcc_both_Z_mass_stack_4->SetBinError(39,2.912477);
   VbbHcc_both_Z_mass_stack_4->SetBinError(40,3.263926);
   VbbHcc_both_Z_mass_stack_4->SetBinError(41,27.42948);
   VbbHcc_both_Z_mass_stack_4->SetEntries(18425);

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
   VbbHcc_both_Z_mass_stack_5->SetBinContent(4,1.703037);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(5,9.209199);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(6,15.4254);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(7,16.00463);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(8,11.06629);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(9,14.52443);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(10,9.334844);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(11,9.586296);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(12,13.69988);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(13,5.844062);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(14,8.534241);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(15,5.039395);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(16,5.346623);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(17,7.814837);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(18,7.598863);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(19,10.03082);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(20,7.509468);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(21,6.544126);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(22,7.216213);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(23,4.547198);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(24,5.64188);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(25,4.948466);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(26,10.24714);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(27,2.942505);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(28,7.172385);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(29,5.36431);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(30,2.509298);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(31,1.527277);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(32,3.763501);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(33,4.160248);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(34,1.697248);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(35,4.157658);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(36,1.297284);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(37,3.499015);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(38,1.871391);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(39,2.834063);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(40,4.141973);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(41,106.4432);
   VbbHcc_both_Z_mass_stack_5->SetBinError(4,0.8261428);
   VbbHcc_both_Z_mass_stack_5->SetBinError(5,3.186785);
   VbbHcc_both_Z_mass_stack_5->SetBinError(6,4.249405);
   VbbHcc_both_Z_mass_stack_5->SetBinError(7,8.884549);
   VbbHcc_both_Z_mass_stack_5->SetBinError(8,3.338242);
   VbbHcc_both_Z_mass_stack_5->SetBinError(9,2.97225);
   VbbHcc_both_Z_mass_stack_5->SetBinError(10,1.46883);
   VbbHcc_both_Z_mass_stack_5->SetBinError(11,2.323289);
   VbbHcc_both_Z_mass_stack_5->SetBinError(12,4.537916);
   VbbHcc_both_Z_mass_stack_5->SetBinError(13,1.090349);
   VbbHcc_both_Z_mass_stack_5->SetBinError(14,2.360888);
   VbbHcc_both_Z_mass_stack_5->SetBinError(15,1.094155);
   VbbHcc_both_Z_mass_stack_5->SetBinError(16,1.010842);
   VbbHcc_both_Z_mass_stack_5->SetBinError(17,2.497969);
   VbbHcc_both_Z_mass_stack_5->SetBinError(18,2.42771);
   VbbHcc_both_Z_mass_stack_5->SetBinError(19,4.043569);
   VbbHcc_both_Z_mass_stack_5->SetBinError(20,2.871331);
   VbbHcc_both_Z_mass_stack_5->SetBinError(21,2.981234);
   VbbHcc_both_Z_mass_stack_5->SetBinError(22,2.496892);
   VbbHcc_both_Z_mass_stack_5->SetBinError(23,1.044969);
   VbbHcc_both_Z_mass_stack_5->SetBinError(24,1.952518);
   VbbHcc_both_Z_mass_stack_5->SetBinError(25,2.258383);
   VbbHcc_both_Z_mass_stack_5->SetBinError(26,3.493073);
   VbbHcc_both_Z_mass_stack_5->SetBinError(27,0.8361321);
   VbbHcc_both_Z_mass_stack_5->SetBinError(28,3.531976);
   VbbHcc_both_Z_mass_stack_5->SetBinError(29,2.287578);
   VbbHcc_both_Z_mass_stack_5->SetBinError(30,0.7869837);
   VbbHcc_both_Z_mass_stack_5->SetBinError(31,0.4473125);
   VbbHcc_both_Z_mass_stack_5->SetBinError(32,0.9629069);
   VbbHcc_both_Z_mass_stack_5->SetBinError(33,2.226085);
   VbbHcc_both_Z_mass_stack_5->SetBinError(34,0.6091751);
   VbbHcc_both_Z_mass_stack_5->SetBinError(35,2.207691);
   VbbHcc_both_Z_mass_stack_5->SetBinError(36,0.3804239);
   VbbHcc_both_Z_mass_stack_5->SetBinError(37,2.17696);
   VbbHcc_both_Z_mass_stack_5->SetBinError(38,0.5959785);
   VbbHcc_both_Z_mass_stack_5->SetBinError(39,0.8997448);
   VbbHcc_both_Z_mass_stack_5->SetBinError(40,2.706541);
   VbbHcc_both_Z_mass_stack_5->SetBinError(41,7.672034);
   VbbHcc_both_Z_mass_stack_5->SetEntries(2210);

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
   VbbHcc_both_Z_mass_stack_6->SetBinContent(7,0.6225638);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(14,0.4278565);
   VbbHcc_both_Z_mass_stack_6->SetBinError(7,0.6225638);
   VbbHcc_both_Z_mass_stack_6->SetBinError(14,0.4278565);
   VbbHcc_both_Z_mass_stack_6->SetEntries(2);

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
   VbbHcc_both_Z_mass_stack_7->SetBinContent(6,0.4346562);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(7,0.5493952);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(8,0.9148196);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(9,1.990981);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(10,2.513527);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(11,0.7670499);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(12,0.4671207);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(13,0.3477974);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(15,0.7853639);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(16,0.9636619);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(22,0.3443727);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(34,0.3690103);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(35,0.3443088);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(38,0.6196682);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(41,2.218026);
   VbbHcc_both_Z_mass_stack_7->SetBinError(6,0.4346562);
   VbbHcc_both_Z_mass_stack_7->SetBinError(7,0.5493952);
   VbbHcc_both_Z_mass_stack_7->SetBinError(8,0.5920731);
   VbbHcc_both_Z_mass_stack_7->SetBinError(9,0.9132128);
   VbbHcc_both_Z_mass_stack_7->SetBinError(10,1.036311);
   VbbHcc_both_Z_mass_stack_7->SetBinError(11,0.545205);
   VbbHcc_both_Z_mass_stack_7->SetBinError(12,0.4671207);
   VbbHcc_both_Z_mass_stack_7->SetBinError(13,0.3477974);
   VbbHcc_both_Z_mass_stack_7->SetBinError(15,0.558946);
   VbbHcc_both_Z_mass_stack_7->SetBinError(16,0.9636619);
   VbbHcc_both_Z_mass_stack_7->SetBinError(22,0.3443727);
   VbbHcc_both_Z_mass_stack_7->SetBinError(34,0.3690103);
   VbbHcc_both_Z_mass_stack_7->SetBinError(35,0.3443088);
   VbbHcc_both_Z_mass_stack_7->SetBinError(38,0.6196682);
   VbbHcc_both_Z_mass_stack_7->SetBinError(41,0.9186859);
   VbbHcc_both_Z_mass_stack_7->SetEntries(33);

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
   VbbHcc_both_Z_mass_stack_8->SetBinContent(5,0.3543521);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(6,0.6335791);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(7,0.7412052);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(8,2.879753);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(9,6.293325);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(10,7.946754);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(11,6.252265);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(12,1.094221);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(13,0.3648679);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(14,1.74138);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(15,0.8185609);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(16,1.869658);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(17,0.9477678);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(18,0.3201964);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(19,0.2974008);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(20,0.7751206);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(22,0.2773954);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(23,0.8451841);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(24,0.2974008);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(25,0.8342807);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(26,0.822163);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(27,0.6889105);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(28,0.616747);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(29,1.019931);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(30,1.644497);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(31,1.061552);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(32,0.5665203);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(33,0.4327783);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(34,0.4459792);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(37,0.6407664);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(38,0.8348945);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(39,0.06718464);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(41,24.12365);
   VbbHcc_both_Z_mass_stack_8->SetBinError(5,0.3543521);
   VbbHcc_both_Z_mass_stack_8->SetBinError(6,0.4554743);
   VbbHcc_both_Z_mass_stack_8->SetBinError(7,0.390808);
   VbbHcc_both_Z_mass_stack_8->SetBinError(8,0.9730669);
   VbbHcc_both_Z_mass_stack_8->SetBinError(9,1.394741);
   VbbHcc_both_Z_mass_stack_8->SetBinError(10,1.587813);
   VbbHcc_both_Z_mass_stack_8->SetBinError(11,1.404243);
   VbbHcc_both_Z_mass_stack_8->SetBinError(12,0.5471386);
   VbbHcc_both_Z_mass_stack_8->SetBinError(13,0.3648679);
   VbbHcc_both_Z_mass_stack_8->SetBinError(14,0.7856373);
   VbbHcc_both_Z_mass_stack_8->SetBinError(15,0.4735396);
   VbbHcc_both_Z_mass_stack_8->SetBinError(16,0.7251206);
   VbbHcc_both_Z_mass_stack_8->SetBinError(17,0.5525024);
   VbbHcc_both_Z_mass_stack_8->SetBinError(18,0.3201964);
   VbbHcc_both_Z_mass_stack_8->SetBinError(19,0.2974008);
   VbbHcc_both_Z_mass_stack_8->SetBinError(20,0.5026837);
   VbbHcc_both_Z_mass_stack_8->SetBinError(22,0.2773954);
   VbbHcc_both_Z_mass_stack_8->SetBinError(23,0.4972148);
   VbbHcc_both_Z_mass_stack_8->SetBinError(24,0.2974008);
   VbbHcc_both_Z_mass_stack_8->SetBinError(25,0.4827011);
   VbbHcc_both_Z_mass_stack_8->SetBinError(26,0.5846484);
   VbbHcc_both_Z_mass_stack_8->SetBinError(27,0.493869);
   VbbHcc_both_Z_mass_stack_8->SetBinError(28,0.3890351);
   VbbHcc_both_Z_mass_stack_8->SetBinError(29,0.5949725);
   VbbHcc_both_Z_mass_stack_8->SetBinError(30,0.7196277);
   VbbHcc_both_Z_mass_stack_8->SetBinError(31,0.619521);
   VbbHcc_both_Z_mass_stack_8->SetBinError(32,0.4057147);
   VbbHcc_both_Z_mass_stack_8->SetBinError(33,0.4327783);
   VbbHcc_both_Z_mass_stack_8->SetBinError(34,0.3223404);
   VbbHcc_both_Z_mass_stack_8->SetBinError(37,0.4579183);
   VbbHcc_both_Z_mass_stack_8->SetBinError(38,0.4978819);
   VbbHcc_both_Z_mass_stack_8->SetBinError(39,0.06718464);
   VbbHcc_both_Z_mass_stack_8->SetBinError(41,2.713765);
   VbbHcc_both_Z_mass_stack_8->SetEntries(232);

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
   VbbHcc_both_Z_mass_stack_9->SetBinContent(4,0.04596192);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(5,0.1808147);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(6,0.390581);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(7,0.7970926);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(8,1.967476);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(9,4.312354);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(10,5.691664);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(11,4.245031);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(12,3.508332);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(13,3.599288);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(14,2.875339);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(15,1.630299);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(16,0.9513977);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(17,0.6968357);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(18,0.5951007);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(19,0.5397772);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(20,0.5655547);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(21,0.5269234);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(22,0.5221103);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(23,0.4873601);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(24,0.5026452);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(25,0.5286318);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(26,0.4781972);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(27,0.5499042);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(28,0.5621873);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(29,0.4930373);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(30,0.5611042);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(31,0.5589984);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(32,0.6319943);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(33,0.4448057);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(34,0.5738408);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(35,0.6195625);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(36,0.5830125);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(37,0.4962268);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(38,0.5656438);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(39,0.5334821);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(40,0.5187796);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(41,22.64526);
   VbbHcc_both_Z_mass_stack_9->SetBinError(4,0.01187333);
   VbbHcc_both_Z_mass_stack_9->SetBinError(5,0.02394193);
   VbbHcc_both_Z_mass_stack_9->SetBinError(6,0.03773595);
   VbbHcc_both_Z_mass_stack_9->SetBinError(7,0.05180405);
   VbbHcc_both_Z_mass_stack_9->SetBinError(8,0.08135079);
   VbbHcc_both_Z_mass_stack_9->SetBinError(9,0.136171);
   VbbHcc_both_Z_mass_stack_9->SetBinError(10,0.1411761);
   VbbHcc_both_Z_mass_stack_9->SetBinError(11,0.1208496);
   VbbHcc_both_Z_mass_stack_9->SetBinError(12,0.1087306);
   VbbHcc_both_Z_mass_stack_9->SetBinError(13,0.1098814);
   VbbHcc_both_Z_mass_stack_9->SetBinError(14,0.09717562);
   VbbHcc_both_Z_mass_stack_9->SetBinError(15,0.07243785);
   VbbHcc_both_Z_mass_stack_9->SetBinError(16,0.05758377);
   VbbHcc_both_Z_mass_stack_9->SetBinError(17,0.04698417);
   VbbHcc_both_Z_mass_stack_9->SetBinError(18,0.04338727);
   VbbHcc_both_Z_mass_stack_9->SetBinError(19,0.04190234);
   VbbHcc_both_Z_mass_stack_9->SetBinError(20,0.04273175);
   VbbHcc_both_Z_mass_stack_9->SetBinError(21,0.04069323);
   VbbHcc_both_Z_mass_stack_9->SetBinError(22,0.04124525);
   VbbHcc_both_Z_mass_stack_9->SetBinError(23,0.03948704);
   VbbHcc_both_Z_mass_stack_9->SetBinError(24,0.040146);
   VbbHcc_both_Z_mass_stack_9->SetBinError(25,0.04297833);
   VbbHcc_both_Z_mass_stack_9->SetBinError(26,0.04343966);
   VbbHcc_both_Z_mass_stack_9->SetBinError(27,0.04894514);
   VbbHcc_both_Z_mass_stack_9->SetBinError(28,0.04490398);
   VbbHcc_both_Z_mass_stack_9->SetBinError(29,0.03931272);
   VbbHcc_both_Z_mass_stack_9->SetBinError(30,0.04526299);
   VbbHcc_both_Z_mass_stack_9->SetBinError(31,0.04803947);
   VbbHcc_both_Z_mass_stack_9->SetBinError(32,0.04826562);
   VbbHcc_both_Z_mass_stack_9->SetBinError(33,0.03886855);
   VbbHcc_both_Z_mass_stack_9->SetBinError(34,0.04328265);
   VbbHcc_both_Z_mass_stack_9->SetBinError(35,0.04474465);
   VbbHcc_both_Z_mass_stack_9->SetBinError(36,0.04934511);
   VbbHcc_both_Z_mass_stack_9->SetBinError(37,0.04309609);
   VbbHcc_both_Z_mass_stack_9->SetBinError(38,0.06497485);
   VbbHcc_both_Z_mass_stack_9->SetBinError(39,0.04193977);
   VbbHcc_both_Z_mass_stack_9->SetBinError(40,0.05254302);
   VbbHcc_both_Z_mass_stack_9->SetBinError(41,0.3084982);
   VbbHcc_both_Z_mass_stack_9->SetEntries(22331);

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
   VbbHcc_both_Z_mass_stack_10->SetBinContent(3,0.00058625);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(4,0.01602661);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(5,0.06004083);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(6,0.1469201);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(7,0.3226582);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(8,0.7751729);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(9,1.600788);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(10,1.914626);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(11,1.443928);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(12,1.295002);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(13,1.196148);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(14,0.9310227);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(15,0.6376881);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(16,0.425569);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(17,0.3770423);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(18,0.3053903);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(19,0.3320807);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(20,0.281233);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(21,0.2606692);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(22,0.274129);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(23,0.2599124);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(24,0.2434164);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(25,0.2581166);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(26,0.2517852);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(27,0.2326622);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(28,0.2273347);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(29,0.2350062);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(30,0.2231588);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(31,0.211255);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(32,0.1981152);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(33,0.2072174);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(34,0.1896718);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(35,0.1965836);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(36,0.1881917);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(37,0.188953);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(38,0.1771463);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(39,0.1768505);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(40,0.1781623);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(41,6.528824);
   VbbHcc_both_Z_mass_stack_10->SetBinError(3,0.00058625);
   VbbHcc_both_Z_mass_stack_10->SetBinError(4,0.003044117);
   VbbHcc_both_Z_mass_stack_10->SetBinError(5,0.005734051);
   VbbHcc_both_Z_mass_stack_10->SetBinError(6,0.009037742);
   VbbHcc_both_Z_mass_stack_10->SetBinError(7,0.01337549);
   VbbHcc_both_Z_mass_stack_10->SetBinError(8,0.02067527);
   VbbHcc_both_Z_mass_stack_10->SetBinError(9,0.02982047);
   VbbHcc_both_Z_mass_stack_10->SetBinError(10,0.03267118);
   VbbHcc_both_Z_mass_stack_10->SetBinError(11,0.02835437);
   VbbHcc_both_Z_mass_stack_10->SetBinError(12,0.02690473);
   VbbHcc_both_Z_mass_stack_10->SetBinError(13,0.02598689);
   VbbHcc_both_Z_mass_stack_10->SetBinError(14,0.02289408);
   VbbHcc_both_Z_mass_stack_10->SetBinError(15,0.01888949);
   VbbHcc_both_Z_mass_stack_10->SetBinError(16,0.01538329);
   VbbHcc_both_Z_mass_stack_10->SetBinError(17,0.01454781);
   VbbHcc_both_Z_mass_stack_10->SetBinError(18,0.01304791);
   VbbHcc_both_Z_mass_stack_10->SetBinError(19,0.01361451);
   VbbHcc_both_Z_mass_stack_10->SetBinError(20,0.0125302);
   VbbHcc_both_Z_mass_stack_10->SetBinError(21,0.01208021);
   VbbHcc_both_Z_mass_stack_10->SetBinError(22,0.01232291);
   VbbHcc_both_Z_mass_stack_10->SetBinError(23,0.01205686);
   VbbHcc_both_Z_mass_stack_10->SetBinError(24,0.0115859);
   VbbHcc_both_Z_mass_stack_10->SetBinError(25,0.01200649);
   VbbHcc_both_Z_mass_stack_10->SetBinError(26,0.01182875);
   VbbHcc_both_Z_mass_stack_10->SetBinError(27,0.01137082);
   VbbHcc_both_Z_mass_stack_10->SetBinError(28,0.01117424);
   VbbHcc_both_Z_mass_stack_10->SetBinError(29,0.0114255);
   VbbHcc_both_Z_mass_stack_10->SetBinError(30,0.01115135);
   VbbHcc_both_Z_mass_stack_10->SetBinError(31,0.0108138);
   VbbHcc_both_Z_mass_stack_10->SetBinError(32,0.01050482);
   VbbHcc_both_Z_mass_stack_10->SetBinError(33,0.01067643);
   VbbHcc_both_Z_mass_stack_10->SetBinError(34,0.01022945);
   VbbHcc_both_Z_mass_stack_10->SetBinError(35,0.01045514);
   VbbHcc_both_Z_mass_stack_10->SetBinError(36,0.01024627);
   VbbHcc_both_Z_mass_stack_10->SetBinError(37,0.01023198);
   VbbHcc_both_Z_mass_stack_10->SetBinError(38,0.009888475);
   VbbHcc_both_Z_mass_stack_10->SetBinError(39,0.009875232);
   VbbHcc_both_Z_mass_stack_10->SetBinError(40,0.009956488);
   VbbHcc_both_Z_mass_stack_10->SetBinError(41,0.06065609);
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
   VbbHcc_both_Z_mass_stack_11->SetBinContent(4,0.00221053);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(5,0.002360595);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.004794448);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(8,0.004238681);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.03478134);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.04221984);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.02569631);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.007923762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.002190433);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(14,0.00225108);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.004590214);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.00201936);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.002294171);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(21,0.002284175);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(22,0.002390853);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(23,0.002884364);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(27,0.002203227);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(28,0.002212627);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(30,0.002141222);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(31,0.002203227);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(32,0.00210716);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(35,0.004697646);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(37,0.002640973);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.02693845);
   VbbHcc_both_Z_mass_stack_11->SetBinError(4,0.00221053);
   VbbHcc_both_Z_mass_stack_11->SetBinError(5,0.002360595);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.003400452);
   VbbHcc_both_Z_mass_stack_11->SetBinError(8,0.003000102);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.009096566);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.01014432);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.007954476);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.004039688);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.002190433);
   VbbHcc_both_Z_mass_stack_11->SetBinError(14,0.00225108);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.003249145);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.00201936);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.002294171);
   VbbHcc_both_Z_mass_stack_11->SetBinError(21,0.002284175);
   VbbHcc_both_Z_mass_stack_11->SetBinError(22,0.002390853);
   VbbHcc_both_Z_mass_stack_11->SetBinError(23,0.002884364);
   VbbHcc_both_Z_mass_stack_11->SetBinError(27,0.002203227);
   VbbHcc_both_Z_mass_stack_11->SetBinError(28,0.002212627);
   VbbHcc_both_Z_mass_stack_11->SetBinError(30,0.002141222);
   VbbHcc_both_Z_mass_stack_11->SetBinError(31,0.002203227);
   VbbHcc_both_Z_mass_stack_11->SetBinError(32,0.00210716);
   VbbHcc_both_Z_mass_stack_11->SetBinError(35,0.003322477);
   VbbHcc_both_Z_mass_stack_11->SetBinError(37,0.002640973);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.00797015);
   VbbHcc_both_Z_mass_stack_11->SetEntries(84);

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
   VbbHcc_both_Z_mass_stack_12->SetBinContent(6,0.0003027456);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(7,0.003688316);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(8,0.006139745);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(9,0.01218298);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(10,0.01610108);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(11,0.01140835);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(12,0.003665851);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(13,0.003491006);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(14,0.002336762);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(15,0.002109034);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(16,0.001463614);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(17,0.0005474943);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(18,0.001352726);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(19,0.001435967);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(20,0.002065154);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(21,0.0006251017);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(22,0.0003203421);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(23,0.0009399941);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(24,0.0003007646);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(25,0.001268251);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(26,0.0008865273);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(27,0.00039722);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(28,0.0008449956);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(30,0.001013915);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(32,0.0006062078);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(33,0.0002774565);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(34,0.0002440722);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(35,0.001150834);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(36,0.0002925643);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(37,0.0002856543);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(39,0.0002850466);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(41,0.02457263);
   VbbHcc_both_Z_mass_stack_12->SetBinError(6,0.0003027456);
   VbbHcc_both_Z_mass_stack_12->SetBinError(7,0.00117778);
   VbbHcc_both_Z_mass_stack_12->SetBinError(8,0.001461521);
   VbbHcc_both_Z_mass_stack_12->SetBinError(9,0.001987742);
   VbbHcc_both_Z_mass_stack_12->SetBinError(10,0.002301965);
   VbbHcc_both_Z_mass_stack_12->SetBinError(11,0.001986023);
   VbbHcc_both_Z_mass_stack_12->SetBinError(12,0.001062771);
   VbbHcc_both_Z_mass_stack_12->SetBinError(13,0.00102163);
   VbbHcc_both_Z_mass_stack_12->SetBinError(14,0.0009412814);
   VbbHcc_both_Z_mass_stack_12->SetBinError(15,0.0008731972);
   VbbHcc_both_Z_mass_stack_12->SetBinError(16,0.0006555976);
   VbbHcc_both_Z_mass_stack_12->SetBinError(17,0.0003881233);
   VbbHcc_both_Z_mass_stack_12->SetBinError(18,0.0006815534);
   VbbHcc_both_Z_mass_stack_12->SetBinError(19,0.0006493393);
   VbbHcc_both_Z_mass_stack_12->SetBinError(20,0.0008578471);
   VbbHcc_both_Z_mass_stack_12->SetBinError(21,0.00045798);
   VbbHcc_both_Z_mass_stack_12->SetBinError(22,0.0003203421);
   VbbHcc_both_Z_mass_stack_12->SetBinError(23,0.0005473397);
   VbbHcc_both_Z_mass_stack_12->SetBinError(24,0.0003007646);
   VbbHcc_both_Z_mass_stack_12->SetBinError(25,0.0006487318);
   VbbHcc_both_Z_mass_stack_12->SetBinError(26,0.0005217538);
   VbbHcc_both_Z_mass_stack_12->SetBinError(27,0.00039722);
   VbbHcc_both_Z_mass_stack_12->SetBinError(28,0.0004882235);
   VbbHcc_both_Z_mass_stack_12->SetBinError(30,0.0005877887);
   VbbHcc_both_Z_mass_stack_12->SetBinError(32,0.000449968);
   VbbHcc_both_Z_mass_stack_12->SetBinError(33,0.0002774565);
   VbbHcc_both_Z_mass_stack_12->SetBinError(34,0.0002440722);
   VbbHcc_both_Z_mass_stack_12->SetBinError(35,0.0005877664);
   VbbHcc_both_Z_mass_stack_12->SetBinError(36,0.0002925643);
   VbbHcc_both_Z_mass_stack_12->SetBinError(37,0.0002856543);
   VbbHcc_both_Z_mass_stack_12->SetBinError(39,0.0002850466);
   VbbHcc_both_Z_mass_stack_12->SetBinError(41,0.002760004);
   VbbHcc_both_Z_mass_stack_12->SetEntries(330);

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
   
   TH1D *VbbHcc_both_Z_mass__535 = new TH1D("VbbHcc_both_Z_mass__535","",40,0,400);
   VbbHcc_both_Z_mass__535->SetBinContent(3,43);
   VbbHcc_both_Z_mass__535->SetBinContent(4,1279);
   VbbHcc_both_Z_mass__535->SetBinContent(5,5195);
   VbbHcc_both_Z_mass__535->SetBinContent(6,9283);
   VbbHcc_both_Z_mass__535->SetBinContent(7,11633);
   VbbHcc_both_Z_mass__535->SetBinContent(15,7904);
   VbbHcc_both_Z_mass__535->SetBinContent(16,7362);
   VbbHcc_both_Z_mass__535->SetBinContent(17,6997);
   VbbHcc_both_Z_mass__535->SetBinContent(18,6519);
   VbbHcc_both_Z_mass__535->SetBinContent(19,6101);
   VbbHcc_both_Z_mass__535->SetBinContent(20,5540);
   VbbHcc_both_Z_mass__535->SetBinContent(21,5379);
   VbbHcc_both_Z_mass__535->SetBinContent(22,4972);
   VbbHcc_both_Z_mass__535->SetBinContent(23,4736);
   VbbHcc_both_Z_mass__535->SetBinContent(24,4536);
   VbbHcc_both_Z_mass__535->SetBinContent(25,4299);
   VbbHcc_both_Z_mass__535->SetBinContent(26,4136);
   VbbHcc_both_Z_mass__535->SetBinContent(27,3845);
   VbbHcc_both_Z_mass__535->SetBinContent(28,3785);
   VbbHcc_both_Z_mass__535->SetBinContent(29,3773);
   VbbHcc_both_Z_mass__535->SetBinContent(30,3535);
   VbbHcc_both_Z_mass__535->SetBinContent(31,3496);
   VbbHcc_both_Z_mass__535->SetBinContent(32,3291);
   VbbHcc_both_Z_mass__535->SetBinContent(33,3112);
   VbbHcc_both_Z_mass__535->SetBinContent(34,3081);
   VbbHcc_both_Z_mass__535->SetBinContent(35,3028);
   VbbHcc_both_Z_mass__535->SetBinContent(36,3025);
   VbbHcc_both_Z_mass__535->SetBinContent(37,2937);
   VbbHcc_both_Z_mass__535->SetBinContent(38,2837);
   VbbHcc_both_Z_mass__535->SetBinContent(39,2678);
   VbbHcc_both_Z_mass__535->SetBinContent(40,2720);
   VbbHcc_both_Z_mass__535->SetBinContent(41,105161);
   VbbHcc_both_Z_mass__535->SetEntries(319461);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass__535->SetLineColor(ci);
   VbbHcc_both_Z_mass__535->SetLineWidth(2);
   VbbHcc_both_Z_mass__535->SetMarkerStyle(20);
   VbbHcc_both_Z_mass__535->SetMarkerSize(1.2);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__535->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__535->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__535->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__535->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__535->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_mass_fx1389[40] = {
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
   Double_t Graph_from_VbbHcc_both_Z_mass_fy1389[40] = {
   0,
   0.08904539,
   12.07838,
   906.2722,
   4916.172,
   9495.004,
   11754.27,
   10423.08,
   10132.79,
   6294.27,
   8168.171,
   7629.115,
   6293.111,
   7533.624,
   5487.038,
   5305.646,
   5269.97,
   5993.624,
   6111.675,
   4241.488,
   3637.281,
   6815.754,
   4192.607,
   2915.73,
   4950.973,
   2025.064,
   2330.586,
   2217.506,
   3523.996,
   2358.643,
   3545.2,
   2101.099,
   1517.947,
   1679.565,
   1902.07,
   2138.034,
   2709.1,
   1389.256,
   2289.421,
   2598.659};
   Double_t Graph_from_VbbHcc_both_Z_mass_fex1389[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_VbbHcc_both_Z_mass_fey1389[40] = {
   0,
   0.0632433,
   8.522674,
   380.5008,
   1027.593,
   1588.377,
   2589.091,
   1441.828,
   1730.627,
   1039.179,
   1321.071,
   2301.755,
   931.772,
   1247.788,
   940.8874,
   939.4236,
   932.3038,
   1156.819,
   1488.705,
   816.0899,
   913.8177,
   1529.453,
   915.2787,
   667.5051,
   1172.506,
   348.2486,
   536.4559,
   468.714,
   882.3719,
   555.0666,
   920.967,
   429.597,
   182.0002,
   426.8564,
   534.3161,
   442.0601,
   716.6535,
   185.143,
   689.0288,
   710.7076};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_both_Z_mass_fx1389,Graph_from_VbbHcc_both_Z_mass_fy1389,Graph_from_VbbHcc_both_Z_mass_fex1389,Graph_from_VbbHcc_both_Z_mass_fey1389);
   gre->SetName("Graph_from_VbbHcc_both_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_mass1389 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_mass1389","",100,0,440);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetMinimum(15.77769);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetMaximum(15777.69);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_mass1389);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_mass","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__536 = new TH1D("data_mc_ratio__536","",40,0,400);
   data_mc_ratio__536->SetBinContent(3,3.560079);
   data_mc_ratio__536->SetBinContent(4,1.411276);
   data_mc_ratio__536->SetBinContent(5,1.056716);
   data_mc_ratio__536->SetBinContent(6,0.9776721);
   data_mc_ratio__536->SetBinContent(7,0.9896833);
   data_mc_ratio__536->SetBinContent(8,1.16645);
   data_mc_ratio__536->SetBinContent(9,1.182498);
   data_mc_ratio__536->SetBinContent(10,1.77749);
   data_mc_ratio__536->SetBinContent(11,1.269072);
   data_mc_ratio__536->SetBinContent(12,1.286519);
   data_mc_ratio__536->SetBinContent(13,1.437763);
   data_mc_ratio__536->SetBinContent(14,1.147788);
   data_mc_ratio__536->SetBinContent(15,1.440486);
   data_mc_ratio__536->SetBinContent(16,1.387579);
   data_mc_ratio__536->SetBinContent(17,1.327712);
   data_mc_ratio__536->SetBinContent(18,1.087656);
   data_mc_ratio__536->SetBinContent(19,0.9982534);
   data_mc_ratio__536->SetBinContent(20,1.306145);
   data_mc_ratio__536->SetBinContent(21,1.478852);
   data_mc_ratio__536->SetBinContent(22,0.7294864);
   data_mc_ratio__536->SetBinContent(23,1.129608);
   data_mc_ratio__536->SetBinContent(24,1.5557);
   data_mc_ratio__536->SetBinContent(25,0.8683141);
   data_mc_ratio__536->SetBinContent(26,2.042404);
   data_mc_ratio__536->SetBinContent(27,1.6498);
   data_mc_ratio__536->SetBinContent(28,1.706872);
   data_mc_ratio__536->SetBinContent(29,1.070659);
   data_mc_ratio__536->SetBinContent(30,1.498743);
   data_mc_ratio__536->SetBinContent(31,0.9861221);
   data_mc_ratio__536->SetBinContent(32,1.566323);
   data_mc_ratio__536->SetBinContent(33,2.050137);
   data_mc_ratio__536->SetBinContent(34,1.834404);
   data_mc_ratio__536->SetBinContent(35,1.59195);
   data_mc_ratio__536->SetBinContent(36,1.414851);
   data_mc_ratio__536->SetBinContent(37,1.084124);
   data_mc_ratio__536->SetBinContent(38,2.0421);
   data_mc_ratio__536->SetBinContent(39,1.169728);
   data_mc_ratio__536->SetBinContent(40,1.046694);
   data_mc_ratio__536->SetBinContent(41,1.270567);
   data_mc_ratio__536->SetBinError(3,0.542907);
   data_mc_ratio__536->SetBinError(4,0.03946177);
   data_mc_ratio__536->SetBinError(5,0.01466107);
   data_mc_ratio__536->SetBinError(6,0.01014727);
   data_mc_ratio__536->SetBinError(7,0.009175936);
   data_mc_ratio__536->SetBinError(8,0.01057877);
   data_mc_ratio__536->SetBinError(9,0.01080278);
   data_mc_ratio__536->SetBinError(10,0.0168047);
   data_mc_ratio__536->SetBinError(11,0.01246467);
   data_mc_ratio__536->SetBinError(12,0.01298587);
   data_mc_ratio__536->SetBinError(13,0.0151151);
   data_mc_ratio__536->SetBinError(14,0.01234323);
   data_mc_ratio__536->SetBinError(15,0.01620263);
   data_mc_ratio__536->SetBinError(16,0.01617185);
   data_mc_ratio__536->SetBinError(17,0.01587259);
   data_mc_ratio__536->SetBinError(18,0.01347104);
   data_mc_ratio__536->SetBinError(19,0.01278028);
   data_mc_ratio__536->SetBinError(20,0.01754836);
   data_mc_ratio__536->SetBinError(21,0.02016387);
   data_mc_ratio__536->SetBinError(22,0.0103455);
   data_mc_ratio__536->SetBinError(23,0.01641428);
   data_mc_ratio__536->SetBinError(24,0.02309879);
   data_mc_ratio__536->SetBinError(25,0.01324321);
   data_mc_ratio__536->SetBinError(26,0.03175788);
   data_mc_ratio__536->SetBinError(27,0.02660621);
   data_mc_ratio__536->SetBinError(28,0.02774394);
   data_mc_ratio__536->SetBinError(29,0.01743042);
   data_mc_ratio__536->SetBinError(30,0.02520766);
   data_mc_ratio__536->SetBinError(31,0.01667804);
   data_mc_ratio__536->SetBinError(32,0.02730345);
   data_mc_ratio__536->SetBinError(33,0.03675049);
   data_mc_ratio__536->SetBinError(34,0.0330483);
   data_mc_ratio__536->SetBinError(35,0.02893021);
   data_mc_ratio__536->SetBinError(36,0.02572456);
   data_mc_ratio__536->SetBinError(37,0.02000447);
   data_mc_ratio__536->SetBinError(38,0.03833958);
   data_mc_ratio__536->SetBinError(39,0.0226037);
   data_mc_ratio__536->SetBinError(40,0.02006943);
   data_mc_ratio__536->SetBinError(41,0.05847488);
   data_mc_ratio__536->SetMinimum(0.4);
   data_mc_ratio__536->SetMaximum(1.6);
   data_mc_ratio__536->SetEntries(285.8391);
   data_mc_ratio__536->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__536->SetLineColor(ci);
   data_mc_ratio__536->SetLineWidth(2);
   data_mc_ratio__536->SetMarkerStyle(20);
   data_mc_ratio__536->SetMarkerSize(1.2);
   data_mc_ratio__536->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__536->GetXaxis()->SetRange(1,30);
   data_mc_ratio__536->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__536->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__536->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__536->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__536->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__536->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__536->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__536->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__536->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__536->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__536->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__536->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__536->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__536->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__536->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__536->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__536->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1390[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1390[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1390[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_mc_statistical_error_fey1390[40] = {
   0,
   0.7102367,
   0.7056138,
   0.4198526,
   0.2090229,
   0.1672856,
   0.2202682,
   0.1383304,
   0.1707947,
   0.1650992,
   0.161734,
   0.3017067,
   0.1480622,
   0.1656292,
   0.1714746,
   0.1770611,
   0.1769088,
   0.1930082,
   0.2435839,
   0.1924065,
   0.2512365,
   0.2243996,
   0.2183078,
   0.2289324,
   0.2368233,
   0.1719691,
   0.2301807,
   0.2113699,
   0.2503896,
   0.2353331,
   0.2597786,
   0.204463,
   0.1198989,
   0.254147,
   0.280913,
   0.2067601,
   0.2645357,
   0.1332677,
   0.300962,
   0.2734901};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1390,Graph_from_mc_statistical_error_fy1390,Graph_from_mc_statistical_error_fex1390,Graph_from_mc_statistical_error_fey1390);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1390 = new TH1F("Graph_Graph_from_mc_statistical_error1390","",100,0,440);
   Graph_Graph_from_mc_statistical_error1390->SetMinimum(0.147716);
   Graph_Graph_from_mc_statistical_error1390->SetMaximum(1.852284);
   Graph_Graph_from_mc_statistical_error1390->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1390->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1390->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1390->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1390);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_both_18->cd();
   Z_mass_both_18->Modified();
   Z_mass_both_18->cd();
   Z_mass_both_18->SetSelected(Z_mass_both_18);
}
