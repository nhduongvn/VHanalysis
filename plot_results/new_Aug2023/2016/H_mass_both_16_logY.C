void H_mass_both_16_logY()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Tue Aug 22 09:18:02 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(0,0,1,1);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetFillStyle(4000);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetFrameFillStyle(1000);
   H_mass_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.818355,315.7258,10.60422);
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
   st->SetMaximum(5.798102e+08);
   
   TH1F *st_stack_197 = new TH1F("st_stack_197","",40,0,400);
   st_stack_197->SetMinimum(0.001566995);
   st_stack_197->SetMaximum(1.827943e+09);
   st_stack_197->SetDirectory(0);
   st_stack_197->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_197->SetLineColor(ci);
   st_stack_197->GetXaxis()->SetRange(1,30);
   st_stack_197->GetXaxis()->SetLabelFont(42);
   st_stack_197->GetXaxis()->SetLabelSize(0.035);
   st_stack_197->GetXaxis()->SetTitleSize(0.035);
   st_stack_197->GetXaxis()->SetTitleFont(42);
   st_stack_197->GetYaxis()->SetTitle("Events/10.0");
   st_stack_197->GetYaxis()->SetLabelFont(42);
   st_stack_197->GetYaxis()->SetLabelSize(0.05);
   st_stack_197->GetYaxis()->SetTitleSize(0.057);
   st_stack_197->GetYaxis()->SetTitleOffset(1.2);
   st_stack_197->GetYaxis()->SetTitleFont(42);
   st_stack_197->GetZaxis()->SetLabelFont(42);
   st_stack_197->GetZaxis()->SetLabelSize(0.035);
   st_stack_197->GetZaxis()->SetTitleSize(0.035);
   st_stack_197->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_197);
   
   
   TH1D *VbbHcc_both_H_mass_stack_1 = new TH1D("VbbHcc_both_H_mass_stack_1","",40,0,400);
   VbbHcc_both_H_mass_stack_1->SetBinContent(3,259.0311);
   VbbHcc_both_H_mass_stack_1->SetBinContent(4,2154.354);
   VbbHcc_both_H_mass_stack_1->SetBinContent(5,3334.601);
   VbbHcc_both_H_mass_stack_1->SetBinContent(6,4418.725);
   VbbHcc_both_H_mass_stack_1->SetBinContent(7,4344.535);
   VbbHcc_both_H_mass_stack_1->SetBinContent(8,3631.502);
   VbbHcc_both_H_mass_stack_1->SetBinContent(9,3640.717);
   VbbHcc_both_H_mass_stack_1->SetBinContent(10,3064.352);
   VbbHcc_both_H_mass_stack_1->SetBinContent(11,2998.186);
   VbbHcc_both_H_mass_stack_1->SetBinContent(12,4044.182);
   VbbHcc_both_H_mass_stack_1->SetBinContent(13,4521.622);
   VbbHcc_both_H_mass_stack_1->SetBinContent(14,8133.472);
   VbbHcc_both_H_mass_stack_1->SetBinContent(15,3950.909);
   VbbHcc_both_H_mass_stack_1->SetBinContent(16,4205.252);
   VbbHcc_both_H_mass_stack_1->SetBinContent(17,6312.832);
   VbbHcc_both_H_mass_stack_1->SetBinContent(18,3986.649);
   VbbHcc_both_H_mass_stack_1->SetBinContent(19,3592.827);
   VbbHcc_both_H_mass_stack_1->SetBinContent(20,5564.637);
   VbbHcc_both_H_mass_stack_1->SetBinContent(21,5540.412);
   VbbHcc_both_H_mass_stack_1->SetBinContent(22,3565.314);
   VbbHcc_both_H_mass_stack_1->SetBinContent(23,3784.762);
   VbbHcc_both_H_mass_stack_1->SetBinContent(24,2852.056);
   VbbHcc_both_H_mass_stack_1->SetBinContent(25,5205.371);
   VbbHcc_both_H_mass_stack_1->SetBinContent(26,3476.729);
   VbbHcc_both_H_mass_stack_1->SetBinContent(27,3873.26);
   VbbHcc_both_H_mass_stack_1->SetBinContent(28,2155.444);
   VbbHcc_both_H_mass_stack_1->SetBinContent(29,1310.146);
   VbbHcc_both_H_mass_stack_1->SetBinContent(30,1780.997);
   VbbHcc_both_H_mass_stack_1->SetBinContent(31,1496.896);
   VbbHcc_both_H_mass_stack_1->SetBinContent(32,2895.257);
   VbbHcc_both_H_mass_stack_1->SetBinContent(33,1964.261);
   VbbHcc_both_H_mass_stack_1->SetBinContent(34,1565.389);
   VbbHcc_both_H_mass_stack_1->SetBinContent(35,1221.301);
   VbbHcc_both_H_mass_stack_1->SetBinContent(36,871.8526);
   VbbHcc_both_H_mass_stack_1->SetBinContent(37,1594.592);
   VbbHcc_both_H_mass_stack_1->SetBinContent(38,951.7476);
   VbbHcc_both_H_mass_stack_1->SetBinContent(39,889.0148);
   VbbHcc_both_H_mass_stack_1->SetBinContent(40,925.2993);
   VbbHcc_both_H_mass_stack_1->SetBinContent(41,14062.16);
   VbbHcc_both_H_mass_stack_1->SetBinError(3,259.0311);
   VbbHcc_both_H_mass_stack_1->SetBinError(4,1225.405);
   VbbHcc_both_H_mass_stack_1->SetBinError(5,1047.904);
   VbbHcc_both_H_mass_stack_1->SetBinError(6,1210.08);
   VbbHcc_both_H_mass_stack_1->SetBinError(7,876.2047);
   VbbHcc_both_H_mass_stack_1->SetBinError(8,742.662);
   VbbHcc_both_H_mass_stack_1->SetBinError(9,769.8162);
   VbbHcc_both_H_mass_stack_1->SetBinError(10,666.8903);
   VbbHcc_both_H_mass_stack_1->SetBinError(11,1166.472);
   VbbHcc_both_H_mass_stack_1->SetBinError(12,798.3562);
   VbbHcc_both_H_mass_stack_1->SetBinError(13,1255.942);
   VbbHcc_both_H_mass_stack_1->SetBinError(14,2154.715);
   VbbHcc_both_H_mass_stack_1->SetBinError(15,809.1128);
   VbbHcc_both_H_mass_stack_1->SetBinError(16,820.5913);
   VbbHcc_both_H_mass_stack_1->SetBinError(17,1498.915);
   VbbHcc_both_H_mass_stack_1->SetBinError(18,766.7922);
   VbbHcc_both_H_mass_stack_1->SetBinError(19,759.1388);
   VbbHcc_both_H_mass_stack_1->SetBinError(20,994.7487);
   VbbHcc_both_H_mass_stack_1->SetBinError(21,1433.138);
   VbbHcc_both_H_mass_stack_1->SetBinError(22,707.4826);
   VbbHcc_both_H_mass_stack_1->SetBinError(23,757.8781);
   VbbHcc_both_H_mass_stack_1->SetBinError(24,589.2821);
   VbbHcc_both_H_mass_stack_1->SetBinError(25,1337.477);
   VbbHcc_both_H_mass_stack_1->SetBinError(26,696.2321);
   VbbHcc_both_H_mass_stack_1->SetBinError(27,1275.823);
   VbbHcc_both_H_mass_stack_1->SetBinError(28,460.9049);
   VbbHcc_both_H_mass_stack_1->SetBinError(29,293.3469);
   VbbHcc_both_H_mass_stack_1->SetBinError(30,384.0171);
   VbbHcc_both_H_mass_stack_1->SetBinError(31,319.639);
   VbbHcc_both_H_mass_stack_1->SetBinError(32,1089.729);
   VbbHcc_both_H_mass_stack_1->SetBinError(33,496.6358);
   VbbHcc_both_H_mass_stack_1->SetBinError(34,418.197);
   VbbHcc_both_H_mass_stack_1->SetBinError(35,375.0285);
   VbbHcc_both_H_mass_stack_1->SetBinError(36,114.2261);
   VbbHcc_both_H_mass_stack_1->SetBinError(37,386.5363);
   VbbHcc_both_H_mass_stack_1->SetBinError(38,208.2849);
   VbbHcc_both_H_mass_stack_1->SetBinError(39,257.744);
   VbbHcc_both_H_mass_stack_1->SetBinError(40,257.6423);
   VbbHcc_both_H_mass_stack_1->SetBinError(41,1315.601);
   VbbHcc_both_H_mass_stack_1->SetEntries(9183);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass_stack_1->SetLineColor(ci);
   VbbHcc_both_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_mass_stack_1,"");
   
   TH1D *VbbHcc_both_H_mass_stack_2 = new TH1D("VbbHcc_both_H_mass_stack_2","",40,0,400);
   VbbHcc_both_H_mass_stack_2->SetBinContent(3,0.1449894);
   VbbHcc_both_H_mass_stack_2->SetBinContent(4,0.7829105);
   VbbHcc_both_H_mass_stack_2->SetBinContent(5,4.312867);
   VbbHcc_both_H_mass_stack_2->SetBinContent(6,4.115859);
   VbbHcc_both_H_mass_stack_2->SetBinContent(7,6.917616);
   VbbHcc_both_H_mass_stack_2->SetBinContent(8,10.83717);
   VbbHcc_both_H_mass_stack_2->SetBinContent(9,13.48012);
   VbbHcc_both_H_mass_stack_2->SetBinContent(10,15.77876);
   VbbHcc_both_H_mass_stack_2->SetBinContent(11,12.97114);
   VbbHcc_both_H_mass_stack_2->SetBinContent(12,20.02709);
   VbbHcc_both_H_mass_stack_2->SetBinContent(13,20.96734);
   VbbHcc_both_H_mass_stack_2->SetBinContent(14,20.97794);
   VbbHcc_both_H_mass_stack_2->SetBinContent(15,19.19217);
   VbbHcc_both_H_mass_stack_2->SetBinContent(16,18.55797);
   VbbHcc_both_H_mass_stack_2->SetBinContent(17,18.189);
   VbbHcc_both_H_mass_stack_2->SetBinContent(18,18.18102);
   VbbHcc_both_H_mass_stack_2->SetBinContent(19,19.50926);
   VbbHcc_both_H_mass_stack_2->SetBinContent(20,18.6426);
   VbbHcc_both_H_mass_stack_2->SetBinContent(21,18.12634);
   VbbHcc_both_H_mass_stack_2->SetBinContent(22,13.95293);
   VbbHcc_both_H_mass_stack_2->SetBinContent(23,17.03329);
   VbbHcc_both_H_mass_stack_2->SetBinContent(24,18.56836);
   VbbHcc_both_H_mass_stack_2->SetBinContent(25,13.40688);
   VbbHcc_both_H_mass_stack_2->SetBinContent(26,13.76471);
   VbbHcc_both_H_mass_stack_2->SetBinContent(27,13.75269);
   VbbHcc_both_H_mass_stack_2->SetBinContent(28,12.95027);
   VbbHcc_both_H_mass_stack_2->SetBinContent(29,10.8811);
   VbbHcc_both_H_mass_stack_2->SetBinContent(30,10.41558);
   VbbHcc_both_H_mass_stack_2->SetBinContent(31,10.30528);
   VbbHcc_both_H_mass_stack_2->SetBinContent(32,10.19094);
   VbbHcc_both_H_mass_stack_2->SetBinContent(33,8.429029);
   VbbHcc_both_H_mass_stack_2->SetBinContent(34,8.74685);
   VbbHcc_both_H_mass_stack_2->SetBinContent(35,7.630973);
   VbbHcc_both_H_mass_stack_2->SetBinContent(36,7.861746);
   VbbHcc_both_H_mass_stack_2->SetBinContent(37,7.64448);
   VbbHcc_both_H_mass_stack_2->SetBinContent(38,5.779937);
   VbbHcc_both_H_mass_stack_2->SetBinContent(39,6.570826);
   VbbHcc_both_H_mass_stack_2->SetBinContent(40,5.417591);
   VbbHcc_both_H_mass_stack_2->SetBinContent(41,109.182);
   VbbHcc_both_H_mass_stack_2->SetBinError(3,0.08418743);
   VbbHcc_both_H_mass_stack_2->SetBinError(4,0.1684457);
   VbbHcc_both_H_mass_stack_2->SetBinError(5,0.793998);
   VbbHcc_both_H_mass_stack_2->SetBinError(6,0.6139177);
   VbbHcc_both_H_mass_stack_2->SetBinError(7,0.8871934);
   VbbHcc_both_H_mass_stack_2->SetBinError(8,1.234971);
   VbbHcc_both_H_mass_stack_2->SetBinError(9,1.360094);
   VbbHcc_both_H_mass_stack_2->SetBinError(10,1.517801);
   VbbHcc_both_H_mass_stack_2->SetBinError(11,1.326529);
   VbbHcc_both_H_mass_stack_2->SetBinError(12,1.619345);
   VbbHcc_both_H_mass_stack_2->SetBinError(13,1.709207);
   VbbHcc_both_H_mass_stack_2->SetBinError(14,1.734464);
   VbbHcc_both_H_mass_stack_2->SetBinError(15,1.622289);
   VbbHcc_both_H_mass_stack_2->SetBinError(16,1.633289);
   VbbHcc_both_H_mass_stack_2->SetBinError(17,1.614021);
   VbbHcc_both_H_mass_stack_2->SetBinError(18,1.646599);
   VbbHcc_both_H_mass_stack_2->SetBinError(19,1.623499);
   VbbHcc_both_H_mass_stack_2->SetBinError(20,1.578295);
   VbbHcc_both_H_mass_stack_2->SetBinError(21,1.593624);
   VbbHcc_both_H_mass_stack_2->SetBinError(22,1.323122);
   VbbHcc_both_H_mass_stack_2->SetBinError(23,1.574529);
   VbbHcc_both_H_mass_stack_2->SetBinError(24,1.651246);
   VbbHcc_both_H_mass_stack_2->SetBinError(25,1.349425);
   VbbHcc_both_H_mass_stack_2->SetBinError(26,1.34906);
   VbbHcc_both_H_mass_stack_2->SetBinError(27,1.415351);
   VbbHcc_both_H_mass_stack_2->SetBinError(28,1.374157);
   VbbHcc_both_H_mass_stack_2->SetBinError(29,1.269341);
   VbbHcc_both_H_mass_stack_2->SetBinError(30,1.127015);
   VbbHcc_both_H_mass_stack_2->SetBinError(31,1.230781);
   VbbHcc_both_H_mass_stack_2->SetBinError(32,1.210538);
   VbbHcc_both_H_mass_stack_2->SetBinError(33,1.074484);
   VbbHcc_both_H_mass_stack_2->SetBinError(34,1.075624);
   VbbHcc_both_H_mass_stack_2->SetBinError(35,1.080006);
   VbbHcc_both_H_mass_stack_2->SetBinError(36,1.10858);
   VbbHcc_both_H_mass_stack_2->SetBinError(37,1.062617);
   VbbHcc_both_H_mass_stack_2->SetBinError(38,0.8760262);
   VbbHcc_both_H_mass_stack_2->SetBinError(39,1.017495);
   VbbHcc_both_H_mass_stack_2->SetBinError(40,0.836931);
   VbbHcc_both_H_mass_stack_2->SetBinError(41,4.164521);
   VbbHcc_both_H_mass_stack_2->SetEntries(9517);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass_stack_2->SetLineColor(ci);
   VbbHcc_both_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_mass_stack_2,"");
   
   TH1D *VbbHcc_both_H_mass_stack_3 = new TH1D("VbbHcc_both_H_mass_stack_3","",40,0,400);
   VbbHcc_both_H_mass_stack_3->SetBinContent(3,2.590474);
   VbbHcc_both_H_mass_stack_3->SetBinContent(4,25.57709);
   VbbHcc_both_H_mass_stack_3->SetBinContent(5,72.00178);
   VbbHcc_both_H_mass_stack_3->SetBinContent(6,112.5125);
   VbbHcc_both_H_mass_stack_3->SetBinContent(7,171.6822);
   VbbHcc_both_H_mass_stack_3->SetBinContent(8,243.5272);
   VbbHcc_both_H_mass_stack_3->SetBinContent(9,308.9491);
   VbbHcc_both_H_mass_stack_3->SetBinContent(10,374.4183);
   VbbHcc_both_H_mass_stack_3->SetBinContent(11,449.6376);
   VbbHcc_both_H_mass_stack_3->SetBinContent(12,513.3897);
   VbbHcc_both_H_mass_stack_3->SetBinContent(13,555.3524);
   VbbHcc_both_H_mass_stack_3->SetBinContent(14,562.5691);
   VbbHcc_both_H_mass_stack_3->SetBinContent(15,538.1542);
   VbbHcc_both_H_mass_stack_3->SetBinContent(16,498.7432);
   VbbHcc_both_H_mass_stack_3->SetBinContent(17,464.165);
   VbbHcc_both_H_mass_stack_3->SetBinContent(18,434.2145);
   VbbHcc_both_H_mass_stack_3->SetBinContent(19,403.2348);
   VbbHcc_both_H_mass_stack_3->SetBinContent(20,388.4338);
   VbbHcc_both_H_mass_stack_3->SetBinContent(21,370.9786);
   VbbHcc_both_H_mass_stack_3->SetBinContent(22,339.9318);
   VbbHcc_both_H_mass_stack_3->SetBinContent(23,324.2563);
   VbbHcc_both_H_mass_stack_3->SetBinContent(24,297.1137);
   VbbHcc_both_H_mass_stack_3->SetBinContent(25,278.7324);
   VbbHcc_both_H_mass_stack_3->SetBinContent(26,263.251);
   VbbHcc_both_H_mass_stack_3->SetBinContent(27,238.0486);
   VbbHcc_both_H_mass_stack_3->SetBinContent(28,230.2758);
   VbbHcc_both_H_mass_stack_3->SetBinContent(29,212.7734);
   VbbHcc_both_H_mass_stack_3->SetBinContent(30,193.8378);
   VbbHcc_both_H_mass_stack_3->SetBinContent(31,178.7532);
   VbbHcc_both_H_mass_stack_3->SetBinContent(32,168.5515);
   VbbHcc_both_H_mass_stack_3->SetBinContent(33,156.1397);
   VbbHcc_both_H_mass_stack_3->SetBinContent(34,143.8045);
   VbbHcc_both_H_mass_stack_3->SetBinContent(35,130.6915);
   VbbHcc_both_H_mass_stack_3->SetBinContent(36,124.5342);
   VbbHcc_both_H_mass_stack_3->SetBinContent(37,117.2832);
   VbbHcc_both_H_mass_stack_3->SetBinContent(38,105.463);
   VbbHcc_both_H_mass_stack_3->SetBinContent(39,99.97584);
   VbbHcc_both_H_mass_stack_3->SetBinContent(40,93.72985);
   VbbHcc_both_H_mass_stack_3->SetBinContent(41,1422.644);
   VbbHcc_both_H_mass_stack_3->SetBinError(3,0.3653643);
   VbbHcc_both_H_mass_stack_3->SetBinError(4,1.13328);
   VbbHcc_both_H_mass_stack_3->SetBinError(5,1.91615);
   VbbHcc_both_H_mass_stack_3->SetBinError(6,2.408624);
   VbbHcc_both_H_mass_stack_3->SetBinError(7,2.990543);
   VbbHcc_both_H_mass_stack_3->SetBinError(8,3.585726);
   VbbHcc_both_H_mass_stack_3->SetBinError(9,4.045229);
   VbbHcc_both_H_mass_stack_3->SetBinError(10,4.459931);
   VbbHcc_both_H_mass_stack_3->SetBinError(11,4.889966);
   VbbHcc_both_H_mass_stack_3->SetBinError(12,5.233682);
   VbbHcc_both_H_mass_stack_3->SetBinError(13,5.453602);
   VbbHcc_both_H_mass_stack_3->SetBinError(14,5.463847);
   VbbHcc_both_H_mass_stack_3->SetBinError(15,5.35534);
   VbbHcc_both_H_mass_stack_3->SetBinError(16,5.14719);
   VbbHcc_both_H_mass_stack_3->SetBinError(17,4.963995);
   VbbHcc_both_H_mass_stack_3->SetBinError(18,4.786136);
   VbbHcc_both_H_mass_stack_3->SetBinError(19,4.612196);
   VbbHcc_both_H_mass_stack_3->SetBinError(20,4.525698);
   VbbHcc_both_H_mass_stack_3->SetBinError(21,4.427311);
   VbbHcc_both_H_mass_stack_3->SetBinError(22,4.237179);
   VbbHcc_both_H_mass_stack_3->SetBinError(23,4.146453);
   VbbHcc_both_H_mass_stack_3->SetBinError(24,3.963116);
   VbbHcc_both_H_mass_stack_3->SetBinError(25,3.850153);
   VbbHcc_both_H_mass_stack_3->SetBinError(26,3.736633);
   VbbHcc_both_H_mass_stack_3->SetBinError(27,3.556763);
   VbbHcc_both_H_mass_stack_3->SetBinError(28,3.515121);
   VbbHcc_both_H_mass_stack_3->SetBinError(29,3.367322);
   VbbHcc_both_H_mass_stack_3->SetBinError(30,3.215498);
   VbbHcc_both_H_mass_stack_3->SetBinError(31,3.098318);
   VbbHcc_both_H_mass_stack_3->SetBinError(32,3.011489);
   VbbHcc_both_H_mass_stack_3->SetBinError(33,2.905308);
   VbbHcc_both_H_mass_stack_3->SetBinError(34,2.781035);
   VbbHcc_both_H_mass_stack_3->SetBinError(35,2.656707);
   VbbHcc_both_H_mass_stack_3->SetBinError(36,2.593581);
   VbbHcc_both_H_mass_stack_3->SetBinError(37,2.51071);
   VbbHcc_both_H_mass_stack_3->SetBinError(38,2.391687);
   VbbHcc_both_H_mass_stack_3->SetBinError(39,2.333521);
   VbbHcc_both_H_mass_stack_3->SetBinError(40,2.26697);
   VbbHcc_both_H_mass_stack_3->SetBinError(41,8.901828);
   VbbHcc_both_H_mass_stack_3->SetEntries(232621);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass_stack_3->SetLineColor(ci);
   VbbHcc_both_H_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_mass_stack_3,"");
   
   TH1D *VbbHcc_both_H_mass_stack_4 = new TH1D("VbbHcc_both_H_mass_stack_4","",40,0,400);
   VbbHcc_both_H_mass_stack_4->SetBinContent(3,0.3039558);
   VbbHcc_both_H_mass_stack_4->SetBinContent(4,2.583046);
   VbbHcc_both_H_mass_stack_4->SetBinContent(5,10.92786);
   VbbHcc_both_H_mass_stack_4->SetBinContent(6,25.01188);
   VbbHcc_both_H_mass_stack_4->SetBinContent(7,27.99047);
   VbbHcc_both_H_mass_stack_4->SetBinContent(8,47.74255);
   VbbHcc_both_H_mass_stack_4->SetBinContent(9,82.12836);
   VbbHcc_both_H_mass_stack_4->SetBinContent(10,67.29577);
   VbbHcc_both_H_mass_stack_4->SetBinContent(11,55.16583);
   VbbHcc_both_H_mass_stack_4->SetBinContent(12,44.80151);
   VbbHcc_both_H_mass_stack_4->SetBinContent(13,44.39852);
   VbbHcc_both_H_mass_stack_4->SetBinContent(14,56.054);
   VbbHcc_both_H_mass_stack_4->SetBinContent(15,61.50644);
   VbbHcc_both_H_mass_stack_4->SetBinContent(16,52.02255);
   VbbHcc_both_H_mass_stack_4->SetBinContent(17,58.485);
   VbbHcc_both_H_mass_stack_4->SetBinContent(18,50.95673);
   VbbHcc_both_H_mass_stack_4->SetBinContent(19,62.96182);
   VbbHcc_both_H_mass_stack_4->SetBinContent(20,56.52916);
   VbbHcc_both_H_mass_stack_4->SetBinContent(21,58.24678);
   VbbHcc_both_H_mass_stack_4->SetBinContent(22,45.28271);
   VbbHcc_both_H_mass_stack_4->SetBinContent(23,50.03722);
   VbbHcc_both_H_mass_stack_4->SetBinContent(24,39.02961);
   VbbHcc_both_H_mass_stack_4->SetBinContent(25,41.14994);
   VbbHcc_both_H_mass_stack_4->SetBinContent(26,32.88618);
   VbbHcc_both_H_mass_stack_4->SetBinContent(27,31.59031);
   VbbHcc_both_H_mass_stack_4->SetBinContent(28,28.07067);
   VbbHcc_both_H_mass_stack_4->SetBinContent(29,28.48126);
   VbbHcc_both_H_mass_stack_4->SetBinContent(30,28.18656);
   VbbHcc_both_H_mass_stack_4->SetBinContent(31,29.88694);
   VbbHcc_both_H_mass_stack_4->SetBinContent(32,24.37788);
   VbbHcc_both_H_mass_stack_4->SetBinContent(33,21.07778);
   VbbHcc_both_H_mass_stack_4->SetBinContent(34,17.86856);
   VbbHcc_both_H_mass_stack_4->SetBinContent(35,18.38244);
   VbbHcc_both_H_mass_stack_4->SetBinContent(36,19.5558);
   VbbHcc_both_H_mass_stack_4->SetBinContent(37,16.51759);
   VbbHcc_both_H_mass_stack_4->SetBinContent(38,15.76111);
   VbbHcc_both_H_mass_stack_4->SetBinContent(39,15.8567);
   VbbHcc_both_H_mass_stack_4->SetBinContent(40,10.7299);
   VbbHcc_both_H_mass_stack_4->SetBinContent(41,200.9862);
   VbbHcc_both_H_mass_stack_4->SetBinError(3,0.2101875);
   VbbHcc_both_H_mass_stack_4->SetBinError(4,0.5898825);
   VbbHcc_both_H_mass_stack_4->SetBinError(5,2.133419);
   VbbHcc_both_H_mass_stack_4->SetBinError(6,3.20004);
   VbbHcc_both_H_mass_stack_4->SetBinError(7,3.233798);
   VbbHcc_both_H_mass_stack_4->SetBinError(8,3.946774);
   VbbHcc_both_H_mass_stack_4->SetBinError(9,6.078865);
   VbbHcc_both_H_mass_stack_4->SetBinError(10,5.119129);
   VbbHcc_both_H_mass_stack_4->SetBinError(11,5.269692);
   VbbHcc_both_H_mass_stack_4->SetBinError(12,5.231693);
   VbbHcc_both_H_mass_stack_4->SetBinError(13,5.330144);
   VbbHcc_both_H_mass_stack_4->SetBinError(14,6.309323);
   VbbHcc_both_H_mass_stack_4->SetBinError(15,6.635762);
   VbbHcc_both_H_mass_stack_4->SetBinError(16,5.065988);
   VbbHcc_both_H_mass_stack_4->SetBinError(17,6.10268);
   VbbHcc_both_H_mass_stack_4->SetBinError(18,4.957016);
   VbbHcc_both_H_mass_stack_4->SetBinError(19,5.691951);
   VbbHcc_both_H_mass_stack_4->SetBinError(20,5.32563);
   VbbHcc_both_H_mass_stack_4->SetBinError(21,5.659429);
   VbbHcc_both_H_mass_stack_4->SetBinError(22,3.265532);
   VbbHcc_both_H_mass_stack_4->SetBinError(23,4.365311);
   VbbHcc_both_H_mass_stack_4->SetBinError(24,2.71558);
   VbbHcc_both_H_mass_stack_4->SetBinError(25,3.651861);
   VbbHcc_both_H_mass_stack_4->SetBinError(26,2.155938);
   VbbHcc_both_H_mass_stack_4->SetBinError(27,2.667191);
   VbbHcc_both_H_mass_stack_4->SetBinError(28,2.303258);
   VbbHcc_both_H_mass_stack_4->SetBinError(29,2.028298);
   VbbHcc_both_H_mass_stack_4->SetBinError(30,2.933413);
   VbbHcc_both_H_mass_stack_4->SetBinError(31,3.778489);
   VbbHcc_both_H_mass_stack_4->SetBinError(32,2.394116);
   VbbHcc_both_H_mass_stack_4->SetBinError(33,1.602066);
   VbbHcc_both_H_mass_stack_4->SetBinError(34,1.463975);
   VbbHcc_both_H_mass_stack_4->SetBinError(35,1.438546);
   VbbHcc_both_H_mass_stack_4->SetBinError(36,1.600511);
   VbbHcc_both_H_mass_stack_4->SetBinError(37,2.021745);
   VbbHcc_both_H_mass_stack_4->SetBinError(38,1.224073);
   VbbHcc_both_H_mass_stack_4->SetBinError(39,1.354331);
   VbbHcc_both_H_mass_stack_4->SetBinError(40,1.095835);
   VbbHcc_both_H_mass_stack_4->SetBinError(41,4.490928);
   VbbHcc_both_H_mass_stack_4->SetEntries(15013);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass_stack_4->SetLineColor(ci);
   VbbHcc_both_H_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_mass_stack_4,"");
   
   TH1D *VbbHcc_both_H_mass_stack_5 = new TH1D("VbbHcc_both_H_mass_stack_5","",40,0,400);
   VbbHcc_both_H_mass_stack_5->SetBinContent(4,0.7112936);
   VbbHcc_both_H_mass_stack_5->SetBinContent(5,1.47104);
   VbbHcc_both_H_mass_stack_5->SetBinContent(6,0.5155349);
   VbbHcc_both_H_mass_stack_5->SetBinContent(7,3.503373);
   VbbHcc_both_H_mass_stack_5->SetBinContent(8,8.40481);
   VbbHcc_both_H_mass_stack_5->SetBinContent(9,2.282935);
   VbbHcc_both_H_mass_stack_5->SetBinContent(10,3.501079);
   VbbHcc_both_H_mass_stack_5->SetBinContent(11,3.600159);
   VbbHcc_both_H_mass_stack_5->SetBinContent(12,4.196726);
   VbbHcc_both_H_mass_stack_5->SetBinContent(13,2.206072);
   VbbHcc_both_H_mass_stack_5->SetBinContent(14,3.467305);
   VbbHcc_both_H_mass_stack_5->SetBinContent(15,4.188561);
   VbbHcc_both_H_mass_stack_5->SetBinContent(16,3.06103);
   VbbHcc_both_H_mass_stack_5->SetBinContent(17,3.885277);
   VbbHcc_both_H_mass_stack_5->SetBinContent(18,4.109237);
   VbbHcc_both_H_mass_stack_5->SetBinContent(19,8.997296);
   VbbHcc_both_H_mass_stack_5->SetBinContent(20,3.969762);
   VbbHcc_both_H_mass_stack_5->SetBinContent(21,4.220168);
   VbbHcc_both_H_mass_stack_5->SetBinContent(22,3.343893);
   VbbHcc_both_H_mass_stack_5->SetBinContent(23,3.513654);
   VbbHcc_both_H_mass_stack_5->SetBinContent(24,4.83136);
   VbbHcc_both_H_mass_stack_5->SetBinContent(25,4.963624);
   VbbHcc_both_H_mass_stack_5->SetBinContent(26,1.813993);
   VbbHcc_both_H_mass_stack_5->SetBinContent(27,4.474747);
   VbbHcc_both_H_mass_stack_5->SetBinContent(28,3.704582);
   VbbHcc_both_H_mass_stack_5->SetBinContent(29,2.525562);
   VbbHcc_both_H_mass_stack_5->SetBinContent(30,3.463011);
   VbbHcc_both_H_mass_stack_5->SetBinContent(31,1.624566);
   VbbHcc_both_H_mass_stack_5->SetBinContent(32,3.204704);
   VbbHcc_both_H_mass_stack_5->SetBinContent(33,1.832657);
   VbbHcc_both_H_mass_stack_5->SetBinContent(34,2.269582);
   VbbHcc_both_H_mass_stack_5->SetBinContent(35,1.517763);
   VbbHcc_both_H_mass_stack_5->SetBinContent(36,1.244404);
   VbbHcc_both_H_mass_stack_5->SetBinContent(37,2.316423);
   VbbHcc_both_H_mass_stack_5->SetBinContent(38,1.741242);
   VbbHcc_both_H_mass_stack_5->SetBinContent(39,1.660749);
   VbbHcc_both_H_mass_stack_5->SetBinContent(40,3.109129);
   VbbHcc_both_H_mass_stack_5->SetBinContent(41,45.1622);
   VbbHcc_both_H_mass_stack_5->SetBinError(4,0.7112936);
   VbbHcc_both_H_mass_stack_5->SetBinError(5,0.8826804);
   VbbHcc_both_H_mass_stack_5->SetBinError(6,0.2080028);
   VbbHcc_both_H_mass_stack_5->SetBinError(7,1.160024);
   VbbHcc_both_H_mass_stack_5->SetBinError(8,5.636364);
   VbbHcc_both_H_mass_stack_5->SetBinError(9,0.5222275);
   VbbHcc_both_H_mass_stack_5->SetBinError(10,0.904613);
   VbbHcc_both_H_mass_stack_5->SetBinError(11,1.20333);
   VbbHcc_both_H_mass_stack_5->SetBinError(12,1.425613);
   VbbHcc_both_H_mass_stack_5->SetBinError(13,0.4387701);
   VbbHcc_both_H_mass_stack_5->SetBinError(14,0.9974095);
   VbbHcc_both_H_mass_stack_5->SetBinError(15,1.308454);
   VbbHcc_both_H_mass_stack_5->SetBinError(16,0.8822177);
   VbbHcc_both_H_mass_stack_5->SetBinError(17,1.033477);
   VbbHcc_both_H_mass_stack_5->SetBinError(18,1.236703);
   VbbHcc_both_H_mass_stack_5->SetBinError(19,5.325881);
   VbbHcc_both_H_mass_stack_5->SetBinError(20,1.260086);
   VbbHcc_both_H_mass_stack_5->SetBinError(21,1.272809);
   VbbHcc_both_H_mass_stack_5->SetBinError(22,0.9540491);
   VbbHcc_both_H_mass_stack_5->SetBinError(23,1.114275);
   VbbHcc_both_H_mass_stack_5->SetBinError(24,1.263163);
   VbbHcc_both_H_mass_stack_5->SetBinError(25,1.48587);
   VbbHcc_both_H_mass_stack_5->SetBinError(26,0.3757051);
   VbbHcc_both_H_mass_stack_5->SetBinError(27,1.103056);
   VbbHcc_both_H_mass_stack_5->SetBinError(28,0.956094);
   VbbHcc_both_H_mass_stack_5->SetBinError(29,0.5406389);
   VbbHcc_both_H_mass_stack_5->SetBinError(30,1.174945);
   VbbHcc_both_H_mass_stack_5->SetBinError(31,0.3776189);
   VbbHcc_both_H_mass_stack_5->SetBinError(32,1.20351);
   VbbHcc_both_H_mass_stack_5->SetBinError(33,0.3914393);
   VbbHcc_both_H_mass_stack_5->SetBinError(34,0.9196761);
   VbbHcc_both_H_mass_stack_5->SetBinError(35,0.3743292);
   VbbHcc_both_H_mass_stack_5->SetBinError(36,0.3099312);
   VbbHcc_both_H_mass_stack_5->SetBinError(37,0.8585176);
   VbbHcc_both_H_mass_stack_5->SetBinError(38,0.3513662);
   VbbHcc_both_H_mass_stack_5->SetBinError(39,0.3519917);
   VbbHcc_both_H_mass_stack_5->SetBinError(40,0.9298455);
   VbbHcc_both_H_mass_stack_5->SetBinError(41,2.360232);
   VbbHcc_both_H_mass_stack_5->SetEntries(3486);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass_stack_5->SetLineColor(ci);
   VbbHcc_both_H_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_mass_stack_5,"");
   
   TH1D *VbbHcc_both_H_mass_stack_6 = new TH1D("VbbHcc_both_H_mass_stack_6","",40,0,400);
   VbbHcc_both_H_mass_stack_6->SetBinContent(14,0.1195687);
   VbbHcc_both_H_mass_stack_6->SetBinContent(17,0.1152503);
   VbbHcc_both_H_mass_stack_6->SetBinContent(19,0.1294336);
   VbbHcc_both_H_mass_stack_6->SetBinContent(24,0.1142782);
   VbbHcc_both_H_mass_stack_6->SetBinContent(27,0.1243737);
   VbbHcc_both_H_mass_stack_6->SetBinContent(28,0.1335451);
   VbbHcc_both_H_mass_stack_6->SetBinContent(31,0.1234178);
   VbbHcc_both_H_mass_stack_6->SetBinContent(32,0.1297649);
   VbbHcc_both_H_mass_stack_6->SetBinContent(41,0.1953458);
   VbbHcc_both_H_mass_stack_6->SetBinError(14,0.1195687);
   VbbHcc_both_H_mass_stack_6->SetBinError(17,0.1152503);
   VbbHcc_both_H_mass_stack_6->SetBinError(19,0.1294336);
   VbbHcc_both_H_mass_stack_6->SetBinError(24,0.1142782);
   VbbHcc_both_H_mass_stack_6->SetBinError(27,0.1243737);
   VbbHcc_both_H_mass_stack_6->SetBinError(28,0.1335451);
   VbbHcc_both_H_mass_stack_6->SetBinError(31,0.1234178);
   VbbHcc_both_H_mass_stack_6->SetBinError(32,0.1297649);
   VbbHcc_both_H_mass_stack_6->SetBinError(41,0.1408959);
   VbbHcc_both_H_mass_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass_stack_6->SetLineColor(ci);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_mass_stack_6,"");
   
   TH1D *VbbHcc_both_H_mass_stack_7 = new TH1D("VbbHcc_both_H_mass_stack_7","",40,0,400);
   VbbHcc_both_H_mass_stack_7->SetBinContent(4,0.09837659);
   VbbHcc_both_H_mass_stack_7->SetBinContent(6,0.07699256);
   VbbHcc_both_H_mass_stack_7->SetBinContent(8,0.1875275);
   VbbHcc_both_H_mass_stack_7->SetBinContent(9,0.4587343);
   VbbHcc_both_H_mass_stack_7->SetBinContent(10,0.1623838);
   VbbHcc_both_H_mass_stack_7->SetBinContent(11,0.1783283);
   VbbHcc_both_H_mass_stack_7->SetBinContent(12,0.1870263);
   VbbHcc_both_H_mass_stack_7->SetBinContent(13,0.1679649);
   VbbHcc_both_H_mass_stack_7->SetBinContent(14,0.1903386);
   VbbHcc_both_H_mass_stack_7->SetBinContent(15,0.0778465);
   VbbHcc_both_H_mass_stack_7->SetBinContent(16,0.08610475);
   VbbHcc_both_H_mass_stack_7->SetBinContent(18,0.07819951);
   VbbHcc_both_H_mass_stack_7->SetBinContent(20,0.2648924);
   VbbHcc_both_H_mass_stack_7->SetBinContent(21,0.07971497);
   VbbHcc_both_H_mass_stack_7->SetBinContent(23,0.2067703);
   VbbHcc_both_H_mass_stack_7->SetBinContent(26,0.2705492);
   VbbHcc_both_H_mass_stack_7->SetBinContent(27,0.09078265);
   VbbHcc_both_H_mass_stack_7->SetBinContent(28,0.07873842);
   VbbHcc_both_H_mass_stack_7->SetBinContent(30,0.09049555);
   VbbHcc_both_H_mass_stack_7->SetBinContent(31,0.1796705);
   VbbHcc_both_H_mass_stack_7->SetBinContent(32,0.09442741);
   VbbHcc_both_H_mass_stack_7->SetBinContent(33,0.08828565);
   VbbHcc_both_H_mass_stack_7->SetBinContent(37,0.1394411);
   VbbHcc_both_H_mass_stack_7->SetBinContent(40,0.09206678);
   VbbHcc_both_H_mass_stack_7->SetBinContent(41,0.7403712);
   VbbHcc_both_H_mass_stack_7->SetBinError(4,0.09837659);
   VbbHcc_both_H_mass_stack_7->SetBinError(6,0.07699256);
   VbbHcc_both_H_mass_stack_7->SetBinError(8,0.1327459);
   VbbHcc_both_H_mass_stack_7->SetBinError(9,0.2057879);
   VbbHcc_both_H_mass_stack_7->SetBinError(10,0.1149578);
   VbbHcc_both_H_mass_stack_7->SetBinError(11,0.1261316);
   VbbHcc_both_H_mass_stack_7->SetBinError(12,0.1340021);
   VbbHcc_both_H_mass_stack_7->SetBinError(13,0.1189219);
   VbbHcc_both_H_mass_stack_7->SetBinError(14,0.134755);
   VbbHcc_both_H_mass_stack_7->SetBinError(15,0.0778465);
   VbbHcc_both_H_mass_stack_7->SetBinError(16,0.08610475);
   VbbHcc_both_H_mass_stack_7->SetBinError(18,0.07819951);
   VbbHcc_both_H_mass_stack_7->SetBinError(20,0.1534632);
   VbbHcc_both_H_mass_stack_7->SetBinError(21,0.07971497);
   VbbHcc_both_H_mass_stack_7->SetBinError(23,0.1462249);
   VbbHcc_both_H_mass_stack_7->SetBinError(26,0.1562281);
   VbbHcc_both_H_mass_stack_7->SetBinError(27,0.09078265);
   VbbHcc_both_H_mass_stack_7->SetBinError(28,0.07873842);
   VbbHcc_both_H_mass_stack_7->SetBinError(30,0.09049555);
   VbbHcc_both_H_mass_stack_7->SetBinError(31,0.1271885);
   VbbHcc_both_H_mass_stack_7->SetBinError(32,0.09442741);
   VbbHcc_both_H_mass_stack_7->SetBinError(33,0.08828565);
   VbbHcc_both_H_mass_stack_7->SetBinError(37,0.1061571);
   VbbHcc_both_H_mass_stack_7->SetBinError(40,0.09206678);
   VbbHcc_both_H_mass_stack_7->SetBinError(41,0.2635929);
   VbbHcc_both_H_mass_stack_7->SetEntries(49);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass_stack_7->SetLineColor(ci);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_mass_stack_7,"");
   
   TH1D *VbbHcc_both_H_mass_stack_8 = new TH1D("VbbHcc_both_H_mass_stack_8","",40,0,400);
   VbbHcc_both_H_mass_stack_8->SetBinContent(5,0.4213079);
   VbbHcc_both_H_mass_stack_8->SetBinContent(6,0.5976754);
   VbbHcc_both_H_mass_stack_8->SetBinContent(7,1.183686);
   VbbHcc_both_H_mass_stack_8->SetBinContent(8,2.759932);
   VbbHcc_both_H_mass_stack_8->SetBinContent(9,2.682712);
   VbbHcc_both_H_mass_stack_8->SetBinContent(10,3.351744);
   VbbHcc_both_H_mass_stack_8->SetBinContent(11,1.53453);
   VbbHcc_both_H_mass_stack_8->SetBinContent(12,1.010941);
   VbbHcc_both_H_mass_stack_8->SetBinContent(13,1.080074);
   VbbHcc_both_H_mass_stack_8->SetBinContent(14,0.8099308);
   VbbHcc_both_H_mass_stack_8->SetBinContent(15,1.213142);
   VbbHcc_both_H_mass_stack_8->SetBinContent(16,0.3890624);
   VbbHcc_both_H_mass_stack_8->SetBinContent(17,0.1985803);
   VbbHcc_both_H_mass_stack_8->SetBinContent(18,0.9731961);
   VbbHcc_both_H_mass_stack_8->SetBinContent(19,0.9125149);
   VbbHcc_both_H_mass_stack_8->SetBinContent(20,1.187707);
   VbbHcc_both_H_mass_stack_8->SetBinContent(21,0.5934487);
   VbbHcc_both_H_mass_stack_8->SetBinContent(22,1.279987);
   VbbHcc_both_H_mass_stack_8->SetBinContent(23,1.138842);
   VbbHcc_both_H_mass_stack_8->SetBinContent(24,0.3167706);
   VbbHcc_both_H_mass_stack_8->SetBinContent(25,0.1615324);
   VbbHcc_both_H_mass_stack_8->SetBinContent(26,0.3457466);
   VbbHcc_both_H_mass_stack_8->SetBinContent(27,0.4209499);
   VbbHcc_both_H_mass_stack_8->SetBinContent(28,0.2051823);
   VbbHcc_both_H_mass_stack_8->SetBinContent(29,0.5964681);
   VbbHcc_both_H_mass_stack_8->SetBinContent(30,0.8623585);
   VbbHcc_both_H_mass_stack_8->SetBinContent(31,0.9117895);
   VbbHcc_both_H_mass_stack_8->SetBinContent(32,0.1868687);
   VbbHcc_both_H_mass_stack_8->SetBinContent(33,1.09523);
   VbbHcc_both_H_mass_stack_8->SetBinContent(35,0.2190491);
   VbbHcc_both_H_mass_stack_8->SetBinContent(37,0.6728144);
   VbbHcc_both_H_mass_stack_8->SetBinContent(38,0.2111836);
   VbbHcc_both_H_mass_stack_8->SetBinContent(40,0.2317413);
   VbbHcc_both_H_mass_stack_8->SetBinContent(41,2.494606);
   VbbHcc_both_H_mass_stack_8->SetBinError(5,0.3017297);
   VbbHcc_both_H_mass_stack_8->SetBinError(6,0.3497835);
   VbbHcc_both_H_mass_stack_8->SetBinError(7,0.4843661);
   VbbHcc_both_H_mass_stack_8->SetBinError(8,0.7674759);
   VbbHcc_both_H_mass_stack_8->SetBinError(9,0.7481738);
   VbbHcc_both_H_mass_stack_8->SetBinError(10,0.8235213);
   VbbHcc_both_H_mass_stack_8->SetBinError(11,0.5910774);
   VbbHcc_both_H_mass_stack_8->SetBinError(12,0.4533036);
   VbbHcc_both_H_mass_stack_8->SetBinError(13,0.4932543);
   VbbHcc_both_H_mass_stack_8->SetBinError(14,0.4058117);
   VbbHcc_both_H_mass_stack_8->SetBinError(15,0.4976001);
   VbbHcc_both_H_mass_stack_8->SetBinError(16,0.2752478);
   VbbHcc_both_H_mass_stack_8->SetBinError(17,0.1985803);
   VbbHcc_both_H_mass_stack_8->SetBinError(18,0.4367049);
   VbbHcc_both_H_mass_stack_8->SetBinError(19,0.4161478);
   VbbHcc_both_H_mass_stack_8->SetBinError(20,0.4862387);
   VbbHcc_both_H_mass_stack_8->SetBinError(21,0.3472655);
   VbbHcc_both_H_mass_stack_8->SetBinError(22,0.5095291);
   VbbHcc_both_H_mass_stack_8->SetBinError(23,0.4711672);
   VbbHcc_both_H_mass_stack_8->SetBinError(24,0.25017);
   VbbHcc_both_H_mass_stack_8->SetBinError(25,0.1615324);
   VbbHcc_both_H_mass_stack_8->SetBinError(26,0.2492555);
   VbbHcc_both_H_mass_stack_8->SetBinError(27,0.2976653);
   VbbHcc_both_H_mass_stack_8->SetBinError(28,0.2051823);
   VbbHcc_both_H_mass_stack_8->SetBinError(29,0.3535827);
   VbbHcc_both_H_mass_stack_8->SetBinError(30,0.4314599);
   VbbHcc_both_H_mass_stack_8->SetBinError(31,0.4561825);
   VbbHcc_both_H_mass_stack_8->SetBinError(32,0.1868687);
   VbbHcc_both_H_mass_stack_8->SetBinError(33,0.4901236);
   VbbHcc_both_H_mass_stack_8->SetBinError(35,0.2190491);
   VbbHcc_both_H_mass_stack_8->SetBinError(37,0.3889623);
   VbbHcc_both_H_mass_stack_8->SetBinError(38,0.2111836);
   VbbHcc_both_H_mass_stack_8->SetBinError(40,0.2317413);
   VbbHcc_both_H_mass_stack_8->SetBinError(41,0.752947);
   VbbHcc_both_H_mass_stack_8->SetEntries(158);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass_stack_8->SetLineColor(ci);
   VbbHcc_both_H_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_mass_stack_8,"");
   
   TH1D *VbbHcc_both_H_mass_stack_9 = new TH1D("VbbHcc_both_H_mass_stack_9","",40,0,400);
   VbbHcc_both_H_mass_stack_9->SetBinContent(3,0.0033415);
   VbbHcc_both_H_mass_stack_9->SetBinContent(4,0.03035032);
   VbbHcc_both_H_mass_stack_9->SetBinContent(5,0.08011432);
   VbbHcc_both_H_mass_stack_9->SetBinContent(6,0.2118166);
   VbbHcc_both_H_mass_stack_9->SetBinContent(7,0.5564954);
   VbbHcc_both_H_mass_stack_9->SetBinContent(8,1.324875);
   VbbHcc_both_H_mass_stack_9->SetBinContent(9,2.374498);
   VbbHcc_both_H_mass_stack_9->SetBinContent(10,2.507468);
   VbbHcc_both_H_mass_stack_9->SetBinContent(11,2.108346);
   VbbHcc_both_H_mass_stack_9->SetBinContent(12,2.32768);
   VbbHcc_both_H_mass_stack_9->SetBinContent(13,2.161606);
   VbbHcc_both_H_mass_stack_9->SetBinContent(14,1.385574);
   VbbHcc_both_H_mass_stack_9->SetBinContent(15,0.9236106);
   VbbHcc_both_H_mass_stack_9->SetBinContent(16,0.7920687);
   VbbHcc_both_H_mass_stack_9->SetBinContent(17,0.7223828);
   VbbHcc_both_H_mass_stack_9->SetBinContent(18,0.7990126);
   VbbHcc_both_H_mass_stack_9->SetBinContent(19,0.7863549);
   VbbHcc_both_H_mass_stack_9->SetBinContent(20,0.7421842);
   VbbHcc_both_H_mass_stack_9->SetBinContent(21,0.7666216);
   VbbHcc_both_H_mass_stack_9->SetBinContent(22,0.6701857);
   VbbHcc_both_H_mass_stack_9->SetBinContent(23,0.6750441);
   VbbHcc_both_H_mass_stack_9->SetBinContent(24,0.6550426);
   VbbHcc_both_H_mass_stack_9->SetBinContent(25,0.5937531);
   VbbHcc_both_H_mass_stack_9->SetBinContent(26,0.5447261);
   VbbHcc_both_H_mass_stack_9->SetBinContent(27,0.5161018);
   VbbHcc_both_H_mass_stack_9->SetBinContent(28,0.4551858);
   VbbHcc_both_H_mass_stack_9->SetBinContent(29,0.4142819);
   VbbHcc_both_H_mass_stack_9->SetBinContent(30,0.3739521);
   VbbHcc_both_H_mass_stack_9->SetBinContent(31,0.3430522);
   VbbHcc_both_H_mass_stack_9->SetBinContent(32,0.3399206);
   VbbHcc_both_H_mass_stack_9->SetBinContent(33,0.2922972);
   VbbHcc_both_H_mass_stack_9->SetBinContent(34,0.2560236);
   VbbHcc_both_H_mass_stack_9->SetBinContent(35,0.2341019);
   VbbHcc_both_H_mass_stack_9->SetBinContent(36,0.2068028);
   VbbHcc_both_H_mass_stack_9->SetBinContent(37,0.1715913);
   VbbHcc_both_H_mass_stack_9->SetBinContent(38,0.1866434);
   VbbHcc_both_H_mass_stack_9->SetBinContent(39,0.1551294);
   VbbHcc_both_H_mass_stack_9->SetBinContent(40,0.1480912);
   VbbHcc_both_H_mass_stack_9->SetBinContent(41,1.447224);
   VbbHcc_both_H_mass_stack_9->SetBinError(3,0.001938296);
   VbbHcc_both_H_mass_stack_9->SetBinError(4,0.005646824);
   VbbHcc_both_H_mass_stack_9->SetBinError(5,0.009365794);
   VbbHcc_both_H_mass_stack_9->SetBinError(6,0.01536417);
   VbbHcc_both_H_mass_stack_9->SetBinError(7,0.02441008);
   VbbHcc_both_H_mass_stack_9->SetBinError(8,0.03803434);
   VbbHcc_both_H_mass_stack_9->SetBinError(9,0.05107845);
   VbbHcc_both_H_mass_stack_9->SetBinError(10,0.05243097);
   VbbHcc_both_H_mass_stack_9->SetBinError(11,0.04802813);
   VbbHcc_both_H_mass_stack_9->SetBinError(12,0.05028807);
   VbbHcc_both_H_mass_stack_9->SetBinError(13,0.04896704);
   VbbHcc_both_H_mass_stack_9->SetBinError(14,0.03872597);
   VbbHcc_both_H_mass_stack_9->SetBinError(15,0.03140267);
   VbbHcc_both_H_mass_stack_9->SetBinError(16,0.02884125);
   VbbHcc_both_H_mass_stack_9->SetBinError(17,0.02758188);
   VbbHcc_both_H_mass_stack_9->SetBinError(18,0.02915906);
   VbbHcc_both_H_mass_stack_9->SetBinError(19,0.02898563);
   VbbHcc_both_H_mass_stack_9->SetBinError(20,0.02847035);
   VbbHcc_both_H_mass_stack_9->SetBinError(21,0.02885924);
   VbbHcc_both_H_mass_stack_9->SetBinError(22,0.02730064);
   VbbHcc_both_H_mass_stack_9->SetBinError(23,0.02719082);
   VbbHcc_both_H_mass_stack_9->SetBinError(24,0.02675805);
   VbbHcc_both_H_mass_stack_9->SetBinError(25,0.0257623);
   VbbHcc_both_H_mass_stack_9->SetBinError(26,0.02476088);
   VbbHcc_both_H_mass_stack_9->SetBinError(27,0.02397612);
   VbbHcc_both_H_mass_stack_9->SetBinError(28,0.02273079);
   VbbHcc_both_H_mass_stack_9->SetBinError(29,0.02175724);
   VbbHcc_both_H_mass_stack_9->SetBinError(30,0.02072482);
   VbbHcc_both_H_mass_stack_9->SetBinError(31,0.01977849);
   VbbHcc_both_H_mass_stack_9->SetBinError(32,0.01985822);
   VbbHcc_both_H_mass_stack_9->SetBinError(33,0.01828283);
   VbbHcc_both_H_mass_stack_9->SetBinError(34,0.01709088);
   VbbHcc_both_H_mass_stack_9->SetBinError(35,0.01646582);
   VbbHcc_both_H_mass_stack_9->SetBinError(36,0.01573443);
   VbbHcc_both_H_mass_stack_9->SetBinError(37,0.01385712);
   VbbHcc_both_H_mass_stack_9->SetBinError(38,0.01457016);
   VbbHcc_both_H_mass_stack_9->SetBinError(39,0.01345029);
   VbbHcc_both_H_mass_stack_9->SetBinError(40,0.01291976);
   VbbHcc_both_H_mass_stack_9->SetBinError(41,0.04139334);
   VbbHcc_both_H_mass_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass_stack_9->SetLineColor(ci);
   VbbHcc_both_H_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_mass_stack_9,"");
   
   TH1D *VbbHcc_both_H_mass_stack_10 = new TH1D("VbbHcc_both_H_mass_stack_10","",40,0,400);
   VbbHcc_both_H_mass_stack_10->SetBinContent(3,0.001135215);
   VbbHcc_both_H_mass_stack_10->SetBinContent(4,0.007873099);
   VbbHcc_both_H_mass_stack_10->SetBinContent(5,0.02967487);
   VbbHcc_both_H_mass_stack_10->SetBinContent(6,0.09083815);
   VbbHcc_both_H_mass_stack_10->SetBinContent(7,0.2493868);
   VbbHcc_both_H_mass_stack_10->SetBinContent(8,0.6152143);
   VbbHcc_both_H_mass_stack_10->SetBinContent(9,1.041503);
   VbbHcc_both_H_mass_stack_10->SetBinContent(10,1.09828);
   VbbHcc_both_H_mass_stack_10->SetBinContent(11,0.9329843);
   VbbHcc_both_H_mass_stack_10->SetBinContent(12,1.022693);
   VbbHcc_both_H_mass_stack_10->SetBinContent(13,0.9718306);
   VbbHcc_both_H_mass_stack_10->SetBinContent(14,0.6196512);
   VbbHcc_both_H_mass_stack_10->SetBinContent(15,0.4346087);
   VbbHcc_both_H_mass_stack_10->SetBinContent(16,0.4038183);
   VbbHcc_both_H_mass_stack_10->SetBinContent(17,0.4097318);
   VbbHcc_both_H_mass_stack_10->SetBinContent(18,0.4152726);
   VbbHcc_both_H_mass_stack_10->SetBinContent(19,0.4188615);
   VbbHcc_both_H_mass_stack_10->SetBinContent(20,0.4328085);
   VbbHcc_both_H_mass_stack_10->SetBinContent(21,0.4002643);
   VbbHcc_both_H_mass_stack_10->SetBinContent(22,0.3689868);
   VbbHcc_both_H_mass_stack_10->SetBinContent(23,0.3541265);
   VbbHcc_both_H_mass_stack_10->SetBinContent(24,0.3124492);
   VbbHcc_both_H_mass_stack_10->SetBinContent(25,0.2902143);
   VbbHcc_both_H_mass_stack_10->SetBinContent(26,0.2814176);
   VbbHcc_both_H_mass_stack_10->SetBinContent(27,0.2272238);
   VbbHcc_both_H_mass_stack_10->SetBinContent(28,0.2155475);
   VbbHcc_both_H_mass_stack_10->SetBinContent(29,0.181858);
   VbbHcc_both_H_mass_stack_10->SetBinContent(30,0.1722643);
   VbbHcc_both_H_mass_stack_10->SetBinContent(31,0.1523159);
   VbbHcc_both_H_mass_stack_10->SetBinContent(32,0.1364042);
   VbbHcc_both_H_mass_stack_10->SetBinContent(33,0.122592);
   VbbHcc_both_H_mass_stack_10->SetBinContent(34,0.1106891);
   VbbHcc_both_H_mass_stack_10->SetBinContent(35,0.0993115);
   VbbHcc_both_H_mass_stack_10->SetBinContent(36,0.09711938);
   VbbHcc_both_H_mass_stack_10->SetBinContent(37,0.07703946);
   VbbHcc_both_H_mass_stack_10->SetBinContent(38,0.07632272);
   VbbHcc_both_H_mass_stack_10->SetBinContent(39,0.06887384);
   VbbHcc_both_H_mass_stack_10->SetBinContent(40,0.05983766);
   VbbHcc_both_H_mass_stack_10->SetBinContent(41,0.7942753);
   VbbHcc_both_H_mass_stack_10->SetBinError(3,0.0006556205);
   VbbHcc_both_H_mass_stack_10->SetBinError(4,0.001605297);
   VbbHcc_both_H_mass_stack_10->SetBinError(5,0.003146798);
   VbbHcc_both_H_mass_stack_10->SetBinError(6,0.005450647);
   VbbHcc_both_H_mass_stack_10->SetBinError(7,0.009033837);
   VbbHcc_both_H_mass_stack_10->SetBinError(8,0.01426491);
   VbbHcc_both_H_mass_stack_10->SetBinError(9,0.01856635);
   VbbHcc_both_H_mass_stack_10->SetBinError(10,0.01911387);
   VbbHcc_both_H_mass_stack_10->SetBinError(11,0.01759013);
   VbbHcc_both_H_mass_stack_10->SetBinError(12,0.01842283);
   VbbHcc_both_H_mass_stack_10->SetBinError(13,0.01802271);
   VbbHcc_both_H_mass_stack_10->SetBinError(14,0.01438349);
   VbbHcc_both_H_mass_stack_10->SetBinError(15,0.01197175);
   VbbHcc_both_H_mass_stack_10->SetBinError(16,0.01148984);
   VbbHcc_both_H_mass_stack_10->SetBinError(17,0.01163553);
   VbbHcc_both_H_mass_stack_10->SetBinError(18,0.01168705);
   VbbHcc_both_H_mass_stack_10->SetBinError(19,0.01175099);
   VbbHcc_both_H_mass_stack_10->SetBinError(20,0.01197374);
   VbbHcc_both_H_mass_stack_10->SetBinError(21,0.01156374);
   VbbHcc_both_H_mass_stack_10->SetBinError(22,0.01114052);
   VbbHcc_both_H_mass_stack_10->SetBinError(23,0.01089985);
   VbbHcc_both_H_mass_stack_10->SetBinError(24,0.0102741);
   VbbHcc_both_H_mass_stack_10->SetBinError(25,0.009933632);
   VbbHcc_both_H_mass_stack_10->SetBinError(26,0.009797118);
   VbbHcc_both_H_mass_stack_10->SetBinError(27,0.008795873);
   VbbHcc_both_H_mass_stack_10->SetBinError(28,0.008587111);
   VbbHcc_both_H_mass_stack_10->SetBinError(29,0.00788432);
   VbbHcc_both_H_mass_stack_10->SetBinError(30,0.00770289);
   VbbHcc_both_H_mass_stack_10->SetBinError(31,0.007247254);
   VbbHcc_both_H_mass_stack_10->SetBinError(32,0.006856278);
   VbbHcc_both_H_mass_stack_10->SetBinError(33,0.006519324);
   VbbHcc_both_H_mass_stack_10->SetBinError(34,0.006206602);
   VbbHcc_both_H_mass_stack_10->SetBinError(35,0.005885674);
   VbbHcc_both_H_mass_stack_10->SetBinError(36,0.005837121);
   VbbHcc_both_H_mass_stack_10->SetBinError(37,0.005192176);
   VbbHcc_both_H_mass_stack_10->SetBinError(38,0.00518192);
   VbbHcc_both_H_mass_stack_10->SetBinError(39,0.004914194);
   VbbHcc_both_H_mass_stack_10->SetBinError(40,0.004591629);
   VbbHcc_both_H_mass_stack_10->SetBinError(41,0.01695038);
   VbbHcc_both_H_mass_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass_stack_10->SetLineColor(ci);
   VbbHcc_both_H_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_mass_stack_10,"");
   
   TH1D *VbbHcc_both_H_mass_stack_11 = new TH1D("VbbHcc_both_H_mass_stack_11","",40,0,400);
   VbbHcc_both_H_mass_stack_11->SetBinContent(8,0.001598357);
   VbbHcc_both_H_mass_stack_11->SetBinContent(10,0.004022886);
   VbbHcc_both_H_mass_stack_11->SetBinContent(11,0.004226718);
   VbbHcc_both_H_mass_stack_11->SetBinContent(12,0.009291255);
   VbbHcc_both_H_mass_stack_11->SetBinContent(13,0.01098716);
   VbbHcc_both_H_mass_stack_11->SetBinContent(14,0.01022793);
   VbbHcc_both_H_mass_stack_11->SetBinContent(15,0.004463875);
   VbbHcc_both_H_mass_stack_11->SetBinContent(18,0.002108704);
   VbbHcc_both_H_mass_stack_11->SetBinContent(19,0.001765897);
   VbbHcc_both_H_mass_stack_11->SetBinContent(20,0.005978323);
   VbbHcc_both_H_mass_stack_11->SetBinContent(21,0.002332089);
   VbbHcc_both_H_mass_stack_11->SetBinContent(24,0.003126194);
   VbbHcc_both_H_mass_stack_11->SetBinContent(25,0.004546294);
   VbbHcc_both_H_mass_stack_11->SetBinContent(29,0.002272667);
   VbbHcc_both_H_mass_stack_11->SetBinContent(30,0.002036349);
   VbbHcc_both_H_mass_stack_11->SetBinContent(38,0.002209336);
   VbbHcc_both_H_mass_stack_11->SetBinContent(41,0.00640311);
   VbbHcc_both_H_mass_stack_11->SetBinError(8,0.001598357);
   VbbHcc_both_H_mass_stack_11->SetBinError(10,0.002864742);
   VbbHcc_both_H_mass_stack_11->SetBinError(11,0.002990404);
   VbbHcc_both_H_mass_stack_11->SetBinError(12,0.004655025);
   VbbHcc_both_H_mass_stack_11->SetBinError(13,0.004918903);
   VbbHcc_both_H_mass_stack_11->SetBinError(14,0.004580202);
   VbbHcc_both_H_mass_stack_11->SetBinError(15,0.003163539);
   VbbHcc_both_H_mass_stack_11->SetBinError(18,0.002108704);
   VbbHcc_both_H_mass_stack_11->SetBinError(19,0.001765897);
   VbbHcc_both_H_mass_stack_11->SetBinError(20,0.003465716);
   VbbHcc_both_H_mass_stack_11->SetBinError(21,0.002332089);
   VbbHcc_both_H_mass_stack_11->SetBinError(24,0.003126194);
   VbbHcc_both_H_mass_stack_11->SetBinError(25,0.003221637);
   VbbHcc_both_H_mass_stack_11->SetBinError(29,0.002272667);
   VbbHcc_both_H_mass_stack_11->SetBinError(30,0.002036349);
   VbbHcc_both_H_mass_stack_11->SetBinError(38,0.002209336);
   VbbHcc_both_H_mass_stack_11->SetBinError(41,0.003707054);
   VbbHcc_both_H_mass_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass_stack_11->SetLineColor(ci);
   VbbHcc_both_H_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_mass_stack_11,"");
   
   TH1D *VbbHcc_both_H_mass_stack_12 = new TH1D("VbbHcc_both_H_mass_stack_12","",40,0,400);
   VbbHcc_both_H_mass_stack_12->SetBinContent(4,0.0002965616);
   VbbHcc_both_H_mass_stack_12->SetBinContent(7,0.0005686807);
   VbbHcc_both_H_mass_stack_12->SetBinContent(8,0.0003124048);
   VbbHcc_both_H_mass_stack_12->SetBinContent(9,0.001343495);
   VbbHcc_both_H_mass_stack_12->SetBinContent(10,0.002253347);
   VbbHcc_both_H_mass_stack_12->SetBinContent(11,0.0008973702);
   VbbHcc_both_H_mass_stack_12->SetBinContent(12,0.00380293);
   VbbHcc_both_H_mass_stack_12->SetBinContent(13,0.003896929);
   VbbHcc_both_H_mass_stack_12->SetBinContent(14,0.003206912);
   VbbHcc_both_H_mass_stack_12->SetBinContent(15,0.001421399);
   VbbHcc_both_H_mass_stack_12->SetBinContent(16,0.001082768);
   VbbHcc_both_H_mass_stack_12->SetBinContent(17,0.001339697);
   VbbHcc_both_H_mass_stack_12->SetBinContent(18,0.000874304);
   VbbHcc_both_H_mass_stack_12->SetBinContent(19,0.00171396);
   VbbHcc_both_H_mass_stack_12->SetBinContent(20,0.001448504);
   VbbHcc_both_H_mass_stack_12->SetBinContent(21,0.001404584);
   VbbHcc_both_H_mass_stack_12->SetBinContent(22,0.001162439);
   VbbHcc_both_H_mass_stack_12->SetBinContent(23,0.001099196);
   VbbHcc_both_H_mass_stack_12->SetBinContent(24,0.001183753);
   VbbHcc_both_H_mass_stack_12->SetBinContent(25,0.0004950527);
   VbbHcc_both_H_mass_stack_12->SetBinContent(27,0.001744644);
   VbbHcc_both_H_mass_stack_12->SetBinContent(28,0.0008112922);
   VbbHcc_both_H_mass_stack_12->SetBinContent(30,0.0003214624);
   VbbHcc_both_H_mass_stack_12->SetBinContent(31,0.0002841322);
   VbbHcc_both_H_mass_stack_12->SetBinContent(33,0.0002724119);
   VbbHcc_both_H_mass_stack_12->SetBinContent(34,0.0003135141);
   VbbHcc_both_H_mass_stack_12->SetBinContent(36,0.000538598);
   VbbHcc_both_H_mass_stack_12->SetBinContent(37,0.0005695349);
   VbbHcc_both_H_mass_stack_12->SetBinContent(38,0.0002570388);
   VbbHcc_both_H_mass_stack_12->SetBinContent(39,0.0003034595);
   VbbHcc_both_H_mass_stack_12->SetBinContent(40,0.0006136769);
   VbbHcc_both_H_mass_stack_12->SetBinContent(41,0.002719336);
   VbbHcc_both_H_mass_stack_12->SetBinError(4,0.0002965616);
   VbbHcc_both_H_mass_stack_12->SetBinError(7,0.0004022062);
   VbbHcc_both_H_mass_stack_12->SetBinError(8,0.0003124048);
   VbbHcc_both_H_mass_stack_12->SetBinError(9,0.0006101635);
   VbbHcc_both_H_mass_stack_12->SetBinError(10,0.0008018683);
   VbbHcc_both_H_mass_stack_12->SetBinError(11,0.0005202736);
   VbbHcc_both_H_mass_stack_12->SetBinError(12,0.001026393);
   VbbHcc_both_H_mass_stack_12->SetBinError(13,0.001044848);
   VbbHcc_both_H_mass_stack_12->SetBinError(14,0.0009446004);
   VbbHcc_both_H_mass_stack_12->SetBinError(15,0.0006359965);
   VbbHcc_both_H_mass_stack_12->SetBinError(16,0.0005426103);
   VbbHcc_both_H_mass_stack_12->SetBinError(17,0.0006015029);
   VbbHcc_both_H_mass_stack_12->SetBinError(18,0.0005059853);
   VbbHcc_both_H_mass_stack_12->SetBinError(19,0.0007001467);
   VbbHcc_both_H_mass_stack_12->SetBinError(20,0.000648454);
   VbbHcc_both_H_mass_stack_12->SetBinError(21,0.0006288053);
   VbbHcc_both_H_mass_stack_12->SetBinError(22,0.0005817882);
   VbbHcc_both_H_mass_stack_12->SetBinError(23,0.0005506241);
   VbbHcc_both_H_mass_stack_12->SetBinError(24,0.0005936467);
   VbbHcc_both_H_mass_stack_12->SetBinError(25,0.0003501825);
   VbbHcc_both_H_mass_stack_12->SetBinError(27,0.0007127086);
   VbbHcc_both_H_mass_stack_12->SetBinError(28,0.0004735003);
   VbbHcc_both_H_mass_stack_12->SetBinError(30,0.0003214624);
   VbbHcc_both_H_mass_stack_12->SetBinError(31,0.0002841322);
   VbbHcc_both_H_mass_stack_12->SetBinError(33,0.0002724119);
   VbbHcc_both_H_mass_stack_12->SetBinError(34,0.0003135141);
   VbbHcc_both_H_mass_stack_12->SetBinError(36,0.0003818581);
   VbbHcc_both_H_mass_stack_12->SetBinError(37,0.0004027264);
   VbbHcc_both_H_mass_stack_12->SetBinError(38,0.0002570388);
   VbbHcc_both_H_mass_stack_12->SetBinError(39,0.0003034595);
   VbbHcc_both_H_mass_stack_12->SetBinError(40,0.0004341011);
   VbbHcc_both_H_mass_stack_12->SetBinError(41,0.0009099314);
   VbbHcc_both_H_mass_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass_stack_12->SetLineColor(ci);
   VbbHcc_both_H_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_mass__540 = new TH1D("VbbHcc_both_H_mass__540","",40,0,400);
   VbbHcc_both_H_mass__540->SetBinContent(3,21);
   VbbHcc_both_H_mass__540->SetBinContent(4,400);
   VbbHcc_both_H_mass__540->SetBinContent(5,1118);
   VbbHcc_both_H_mass__540->SetBinContent(6,1644);
   VbbHcc_both_H_mass__540->SetBinContent(7,2113);
   VbbHcc_both_H_mass__540->SetBinContent(15,3155);
   VbbHcc_both_H_mass__540->SetBinContent(16,3193);
   VbbHcc_both_H_mass__540->SetBinContent(17,3120);
   VbbHcc_both_H_mass__540->SetBinContent(18,3153);
   VbbHcc_both_H_mass__540->SetBinContent(19,3146);
   VbbHcc_both_H_mass__540->SetBinContent(20,2997);
   VbbHcc_both_H_mass__540->SetBinContent(21,2953);
   VbbHcc_both_H_mass__540->SetBinContent(22,2839);
   VbbHcc_both_H_mass__540->SetBinContent(23,2724);
   VbbHcc_both_H_mass__540->SetBinContent(24,2637);
   VbbHcc_both_H_mass__540->SetBinContent(25,2490);
   VbbHcc_both_H_mass__540->SetBinContent(26,2309);
   VbbHcc_both_H_mass__540->SetBinContent(27,2232);
   VbbHcc_both_H_mass__540->SetBinContent(28,2010);
   VbbHcc_both_H_mass__540->SetBinContent(29,1933);
   VbbHcc_both_H_mass__540->SetBinContent(30,1882);
   VbbHcc_both_H_mass__540->SetBinContent(31,1786);
   VbbHcc_both_H_mass__540->SetBinContent(32,1660);
   VbbHcc_both_H_mass__540->SetBinContent(33,1560);
   VbbHcc_both_H_mass__540->SetBinContent(34,1522);
   VbbHcc_both_H_mass__540->SetBinContent(35,1383);
   VbbHcc_both_H_mass__540->SetBinContent(36,1235);
   VbbHcc_both_H_mass__540->SetBinContent(37,1238);
   VbbHcc_both_H_mass__540->SetBinContent(38,1149);
   VbbHcc_both_H_mass__540->SetBinContent(39,1108);
   VbbHcc_both_H_mass__540->SetBinContent(40,1028);
   VbbHcc_both_H_mass__540->SetBinContent(41,18466);
   VbbHcc_both_H_mass__540->SetEntries(99530);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_mass__540->SetLineColor(ci);
   VbbHcc_both_H_mass__540->SetLineWidth(2);
   VbbHcc_both_H_mass__540->SetMarkerStyle(20);
   VbbHcc_both_H_mass__540->SetMarkerSize(1.2);
   VbbHcc_both_H_mass__540->GetXaxis()->SetRange(1,400);
   VbbHcc_both_H_mass__540->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__540->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass__540->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass__540->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__540->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__540->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass__540->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass__540->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass__540->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__540->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__540->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass__540->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass__540->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__540->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_mass_fx1393[40] = {
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
   Double_t Graph_from_VbbHcc_both_H_mass_fy1393[40] = {
   0,
   0,
   262.075,
   2184.145,
   3423.846,
   4561.858,
   4556.618,
   3946.903,
   4054.116,
   3532.472,
   3524.321,
   4631.159,
   5148.943,
   8779.679,
   4576.605,
   4779.309,
   6859.003,
   4496.379,
   4089.78,
   6034.847,
   5993.828,
   3970.146,
   4181.978,
   3213.002,
   5544.674,
   3789.887,
   4162.508,
   2431.534,
   1566.002,
   2018.401,
   1719.176,
   3102.469,
   2153.339,
   1738.446,
   1380.076,
   1025.353,
   1739.415,
   1080.969,
   1013.303,
   1038.818};
   Double_t Graph_from_VbbHcc_both_H_mass_fex1393[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_VbbHcc_both_H_mass_fey1393[40] = {
   0,
   0,
   259.0315,
   1225.406,
   1047.908,
   1210.087,
   876.2171,
   742.704,
   769.8526,
   666.9277,
   1166.496,
   798.3936,
   1255.966,
   2154.732,
   809.1606,
   820.6253,
   1498.936,
   766.8261,
   759.1947,
   994.7754,
   1433.158,
   707.5048,
   757.9046,
   589.3054,
   1337.489,
   696.2469,
   1275.832,
   460.9272,
   293.3767,
   384.0455,
   319.6793,
   1089.737,
   496.6485,
   418.2112,
   375.0425,
   114.2726,
   386.5524,
   208.3045,
   257.7604,
   257.6578};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_both_H_mass_fx1393,Graph_from_VbbHcc_both_H_mass_fy1393,Graph_from_VbbHcc_both_H_mass_fex1393,Graph_from_VbbHcc_both_H_mass_fey1393);
   gre->SetName("Graph_from_VbbHcc_both_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_mass1393 = new TH1F("Graph_Graph_from_VbbHcc_both_H_mass1393","",100,0,440);
   Graph_Graph_from_VbbHcc_both_H_mass1393->SetMinimum(12.02785);
   Graph_Graph_from_VbbHcc_both_H_mass1393->SetMaximum(12027.85);
   Graph_Graph_from_VbbHcc_both_H_mass1393->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_mass1393->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_mass1393->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_mass1393->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_mass1393);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_mass","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_mass","MC unc. (stat.)","fl");

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
   H_mass_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__541 = new TH1D("data_mc_ratio__541","",40,0,400);
   data_mc_ratio__541->SetBinContent(3,0.08012974);
   data_mc_ratio__541->SetBinContent(4,0.183138);
   data_mc_ratio__541->SetBinContent(5,0.3265334);
   data_mc_ratio__541->SetBinContent(6,0.3603795);
   data_mc_ratio__541->SetBinContent(7,0.4637211);
   data_mc_ratio__541->SetBinContent(8,0.596417);
   data_mc_ratio__541->SetBinContent(9,0.6023508);
   data_mc_ratio__541->SetBinContent(10,0.7416902);
   data_mc_ratio__541->SetBinContent(11,0.7859671);
   data_mc_ratio__541->SetBinContent(12,0.6402285);
   data_mc_ratio__541->SetBinContent(13,0.5696315);
   data_mc_ratio__541->SetBinContent(14,0.3648197);
   data_mc_ratio__541->SetBinContent(15,0.6893756);
   data_mc_ratio__541->SetBinContent(16,0.6680882);
   data_mc_ratio__541->SetBinContent(17,0.4548766);
   data_mc_ratio__541->SetBinContent(18,0.701231);
   data_mc_ratio__541->SetBinContent(19,0.7692345);
   data_mc_ratio__541->SetBinContent(20,0.4966157);
   data_mc_ratio__541->SetBinContent(21,0.4926735);
   data_mc_ratio__541->SetBinContent(22,0.715087);
   data_mc_ratio__541->SetBinContent(23,0.6513664);
   data_mc_ratio__541->SetBinContent(24,0.8207279);
   data_mc_ratio__541->SetBinContent(25,0.4490796);
   data_mc_ratio__541->SetBinContent(26,0.609253);
   data_mc_ratio__541->SetBinContent(27,0.5362152);
   data_mc_ratio__541->SetBinContent(28,0.8266387);
   data_mc_ratio__541->SetBinContent(29,1.234353);
   data_mc_ratio__541->SetBinContent(30,0.9324211);
   data_mc_ratio__541->SetBinContent(31,1.03887);
   data_mc_ratio__541->SetBinContent(32,0.5350577);
   data_mc_ratio__541->SetBinContent(33,0.7244563);
   data_mc_ratio__541->SetBinContent(34,0.8754947);
   data_mc_ratio__541->SetBinContent(35,1.002119);
   data_mc_ratio__541->SetBinContent(36,1.204463);
   data_mc_ratio__541->SetBinContent(37,0.7117336);
   data_mc_ratio__541->SetBinContent(38,1.062935);
   data_mc_ratio__541->SetBinContent(39,1.093454);
   data_mc_ratio__541->SetBinContent(40,0.9895861);
   data_mc_ratio__541->SetBinContent(41,1.165355);
   data_mc_ratio__541->SetBinError(3,0.01748574);
   data_mc_ratio__541->SetBinError(4,0.0091569);
   data_mc_ratio__541->SetBinError(5,0.009765774);
   data_mc_ratio__541->SetBinError(6,0.008888104);
   data_mc_ratio__541->SetBinError(7,0.01008805);
   data_mc_ratio__541->SetBinError(8,0.01229269);
   data_mc_ratio__541->SetBinError(9,0.01218924);
   data_mc_ratio__541->SetBinError(10,0.01449012);
   data_mc_ratio__541->SetBinError(11,0.0149336);
   data_mc_ratio__541->SetBinError(12,0.01175771);
   data_mc_ratio__541->SetBinError(13,0.01051812);
   data_mc_ratio__541->SetBinError(14,0.006446142);
   data_mc_ratio__541->SetBinError(15,0.01227316);
   data_mc_ratio__541->SetBinError(16,0.01182318);
   data_mc_ratio__541->SetBinError(17,0.008143597);
   data_mc_ratio__541->SetBinError(18,0.01248818);
   data_mc_ratio__541->SetBinError(19,0.01371448);
   data_mc_ratio__541->SetBinError(20,0.009071458);
   data_mc_ratio__541->SetBinError(21,0.009066245);
   data_mc_ratio__541->SetBinError(22,0.01342073);
   data_mc_ratio__541->SetBinError(23,0.01248021);
   data_mc_ratio__541->SetBinError(24,0.01598248);
   data_mc_ratio__541->SetBinError(25,0.008999609);
   data_mc_ratio__541->SetBinError(26,0.01267902);
   data_mc_ratio__541->SetBinError(27,0.0113499);
   data_mc_ratio__541->SetBinError(28,0.01843816);
   data_mc_ratio__541->SetBinError(29,0.02807525);
   data_mc_ratio__541->SetBinError(30,0.02149326);
   data_mc_ratio__541->SetBinError(31,0.02458217);
   data_mc_ratio__541->SetBinError(32,0.01313248);
   data_mc_ratio__541->SetBinError(33,0.01834213);
   data_mc_ratio__541->SetBinError(34,0.02244121);
   data_mc_ratio__541->SetBinError(35,0.02694686);
   data_mc_ratio__541->SetBinError(36,0.03427362);
   data_mc_ratio__541->SetBinError(37,0.0202282);
   data_mc_ratio__541->SetBinError(38,0.03135787);
   data_mc_ratio__541->SetBinError(39,0.03284963);
   data_mc_ratio__541->SetBinError(40,0.03086434);
   data_mc_ratio__541->SetBinError(41,0.09713646);
   data_mc_ratio__541->SetMinimum(0.4);
   data_mc_ratio__541->SetMaximum(1.6);
   data_mc_ratio__541->SetEntries(706.4815);
   data_mc_ratio__541->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__541->SetLineColor(ci);
   data_mc_ratio__541->SetLineWidth(2);
   data_mc_ratio__541->SetMarkerStyle(20);
   data_mc_ratio__541->SetMarkerSize(1.2);
   data_mc_ratio__541->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__541->GetXaxis()->SetRange(1,30);
   data_mc_ratio__541->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__541->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__541->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__541->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__541->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__541->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__541->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__541->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__541->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__541->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__541->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__541->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__541->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__541->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__541->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__541->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__541->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1394[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1394[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1394[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_mc_statistical_error_fey1394[40] = {
   0,
   0,
   0.9883868,
   0.5610459,
   0.3060617,
   0.2652619,
   0.1922955,
   0.1881739,
   0.1898941,
   0.1887991,
   0.3309846,
   0.1723961,
   0.243927,
   0.2454227,
   0.1768037,
   0.1717037,
   0.2185356,
   0.170543,
   0.1856322,
   0.1648385,
   0.2391056,
   0.1782063,
   0.1812311,
   0.1834127,
   0.2412205,
   0.1837118,
   0.3065055,
   0.1895623,
   0.1873412,
   0.1902721,
   0.1859491,
   0.3512484,
   0.2306411,
   0.2405661,
   0.271755,
   0.111447,
   0.2222313,
   0.1927015,
   0.2543763,
   0.2480297};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1394,Graph_from_mc_statistical_error_fy1394,Graph_from_mc_statistical_error_fex1394,Graph_from_mc_statistical_error_fey1394);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1394 = new TH1F("Graph_Graph_from_mc_statistical_error1394","",100,0,440);
   Graph_Graph_from_mc_statistical_error1394->SetMinimum(0.01045192);
   Graph_Graph_from_mc_statistical_error1394->SetMaximum(2.186064);
   Graph_Graph_from_mc_statistical_error1394->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1394->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1394->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1394->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1394->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1394->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1394->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1394->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1394->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1394->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1394->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1394->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1394->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1394->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1394->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1394->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1394);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_both_16->cd();
   H_mass_both_16->Modified();
   H_mass_both_16->cd();
   H_mass_both_16->SetSelected(H_mass_both_16);
}
