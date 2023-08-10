void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Thu Aug 10 10:41:56 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(0,0,1,1);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.918681,6.314516,14.23646);
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
   st->SetMaximum(8.759506e+11);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(0.00125451);
   st_stack_113->SetMaximum(3.318535e+12);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetRange(1,30);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetLabelSize(0.035);
   st_stack_113->GetXaxis()->SetTitleSize(0.035);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Events/0.2");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetLabelSize(0.05);
   st_stack_113->GetYaxis()->SetTitleSize(0.057);
   st_stack_113->GetYaxis()->SetTitleOffset(1.2);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetLabelSize(0.035);
   st_stack_113->GetZaxis()->SetTitleSize(0.035);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,52.36415);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,167600.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,202225.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,164752.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,179902.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,173072.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,177947.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,183660.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,207129.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,202616.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,200530.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,171823.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,174064.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,153568.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,139175.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,138748.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,139052.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,105318.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,84310.85);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,78918.06);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,70228.23);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,74254.45);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,52454.19);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,52992.07);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,46482.26);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,51114.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(28,40440.43);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(29,33348.05);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(30,23276.13);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(31,18539.42);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,27.35452);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,7685.947);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,6905.201);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,7045.662);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,7827.282);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,7183.736);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,7972.747);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,7902.436);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,23624.77);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,9541.152);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,23621.68);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,7833.644);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,8632.826);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,7882.816);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,6859.786);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,19615.76);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,23449.74);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,7599.403);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,5470.792);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,4979.045);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,4944.011);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,5655.333);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,3869.41);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,4453.841);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,3884.297);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,4993.435);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(28,3533.78);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(29,3206.123);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(30,2554.766);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(31,1815.558);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(131372);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.4880474);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,789.9519);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,1350.723);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,1533.395);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,1625.468);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,1629.74);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,1543.162);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,1436.129);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,1313.78);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,1195.135);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,1075.449);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,957.3476);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,865.8057);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,796.8137);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,736.012);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,639.3824);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,571.0208);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,526.6243);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,484.0973);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,470.5341);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,443.4452);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,434.4624);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,431.6692);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,403.4347);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,377.8218);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,309.2022);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,274.746);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(29,231.2611);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(30,158.2187);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(31,119.8316);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.3049441);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,11.68189);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,15.11447);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,15.89357);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,16.37685);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,16.3347);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,15.91344);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,15.45752);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,14.80313);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,14.27237);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,13.27208);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,12.52866);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,11.78609);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,11.31648);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,10.78755);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,10.07128);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,9.502967);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,9.262996);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,8.837534);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,8.917463);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,8.551615);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,8.563854);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,8.594563);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,8.196255);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,7.845907);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,7.080574);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,6.699621);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(29,6.175928);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(30,5.167701);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(31,4.360132);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(347069);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,11.02724);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,15895.2);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,31171.48);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,37653.89);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,39467.86);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,36600.09);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,31385.42);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,26071.38);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,21406.67);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,17765.47);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,15155.99);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,13288.43);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,11919.39);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,10943.14);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,10175.39);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,9091.414);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,8391.184);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,7799.675);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,7377.974);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,7051.551);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,6919.823);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,6937.256);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,7001.828);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,7036.097);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,6830.514);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,6288.984);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,5433.254);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(29,4263.786);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(30,2648.078);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(31,1880.899);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.9009288);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,33.90602);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,47.30374);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,51.8581);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,52.9177);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,50.76814);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,46.82686);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,42.49876);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,38.35802);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,34.81501);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,32.05242);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,29.94676);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,28.31623);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,27.1048);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,26.11487);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,24.71611);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,23.77847);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,22.9669);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,22.34666);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,21.89002);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,21.74424);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,21.82332);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,21.99447);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,22.1077);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,21.83785);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,21.0078);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,19.56745);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(29,17.34772);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(30,13.63734);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(31,11.41922);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(6426049);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(2,1.358718);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,775.2119);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,1211.892);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,1120.414);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,1093.939);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,1017.503);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,924.0284);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,870.053);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,835.0157);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,793.9584);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,738.5995);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,650.353);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,631.9613);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,558.6257);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,521.332);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,490.7039);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,400.1426);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,387.5522);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,393.0704);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,376.2202);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,315.0395);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,282.0238);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,254.9029);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,259.4341);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,257.914);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,194.825);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,188.6628);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(29,140.505);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(30,135.7103);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(31,93.21467);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(2,0.5294719);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,15.76377);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,26.14346);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,27.54945);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,31.66414);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,32.72963);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,29.067);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,27.19452);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,27.29476);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,26.45294);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,24.76445);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,22.94727);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,23.26658);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,21.20524);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,20.19411);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,19.90039);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,16.21222);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,17.63894);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,19.56485);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,19.48936);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,16.98913);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,15.61129);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,13.77987);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,15.6828);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,16.55122);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,12.34903);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,11.54637);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(29,8.233704);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(30,10.9484);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(31,7.836303);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(94081);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(2,0.03633987);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,502.1528);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,633.6716);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,562.1861);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,513.2209);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,449.202);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,471.0313);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,447.1957);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,436.7526);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,397.6987);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,407.0133);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,309.9534);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,307.649);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,312.294);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,290.4317);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,236.5085);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,218.354);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,189.8787);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,174.0681);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,167.679);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,130.8366);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,123.9857);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,115.6053);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,124.7882);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,89.17978);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,142.258);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(28,92.71638);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(29,95.84343);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(30,75.34146);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(31,39.88547);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(2,0.03577872);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,21.39846);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,32.06156);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,32.28228);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,32.16521);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,27.55444);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,31.93657);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,28.95188);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,30.60161);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,28.15774);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,31.3751);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,23.50029);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,23.58306);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,24.87173);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,25.16412);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,19.92717);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,20.77628);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,16.91257);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,16.37936);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,19.34485);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,14.34145);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,14.09904);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,13.62745);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,14.45543);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,8.729256);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,20.25714);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(28,11.37468);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(29,13.39355);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(30,12.35922);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(31,4.325029);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(65948);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,5.716754);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,7.757408);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,5.350106);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,4.10954);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,4.293041);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,4.699828);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,3.618972);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,3.089071);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,1.93837);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,4.36264);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,5.247611);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,3.336179);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,2.964209);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,3.473997);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,2.461814);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(18,1.426019);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,2.532903);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,1.454092);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,1.305482);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,2.484008);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,1.162752);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(24,1.132159);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(25,1.247099);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(26,0.9022808);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(27,1.162391);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(28,0.9978692);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(29,1.165438);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(30,0.742498);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(31,0.3202887);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,0.9178046);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,1.052261);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,0.8785117);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,0.7545587);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,0.7874365);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.8247377);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,0.7261208);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,0.6554994);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.5210525);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.784187);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,0.869101);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.7067092);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.6452867);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,0.7048774);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.5852922);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(18,0.4517118);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.5996878);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.4611343);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.4355571);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.5900246);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.4114643);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(24,0.4009207);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(25,0.4234438);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(26,0.3688954);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(27,0.4113274);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(28,0.3791548);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(29,0.4122327);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(30,0.3336962);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(31,0.2264986);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(2,0.1309176);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,10.68847);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,15.65247);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,12.43076);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,9.331885);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,7.567332);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,4.975831);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,4.859572);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,4.389573);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,4.350856);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,4.870728);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,4.945707);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,4.989848);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,4.273568);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,4.576131);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,4.194388);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,3.546223);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,2.852724);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,3.91906);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(21,3.171318);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,1.94005);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(23,1.783045);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,1.679091);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(25,2.360034);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(26,1.689251);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(27,2.565942);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(28,3.069792);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(29,1.801391);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(30,1.032635);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(31,0.5976344);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(2,0.1309176);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,1.114499);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,1.357664);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,1.203204);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,1.044904);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,0.9442939);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,0.7660608);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,0.7604318);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,0.714226);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,0.711019);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,0.7537602);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,0.7595115);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,0.7655003);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,0.7090155);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,0.7371929);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.6948053);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.6380457);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,0.5731899);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,0.6842479);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(21,0.6121286);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.4718466);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(23,0.4540249);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.4496312);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(25,0.530211);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(26,0.4447784);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(27,0.548053);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(28,0.603207);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(29,0.4658674);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(30,0.3457484);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(31,0.2685594);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(1163);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,13.31805);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,20.61611);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,18.85107);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,14.14839);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,12.34549);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,8.487591);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,4.737058);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,7.268135);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,6.467972);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,6.416769);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,7.478686);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,6.979574);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,6.48365);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(16,5.351506);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,3.245231);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,3.043248);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,3.728419);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,4.200331);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,2.657064);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(22,2.292753);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(23,2.075599);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(24,1.333443);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(25,1.312086);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(26,0.8485766);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(27,2.477053);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(28,1.607638);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(29,2.966296);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(30,0.7381072);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(31,0.5662803);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,1.863906);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,2.341057);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,2.220743);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,1.921655);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,1.806896);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,1.503667);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,1.117989);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,1.383279);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,1.288053);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,1.292723);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,1.404045);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,1.351182);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,1.298496);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(16,1.171669);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,0.9041175);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,0.884821);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.9984392);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,1.051464);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.8217165);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(22,0.7648292);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(23,0.7373931);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(24,0.5968741);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(25,0.5875559);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(26,0.490518);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(27,0.8070228);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(28,0.657922);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(29,0.8951294);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(30,0.4291943);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(31,0.4006023);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(2,0.004739262);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,7.947617);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,13.28735);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,12.66587);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,10.76427);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,7.6017);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,5.599648);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,4.24107);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,3.630772);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,3.325335);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,3.226357);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,2.993701);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,2.816744);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,2.521716);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,2.202455);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,2.073322);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,1.867586);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,1.771691);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,1.705117);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,1.5457);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,1.283744);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,1.317633);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,1.251266);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,1.283393);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,1.371793);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(27,1.393684);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(28,1.470032);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(29,1.261305);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(30,0.8311131);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(31,0.4901132);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(2,0.002738249);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.1112815);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.1440703);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.140667);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.1292136);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.108044);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.09231245);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.0801833);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.07404466);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.0709272);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.06974288);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.06770429);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.06531659);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.06183572);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.05763687);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.05582806);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.05327745);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.05147567);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.05074015);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.04850988);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.04439244);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.04442005);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.04354253);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.04415991);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.04555192);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(27,0.04622308);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(28,0.04788918);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(29,0.044147);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(30,0.03591416);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(31,0.02777018);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(72116);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.001186445);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,1.849859);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,4.115742);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,4.94541);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,4.608588);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,3.265576);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,2.297542);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,1.79623);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,1.610255);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,1.589013);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,1.54604);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,1.522585);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,1.380629);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,1.268472);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,1.150461);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,1.012744);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,0.9347278);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,0.892587);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.8272456);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.7780131);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.6908513);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.6131706);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.5498953);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.5583115);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(26,0.5877564);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(27,0.6502458);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(28,0.6349398);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(29,0.4757696);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(30,0.301728);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(31,0.1911432);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.0006901132);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.02675072);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.0399169);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.04376937);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.04227776);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.03557234);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.02980612);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.02635204);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.02492063);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.02473656);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.02444167);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.02423888);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.02303308);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.02209202);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.0210398);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.01971882);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.0189427);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.01857004);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.01785952);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.01731209);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.01630142);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.01533219);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.01455454);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.01469594);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(26,0.01509332);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(27,0.01589013);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(28,0.01570262);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(29,0.01357833);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(30,0.01080514);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(31,0.008621531);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.08590848);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.1008752);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.09637055);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.09306107);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.08079417);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.04431607);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.04420735);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.03786256);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.04214877);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.03367422);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.04174568);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.03317863);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.03842946);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.04073339);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.02339531);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.02397521);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(19,0.01492579);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.02270105);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(21,0.01841254);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(22,0.03492307);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(23,0.0175212);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(24,0.01530726);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(25,0.007188195);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(26,0.01459426);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(27,0.006129486);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(28,0.01404887);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(29,0.009091332);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(30,0.003216822);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(31,0.002032198);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01623368);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.01832675);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.01726414);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.01684848);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.01558791);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.01129801);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.01143655);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.01053571);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.01095419);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.009909872);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.01118379);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.01001832);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.01066559);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.01089776);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.008317466);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.008491385);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(19,0.006701832);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.00804833);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(21,0.007166114);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(22,0.009895468);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(23,0.007185157);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(24,0.00685483);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(25,0.004445961);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(26,0.00654375);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(27,0.004338347);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(28,0.006298875);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(29,0.005267697);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(30,0.003216822);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(31,0.002032198);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,0.02100954);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,0.04300984);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,0.04561866);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,0.04321476);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,0.02666676);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,0.01732665);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,0.0145007);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,0.01368953);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,0.0151979);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,0.02260957);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,0.01292481);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,0.01593328);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,0.01440549);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,0.01318239);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,0.01307883);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,0.01408503);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,0.0110475);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,0.01078284);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,0.006541469);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,0.01019779);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.007824338);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(24,0.004192973);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(25,0.00590641);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(26,0.007017353);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(27,0.004792641);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(28,0.004852409);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(29,0.002293621);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(30,0.002203185);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(31,0.002337225);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,0.002847341);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,0.004060123);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,0.004198098);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,0.004087472);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,0.003219176);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,0.00256219);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,0.002348425);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,0.002268595);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,0.002390585);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,0.00292969);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,0.002220762);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,0.002476209);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,0.002340396);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,0.002274044);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,0.002251904);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,0.002329141);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,0.002039181);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,0.002046776);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,0.001588097);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,0.001959232);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.00171588);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(24,0.001268434);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(25,0.001482953);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(26,0.001626226);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(27,0.001393943);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(28,0.001349271);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(29,0.0009376953);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(30,0.000903219);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(31,0.0009553741);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__309 = new TH1D("VbbHcc_algo_Z_dR__309","",30,0,6);
   VbbHcc_algo_Z_dR__309->SetBinContent(2,41);
   VbbHcc_algo_Z_dR__309->SetBinContent(3,50728);
   VbbHcc_algo_Z_dR__309->SetBinContent(4,61702);
   VbbHcc_algo_Z_dR__309->SetBinContent(5,52019);
   VbbHcc_algo_Z_dR__309->SetBinContent(6,49938);
   VbbHcc_algo_Z_dR__309->SetBinContent(7,49162);
   VbbHcc_algo_Z_dR__309->SetBinContent(8,47807);
   VbbHcc_algo_Z_dR__309->SetBinContent(9,46996);
   VbbHcc_algo_Z_dR__309->SetBinContent(10,44982);
   VbbHcc_algo_Z_dR__309->SetBinContent(11,43284);
   VbbHcc_algo_Z_dR__309->SetBinContent(12,41070);
   VbbHcc_algo_Z_dR__309->SetBinContent(13,38968);
   VbbHcc_algo_Z_dR__309->SetBinContent(14,36286);
   VbbHcc_algo_Z_dR__309->SetBinContent(15,34433);
   VbbHcc_algo_Z_dR__309->SetBinContent(16,32731);
   VbbHcc_algo_Z_dR__309->SetBinContent(17,27652);
   VbbHcc_algo_Z_dR__309->SetBinContent(18,24470);
   VbbHcc_algo_Z_dR__309->SetBinContent(19,22341);
   VbbHcc_algo_Z_dR__309->SetBinContent(20,20251);
   VbbHcc_algo_Z_dR__309->SetBinContent(21,18244);
   VbbHcc_algo_Z_dR__309->SetBinContent(22,16542);
   VbbHcc_algo_Z_dR__309->SetBinContent(23,15501);
   VbbHcc_algo_Z_dR__309->SetBinContent(24,14310);
   VbbHcc_algo_Z_dR__309->SetBinContent(25,13026);
   VbbHcc_algo_Z_dR__309->SetBinContent(26,11969);
   VbbHcc_algo_Z_dR__309->SetBinContent(27,10816);
   VbbHcc_algo_Z_dR__309->SetBinContent(28,9963);
   VbbHcc_algo_Z_dR__309->SetBinContent(29,8772);
   VbbHcc_algo_Z_dR__309->SetBinContent(30,6406);
   VbbHcc_algo_Z_dR__309->SetBinContent(31,5638);
   VbbHcc_algo_Z_dR__309->SetEntries(856077);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__309->SetLineColor(ci);
   VbbHcc_algo_Z_dR__309->SetLineWidth(2);
   VbbHcc_algo_Z_dR__309->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__309->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__309->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__309->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__309->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__309->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__309->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1225[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1225[30] = {
   0,
   65.41134,
   185602.4,
   236655.1,
   205676.8,
   222646.2,
   212804.4,
   212297.6,
   212504.1,
   231142,
   222786.8,
   217928.2,
   187051.7,
   187808.9,
   166196.8,
   150915.7,
   149219.6,
   148643.7,
   114234.4,
   92752.2,
   86993.52,
   78046.11,
   82039.15,
   60264.16,
   60822.6,
   54043.12,
   58058.35,
   46437.61,
   38087.12,
   26297.13};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1225[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1225[30] = {
   0,
   27.37651,
   7686.077,
   6905.504,
   7045.999,
   7827.609,
   7184.061,
   7973.017,
   7902.665,
   23624.84,
   9541.305,
   23621.74,
   7833.78,
   8632.944,
   7882.938,
   6859.92,
   19615.8,
   23449.77,
   7599.483,
   5470.905,
   4979.177,
   4944.116,
   5655.421,
   3869.531,
   4453.954,
   3884.412,
   4993.54,
   3533.878,
   3206.215,
   2554.861};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_fx1225,Graph_from_VbbHcc_algo_Z_dR_fy1225,Graph_from_VbbHcc_algo_Z_dR_fex1225,Graph_from_VbbHcc_algo_Z_dR_fey1225);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1225 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1225","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetMinimum(280.2436);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetMaximum(280243.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1225);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__310 = new TH1D("data_mc_ratio__310","",30,0,6);
   data_mc_ratio__310->SetBinContent(2,0.6268027);
   data_mc_ratio__310->SetBinContent(3,0.2733154);
   data_mc_ratio__310->SetBinContent(4,0.2607254);
   data_mc_ratio__310->SetBinContent(5,0.2529163);
   data_mc_ratio__310->SetBinContent(6,0.2242931);
   data_mc_ratio__310->SetBinContent(7,0.2310197);
   data_mc_ratio__310->SetBinContent(8,0.2251886);
   data_mc_ratio__310->SetBinContent(9,0.2211534);
   data_mc_ratio__310->SetBinContent(10,0.1946076);
   data_mc_ratio__310->SetBinContent(11,0.1942844);
   data_mc_ratio__310->SetBinContent(12,0.1884565);
   data_mc_ratio__310->SetBinContent(13,0.2083275);
   data_mc_ratio__310->SetBinContent(14,0.193207);
   data_mc_ratio__310->SetBinContent(15,0.2071821);
   data_mc_ratio__310->SetBinContent(16,0.2168827);
   data_mc_ratio__310->SetBinContent(17,0.1853107);
   data_mc_ratio__310->SetBinContent(18,0.1646218);
   data_mc_ratio__310->SetBinContent(19,0.1955715);
   data_mc_ratio__310->SetBinContent(20,0.2183344);
   data_mc_ratio__310->SetBinContent(21,0.2097168);
   data_mc_ratio__310->SetBinContent(22,0.2119516);
   data_mc_ratio__310->SetBinContent(23,0.1889464);
   data_mc_ratio__310->SetBinContent(24,0.2374546);
   data_mc_ratio__310->SetBinContent(25,0.2141638);
   data_mc_ratio__310->SetBinContent(26,0.2214713);
   data_mc_ratio__310->SetBinContent(27,0.1862953);
   data_mc_ratio__310->SetBinContent(28,0.2145459);
   data_mc_ratio__310->SetBinContent(29,0.2303141);
   data_mc_ratio__310->SetBinContent(30,0.2436008);
   data_mc_ratio__310->SetBinContent(31,0.272691);
   data_mc_ratio__310->SetBinError(2,0.09789013);
   data_mc_ratio__310->SetBinError(3,0.001213501);
   data_mc_ratio__310->SetBinError(4,0.001049624);
   data_mc_ratio__310->SetBinError(5,0.001108909);
   data_mc_ratio__310->SetBinError(6,0.001003692);
   data_mc_ratio__310->SetBinError(7,0.00104192);
   data_mc_ratio__310->SetBinError(8,0.001029913);
   data_mc_ratio__310->SetBinError(9,0.001020148);
   data_mc_ratio__310->SetBinError(10,0.0009175726);
   data_mc_ratio__310->SetBinError(11,0.0009338438);
   data_mc_ratio__310->SetBinError(12,0.000929927);
   data_mc_ratio__310->SetBinError(13,0.00105534);
   data_mc_ratio__310->SetBinError(14,0.001014269);
   data_mc_ratio__310->SetBinError(15,0.001116516);
   data_mc_ratio__310->SetBinError(16,0.001198796);
   data_mc_ratio__310->SetBinError(17,0.00111439);
   data_mc_ratio__310->SetBinError(18,0.001052375);
   data_mc_ratio__310->SetBinError(19,0.001308441);
   data_mc_ratio__310->SetBinError(20,0.00153426);
   data_mc_ratio__310->SetBinError(21,0.001552648);
   data_mc_ratio__310->SetBinError(22,0.001647945);
   data_mc_ratio__310->SetBinError(23,0.001517605);
   data_mc_ratio__310->SetBinError(24,0.001985001);
   data_mc_ratio__310->SetBinError(25,0.001876465);
   data_mc_ratio__310->SetBinError(26,0.002024364);
   data_mc_ratio__310->SetBinError(27,0.001791301);
   data_mc_ratio__310->SetBinError(28,0.002149439);
   data_mc_ratio__310->SetBinError(29,0.002459071);
   data_mc_ratio__310->SetBinError(30,0.003043583);
   data_mc_ratio__310->SetBinError(31,0.02422031);
   data_mc_ratio__310->SetMinimum(0.4);
   data_mc_ratio__310->SetMaximum(1.6);
   data_mc_ratio__310->SetEntries(521.8234);
   data_mc_ratio__310->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__310->SetLineColor(ci);
   data_mc_ratio__310->SetLineWidth(2);
   data_mc_ratio__310->SetMarkerStyle(20);
   data_mc_ratio__310->SetMarkerSize(1.2);
   data_mc_ratio__310->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__310->GetXaxis()->SetRange(1,30);
   data_mc_ratio__310->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__310->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__310->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__310->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__310->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__310->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__310->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__310->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__310->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__310->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__310->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__310->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__310->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__310->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__310->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__310->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__310->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1226[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1226[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1226[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1226[30] = {
   0,
   0.4185285,
   0.04141151,
   0.02917961,
   0.03425763,
   0.03515716,
   0.033759,
   0.03755585,
   0.03718829,
   0.1022092,
   0.04282706,
   0.1083923,
   0.0418803,
   0.04596663,
   0.04743135,
   0.04545532,
   0.1314559,
   0.1577583,
   0.06652533,
   0.0589841,
   0.05723618,
   0.06334865,
   0.06893564,
   0.06420948,
   0.07322861,
   0.07187616,
   0.086009,
   0.07609948,
   0.08418107,
   0.09715364};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1226,Graph_from_mc_statistical_error_fy1226,Graph_from_mc_statistical_error_fex1226,Graph_from_mc_statistical_error_fey1226);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1226 = new TH1F("Graph_Graph_from_mc_statistical_error1226","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1226->SetMinimum(0.4977658);
   Graph_Graph_from_mc_statistical_error1226->SetMaximum(1.502234);
   Graph_Graph_from_mc_statistical_error1226->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1226->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1226->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1226);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
