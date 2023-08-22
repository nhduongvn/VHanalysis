void H_dR_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Tue Aug 22 09:17:08 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(0,0,1,1);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.895556,6.525,13.33063);
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
   st->SetMaximum(1.406526e+11);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",30,0,6);
   st_stack_118->SetMinimum(0.001320293);
   st_stack_118->SetMaximum(5.105167e+11);
   st_stack_118->SetDirectory(0);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->GetXaxis()->SetRange(1,31);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetLabelSize(0.035);
   st_stack_118->GetXaxis()->SetTitleSize(0.035);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Events/0.2");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetLabelSize(0.05);
   st_stack_118->GetYaxis()->SetTitleSize(0.057);
   st_stack_118->GetYaxis()->SetTitleOffset(1.2);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetLabelSize(0.035);
   st_stack_118->GetZaxis()->SetTitleSize(0.035);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,40340.15);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,50036.61);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,53934.07);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,42659.87);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,38822);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,43869.95);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,46999.18);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,54353.17);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,60009.41);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,67973.78);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,71685.22);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,94998.08);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,76728.42);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,92526.69);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,80703.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,78036.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,72150.54);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,62721.87);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,63804.27);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,54364.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,28376.25);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,23944.56);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,19009.57);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,15635.69);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,9152.982);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,9547.923);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(29,7142.348);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(30,4105.699);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(31,3791.89);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,2264.882);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,2950.047);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,18680.2);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,3047.168);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,2359.063);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,2967.356);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,2987.62);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,3134.91);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,3037.992);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,3120.986);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,3052.205);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,16195.67);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,3140.107);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,11246.5);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,3472.033);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,3479.633);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,3497.233);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,3047.566);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,13539.33);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,16674.02);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,1863.212);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,2087.467);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,1759.971);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,1619.357);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,1104.011);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,1270.428);
   VbbHcc_algo_H_dR_stack_1->SetBinError(29,1004.763);
   VbbHcc_algo_H_dR_stack_1->SetBinError(30,697.0685);
   VbbHcc_algo_H_dR_stack_1->SetBinError(31,784.5357);
   VbbHcc_algo_H_dR_stack_1->SetEntries(106115);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,-0.05477226);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,190.6659);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,313.6939);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,352.3291);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,353.6064);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,349.1578);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,359.4026);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,393.2754);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,441.2102);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,502.8477);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,527.5297);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,560.4715);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,568.3552);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,545.2912);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,548.7306);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,502.8937);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,471.6537);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,426.3702);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,402.3457);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,354.3542);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,286.836);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,225.3182);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,183.7636);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,145.6433);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,109.1682);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,83.98426);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,65.84239);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,49.01942);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(30,28.67587);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(31,24.40574);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.05477226);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,5.988874);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,7.561201);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,7.86458);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,7.641447);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,7.557274);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,7.712406);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,8.031046);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,8.607376);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,9.333272);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,9.370079);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,9.714549);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,9.688136);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,9.356417);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,9.498542);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,9.158873);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,8.694591);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,8.291855);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,8.047517);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,7.689368);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,6.744527);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,5.955544);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,5.405559);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,4.830144);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,4.179214);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,3.676211);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,3.316434);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,2.859134);
   VbbHcc_algo_H_dR_stack_2->SetBinError(30,2.099528);
   VbbHcc_algo_H_dR_stack_2->SetBinError(31,1.946274);
   VbbHcc_algo_H_dR_stack_2->SetEntries(142925);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_3 = new TH1D("VbbHcc_algo_H_dR_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,1.927075);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,5506.047);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,10938.1);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,12624.7);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,12578.74);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,11257.04);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,9589.148);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,8401.672);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,7788.892);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,7768.057);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,7991.871);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,8049.319);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,7686.081);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,7175.889);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,6647.997);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,6141.048);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,5807.381);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,5691.032);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,5474.484);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,4975.031);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,4357.32);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,3734.363);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,3280.113);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,2926.707);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,2599.034);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,2260.695);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,1834.783);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,1294.664);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(30,713.0464);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(31,450.6854);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.3681201);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,19.58399);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,27.30626);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,28.92049);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,28.55713);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,26.732);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,24.47069);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,22.75486);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,21.80336);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,21.80666);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,22.19658);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,22.38056);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,21.97294);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,21.28211);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,20.51959);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,19.75919);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,19.24233);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,19.02511);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,18.62745);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,17.66562);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,16.45384);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,15.19742);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,14.23983);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,13.46627);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,12.74958);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,11.99651);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,10.87065);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,9.201045);
   VbbHcc_algo_H_dR_stack_3->SetBinError(30,6.797725);
   VbbHcc_algo_H_dR_stack_3->SetBinError(31,5.327145);
   VbbHcc_algo_H_dR_stack_3->SetEntries(3114170);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_4 = new TH1D("VbbHcc_algo_H_dR_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,233.6251);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,355.5646);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,355.1394);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,264.5512);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,249.9214);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,266.934);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,290.9174);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,332.8767);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,401.2287);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,431.2331);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,494.2881);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,496.6593);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,485.9359);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,460.9602);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,450.1393);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,411.7809);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,387.0391);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,364.3146);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,306.3261);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,247.395);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,195.9264);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,150.4208);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,111.0927);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,75.56956);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,68.03157);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(28,57.06339);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(29,45.77074);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(30,26.62582);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(31,16.37959);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,6.879789);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,11.69968);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,14.95503);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,12.55622);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,10.02947);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,12.0186);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,12.77452);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,12.8375);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,16.74918);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,15.43347);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,16.94314);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,15.66808);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,14.17529);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,14.22784);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,11.81571);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,12.48282);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,12.06877);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,12.87067);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,11.17687);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,10.85139);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,10.6122);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,9.225547);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,8.559003);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,4.693087);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,5.610029);
   VbbHcc_algo_H_dR_stack_4->SetBinError(28,6.561907);
   VbbHcc_algo_H_dR_stack_4->SetBinError(29,4.582017);
   VbbHcc_algo_H_dR_stack_4->SetBinError(30,4.274907);
   VbbHcc_algo_H_dR_stack_4->SetBinError(31,2.766358);
   VbbHcc_algo_H_dR_stack_4->SetEntries(54777);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_5 = new TH1D("VbbHcc_algo_H_dR_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,82.67199);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,121.4081);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,120.2693);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,104.3231);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,82.78667);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,83.06143);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,89.79226);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,130.2068);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,137.559);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,146.1016);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,154.9445);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,149.2147);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,159.3727);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,165.5351);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,146.2491);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,128.2703);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,140.2042);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,140.7013);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,91.23693);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,106.1771);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,64.33946);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,41.11726);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,56.63286);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(26,28.59119);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,27.97236);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(28,15.92809);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(29,18.35369);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(30,9.704404);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(31,6.785079);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,5.546582);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,12.14612);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,15.68417);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,13.42173);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,11.60397);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,7.161841);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,9.195521);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,16.80824);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,16.1762);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,12.406);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,12.12519);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,9.102873);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,11.24692);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,11.19164);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,13.09266);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,7.518404);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,14.26622);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,12.65239);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,7.138529);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,16.62163);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,10.63859);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,4.363252);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,10.94708);
   VbbHcc_algo_H_dR_stack_5->SetBinError(26,3.958342);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,7.778564);
   VbbHcc_algo_H_dR_stack_5->SetBinError(28,2.826468);
   VbbHcc_algo_H_dR_stack_5->SetBinError(29,6.594458);
   VbbHcc_algo_H_dR_stack_5->SetBinError(30,4.667449);
   VbbHcc_algo_H_dR_stack_5->SetBinError(31,1.73455);
   VbbHcc_algo_H_dR_stack_5->SetEntries(15759);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,0.8680747);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,1.247885);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,1.478465);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,1.408763);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,0.5673576);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,1.07614);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,1.877489);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,1.380037);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,1.639444);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,1.588434);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,1.945236);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,1.216099);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,1.61416);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,0.9611603);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,1.713298);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,1.672398);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,0.5387435);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.7604204);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(24,0.298785);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.6493487);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(27,0.2532685);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(30,0.2638417);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.5071787);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.6278072);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.6758427);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,0.6403956);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,0.4011824);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,0.5437403);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.7747629);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.6316916);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.7531004);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,0.7179888);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.8047494);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.627534);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,0.7280316);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,0.554932);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.7796683);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.6886052);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.393445);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.4893426);
   VbbHcc_algo_H_dR_stack_6->SetBinError(24,0.298785);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.4591669);
   VbbHcc_algo_H_dR_stack_6->SetBinError(27,0.2532685);
   VbbHcc_algo_H_dR_stack_6->SetBinError(30,0.2638417);
   VbbHcc_algo_H_dR_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_7 = new TH1D("VbbHcc_algo_H_dR_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,5.251734);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,4.975581);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,5.578091);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,3.885869);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,1.886011);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,1.879905);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,1.156158);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,1.497325);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,2.422098);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,4.295357);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,2.823273);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,2.545302);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,4.008898);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,3.331585);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,3.82046);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,3.611601);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,2.966251);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,2.071513);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,1.363442);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,2.010528);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,0.7838169);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(24,1.017753);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(26,0.6189813);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(27,0.5467188);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(28,0.6410054);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(29,0.1429652);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(30,0.2575113);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(31,0.1893506);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,1.158859);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,1.107767);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,1.142261);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,0.9587078);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,0.6894285);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,0.712017);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.527476);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.5973865);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,0.7435988);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,1.088167);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,0.8599225);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,0.8207007);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,1.029893);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,0.9249703);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,0.9919311);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,0.9964257);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,0.9083302);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.7060609);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.6182568);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,0.7302434);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.3996889);
   VbbHcc_algo_H_dR_stack_7->SetBinError(24,0.5134822);
   VbbHcc_algo_H_dR_stack_7->SetBinError(26,0.3653679);
   VbbHcc_algo_H_dR_stack_7->SetBinError(27,0.3866625);
   VbbHcc_algo_H_dR_stack_7->SetBinError(28,0.3736942);
   VbbHcc_algo_H_dR_stack_7->SetBinError(29,0.1157338);
   VbbHcc_algo_H_dR_stack_7->SetBinError(30,0.2575113);
   VbbHcc_algo_H_dR_stack_7->SetBinError(31,0.1893506);
   VbbHcc_algo_H_dR_stack_7->SetEntries(272);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_8 = new TH1D("VbbHcc_algo_H_dR_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,9.947878);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,11.8029);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,10.3957);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,6.351151);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,3.009551);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,1.60107);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,2.587708);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,3.712459);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,3.198042);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,2.663749);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,4.238527);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,4.750786);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,5.093454);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,4.103246);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,5.169432);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,4.591164);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,5.303856);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,3.105078);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,4.09963);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,2.352634);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(23,0.3102435);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,0.9423088);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(25,0.6793673);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(26,0.6924787);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(27,1.155448);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,1.579702);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(30,0.5071442);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,1.59766);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,1.690754);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,1.565285);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,1.216955);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,0.8470665);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,0.6494279);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,0.7987541);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,0.9851497);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,0.8920908);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,0.8200757);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,0.9969912);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,1.068305);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,1.133915);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,1.009227);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,1.158108);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,1.069322);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,1.127475);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,0.8397363);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,1.044463);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,0.7617355);
   VbbHcc_algo_H_dR_stack_8->SetBinError(23,0.3102435);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.4755329);
   VbbHcc_algo_H_dR_stack_8->SetBinError(25,0.4067982);
   VbbHcc_algo_H_dR_stack_8->SetBinError(26,0.4146487);
   VbbHcc_algo_H_dR_stack_8->SetBinError(27,0.5210129);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.6069769);
   VbbHcc_algo_H_dR_stack_8->SetBinError(30,0.3601068);
   VbbHcc_algo_H_dR_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_9 = new TH1D("VbbHcc_algo_H_dR_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,4.300142);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,8.136404);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,8.171591);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,6.637314);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,4.827653);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,2.621804);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,1.779276);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,1.639684);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,1.995955);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,2.394657);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,2.853621);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,2.829684);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,2.645221);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,2.344878);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,2.167402);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,2.219566);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,2.204251);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,1.945503);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,1.530648);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,1.128787);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,0.8591239);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,0.7203134);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,0.7914059);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,0.9124073);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,0.9326475);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(28,0.956816);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(29,0.7407728);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(30,0.3999963);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(31,0.2053664);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.08685183);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.1167718);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.1147159);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.101686);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.085283);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.06262386);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.05182663);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.05040456);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.05546387);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.06105769);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.06671464);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.06745033);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.06541895);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.06111299);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.05942313);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.06039506);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.05928693);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.05524549);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.04924149);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.04212717);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.03676153);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.03311481);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.03436719);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.03722311);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.03845714);
   VbbHcc_algo_H_dR_stack_9->SetBinError(28,0.03915288);
   VbbHcc_algo_H_dR_stack_9->SetBinError(29,0.03498936);
   VbbHcc_algo_H_dR_stack_9->SetBinError(30,0.02621946);
   VbbHcc_algo_H_dR_stack_9->SetBinError(31,0.01821476);
   VbbHcc_algo_H_dR_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_10 = new TH1D("VbbHcc_algo_H_dR_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(2,0.0003671436);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,0.9234618);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,2.335177);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,2.920458);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,2.929778);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,2.331572);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,1.664957);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,1.250211);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,1.200041);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,1.332426);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,1.542453);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,1.692818);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,1.67895);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,1.502304);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,1.439456);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,1.279733);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,1.288445);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,1.263796);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,1.214064);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,1.026016);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,0.8659825);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.6209371);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.5575671);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.5466908);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.4942959);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.4462648);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(28,0.3690158);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(29,0.2648745);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(30,0.1432249);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(31,0.08684087);
   VbbHcc_algo_H_dR_stack_10->SetBinError(2,0.0003671436);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.01915345);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.03021909);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.0333901);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.03311641);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.02929928);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.02465697);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.02153114);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.02129084);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.02249648);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.0242581);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.02550165);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.02548344);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.02416447);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.02376326);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.02236792);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.02246181);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.02216297);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.02162686);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.01985209);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.01824045);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.01537974);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.01447493);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.01424559);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.0135528);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.012891);
   VbbHcc_algo_H_dR_stack_10->SetBinError(28,0.01185554);
   VbbHcc_algo_H_dR_stack_10->SetBinError(29,0.01004061);
   VbbHcc_algo_H_dR_stack_10->SetBinError(30,0.007418903);
   VbbHcc_algo_H_dR_stack_10->SetBinError(31,0.005737491);
   VbbHcc_algo_H_dR_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_11 = new TH1D("VbbHcc_algo_H_dR_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.03252432);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.0423105);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.04156906);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.05133419);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.02748191);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.04241798);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.01584656);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.01982449);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.02326804);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.02422505);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.02328843);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.0261781);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.02825943);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.02272847);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.01745509);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.02006615);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.02315051);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.01637518);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.00972903);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.00947523);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.01087887);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(24,0.01292864);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(25,0.005249188);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(26,0.005595853);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.009821257);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(28,0.01534411);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(29,0.006602232);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(30,0.00360105);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(31,0.001672448);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.007331927);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.007954216);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.008015214);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.008708347);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.006356289);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.007801744);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.004854169);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.005411782);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.005962036);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.00615714);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.005879327);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.006397487);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.006708792);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.006280866);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.005151095);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.005749763);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.00594021);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.005233885);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.003775314);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.003624603);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.004093446);
   VbbHcc_algo_H_dR_stack_11->SetBinError(24,0.004715515);
   VbbHcc_algo_H_dR_stack_11->SetBinError(25,0.003138805);
   VbbHcc_algo_H_dR_stack_11->SetBinError(26,0.003239932);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.003512386);
   VbbHcc_algo_H_dR_stack_11->SetBinError(28,0.004769964);
   VbbHcc_algo_H_dR_stack_11->SetBinError(29,0.003303327);
   VbbHcc_algo_H_dR_stack_11->SetBinError(30,0.002551727);
   VbbHcc_algo_H_dR_stack_11->SetBinError(31,0.001672448);
   VbbHcc_algo_H_dR_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_12 = new TH1D("VbbHcc_algo_H_dR_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,0.008529795);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,0.02418946);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,0.02052607);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,0.02073923);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,0.01530397);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,0.01038776);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,0.0101539);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,0.009067281);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,0.01032279);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,0.01633397);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,0.01845388);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,0.01193138);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,0.01536889);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,0.009376685);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,0.009930689);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,0.01040845);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,0.009138346);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,0.009083467);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,0.006481894);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,0.007680435);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(23,0.004870558);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(24,0.004750131);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(25,0.002656296);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(26,0.003566809);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(27,0.004428656);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(28,0.002235706);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(29,0.002650054);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(30,0.001189923);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(31,0.0001368676);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,0.001332401);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,0.002254702);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,0.001984669);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,0.00201415);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,0.001731664);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,0.001412215);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,0.001404881);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,0.001353168);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,0.001429287);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,0.001793958);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,0.001997453);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,0.001575652);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,0.001781073);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,0.001412774);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,0.001403942);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,0.001471827);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,0.001374764);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,0.001330802);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,0.001151596);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,0.001278769);
   VbbHcc_algo_H_dR_stack_12->SetBinError(23,0.0009724122);
   VbbHcc_algo_H_dR_stack_12->SetBinError(24,0.000983322);
   VbbHcc_algo_H_dR_stack_12->SetBinError(25,0.0006929831);
   VbbHcc_algo_H_dR_stack_12->SetBinError(26,0.0008187878);
   VbbHcc_algo_H_dR_stack_12->SetBinError(27,0.0009588393);
   VbbHcc_algo_H_dR_stack_12->SetBinError(28,0.0006563288);
   VbbHcc_algo_H_dR_stack_12->SetBinError(29,0.0007268176);
   VbbHcc_algo_H_dR_stack_12->SetBinError(30,0.0004879018);
   VbbHcc_algo_H_dR_stack_12->SetBinError(31,0.0001368676);
   VbbHcc_algo_H_dR_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR__323 = new TH1D("VbbHcc_algo_H_dR__323","",30,0,6);
   VbbHcc_algo_H_dR__323->SetBinContent(2,2);
   VbbHcc_algo_H_dR__323->SetBinContent(3,7495);
   VbbHcc_algo_H_dR__323->SetBinContent(4,9465);
   VbbHcc_algo_H_dR__323->SetBinContent(5,8127);
   VbbHcc_algo_H_dR__323->SetBinContent(6,7789);
   VbbHcc_algo_H_dR__323->SetBinContent(7,7928);
   VbbHcc_algo_H_dR__323->SetBinContent(8,8452);
   VbbHcc_algo_H_dR__323->SetBinContent(9,8754);
   VbbHcc_algo_H_dR__323->SetBinContent(10,9595);
   VbbHcc_algo_H_dR__323->SetBinContent(11,10754);
   VbbHcc_algo_H_dR__323->SetBinContent(12,12128);
   VbbHcc_algo_H_dR__323->SetBinContent(13,13462);
   VbbHcc_algo_H_dR__323->SetBinContent(14,14296);
   VbbHcc_algo_H_dR__323->SetBinContent(15,14493);
   VbbHcc_algo_H_dR__323->SetBinContent(16,14443);
   VbbHcc_algo_H_dR__323->SetBinContent(17,13730);
   VbbHcc_algo_H_dR__323->SetBinContent(18,12732);
   VbbHcc_algo_H_dR__323->SetBinContent(19,12106);
   VbbHcc_algo_H_dR__323->SetBinContent(20,10425);
   VbbHcc_algo_H_dR__323->SetBinContent(21,8966);
   VbbHcc_algo_H_dR__323->SetBinContent(22,7233);
   VbbHcc_algo_H_dR__323->SetBinContent(23,5786);
   VbbHcc_algo_H_dR__323->SetBinContent(24,4469);
   VbbHcc_algo_H_dR__323->SetBinContent(25,3455);
   VbbHcc_algo_H_dR__323->SetBinContent(26,2750);
   VbbHcc_algo_H_dR__323->SetBinContent(27,2142);
   VbbHcc_algo_H_dR__323->SetBinContent(28,1741);
   VbbHcc_algo_H_dR__323->SetBinContent(29,1314);
   VbbHcc_algo_H_dR__323->SetBinContent(30,924);
   VbbHcc_algo_H_dR__323->SetBinContent(31,654);
   VbbHcc_algo_H_dR__323->SetEntries(235639);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__323->SetLineColor(ci);
   VbbHcc_algo_H_dR__323->SetLineWidth(2);
   VbbHcc_algo_H_dR__323->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__323->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__323->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__323->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__323->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__323->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__323->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1235[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1235[30] = {
   0,
   1.87267,
   46374.5,
   61793.94,
   67415.11,
   55982.38,
   50773.57,
   54177.39,
   56183.52,
   63055.82,
   68828.09,
   77083.09,
   80957.48,
   103912.2,
   85109.42,
   100362.8,
   87957.26,
   84868.64,
   78808.63,
   69112.62,
   69539.26,
   59369.27,
   32598.78,
   27603.53,
   22251.67,
   18451.43,
   11597.01,
   11525.1,
   8551.314,
   4885.328};
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1235[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1235[30] = {
   0,
   0.3721728,
   2264.993,
   2950.232,
   18680.24,
   3047.367,
   2359.277,
   2967.5,
   2987.759,
   3135.069,
   3038.174,
   3121.142,
   3052.374,
   16195.7,
   3140.246,
   11246.54,
   3472.146,
   3479.728,
   3497.345,
   3047.687,
   13539.35,
   16674.04,
   1863.344,
   2087.548,
   1760.084,
   1619.424,
   1104.124,
   1270.499,
   1004.841,
   697.1337};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_fx1235,Graph_from_VbbHcc_algo_H_dR_fy1235,Graph_from_VbbHcc_algo_H_dR_fex1235,Graph_from_VbbHcc_algo_H_dR_fey1235);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1235 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1235","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetMinimum(132.1187);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetMaximum(132118.7);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1235);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR","MC unc. (stat.)","fl");

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
   H_dR_algo_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__324 = new TH1D("data_mc_ratio__324","",30,0,6);
   data_mc_ratio__324->SetBinContent(2,1.067994);
   data_mc_ratio__324->SetBinContent(3,0.161619);
   data_mc_ratio__324->SetBinContent(4,0.1531704);
   data_mc_ratio__324->SetBinContent(5,0.1205516);
   data_mc_ratio__324->SetBinContent(6,0.1391331);
   data_mc_ratio__324->SetBinContent(7,0.1561442);
   data_mc_ratio__324->SetBinContent(8,0.156006);
   data_mc_ratio__324->SetBinContent(9,0.1558108);
   data_mc_ratio__324->SetBinContent(10,0.1521668);
   data_mc_ratio__324->SetBinContent(11,0.1562444);
   data_mc_ratio__324->SetBinContent(12,0.1573367);
   data_mc_ratio__324->SetBinContent(13,0.1662848);
   data_mc_ratio__324->SetBinContent(14,0.1375777);
   data_mc_ratio__324->SetBinContent(15,0.1702867);
   data_mc_ratio__324->SetBinContent(16,0.1439079);
   data_mc_ratio__324->SetBinContent(17,0.1560985);
   data_mc_ratio__324->SetBinContent(18,0.1500201);
   data_mc_ratio__324->SetBinContent(19,0.1536126);
   data_mc_ratio__324->SetBinContent(20,0.1508408);
   data_mc_ratio__324->SetBinContent(21,0.1289344);
   data_mc_ratio__324->SetBinContent(22,0.1218307);
   data_mc_ratio__324->SetBinContent(23,0.1774913);
   data_mc_ratio__324->SetBinContent(24,0.1618996);
   data_mc_ratio__324->SetBinContent(25,0.1552692);
   data_mc_ratio__324->SetBinContent(26,0.14904);
   data_mc_ratio__324->SetBinContent(27,0.1847027);
   data_mc_ratio__324->SetBinContent(28,0.1510616);
   data_mc_ratio__324->SetBinContent(29,0.1536606);
   data_mc_ratio__324->SetBinContent(30,0.1891378);
   data_mc_ratio__324->SetBinContent(31,0.1524252);
   data_mc_ratio__324->SetBinError(2,0.7551857);
   data_mc_ratio__324->SetBinError(3,0.001866838);
   data_mc_ratio__324->SetBinError(4,0.001574398);
   data_mc_ratio__324->SetBinError(5,0.001337235);
   data_mc_ratio__324->SetBinError(6,0.001576484);
   data_mc_ratio__324->SetBinError(7,0.001753655);
   data_mc_ratio__324->SetBinError(8,0.001696921);
   data_mc_ratio__324->SetBinError(9,0.001665307);
   data_mc_ratio__324->SetBinError(10,0.00155345);
   data_mc_ratio__324->SetBinError(11,0.001506674);
   data_mc_ratio__324->SetBinError(12,0.001428682);
   data_mc_ratio__324->SetBinError(13,0.00143317);
   data_mc_ratio__324->SetBinError(14,0.001150644);
   data_mc_ratio__324->SetBinError(15,0.001414495);
   data_mc_ratio__324->SetBinError(16,0.001197446);
   data_mc_ratio__324->SetBinError(17,0.001332182);
   data_mc_ratio__324->SetBinError(18,0.001329539);
   data_mc_ratio__324->SetBinError(19,0.001396132);
   data_mc_ratio__324->SetBinError(20,0.001477341);
   data_mc_ratio__324->SetBinError(21,0.001361662);
   data_mc_ratio__324->SetBinError(22,0.00143251);
   data_mc_ratio__324->SetBinError(23,0.002333393);
   data_mc_ratio__324->SetBinError(24,0.002421812);
   data_mc_ratio__324->SetBinError(25,0.002641566);
   data_mc_ratio__324->SetBinError(26,0.002842081);
   data_mc_ratio__324->SetBinError(27,0.003990833);
   data_mc_ratio__324->SetBinError(28,0.003620383);
   data_mc_ratio__324->SetBinError(29,0.004239014);
   data_mc_ratio__324->SetBinError(30,0.006222176);
   data_mc_ratio__324->SetBinError(31,0.02850188);
   data_mc_ratio__324->SetMinimum(0.4);
   data_mc_ratio__324->SetMaximum(1.6);
   data_mc_ratio__324->SetEntries(46.48774);
   data_mc_ratio__324->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__324->SetLineColor(ci);
   data_mc_ratio__324->SetLineWidth(2);
   data_mc_ratio__324->SetMarkerStyle(20);
   data_mc_ratio__324->SetMarkerSize(1.2);
   data_mc_ratio__324->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__324->GetXaxis()->SetRange(1,31);
   data_mc_ratio__324->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__324->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__324->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__324->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__324->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__324->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__324->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__324->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__324->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__324->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__324->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__324->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__324->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__324->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__324->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__324->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__324->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1236[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1236[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1236[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1236[30] = {
   0,
   0.1987391,
   0.04884135,
   0.04774306,
   0.2770928,
   0.0544344,
   0.04646663,
   0.05477377,
   0.05317858,
   0.04971896,
   0.04414149,
   0.04049062,
   0.03770342,
   0.1558595,
   0.03689657,
   0.1120589,
   0.03947538,
   0.04100134,
   0.0443777,
   0.0440974,
   0.1947008,
   0.2808531,
   0.05715992,
   0.07562611,
   0.07909895,
   0.08776689,
   0.09520759,
   0.1102376,
   0.1175073,
   0.1426995};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1236,Graph_from_mc_statistical_error_fy1236,Graph_from_mc_statistical_error_fex1236,Graph_from_mc_statistical_error_fey1236);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1236 = new TH1F("Graph_Graph_from_mc_statistical_error1236","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1236->SetMinimum(0.6629763);
   Graph_Graph_from_mc_statistical_error1236->SetMaximum(1.337024);
   Graph_Graph_from_mc_statistical_error1236->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1236->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1236->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1236);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}
