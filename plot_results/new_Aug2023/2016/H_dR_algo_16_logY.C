void H_dR_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Tue Aug 22 09:17:08 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(0,0,1,1);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.913042,6.525,14.01156);
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
   st->SetMaximum(5.56131e+11);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",30,0,6);
   st_stack_117->SetMinimum(0.00127023);
   st_stack_117->SetMaximum(2.084955e+12);
   st_stack_117->SetDirectory(0);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->GetXaxis()->SetRange(1,31);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetLabelSize(0.035);
   st_stack_117->GetXaxis()->SetTitleSize(0.035);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Events/0.2");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetLabelSize(0.05);
   st_stack_117->GetYaxis()->SetTitleSize(0.057);
   st_stack_117->GetYaxis()->SetTitleOffset(1.2);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetLabelSize(0.035);
   st_stack_117->GetZaxis()->SetTitleSize(0.035);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(2,20.64836);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,48679.06);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,73920.52);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,63049.18);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,60173.76);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,80007.91);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,81430.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,91976.29);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,101910.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,109960.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,138930.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,149055.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,178433.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,157027.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,169099.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,132705.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,132189.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,125981.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,123363.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,101065.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,78978.62);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,66913.51);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,47251.91);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,38627.91);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,37031.18);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,25657.16);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,14841);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(29,13112.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(30,8197.76);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(31,8296.099);
   VbbHcc_algo_H_dR_stack_1->SetBinError(2,20.64836);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,2947.303);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,4202.034);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,4019.78);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,3639.077);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,4955.937);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,4304.433);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,4806.841);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,5220.587);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,4989.666);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,16664.57);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,6234.576);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,15951.44);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,6454.849);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,13706.36);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,5251.732);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,5274.142);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,5252.219);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,5513.724);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,5127.379);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,4321.741);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,3896.359);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,3674.822);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,3429.126);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,12172.53);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,3056.589);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,2275.883);
   VbbHcc_algo_H_dR_stack_1->SetBinError(29,1702.366);
   VbbHcc_algo_H_dR_stack_1->SetBinError(30,1648.524);
   VbbHcc_algo_H_dR_stack_1->SetBinError(31,1923.239);
   VbbHcc_algo_H_dR_stack_1->SetEntries(121336);

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
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,-0.03506398);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,298.6139);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,509.222);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,573.6685);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,642.9101);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,691.4651);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,704.6188);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,773.3643);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,828.7667);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,872.9284);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,962.5722);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,993.8918);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,972.8149);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,923.2904);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,898.688);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,826.3397);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,770.3092);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,723.6647);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,671.7124);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,607.8229);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,520.1123);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,404.0143);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,348.2447);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,278.6871);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,211.8784);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,162.8919);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,112.4163);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,92.32239);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(30,55.41697);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(31,44.27208);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.03506398);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,6.564707);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,8.352683);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,8.630371);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,9.014195);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,9.288847);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,9.350366);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,9.828712);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,10.18615);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,10.38865);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,11.07437);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,11.20025);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,11.02025);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,10.58028);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,10.35959);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,9.946702);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,9.650098);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,9.38108);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,9.030901);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,8.653448);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,8.013372);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,6.856281);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,6.465645);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,5.789573);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,4.977695);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,4.405519);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,3.52642);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,3.372721);
   VbbHcc_algo_H_dR_stack_2->SetBinError(30,2.663851);
   VbbHcc_algo_H_dR_stack_2->SetBinError(31,2.313185);
   VbbHcc_algo_H_dR_stack_2->SetEntries(335691);

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
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,3.412621);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,8422.75);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,16897.55);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,20416.99);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,21361.71);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,20079.73);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,18051.09);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,16194.25);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,14787.12);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,14195.07);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,13932.98);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,13515.12);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,12430.78);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,11165.74);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,10233.71);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,9338.219);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,8913.88);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,8822.396);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,8780.106);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,8220.776);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,7450.918);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,6715.288);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,6057.145);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,5397.679);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,4666.879);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,3882.357);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,3085.631);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,2234.404);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(30,1267.935);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(31,845.4192);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.406834);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,21.54707);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,30.28035);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,32.96011);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,33.39181);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,32.06);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,30.15271);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,28.38134);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,27.03395);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,26.46832);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,26.30071);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,26.01094);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,25.03081);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,23.77413);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,22.79656);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,21.81579);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,21.35463);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,21.21557);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,21.11978);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,20.34289);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,19.31455);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,18.27969);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,17.38096);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,16.44765);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,15.36521);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,14.09566);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,12.63893);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,10.78943);
   VbbHcc_algo_H_dR_stack_3->SetBinError(30,8.125344);
   VbbHcc_algo_H_dR_stack_3->SetBinError(31,6.552273);
   VbbHcc_algo_H_dR_stack_3->SetEntries(6260583);

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
   VbbHcc_algo_H_dR_stack_4->SetBinContent(2,0.1221998);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,267.8912);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,418.0739);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,431.8752);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,391.9188);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,413.5757);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,416.1933);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,487.2542);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,507.896);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,550.1648);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,622.5312);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,693.7901);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,674.358);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,679.517);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,663.2488);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,612.8001);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,577.0455);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,566.0728);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,527.4038);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,446.2945);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,378.6993);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,289.6903);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,202.0793);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,155.3423);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,141.9796);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,112.1365);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(28,75.20902);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(29,59.3451);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(30,37.7373);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(31,32.69544);
   VbbHcc_algo_H_dR_stack_4->SetBinError(2,0.08643086);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,7.707547);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,11.59874);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,15.01032);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,15.96601);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,16.37461);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,15.81179);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,17.39324);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,16.4482);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,17.17352);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,17.4475);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,19.52149);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,17.23078);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,17.05769);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,16.30941);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,14.90793);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,14.78223);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,15.18772);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,15.70318);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,14.34743);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,14.25504);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,12.65789);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,10.06427);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,9.192896);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,10.02308);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,8.388075);
   VbbHcc_algo_H_dR_stack_4->SetBinError(28,6.642276);
   VbbHcc_algo_H_dR_stack_4->SetBinError(29,5.493048);
   VbbHcc_algo_H_dR_stack_4->SetBinError(30,4.222906);
   VbbHcc_algo_H_dR_stack_4->SetBinError(31,4.760194);
   VbbHcc_algo_H_dR_stack_4->SetEntries(90522);

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
   VbbHcc_algo_H_dR_stack_5->SetBinContent(2,0.1698784);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,172.7658);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,223.1572);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,183.5019);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,202.5497);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,185.47);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,182.8145);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,197.308);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,262.1887);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,298.6586);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,325.5964);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,348.47);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,370.939);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,341.1433);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,348.2583);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,344.942);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,308.8804);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,327.1212);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,262.9538);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,246.5808);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,189.9519);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,183.1899);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,118.1196);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,77.17948);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(26,71.11718);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,63.56955);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(28,30.88909);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(29,42.21577);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(30,27.14205);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(31,21.28399);
   VbbHcc_algo_H_dR_stack_5->SetBinError(2,0.1297546);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,10.86156);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,18.04534);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,16.00192);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,19.93978);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,17.35334);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,15.77728);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,15.66326);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,21.21361);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,23.19096);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,21.28586);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,21.45365);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,21.22844);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,17.74355);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,18.10219);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,18.74683);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,16.55487);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,21.08142);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,17.10313);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,18.39238);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,16.11684);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,16.59407);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,10.70794);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,10.36221);
   VbbHcc_algo_H_dR_stack_5->SetBinError(26,10.84692);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,12.19513);
   VbbHcc_algo_H_dR_stack_5->SetBinError(28,6.417397);
   VbbHcc_algo_H_dR_stack_5->SetBinError(29,11.39368);
   VbbHcc_algo_H_dR_stack_5->SetBinError(30,7.925219);
   VbbHcc_algo_H_dR_stack_5->SetBinError(31,6.357953);
   VbbHcc_algo_H_dR_stack_5->SetEntries(66273);

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
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,1.783402);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,4.011759);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,2.803285);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,3.737119);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,1.383521);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,1.308043);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,2.049346);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,2.403563);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(11,1.939449);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,4.071947);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,3.148586);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,2.611833);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,3.659445);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,2.841941);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,4.72715);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,3.053205);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,2.416067);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,2.734916);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(21,2.056764);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.8450868);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(23,2.493288);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(24,0.9268589);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(25,0.5325545);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.3483263);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(27,0.1172082);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(28,0.3908601);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(29,0.2351927);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(30,0.1088144);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(31,0.09850247);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.4636475);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.6909098);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.5696078);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,0.6473278);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,0.4007961);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,0.395988);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.4855964);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.5398874);
   VbbHcc_algo_H_dR_stack_6->SetBinError(11,0.4719428);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.7079347);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,0.6112358);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.5715541);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.6553295);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,0.5955584);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,0.7487074);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.6070961);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.5426948);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.5701133);
   VbbHcc_algo_H_dR_stack_6->SetBinError(21,0.5026059);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.3206985);
   VbbHcc_algo_H_dR_stack_6->SetBinError(23,0.5478493);
   VbbHcc_algo_H_dR_stack_6->SetBinError(24,0.3302663);
   VbbHcc_algo_H_dR_stack_6->SetBinError(25,0.2384384);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.2016404);
   VbbHcc_algo_H_dR_stack_6->SetBinError(27,0.1172082);
   VbbHcc_algo_H_dR_stack_6->SetBinError(28,0.2076832);
   VbbHcc_algo_H_dR_stack_6->SetBinError(29,0.1669949);
   VbbHcc_algo_H_dR_stack_6->SetBinError(30,0.1088144);
   VbbHcc_algo_H_dR_stack_6->SetBinError(31,0.09850247);
   VbbHcc_algo_H_dR_stack_6->SetEntries(510);

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
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,6.272555);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,9.417273);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,6.096702);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,4.722252);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,3.100128);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,2.24668);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,2.522385);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,2.433973);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,2.520233);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,3.526426);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,5.223701);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,4.818672);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,4.479243);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,5.382582);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,4.109272);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,5.561192);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,4.88157);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,4.174419);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,2.242341);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,1.294519);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,1.956815);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(24,2.104284);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(25,1.130288);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(26,1.060739);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(27,1.167967);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(28,1.391759);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(29,0.7460532);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(30,0.4522514);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(31,0.1860869);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,0.7575118);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,0.9098789);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,0.7103694);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,0.6192076);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,0.4976685);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,0.4484895);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.4753587);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.4610778);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,0.4596226);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,0.5538701);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,0.6724994);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,0.652402);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,0.6284595);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,0.692497);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,0.5989676);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,0.7003965);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,0.6506132);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.6001573);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.4499063);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,0.3351808);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.409666);
   VbbHcc_algo_H_dR_stack_7->SetBinError(24,0.4264486);
   VbbHcc_algo_H_dR_stack_7->SetBinError(25,0.3041943);
   VbbHcc_algo_H_dR_stack_7->SetBinError(26,0.2969942);
   VbbHcc_algo_H_dR_stack_7->SetBinError(27,0.3177125);
   VbbHcc_algo_H_dR_stack_7->SetBinError(28,0.34593);
   VbbHcc_algo_H_dR_stack_7->SetBinError(29,0.2505955);
   VbbHcc_algo_H_dR_stack_7->SetBinError(30,0.2028884);
   VbbHcc_algo_H_dR_stack_7->SetBinError(31,0.1316693);
   VbbHcc_algo_H_dR_stack_7->SetEntries(1121);

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
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,6.568761);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,10.14794);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,8.838057);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,7.746232);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,6.009174);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,5.288132);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,5.335997);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,3.681973);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,4.30374);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,4.026222);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,5.765079);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,4.773373);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,4.642693);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,6.488554);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,4.297483);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,5.688391);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,5.299239);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,4.680794);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,3.963276);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,2.864419);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(23,2.255225);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,1.156977);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(25,2.049182);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(26,1.733741);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(27,2.275247);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,0.6222731);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(29,0.6388943);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(30,0.1949745);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(31,0.4293234);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,1.187723);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,1.455377);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,1.321598);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,1.21935);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,1.10142);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,1.047302);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,1.055947);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,0.8816927);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,0.9463281);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,0.8934763);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,1.076039);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,0.9792189);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,0.9769396);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,1.171067);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,0.9482163);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,1.099564);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,1.041836);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,1.002047);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,0.87933);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,0.7539632);
   VbbHcc_algo_H_dR_stack_8->SetBinError(23,0.6560722);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.489862);
   VbbHcc_algo_H_dR_stack_8->SetBinError(25,0.6205068);
   VbbHcc_algo_H_dR_stack_8->SetBinError(26,0.5800148);
   VbbHcc_algo_H_dR_stack_8->SetBinError(27,0.6928305);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.3621198);
   VbbHcc_algo_H_dR_stack_8->SetBinError(29,0.3691957);
   VbbHcc_algo_H_dR_stack_8->SetBinError(30,0.1949745);
   VbbHcc_algo_H_dR_stack_8->SetBinError(31,0.3040675);
   VbbHcc_algo_H_dR_stack_8->SetEntries(609);

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
   VbbHcc_algo_H_dR_stack_9->SetBinContent(2,0.002257042);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,3.581552);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,6.627838);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,7.089262);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,6.311652);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,4.841012);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,3.628457);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,2.857364);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,2.457423);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,2.670603);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,2.80499);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,3.088926);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,3.039421);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,2.670662);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,2.370288);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,2.245093);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,2.212548);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,2.225865);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,1.962552);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,1.731415);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,1.351433);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,1.190669);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,1.053265);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,1.031519);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,0.9707784);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,1.002868);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(28,0.8279589);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(29,0.6575276);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(30,0.3665175);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(31,0.2149388);
   VbbHcc_algo_H_dR_stack_9->SetBinError(2,0.001595972);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.06490879);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.08723656);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.08878489);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.0823075);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.07139305);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.06087798);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.05388889);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.05045042);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.0528218);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.05433992);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.05732635);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.05725644);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.05393046);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.05083459);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.04948736);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.04915511);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.04926505);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.04570893);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.04282584);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.03782537);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.03519974);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.03301969);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.0326267);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.03179016);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.03276356);
   VbbHcc_algo_H_dR_stack_9->SetBinError(28,0.03034184);
   VbbHcc_algo_H_dR_stack_9->SetBinError(29,0.02708369);
   VbbHcc_algo_H_dR_stack_9->SetBinError(30,0.02002954);
   VbbHcc_algo_H_dR_stack_9->SetBinError(31,0.01522303);
   VbbHcc_algo_H_dR_stack_9->SetEntries(72765);

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
   VbbHcc_algo_H_dR_stack_10->SetBinContent(2,0.0003170436);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,0.7974473);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,2.016522);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,2.521935);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,2.529984);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,2.013409);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,1.437759);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,1.079609);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,1.036284);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,1.150605);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,1.331972);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,1.461818);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,1.449842);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,1.297301);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,1.243029);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,1.105102);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,1.112625);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,1.09134);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,1.048394);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,0.8860074);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,0.7478115);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.5362047);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.4814822);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.47209);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.4268448);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.385368);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(28,0.3186603);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(29,0.2287301);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(30,0.1236806);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(31,0.07499066);
   VbbHcc_algo_H_dR_stack_10->SetBinError(2,0.0003170436);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.01653979);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.02609543);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.02883372);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.02859738);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.02530113);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.02129231);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.01859302);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.01838552);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.01942664);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.02094787);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.02202173);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.022006);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.02086701);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.02052055);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.01931562);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.0193967);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.01913864);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.01867568);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.0171431);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.01575138);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.01328104);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.0124997);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.01230165);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.0117034);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.01113191);
   VbbHcc_algo_H_dR_stack_10->SetBinError(28,0.01023775);
   VbbHcc_algo_H_dR_stack_10->SetBinError(29,0.00867048);
   VbbHcc_algo_H_dR_stack_10->SetBinError(30,0.006406528);
   VbbHcc_algo_H_dR_stack_10->SetBinError(31,0.004954559);
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
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.02810338);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.05753928);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.06426301);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.03474959);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.04767506);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.03419622);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.02077859);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.03219263);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.02586696);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.0340529);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.05178639);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.02510813);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.03960971);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.02844584);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.01335368);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.03622509);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.0364709);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.02244685);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.0156015);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.01166783);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.01735274);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(24,0.00793994);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(25,0.001938462);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(26,0.00894346);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.007443514);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(28,0.01034444);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(29,0.01756044);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(31,0.006480339);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.007859728);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.01118339);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.01255827);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.009512913);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.009804598);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.008145566);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.00665366);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.008134194);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.007214392);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.008319956);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.01067977);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.007194848);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.009243932);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.007656553);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.005217402);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.008830475);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.008959125);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.007119882);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.005533493);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.004789387);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.005856505);
   VbbHcc_algo_H_dR_stack_11->SetBinError(24,0.003977997);
   VbbHcc_algo_H_dR_stack_11->SetBinError(25,0.001938462);
   VbbHcc_algo_H_dR_stack_11->SetBinError(26,0.004059395);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.003788523);
   VbbHcc_algo_H_dR_stack_11->SetBinError(28,0.004520258);
   VbbHcc_algo_H_dR_stack_11->SetBinError(29,0.006222375);
   VbbHcc_algo_H_dR_stack_11->SetBinError(31,0.00375995);
   VbbHcc_algo_H_dR_stack_11->SetEntries(376);

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
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,0.005341326);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,0.01475948);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,0.02396059);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,0.02148101);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,0.02198754);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,0.01632236);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,0.00987598);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,0.009454426);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,0.01153856);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,0.01596503);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,0.014514);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,0.01557906);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,0.01430887);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,0.01398866);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,0.01091364);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,0.009603584);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,0.01528837);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,0.01327265);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,0.009005151);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,0.005680208);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(23,0.00690612);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(24,0.004605584);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(25,0.006917808);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(26,0.004403163);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(27,0.003411131);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(28,0.00383741);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(29,0.001740882);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(30,0.0006116041);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(31,0.0008385329);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,0.001261201);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,0.002039856);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,0.002592548);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,0.002430862);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,0.002424852);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,0.002082348);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,0.001607355);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,0.001583149);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,0.001779372);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,0.002059336);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,0.002014289);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,0.002090537);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,0.00199223);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,0.002009516);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,0.001768562);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,0.00164528);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,0.00207679);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,0.001937403);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,0.001591002);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,0.001257325);
   VbbHcc_algo_H_dR_stack_12->SetBinError(23,0.001375191);
   VbbHcc_algo_H_dR_stack_12->SetBinError(24,0.001126239);
   VbbHcc_algo_H_dR_stack_12->SetBinError(25,0.001388439);
   VbbHcc_algo_H_dR_stack_12->SetBinError(26,0.001058212);
   VbbHcc_algo_H_dR_stack_12->SetBinError(27,0.0009501362);
   VbbHcc_algo_H_dR_stack_12->SetBinError(28,0.001034641);
   VbbHcc_algo_H_dR_stack_12->SetBinError(29,0.0007119154);
   VbbHcc_algo_H_dR_stack_12->SetBinError(30,0.0004335832);
   VbbHcc_algo_H_dR_stack_12->SetBinError(31,0.0004853637);
   VbbHcc_algo_H_dR_stack_12->SetEntries(1132);

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
   
   TH1D *VbbHcc_algo_H_dR__320 = new TH1D("VbbHcc_algo_H_dR__320","",30,0,6);
   VbbHcc_algo_H_dR__320->SetBinContent(2,10);
   VbbHcc_algo_H_dR__320->SetBinContent(3,24804);
   VbbHcc_algo_H_dR__320->SetBinContent(4,31527);
   VbbHcc_algo_H_dR__320->SetBinContent(5,26997);
   VbbHcc_algo_H_dR__320->SetBinContent(6,27170);
   VbbHcc_algo_H_dR__320->SetBinContent(7,27371);
   VbbHcc_algo_H_dR__320->SetBinContent(8,28704);
   VbbHcc_algo_H_dR__320->SetBinContent(9,31070);
   VbbHcc_algo_H_dR__320->SetBinContent(10,33850);
   VbbHcc_algo_H_dR__320->SetBinContent(11,37970);
   VbbHcc_algo_H_dR__320->SetBinContent(12,42244);
   VbbHcc_algo_H_dR__320->SetBinContent(13,47111);
   VbbHcc_algo_H_dR__320->SetBinContent(14,50218);
   VbbHcc_algo_H_dR__320->SetBinContent(15,51445);
   VbbHcc_algo_H_dR__320->SetBinContent(16,51121);
   VbbHcc_algo_H_dR__320->SetBinContent(17,49066);
   VbbHcc_algo_H_dR__320->SetBinContent(18,46130);
   VbbHcc_algo_H_dR__320->SetBinContent(19,42852);
   VbbHcc_algo_H_dR__320->SetBinContent(20,38489);
   VbbHcc_algo_H_dR__320->SetBinContent(21,32426);
   VbbHcc_algo_H_dR__320->SetBinContent(22,26063);
   VbbHcc_algo_H_dR__320->SetBinContent(23,20813);
   VbbHcc_algo_H_dR__320->SetBinContent(24,16252);
   VbbHcc_algo_H_dR__320->SetBinContent(25,12455);
   VbbHcc_algo_H_dR__320->SetBinContent(26,9524);
   VbbHcc_algo_H_dR__320->SetBinContent(27,7514);
   VbbHcc_algo_H_dR__320->SetBinContent(28,5867);
   VbbHcc_algo_H_dR__320->SetBinContent(29,4816);
   VbbHcc_algo_H_dR__320->SetBinContent(30,3131);
   VbbHcc_algo_H_dR__320->SetBinContent(31,2357);
   VbbHcc_algo_H_dR__320->SetEntries(829396);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__320->SetLineColor(ci);
   VbbHcc_algo_H_dR__320->SetLineWidth(2);
   VbbHcc_algo_H_dR__320->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__320->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__320->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__320->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__320->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__320->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__320->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1233[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1233[30] = {
   0,
   24.32057,
   57860.12,
   92000.82,
   84682.66,
   82797.95,
   101395.6,
   100799.6,
   109642.3,
   118309,
   125890.2,
   154789.8,
   164625.8,
   192898.9,
   170154,
   181261.5,
   143844.6,
   142777.5,
   136437.2,
   133620.6,
   110597.7,
   87525.42,
   74514.15,
   53983.23,
   44542.03,
   42127.59,
   29883.08,
   18148.71,
   15543.21,
   9587.237};
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1233[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1233[30] = {
   0,
   20.65298,
   2947.42,
   4202.206,
   4019.985,
   3639.331,
   4956.107,
   4304.607,
   4806.992,
   5220.736,
   4989.83,
   16664.61,
   6234.708,
   15951.49,
   6454.949,
   13706.4,
   5251.841,
   5274.241,
   5252.335,
   5513.821,
   5127.48,
   4321.845,
   3896.464,
   3674.898,
   3429.198,
   12172.55,
   3056.661,
   2275.94,
   1702.451,
   1648.57};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_fx1233,Graph_from_VbbHcc_algo_H_dR_fy1233,Graph_from_VbbHcc_algo_H_dR_fex1233,Graph_from_VbbHcc_algo_H_dR_fey1233);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1233 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1233","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetMinimum(229.7354);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetMaximum(229735.4);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1233);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__321 = new TH1D("data_mc_ratio__321","",30,0,6);
   data_mc_ratio__321->SetBinContent(2,0.4111746);
   data_mc_ratio__321->SetBinContent(3,0.4286891);
   data_mc_ratio__321->SetBinContent(4,0.3426817);
   data_mc_ratio__321->SetBinContent(5,0.318802);
   data_mc_ratio__321->SetBinContent(6,0.3281482);
   data_mc_ratio__321->SetBinContent(7,0.2699428);
   data_mc_ratio__321->SetBinContent(8,0.2847631);
   data_mc_ratio__321->SetBinContent(9,0.2833759);
   data_mc_ratio__321->SetBinContent(10,0.2861153);
   data_mc_ratio__321->SetBinContent(11,0.301612);
   data_mc_ratio__321->SetBinContent(12,0.2729121);
   data_mc_ratio__321->SetBinContent(13,0.2861701);
   data_mc_ratio__321->SetBinContent(14,0.2603333);
   data_mc_ratio__321->SetBinContent(15,0.3023437);
   data_mc_ratio__321->SetBinContent(16,0.282029);
   data_mc_ratio__321->SetBinContent(17,0.3411043);
   data_mc_ratio__321->SetBinContent(18,0.3230902);
   data_mc_ratio__321->SetBinContent(19,0.3140786);
   data_mc_ratio__321->SetBinContent(20,0.2880469);
   data_mc_ratio__321->SetBinContent(21,0.2931888);
   data_mc_ratio__321->SetBinContent(22,0.2977764);
   data_mc_ratio__321->SetBinContent(23,0.2793161);
   data_mc_ratio__321->SetBinContent(24,0.3010565);
   data_mc_ratio__321->SetBinContent(25,0.2796236);
   data_mc_ratio__321->SetBinContent(26,0.2260751);
   data_mc_ratio__321->SetBinContent(27,0.2514467);
   data_mc_ratio__321->SetBinContent(28,0.3232737);
   data_mc_ratio__321->SetBinContent(29,0.3098459);
   data_mc_ratio__321->SetBinContent(30,0.32658);
   data_mc_ratio__321->SetBinContent(31,0.255065);
   data_mc_ratio__321->SetBinError(2,0.1300248);
   data_mc_ratio__321->SetBinError(3,0.002721959);
   data_mc_ratio__321->SetBinError(4,0.001929966);
   data_mc_ratio__321->SetBinError(5,0.001940275);
   data_mc_ratio__321->SetBinError(6,0.001990789);
   data_mc_ratio__321->SetBinError(7,0.001631648);
   data_mc_ratio__321->SetBinError(8,0.001680786);
   data_mc_ratio__321->SetBinError(9,0.001607653);
   data_mc_ratio__321->SetBinError(10,0.001555112);
   data_mc_ratio__321->SetBinError(11,0.001547848);
   data_mc_ratio__321->SetBinError(12,0.001327823);
   data_mc_ratio__321->SetBinError(13,0.001318448);
   data_mc_ratio__321->SetBinError(14,0.001161716);
   data_mc_ratio__321->SetBinError(15,0.001332998);
   data_mc_ratio__321->SetBinError(16,0.001247367);
   data_mc_ratio__321->SetBinError(17,0.001539915);
   data_mc_ratio__321->SetBinError(18,0.001504291);
   data_mc_ratio__321->SetBinError(19,0.001517235);
   data_mc_ratio__321->SetBinError(20,0.001468233);
   data_mc_ratio__321->SetBinError(21,0.001628173);
   data_mc_ratio__321->SetBinError(22,0.001844497);
   data_mc_ratio__321->SetBinError(23,0.001936104);
   data_mc_ratio__321->SetBinError(24,0.002361536);
   data_mc_ratio__321->SetBinError(25,0.002505543);
   data_mc_ratio__321->SetBinError(26,0.002316557);
   data_mc_ratio__321->SetBinError(27,0.00290075);
   data_mc_ratio__321->SetBinError(28,0.004220484);
   data_mc_ratio__321->SetBinError(29,0.004464806);
   data_mc_ratio__321->SetBinError(30,0.00583644);
   data_mc_ratio__321->SetBinError(31,0.05334561);
   data_mc_ratio__321->SetMinimum(0.4);
   data_mc_ratio__321->SetMaximum(1.6);
   data_mc_ratio__321->SetEntries(498.2329);
   data_mc_ratio__321->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__321->SetLineColor(ci);
   data_mc_ratio__321->SetLineWidth(2);
   data_mc_ratio__321->SetMarkerStyle(20);
   data_mc_ratio__321->SetMarkerSize(1.2);
   data_mc_ratio__321->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__321->GetXaxis()->SetRange(1,31);
   data_mc_ratio__321->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__321->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__321->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__321->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__321->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__321->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__321->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__321->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__321->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__321->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__321->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__321->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__321->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__321->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__321->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__321->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__321->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1234[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1234[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1234[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1234[30] = {
   0,
   0.8491983,
   0.05094044,
   0.04567575,
   0.04747117,
   0.04395436,
   0.04887893,
   0.04270462,
   0.04384248,
   0.04412799,
   0.03963636,
   0.1076597,
   0.03787199,
   0.08269353,
   0.03793592,
   0.07561674,
   0.03651053,
   0.03694028,
   0.03849636,
   0.04126475,
   0.04636155,
   0.04937818,
   0.05229161,
   0.06807481,
   0.07698793,
   0.288945,
   0.1022873,
   0.125405,
   0.1095302,
   0.1719547};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1234,Graph_from_mc_statistical_error_fy1234,Graph_from_mc_statistical_error_fex1234,Graph_from_mc_statistical_error_fey1234);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1234 = new TH1F("Graph_Graph_from_mc_statistical_error1234","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1234->SetMinimum(0.1357216);
   Graph_Graph_from_mc_statistical_error1234->SetMaximum(2.019038);
   Graph_Graph_from_mc_statistical_error1234->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1234->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1234);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
