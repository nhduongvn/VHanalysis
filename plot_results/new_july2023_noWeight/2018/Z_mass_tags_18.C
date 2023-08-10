void Z_mass_tags_18()
{
//=========Macro generated from canvas: Z_mass_tags_18/Z_mass_tags_18
//=========  (Thu Aug 10 12:27:26 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_18 = new TCanvas("Z_mass_tags_18", "Z_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_18->SetHighLightColor(2);
   Z_mass_tags_18->Range(0,0,1,1);
   Z_mass_tags_18->SetFillColor(0);
   Z_mass_tags_18->SetFillStyle(4000);
   Z_mass_tags_18->SetBorderMode(0);
   Z_mass_tags_18->SetBorderSize(2);
   Z_mass_tags_18->SetFrameFillStyle(1000);
   Z_mass_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-23.69707,315.7258,23683.37);
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
   st->SetMaximum(20297.78);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",40,0,400);
   st_stack_3->SetMinimum(0.01);
   st_stack_3->SetMaximum(21312.67);
   st_stack_3->SetDirectory(0);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->GetXaxis()->SetRange(1,30);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetLabelSize(0.035);
   st_stack_3->GetXaxis()->SetTitleSize(0.035);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/10.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetLabelSize(0.05);
   st_stack_3->GetYaxis()->SetTitleSize(0.057);
   st_stack_3->GetYaxis()->SetTitleOffset(1.2);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetLabelSize(0.035);
   st_stack_3->GetZaxis()->SetTitleSize(0.035);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VbbHcc_tags_Z_mass_stack_1 = new TH1D("VbbHcc_tags_Z_mass_stack_1","",40,0,400);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(3,41.71731);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(4,405.6953);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(5,3919.112);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(6,5877.11);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(7,6596.597);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(8,6370.446);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(9,6536.098);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(10,3903.992);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(11,5227.99);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(12,4304.746);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(13,4283.308);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(14,6146.541);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(15,3506.973);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(16,4243.952);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(17,3887.465);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(18,4221.071);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(19,5141.262);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(20,2475.656);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(21,2400.586);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(22,3938.229);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(23,4106.117);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(24,1797.711);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(25,3442.849);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(26,1823.295);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(27,1908.616);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(28,3231.655);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(29,3048.186);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(30,2083.266);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(31,3093.997);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(32,2257.943);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(33,1082.323);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(34,2764.04);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(35,1621.956);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(36,2365.691);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(37,3445.377);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(38,1576.426);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(39,2126.117);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(40,2384.305);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(41,88043);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(3,33.39486);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(4,97.50934);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(5,860.9367);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(6,1141.056);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(7,1878.636);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(8,1029.365);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(9,1030.496);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(10,690.3557);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(11,948.1792);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(12,1718.903);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(13,861.78);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(14,1247.802);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(15,771.9517);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(16,934.1529);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(17,858.377);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(18,933.7491);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(19,1867.422);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(20,435.3118);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(21,560.4502);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(22,859.1807);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(23,998.7427);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(24,545.0181);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(25,850.5546);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(26,546.7473);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(27,549.4473);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(28,850.3282);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(29,845.5211);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(30,555.4982);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(31,918.072);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(32,663.2557);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(33,164.3587);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(34,842.2994);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(35,542.464);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(36,563.7187);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(37,925.7523);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(38,408.927);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(39,658.8915);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(40,667.8967);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(41,4154.92);
   VbbHcc_tags_Z_mass_stack_1->SetEntries(10231);

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
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(4,3.265631);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(5,9.023352);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(6,15.52998);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(7,21.09294);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(8,21.48475);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(9,25.19978);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(10,24.67905);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(11,26.38168);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(12,28.34481);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(13,26.21687);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(14,31.1382);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(15,25.47446);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(16,26.74815);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(17,26.68668);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(18,28.28967);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(19,24.20467);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(20,23.23986);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(21,22.44129);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(22,22.70258);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(23,19.35876);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(24,20.47942);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(25,17.68812);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(26,16.00418);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(27,14.71977);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(28,18.15062);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(29,16.73377);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(30,16.83324);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(31,18.68592);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(32,14.45827);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(33,16.48902);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(34,13.07879);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(35,15.93554);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(36,10.65677);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(37,13.85021);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(38,12.93772);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(39,13.60232);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(40,13.04991);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(41,565.1257);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(4,0.7022559);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(5,1.245824);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(6,1.529088);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(7,1.845854);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(8,1.891734);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(9,1.998527);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(10,2.022666);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(11,2.100851);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(12,2.233327);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(13,2.017444);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(14,2.384769);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(15,1.982523);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(16,2.093328);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(17,2.094473);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(18,2.254386);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(19,2.022729);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(20,2.030387);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(21,1.980341);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(22,1.937469);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(23,1.754668);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(24,1.88811);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(25,1.660073);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(26,1.572217);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(27,1.575366);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(28,1.73873);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(29,1.677665);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(30,1.715749);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(31,1.863527);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(32,1.449066);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(33,1.735724);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(34,1.47165);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(35,1.647447);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(36,1.2595);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(37,1.47566);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(38,1.51625);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(39,1.597821);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(40,1.535368);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(41,9.75321);
   VbbHcc_tags_Z_mass_stack_2->SetEntries(14890);

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
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(2,0.07462545);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(3,1.442628);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(4,46.11748);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(5,163.402);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(6,278.3483);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(7,349.4874);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(8,406.1206);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(9,448.9747);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(10,502.629);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(11,523.8138);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(12,569.6799);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(13,576.1051);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(14,584.5357);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(15,561.6262);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(16,549.7167);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(17,517.346);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(18,491.5601);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(19,478.5344);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(20,454.8131);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(21,432.3616);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(22,424.266);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(23,408.2336);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(24,387.9549);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(25,380.3754);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(26,376.4704);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(27,352.6648);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(28,347.3019);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(29,334.3358);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(30,337.9041);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(31,326.5786);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(32,310.7006);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(33,304.3024);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(34,306.195);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(35,289.9185);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(36,286.3458);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(37,280.3474);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(38,271.6332);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(39,267.8552);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(40,261.7383);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(41,10928.04);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(2,0.05276816);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(3,0.2995056);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(4,1.660125);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(5,3.151648);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(6,4.111535);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(7,4.612154);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(8,4.978416);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(9,5.251001);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(10,5.567091);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(11,5.690697);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(12,5.931255);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(13,5.969865);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(14,6.019811);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(15,5.885169);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(16,5.815696);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(17,5.650762);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(18,5.494883);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(19,5.422677);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(20,5.293229);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(21,5.154255);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(22,5.107243);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(23,5.008345);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(24,4.890597);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(25,4.83387);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(26,4.811353);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(27,4.649248);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(28,4.622552);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(29,4.540149);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(30,4.565039);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(31,4.476423);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(32,4.376821);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(33,4.338493);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(34,4.344604);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(35,4.234558);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(36,4.205352);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(37,4.166641);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(38,4.096013);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(39,4.073666);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(40,4.020281);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(41,26.01061);
   VbbHcc_tags_Z_mass_stack_3->SetEntries(421807);

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
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(3,0.1257783);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(4,4.630983);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(5,16.51899);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(6,33.89086);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(7,63.68415);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(8,92.22478);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(9,157.3268);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(10,205.9134);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(11,145.0411);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(12,98.99742);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(13,56.92639);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(14,63.55208);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(15,53.1898);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(16,51.11331);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(17,41.81698);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(18,43.87457);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(19,44.18489);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(20,38.61563);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(21,39.46227);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(22,37.00071);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(23,41.98169);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(24,36.20191);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(25,34.52633);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(26,46.60085);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(27,48.89768);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(28,34.56144);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(29,34.40795);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(30,37.21806);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(31,32.31245);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(32,49.9162);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(33,33.1645);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(34,27.62644);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(35,34.55494);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(36,24.31872);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(37,32.53515);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(38,38.19188);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(39,24.35286);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(40,31.40454);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(41,1354.715);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(3,0.1257783);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(4,1.2008);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(5,2.393831);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(6,3.312019);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(7,7.014373);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(8,6.457665);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(9,10.06548);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(10,7.515865);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(11,8.306498);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(12,7.730284);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(13,4.033222);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(14,6.918883);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(15,3.964108);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(16,5.430963);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(17,3.384765);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(18,3.526585);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(19,3.608208);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(20,3.364692);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(21,3.460354);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(22,3.278668);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(23,5.136067);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(24,5.082069);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(25,3.29531);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(26,6.712273);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(27,7.787059);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(28,4.971163);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(29,4.984636);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(30,5.158985);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(31,4.985923);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(32,8.687625);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(33,3.189857);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(34,2.902717);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(35,6.35581);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(36,2.598303);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(37,3.145377);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(38,5.281278);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(39,2.676528);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(40,3.218552);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(41,24.04318);
   VbbHcc_tags_Z_mass_stack_4->SetEntries(18660);

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
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(4,1.533272);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(5,8.236241);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(6,18.39021);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(7,11.06563);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(8,10.34603);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(9,21.69723);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(10,6.379198);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(11,9.287842);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(12,11.08254);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(13,6.388226);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(14,7.334437);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(15,2.840168);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(16,4.344565);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(17,4.537349);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(18,8.3766);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(19,3.261701);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(20,3.427298);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(21,2.116334);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(22,6.236336);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(23,2.797944);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(24,2.422522);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(25,9.193238);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(26,3.72387);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(27,3.03553);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(28,2.744791);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(29,2.101209);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(30,5.621476);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(31,1.400122);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(32,6.419917);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(33,1.777919);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(34,1.714709);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(35,2.064577);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(36,1.731922);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(37,3.354923);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(38,1.25605);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(39,2.328476);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(40,4.109783);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(41,118.438);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(4,0.6802329);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(5,2.412);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(6,4.852703);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(7,3.17791);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(8,3.12637);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(9,10.78573);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(10,1.040807);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(11,2.31875);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(12,3.727694);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(13,1.147593);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(14,2.279321);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(15,0.6523942);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(16,0.8607437);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(17,0.9488342);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(18,3.083412);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(19,0.765578);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(20,0.8371203);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(21,0.4958144);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(22,2.269747);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(23,0.7602249);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(24,0.61064);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(25,3.687171);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(26,0.9492874);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(27,0.7711245);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(28,0.6511675);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(29,0.5287692);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(30,2.258113);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(31,0.4849156);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(32,3.027127);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(33,0.5934871);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(34,0.6094037);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(35,0.5974889);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(36,0.4813398);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(37,2.124162);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(38,0.4622957);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(39,0.7212501);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(40,2.184251);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(41,8.476672);
   VbbHcc_tags_Z_mass_stack_5->SetEntries(2359);

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
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(7,0.4520427);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(14,0.4520427);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(24,0.4520427);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(41,0.4520427);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(7,0.4520427);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(14,0.4520427);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(24,0.4520427);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(41,0.4520427);
   VbbHcc_tags_Z_mass_stack_6->SetEntries(4);

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
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(6,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(8,1.062597);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,1.770996);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,1.416796);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(15,0.7083982);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(22,0.7083982);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(27,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(34,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(35,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(39,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,2.125195);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(6,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(8,0.6134909);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.7920133);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.7083982);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(12,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(13,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(15,0.5009132);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(16,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(22,0.5009132);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(27,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(34,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(35,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(39,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,0.8676071);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(32);

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
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(6,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(7,1.117657);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(8,1.397072);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(9,4.47063);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(10,4.47063);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(11,4.191215);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(12,0.8382431);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(13,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(14,1.117657);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(15,0.8382431);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(16,1.117657);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(17,1.117657);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(18,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(20,1.117657);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(22,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(24,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(25,1.117657);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(26,1.397072);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(27,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(28,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(29,0.8382431);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(30,0.8382431);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(31,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(32,0.8382431);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(33,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(34,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(35,0.8382431);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(36,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(37,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(38,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(39,0.8382431);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(41,29.33851);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(6,0.3951516);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(7,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(8,0.6247895);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(9,1.117657);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(10,1.117657);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(11,1.082167);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(12,0.4839599);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(13,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(14,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(15,0.4839599);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(16,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(17,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(18,0.3951516);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(19,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(20,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(22,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(24,0.3951516);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(25,0.5588287);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(26,0.6247895);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(27,0.3951516);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(28,0.3951516);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(29,0.4839599);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(30,0.4839599);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(31,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(32,0.4839599);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(33,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(34,0.2794144);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(35,0.4839599);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(36,0.3951516);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(37,0.3951516);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(38,0.3951516);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(39,0.4839599);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(41,2.863145);
   VbbHcc_tags_Z_mass_stack_8->SetEntries(230);

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
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(3,0.002285779);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(4,0.02971512);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(5,0.1280036);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(6,0.2537214);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(7,0.4525842);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(8,1.062887);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(9,2.603502);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(10,3.622959);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(11,2.859509);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(12,2.507499);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(13,2.756649);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(14,2.157775);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(15,1.243464);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(16,0.8617385);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(17,0.578302);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(18,0.537158);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(19,0.5074429);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(20,0.5188718);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(21,0.45487);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(22,0.496014);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(23,0.5028713);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(24,0.5211575);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(25,0.5668731);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(26,0.5097286);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(27,0.5028713);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(28,0.5417295);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(29,0.5348722);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(30,0.5508727);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(31,0.5394438);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(32,0.6011598);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(33,0.5257291);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(34,0.5965882);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(35,0.6697331);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(36,0.5463011);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(37,0.6560185);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(38,0.6468754);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(39,0.6925909);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(40,0.5463011);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(41,28.40994);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(3,0.002285779);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(4,0.008241492);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(5,0.0171052);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(6,0.02408217);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(7,0.03216376);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(8,0.04929021);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(9,0.07714291);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(10,0.09100155);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(11,0.0808468);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(12,0.07570725);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(13,0.0793794);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(14,0.0702296);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(15,0.05331306);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(16,0.04438179);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(17,0.03635754);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(18,0.03504032);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(19,0.03405733);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(20,0.03443873);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(21,0.03224488);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(22,0.03367162);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(23,0.03390358);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(24,0.0345145);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(25,0.03599648);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(26,0.03413395);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(27,0.03390358);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(28,0.03518911);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(29,0.03496569);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(30,0.03548483);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(31,0.0351148);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(32,0.0370691);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(33,0.03466555);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(34,0.03692788);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(35,0.03912623);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(36,0.03533728);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(37,0.03872355);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(38,0.03845275);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(39,0.03978831);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(40,0.03533728);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(41,0.254831);
   VbbHcc_tags_Z_mass_stack_9->SetEntries(27254);

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
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(3,0.0005961446);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(4,0.01669205);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(5,0.05365302);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(6,0.1329403);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(7,0.2730342);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(8,0.622375);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(9,1.324037);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(10,1.704974);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(11,1.31748);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(12,1.285288);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(13,1.269788);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(14,1.037292);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(15,0.7058353);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(16,0.5204343);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(17,0.4477046);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(18,0.3767634);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(19,0.4000131);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(20,0.3702058);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(21,0.342187);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(22,0.3672251);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(23,0.3642444);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(24,0.3189374);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(25,0.3606675);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(26,0.3398024);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(27,0.3564945);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(28,0.3302641);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(29,0.3570906);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(30,0.3374179);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(31,0.3427832);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(32,0.3392063);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(33,0.3368217);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(34,0.3225143);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(35,0.3141682);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(36,0.3040338);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(37,0.3058222);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(38,0.2944955);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(39,0.3225143);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(40,0.2819764);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(41,10.76697);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(3,0.0005961446);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(4,0.003154501);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(5,0.005655525);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(6,0.008902338);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(7,0.01275805);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(8,0.01926202);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(9,0.0280948);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(10,0.0318812);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(11,0.02802514);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(12,0.02768063);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(13,0.02751322);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(14,0.02486716);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(15,0.02051292);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(16,0.01761403);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(17,0.01633697);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(18,0.01498684);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(19,0.01544233);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(20,0.01485585);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(21,0.01428261);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(22,0.01479592);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(23,0.01473575);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(24,0.01378887);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(25,0.01466322);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(26,0.01423276);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(27,0.01457814);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(28,0.01403158);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(29,0.01459033);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(30,0.01418273);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(31,0.01429505);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(32,0.01422027);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(33,0.0141702);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(34,0.01386597);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(35,0.01368538);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(36,0.01346284);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(37,0.01350238);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(38,0.01324998);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(39,0.01386597);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(40,0.01296529);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(41,0.08011661);
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
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(5,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(8,0.006827286);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.02275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.04096371);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.02048186);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(14,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.004551524);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(22,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(23,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(26,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(30,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(31,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(32,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(35,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(37,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(39,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.04323948);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(5,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(8,0.003941735);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.007196591);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.00965524);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.006827286);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(14,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.003218413);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(22,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(23,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(26,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(27,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(30,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(31,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(32,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(35,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(37,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(39,0.002275762);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.009919816);
   VbbHcc_tags_Z_mass_stack_11->SetEntries(77);

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
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(6,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(7,0.002397254);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(8,0.004195195);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(9,0.01078764);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(10,0.0152825);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(11,0.01078764);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(12,0.003895538);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(13,0.003595882);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(14,0.0008989704);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(15,0.001198627);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(16,0.0008989704);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(17,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(18,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(19,0.0008989704);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(20,0.0008989704);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(21,0.0005993136);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(23,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(25,0.0008989704);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(28,0.0008989704);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(29,0.0005993136);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(30,0.001198627);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(32,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(33,0.0005993136);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(34,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(35,0.001198627);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(39,0.0005993136);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(40,0.0005993136);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(41,0.02397254);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(6,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(7,0.0008475574);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(8,0.001121213);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(9,0.001797941);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(10,0.002139978);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(11,0.001797941);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(12,0.001080428);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(13,0.001038042);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(14,0.0005190208);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(15,0.0005993136);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(16,0.0005190208);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(17,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(18,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(19,0.0005190208);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(20,0.0005190208);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(21,0.0004237787);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(23,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(25,0.0005190208);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(28,0.0005190208);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(29,0.0004237787);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(30,0.0005993136);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(32,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(33,0.0004237787);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(34,0.0002996568);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(35,0.0005993136);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(39,0.0004237787);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(40,0.0004237787);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(41,0.002680212);
   VbbHcc_tags_Z_mass_stack_12->SetEntries(298);

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
   
   TH1D *VbbHcc_tags_Z_mass__7 = new TH1D("VbbHcc_tags_Z_mass__7","",40,0,400);
   VbbHcc_tags_Z_mass__7->SetBinContent(3,34);
   VbbHcc_tags_Z_mass__7->SetBinContent(4,1108);
   VbbHcc_tags_Z_mass__7->SetBinContent(5,4352);
   VbbHcc_tags_Z_mass__7->SetBinContent(6,7420);
   VbbHcc_tags_Z_mass__7->SetBinContent(7,8871);
   VbbHcc_tags_Z_mass__7->SetBinContent(15,6428);
   VbbHcc_tags_Z_mass__7->SetBinContent(16,6004);
   VbbHcc_tags_Z_mass__7->SetBinContent(17,5760);
   VbbHcc_tags_Z_mass__7->SetBinContent(18,5591);
   VbbHcc_tags_Z_mass__7->SetBinContent(19,5228);
   VbbHcc_tags_Z_mass__7->SetBinContent(20,4880);
   VbbHcc_tags_Z_mass__7->SetBinContent(21,4761);
   VbbHcc_tags_Z_mass__7->SetBinContent(22,4462);
   VbbHcc_tags_Z_mass__7->SetBinContent(23,4485);
   VbbHcc_tags_Z_mass__7->SetBinContent(24,4310);
   VbbHcc_tags_Z_mass__7->SetBinContent(25,4096);
   VbbHcc_tags_Z_mass__7->SetBinContent(26,3988);
   VbbHcc_tags_Z_mass__7->SetBinContent(27,3738);
   VbbHcc_tags_Z_mass__7->SetBinContent(28,3750);
   VbbHcc_tags_Z_mass__7->SetBinContent(29,3722);
   VbbHcc_tags_Z_mass__7->SetBinContent(30,3572);
   VbbHcc_tags_Z_mass__7->SetBinContent(31,3538);
   VbbHcc_tags_Z_mass__7->SetBinContent(32,3346);
   VbbHcc_tags_Z_mass__7->SetBinContent(33,3332);
   VbbHcc_tags_Z_mass__7->SetBinContent(34,3271);
   VbbHcc_tags_Z_mass__7->SetBinContent(35,3172);
   VbbHcc_tags_Z_mass__7->SetBinContent(36,3231);
   VbbHcc_tags_Z_mass__7->SetBinContent(37,3130);
   VbbHcc_tags_Z_mass__7->SetBinContent(38,3036);
   VbbHcc_tags_Z_mass__7->SetBinContent(39,3066);
   VbbHcc_tags_Z_mass__7->SetBinContent(40,2988);
   VbbHcc_tags_Z_mass__7->SetBinContent(41,130095);
   VbbHcc_tags_Z_mass__7->SetEntries(314274);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass__7->SetLineColor(ci);
   VbbHcc_tags_Z_mass__7->SetLineWidth(2);
   VbbHcc_tags_Z_mass__7->SetMarkerStyle(20);
   VbbHcc_tags_Z_mass__7->SetMarkerSize(1.2);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__7->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_mass_fx1005[40] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_mass_fy1005[40] = {
   0,
   0.07462545,
   43.28859,
   461.2891,
   4116.477,
   6224.572,
   7044.579,
   6904.778,
   7199.499,
   4654.864,
   5941.268,
   5017.839,
   4953.608,
   6837.869,
   4153.605,
   4878.729,
   4479.996,
   4794.647,
   5692.638,
   2997.759,
   2897.767,
   4430.288,
   4579.638,
   2246.621,
   3886.678,
   2268.344,
   2329.708,
   3635.846,
   3437.496,
   2482.573,
   3474.138,
   2641.219,
   1439.2,
   3114.208,
   1966.609,
   2690.154,
   3776.987,
   1901.945,
   2436.467,
   2695.436};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fex1005[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_VbbHcc_tags_Z_mass_fey1005[40] = {
   0,
   0.05276816,
   33.39644,
   97.53576,
   860.9501,
   1141.08,
   1878.658,
   1029.404,
   1030.618,
   690.424,
   948.2385,
   1718.936,
   861.8134,
   1247.84,
   771.9874,
   934.1898,
   858.4056,
   933.7798,
   1867.435,
   435.3628,
   560.4883,
   859.2075,
   998.7704,
   545.0677,
   850.5845,
   546.8131,
   549.5252,
   850.3574,
   845.5499,
   555.5483,
   918.0985,
   663.3357,
   164.4573,
   842.3172,
   542.521,
   563.7421,
   925.7707,
   408.9849,
   658.9121,
   667.9219};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_Z_mass_fx1005,Graph_from_VbbHcc_tags_Z_mass_fy1005,Graph_from_VbbHcc_tags_Z_mass_fex1005,Graph_from_VbbHcc_tags_Z_mass_fey1005);
   gre->SetName("Graph_from_VbbHcc_tags_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_mass1005 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_mass1005","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetMaximum(9815.562);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_mass1005);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_mass","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__8 = new TH1D("data_mc_ratio__8","",40,0,400);
   data_mc_ratio__8->SetBinContent(3,0.7854263);
   data_mc_ratio__8->SetBinContent(4,2.401965);
   data_mc_ratio__8->SetBinContent(5,1.057215);
   data_mc_ratio__8->SetBinContent(6,1.19205);
   data_mc_ratio__8->SetBinContent(7,1.259266);
   data_mc_ratio__8->SetBinContent(8,1.322852);
   data_mc_ratio__8->SetBinContent(9,1.243559);
   data_mc_ratio__8->SetBinContent(10,1.794897);
   data_mc_ratio__8->SetBinContent(11,1.30292);
   data_mc_ratio__8->SetBinContent(12,1.494269);
   data_mc_ratio__8->SetBinContent(13,1.427243);
   data_mc_ratio__8->SetBinContent(14,0.982616);
   data_mc_ratio__8->SetBinContent(15,1.547571);
   data_mc_ratio__8->SetBinContent(16,1.230648);
   data_mc_ratio__8->SetBinContent(17,1.285715);
   data_mc_ratio__8->SetBinContent(18,1.166092);
   data_mc_ratio__8->SetBinContent(19,0.9183791);
   data_mc_ratio__8->SetBinContent(20,1.627883);
   data_mc_ratio__8->SetBinContent(21,1.642989);
   data_mc_ratio__8->SetBinContent(22,1.007158);
   data_mc_ratio__8->SetBinContent(23,0.979335);
   data_mc_ratio__8->SetBinContent(24,1.918437);
   data_mc_ratio__8->SetBinContent(25,1.053856);
   data_mc_ratio__8->SetBinContent(26,1.758111);
   data_mc_ratio__8->SetBinContent(27,1.604493);
   data_mc_ratio__8->SetBinContent(28,1.031397);
   data_mc_ratio__8->SetBinContent(29,1.082765);
   data_mc_ratio__8->SetBinContent(30,1.43883);
   data_mc_ratio__8->SetBinContent(31,1.018382);
   data_mc_ratio__8->SetBinContent(32,1.266839);
   data_mc_ratio__8->SetBinContent(33,2.315176);
   data_mc_ratio__8->SetBinContent(34,1.050347);
   data_mc_ratio__8->SetBinContent(35,1.612928);
   data_mc_ratio__8->SetBinContent(36,1.201047);
   data_mc_ratio__8->SetBinContent(37,0.8287028);
   data_mc_ratio__8->SetBinContent(38,1.596261);
   data_mc_ratio__8->SetBinContent(39,1.25838);
   data_mc_ratio__8->SetBinContent(40,1.10854);
   data_mc_ratio__8->SetBinContent(41,1.287044);
   data_mc_ratio__8->SetBinError(3,0.1346995);
   data_mc_ratio__8->SetBinError(4,0.07216003);
   data_mc_ratio__8->SetBinError(5,0.01602577);
   data_mc_ratio__8->SetBinError(6,0.01383861);
   data_mc_ratio__8->SetBinError(7,0.01336999);
   data_mc_ratio__8->SetBinError(8,0.01384142);
   data_mc_ratio__8->SetBinError(9,0.01314262);
   data_mc_ratio__8->SetBinError(10,0.0196366);
   data_mc_ratio__8->SetBinError(11,0.01480878);
   data_mc_ratio__8->SetBinError(12,0.01725663);
   data_mc_ratio__8->SetBinError(13,0.01697415);
   data_mc_ratio__8->SetBinError(14,0.01198758);
   data_mc_ratio__8->SetBinError(15,0.01930246);
   data_mc_ratio__8->SetBinError(16,0.01588231);
   data_mc_ratio__8->SetBinError(17,0.01694079);
   data_mc_ratio__8->SetBinError(18,0.0155951);
   data_mc_ratio__8->SetBinError(19,0.01270148);
   data_mc_ratio__8->SetBinError(20,0.02330307);
   data_mc_ratio__8->SetBinError(21,0.02381144);
   data_mc_ratio__8->SetBinError(22,0.01507762);
   data_mc_ratio__8->SetBinError(23,0.01462346);
   data_mc_ratio__8->SetBinError(24,0.02922192);
   data_mc_ratio__8->SetBinError(25,0.0164665);
   data_mc_ratio__8->SetBinError(26,0.02783997);
   data_mc_ratio__8->SetBinError(27,0.02624328);
   data_mc_ratio__8->SetBinError(28,0.01684264);
   data_mc_ratio__8->SetBinError(29,0.01774786);
   data_mc_ratio__8->SetBinError(30,0.0240743);
   data_mc_ratio__8->SetBinError(31,0.01712111);
   data_mc_ratio__8->SetBinError(32,0.02190073);
   data_mc_ratio__8->SetBinError(33,0.04010804);
   data_mc_ratio__8->SetBinError(34,0.01836507);
   data_mc_ratio__8->SetBinError(35,0.02863838);
   data_mc_ratio__8->SetBinError(36,0.0211296);
   data_mc_ratio__8->SetBinError(37,0.01481244);
   data_mc_ratio__8->SetBinError(38,0.0289703);
   data_mc_ratio__8->SetBinError(39,0.02272614);
   data_mc_ratio__8->SetBinError(40,0.02027968);
   data_mc_ratio__8->SetBinError(41,0.05302641);
   data_mc_ratio__8->SetMinimum(0.4);
   data_mc_ratio__8->SetMaximum(1.6);
   data_mc_ratio__8->SetEntries(687.3173);
   data_mc_ratio__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__8->SetLineColor(ci);
   data_mc_ratio__8->SetLineWidth(2);
   data_mc_ratio__8->SetMarkerStyle(20);
   data_mc_ratio__8->SetMarkerSize(1.2);
   data_mc_ratio__8->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__8->GetXaxis()->SetRange(1,30);
   data_mc_ratio__8->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__8->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__8->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__8->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__8->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__8->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__8->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__8->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1006[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1006[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1006[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_mc_statistical_error_fey1006[40] = {
   0,
   0.7071068,
   0.7714836,
   0.2114417,
   0.2091473,
   0.1833186,
   0.2666814,
   0.1490858,
   0.1431513,
   0.1483231,
   0.159602,
   0.342565,
   0.1739769,
   0.1824896,
   0.1858596,
   0.1914822,
   0.1916085,
   0.1947547,
   0.3280438,
   0.1452294,
   0.1934208,
   0.1939394,
   0.2180894,
   0.2426166,
   0.2188461,
   0.2410627,
   0.2358773,
   0.2338816,
   0.2459785,
   0.2237792,
   0.2642666,
   0.2511476,
   0.11427,
   0.2704756,
   0.2758662,
   0.2095576,
   0.2451082,
   0.2150351,
   0.2704376,
   0.2477973};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",100,0,440);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0.07421963);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(1.92578);
   Graph_Graph_from_mc_statistical_error1006->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1006->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1006);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->SetSelected(Z_mass_tags_18);
}
