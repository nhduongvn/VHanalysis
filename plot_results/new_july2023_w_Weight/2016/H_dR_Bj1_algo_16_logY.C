void H_dR_Bj1_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Thu Aug 10 12:20:55 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(0,0,1,1);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetFillStyle(4000);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.928611,6.314516,14.63896);
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
   st->SetMaximum(1.975677e+12);
   
   TH1F *st_stack_141 = new TH1F("st_stack_141","",30,0,6);
   st_stack_141->SetMinimum(0.001227316);
   st_stack_141->SetMaximum(7.624419e+12);
   st_stack_141->SetDirectory(0);
   st_stack_141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_141->SetLineColor(ci);
   st_stack_141->GetXaxis()->SetRange(1,30);
   st_stack_141->GetXaxis()->SetLabelFont(42);
   st_stack_141->GetXaxis()->SetLabelSize(0.035);
   st_stack_141->GetXaxis()->SetTitleSize(0.035);
   st_stack_141->GetXaxis()->SetTitleFont(42);
   st_stack_141->GetYaxis()->SetTitle("Events/0.2");
   st_stack_141->GetYaxis()->SetLabelFont(42);
   st_stack_141->GetYaxis()->SetLabelSize(0.05);
   st_stack_141->GetYaxis()->SetTitleSize(0.057);
   st_stack_141->GetYaxis()->SetTitleOffset(1.2);
   st_stack_141->GetYaxis()->SetTitleFont(42);
   st_stack_141->GetZaxis()->SetLabelFont(42);
   st_stack_141->GetZaxis()->SetLabelSize(0.035);
   st_stack_141->GetZaxis()->SetTitleSize(0.035);
   st_stack_141->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_141);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(1,23.09573);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,75566.71);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,156883.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,196044.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,261225.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,300931.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,251298.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,230447.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,242112.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,188555.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,184740.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,160249.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,163558.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,150818.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,127554.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,125395.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,117149.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,85790.99);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,74376.15);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,63955.56);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,51688.83);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,35989.37);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,33520.36);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,27936.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,19145.37);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,16503.75);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,8777.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,5070.587);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(29,3468.637);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,4188.141);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(31,3067.433);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(1,23.09573);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,5492.484);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,7198.789);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,8280.982);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,10233.38);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,22501.55);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,9477.92);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,9476.404);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,22066.56);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,7766.643);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,21282.39);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,7245.621);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,21138.97);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,7120.829);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,6120.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,6395.824);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,6573.263);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,5467.765);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,4490.849);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,4970.422);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,3823.31);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,2509.988);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,2800.105);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,3678.71);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,2621.754);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,2215.022);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,1198.531);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,872.5782);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(29,816.344);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,2061.549);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(31,1520.185);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(131372);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.3582556);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,450.8306);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,1383.712);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,1897.782);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,2140.327);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,2095.342);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,1949.489);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,1758.864);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,1573.566);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,1391.36);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,1268.561);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,1123.266);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,1019.5);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,959.2097);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,872.1771);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,824.3175);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,742.4973);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,660.8367);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,573.6792);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,471.6131);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,387.1896);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,304.9578);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,234.5899);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,178.4869);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,127.5936);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,90.78608);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,66.65007);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,38.72934);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,22.07298);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,12.12897);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,19.39489);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.2757872);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,8.367882);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,14.40132);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,16.56047);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,17.39573);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,16.90651);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,16.18997);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,15.36583);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,14.47236);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,13.57898);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,13.07266);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,12.04727);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,11.49505);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,11.01826);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,10.57576);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,10.30928);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,9.798222);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,9.268528);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,8.71934);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,7.807108);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,7.111014);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,6.279226);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,5.487014);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,4.747939);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,3.945767);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,3.405829);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,3.006017);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,2.115215);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,1.528639);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,1.131791);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,1.429676);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(347069);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(1,7.710119);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(2,12931.03);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(3,42822.1);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(4,50801.5);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(5,45430.02);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(6,36352.43);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(7,29152.52);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(8,23719.46);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(9,19604.62);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(10,16548.24);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(11,14087.34);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(12,12146.58);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(13,10921.38);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(14,10048.02);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(15,9496.273);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(16,9161.182);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(17,8544.472);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(18,8023.538);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(19,7304.17);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(20,6478.591);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(21,5676.502);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(22,4731.214);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(23,3738.999);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(24,2890.258);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(25,2088.156);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(26,1410.106);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(27,860.423);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(28,475.1295);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(29,226.4528);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(30,114.3029);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(31,152.8592);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(1,0.6980952);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(2,28.9124);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(3,52.963);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(4,57.66457);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(5,54.32486);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(6,48.34022);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(7,43.09811);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(8,38.74912);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(9,35.13712);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(10,32.23242);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(11,29.72331);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(12,27.56764);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(13,26.13085);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(14,25.08359);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(15,24.40841);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(16,23.99763);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(17,23.20895);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(18,22.52289);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(19,21.51195);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(20,20.29673);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(21,19.01226);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(22,17.38085);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(23,15.47152);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(24,13.59536);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(25,11.54477);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(26,9.475486);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(27,7.384736);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(28,5.462487);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(29,3.721544);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(30,2.623489);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(31,3.044253);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetEntries(6426049);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(1,0.279517);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(2,323.4281);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(3,941.6787);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(4,1099.193);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(5,1324.129);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(6,1268.865);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(7,1129.922);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(8,1039.935);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(9,925.877);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(10,857.8116);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(11,774.6947);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(12,708.4979);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(13,655.921);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(14,624.3655);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(15,561.2017);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(16,498.4375);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(17,436.5434);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(18,406.5196);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(19,329.031);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(20,313.5229);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(21,215.9024);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(22,175.6344);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(23,140.9719);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(24,115.0881);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(25,87.89516);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(26,51.00079);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(27,37.16504);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(28,23.13484);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(29,16.13718);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(30,5.566574);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(31,13.65949);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(1,0.279517);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(2,12.41799);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(3,26.29603);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(4,31.93332);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(5,36.69927);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(6,34.20121);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(7,31.03621);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(8,28.12803);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(9,25.13893);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(10,25.24546);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(11,22.30939);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(12,20.35854);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(13,19.94559);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(14,19.50423);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(15,17.27596);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(16,16.50856);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(17,14.80785);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(18,16.87003);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(19,13.24499);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(20,16.44414);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(21,11.6172);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(22,11.09146);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(23,9.779793);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(24,9.224841);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(25,7.700903);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(26,3.840355);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(27,4.116633);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(28,1.967076);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(29,3.660818);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(30,0.9896834);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(31,4.311724);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetEntries(94081);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(2,213.5302);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(3,428.2662);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(4,477.0477);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(5,555.1718);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(6,567.5732);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(7,503.753);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(8,525.4554);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(9,529.3581);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(10,384.8563);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(11,442.2746);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(12,349.6194);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(13,358.614);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(14,345.3159);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(15,345.5797);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(16,274.6984);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(17,295.2722);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(18,220.9303);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(19,205.4171);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(20,175.933);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(21,128.7505);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(22,131.8479);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(23,98.31915);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(24,51.9851);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(25,46.04374);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(26,22.95136);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(27,14.16301);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(28,14.95562);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(29,12.88681);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(30,4.012996);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(31,15.17403);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(2,21.15685);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(3,25.99989);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(4,35.09856);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(5,34.36551);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(6,32.5169);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(7,29.72179);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(8,33.73691);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(9,30.91685);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(10,18.79509);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(11,24.41378);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(12,20.94295);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(13,20.80781);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(14,21.56818);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(15,22.97203);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(16,16.03789);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(17,23.85809);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(18,17.37307);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(19,18.15425);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(20,17.84805);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(21,11.25234);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(22,17.33352);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(23,14.74391);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(24,7.545311);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(25,9.289613);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(26,2.410349);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(27,1.67777);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(28,2.738819);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(29,2.850237);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(30,1.200912);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(31,8.6534);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetEntries(65948);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(2,2.149909);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(3,8.330897);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(4,6.046618);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(5,5.77788);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(6,2.956125);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(7,4.299818);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(8,6.180988);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(9,4.299818);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(10,3.493602);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(11,3.359232);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(12,3.89671);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(13,3.090494);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(14,4.837295);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(15,3.89671);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(16,2.418647);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(17,2.821755);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(18,1.612432);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(19,1.88117);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(20,1.88117);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(21,1.343693);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(22,0.9405851);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(23,0.2687386);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(24,0.4031079);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(25,0.2687386);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(27,0.1343693);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(28,0.2687386);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(31,0.1343693);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(2,0.5374772);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(3,1.058025);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(4,0.9013767);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(5,0.8811184);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(6,0.6302479);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(7,0.7601075);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(8,0.9113369);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(9,0.7601075);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(10,0.6851517);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(11,0.6718465);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(12,0.7236008);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(13,0.6444125);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(14,0.8062158);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(15,0.7236008);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(16,0.5700807);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(17,0.6157575);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(18,0.4654689);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(19,0.5027639);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(20,0.5027639);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(21,0.424913);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(22,0.3555077);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(23,0.1900269);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(24,0.2327345);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(25,0.1900269);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(27,0.1343693);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(28,0.1900269);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(31,0.1343693);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(2,6.756837);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(3,17.00107);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(4,13.40469);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(5,10.24424);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(6,7.846649);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(7,7.846649);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(8,5.884987);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(9,5.558043);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(10,5.667024);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(11,4.904156);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(12,5.340081);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(13,5.993968);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(14,4.468231);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(15,3.814343);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(16,4.032306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(17,3.4874);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(18,3.160456);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(19,2.833512);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(20,0.9808311);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(21,1.416756);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(22,1.525737);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(23,1.416756);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(24,0.8718499);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(25,1.089812);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(26,0.2179625);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(27,0.5449062);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(28,0.2179625);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(29,0.1089812);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(31,0.1089812);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(2,0.8581191);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(3,1.361175);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(4,1.20866);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(5,1.056612);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(6,0.9247365);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(7,0.9247365);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(8,0.8008453);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(9,0.7782817);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(10,0.7858749);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(11,0.7310684);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(12,0.7628687);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(13,0.8082265);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(14,0.6978204);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(15,0.6447417);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(16,0.662907);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(17,0.616491);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(18,0.5868819);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(19,0.5556975);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(20,0.3269437);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(21,0.3929374);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(22,0.4077705);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(23,0.3929374);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(24,0.3082455);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(25,0.3446289);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(26,0.1541227);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(27,0.2436895);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(28,0.1541227);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(29,0.1089812);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(31,0.1089812);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetEntries(1163);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(2,7.782629);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(3,20.4294);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(4,19.94299);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(5,17.51091);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(6,11.18753);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(7,8.51225);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(8,8.998665);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(9,7.782629);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(10,6.8098);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(11,6.323386);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(12,6.080179);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(13,4.864143);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(14,4.864143);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(15,3.891314);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(16,5.350557);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(17,4.864143);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(18,4.377729);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(19,2.918486);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(20,1.70245);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(21,1.70245);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(22,0.4864143);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(23,1.70245);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(24,1.459243);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(25,0.9728286);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(26,0.2432072);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(28,0.7296215);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(2,1.375787);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(3,2.22903);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(4,2.202334);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(5,2.063681);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(6,1.649511);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(7,1.438833);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(8,1.479371);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(9,1.375787);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(10,1.286931);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(11,1.240118);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(12,1.216036);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(13,1.087655);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(14,1.087655);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(15,0.9728286);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(16,1.140743);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(17,1.087655);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(18,1.031841);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(19,0.8424943);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(20,0.6434656);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(21,0.6434656);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(22,0.3439469);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(23,0.6434656);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(24,0.5957334);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(25,0.4864143);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(26,0.2432072);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(27,0.2432072);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(28,0.4212471);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(1,0.004158668);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(2,4.930794);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(3,14.87833);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(4,15.28726);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(5,11.8328);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(6,8.048408);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(7,6.024523);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(8,4.634142);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(9,4.175302);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(10,3.608337);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(11,3.182767);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(12,2.847301);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(13,2.481338);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(14,2.380144);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(15,2.255384);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(16,2.039133);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(17,1.881104);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(18,1.616336);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(19,1.423651);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(20,1.221262);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(21,1.126999);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(22,0.9786731);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(23,0.8899549);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(24,0.7111322);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(25,0.6002344);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(26,0.4200254);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(27,0.2439752);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(28,0.1400085);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(29,0.05129024);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(30,0.0304969);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(31,0.02356578);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(1,0.002401008);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(2,0.08267513);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(3,0.1436129);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(4,0.1455732);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(5,0.1280738);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(6,0.1056262);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(7,0.09138561);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(8,0.08014956);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(9,0.07607824);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(10,0.07072453);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(11,0.06642307);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(12,0.0628251);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(13,0.05864885);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(14,0.05744049);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(15,0.0559148);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(16,0.05316665);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(17,0.05106495);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(18,0.04733499);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(19,0.04442405);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(20,0.04114537);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(21,0.03952558);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(22,0.03683285);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(23,0.03512372);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(24,0.03139725);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(25,0.02884542);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(26,0.02412983);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(27,0.01839032);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(28,0.01393136);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(29,0.008432063);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(30,0.00650196);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(31,0.005715542);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetEntries(72116);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(1,0.0007178152);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(2,1.362054);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(3,4.787468);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(4,5.456472);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(5,4.652519);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(6,3.269648);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(7,2.567984);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(8,2.126169);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(9,1.877804);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(10,1.723833);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(11,1.5311);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(12,1.360978);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(13,1.195162);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(14,1.112614);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(15,1.05806);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(16,0.9837657);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(17,0.9137787);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(18,0.7820596);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(19,0.6682859);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(20,0.6201923);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(21,0.51252);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(22,0.4586839);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(23,0.3714694);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(24,0.2932275);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(25,0.206013);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(26,0.1432041);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(27,0.09582833);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(28,0.0473758);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(29,0.02763588);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(30,0.007895967);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(31,0.01040832);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(1,0.000507572);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(2,0.02210999);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(3,0.04145188);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(4,0.04425347);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(5,0.04086348);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(6,0.03425641);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(7,0.030359);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(8,0.02762423);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(9,0.02596071);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(10,0.02487362);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(11,0.02344191);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(12,0.02210125);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(13,0.02071118);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(14,0.01998313);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(15,0.01948706);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(16,0.01879045);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(17,0.01810972);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(18,0.01675372);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(19,0.01548718);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(20,0.01491951);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(21,0.01356272);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(22,0.01283063);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(23,0.01154657);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(24,0.01025873);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(25,0.008598815);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(26,0.007169173);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(27,0.005864598);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(28,0.004123534);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(29,0.003149401);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(30,0.001683426);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(31,0.001932777);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(2,0.0382901);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(3,0.1449554);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(4,0.1367504);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(5,0.1203403);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(6,0.09025525);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(7,0.05743516);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(8,0.04923013);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(9,0.03282009);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(10,0.04923013);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(11,0.04923013);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(12,0.03008508);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(13,0.01641004);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(14,0.04376012);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(15,0.03008508);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(16,0.02461507);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(17,0.01641004);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(18,0.01641004);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(19,0.01367504);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(20,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(21,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(22,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(23,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(24,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(25,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(26,0.01367504);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(27,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(28,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(2,0.01023346);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(3,0.01991115);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(4,0.01933942);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(5,0.01814199);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(6,0.01571142);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(7,0.01253338);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(8,0.01160365);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(9,0.009474344);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(10,0.01160365);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(11,0.01160365);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(12,0.009070994);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(13,0.006699373);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(14,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(15,0.009070994);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(16,0.008205022);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(17,0.006699373);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(18,0.006699373);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(19,0.006115663);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(20,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(21,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(22,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(23,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(24,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(25,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(26,0.006115663);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(27,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(28,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(2,0.009288912);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(3,0.03929924);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(4,0.05466167);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(5,0.04251464);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(6,0.03965651);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(7,0.03143939);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(8,0.02465134);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(9,0.02215048);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(10,0.01857782);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(11,0.01393337);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(12,0.01393337);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(13,0.008931646);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(14,0.007859849);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(15,0.0135761);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(16,0.007145317);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(17,0.009288912);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(18,0.009288912);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(19,0.008217114);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(20,0.007502583);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(21,0.005358988);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(22,0.003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(23,0.005001722);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(24,0.003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(25,0.002500861);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(26,0.001071798);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(27,0.001071798);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(2,0.001821706);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(3,0.003747036);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(4,0.004419134);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(5,0.00389731);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(6,0.003764029);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(7,0.003351451);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(8,0.002967673);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(9,0.002813114);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(10,0.002576281);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(11,0.002231125);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(12,0.002231125);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(13,0.001786329);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(14,0.001675725);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(15,0.002202335);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(16,0.001597741);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(17,0.001821706);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(18,0.001821706);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(19,0.001713387);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(20,0.001637198);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(21,0.001383685);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(22,0.001129774);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(23,0.001336766);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(24,0.001129774);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(25,0.0009452366);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(26,0.0006188026);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(27,0.0006188026);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1__386 = new TH1D("VbbHcc_algo_H_dR_Bj1__386","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(1,26);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(2,22334);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(3,50781);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(4,52195);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(5,60853);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(6,61467);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(7,58916);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(8,55959);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(9,51760);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(10,49076);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(11,45631);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(12,43415);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(13,41313);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(14,38831);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(15,36387);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(16,33898);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(17,29596);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(18,25424);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(19,21599);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(20,17986);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(21,14513);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(22,11424);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(23,9177);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(24,6990);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(25,5432);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(26,3930);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(27,2906);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(28,1882);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(29,1085);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(30,624);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(31,638);
   VbbHcc_algo_H_dR_Bj1__386->SetEntries(856077);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1__386->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1__386->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1__386->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1__386->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__386->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fx1281[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fy1281[30] = {
   31.44849,
   89508.56,
   202525,
   250380.4,
   310725.1,
   341249.6,
   284063.1,
   257519.1,
   264769.5,
   207759.4,
   201332.5,
   174597.2,
   176531.7,
   162812.9,
   138844.8,
   136168.9,
   127182.1,
   95114.39,
   82798.19,
   71401.64,
   58103.29,
   41337.43,
   37737.91,
   31176.27,
   21498.21,
   18079.64,
   9757.467,
   5623.943,
   3746.375,
   4324.191};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fex1281[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fey1281[30] = {
   23.10961,
   5492.622,
   7199.093,
   8281.335,
   10233.66,
   22501.65,
   9478.13,
   9476.597,
   22066.63,
   7766.785,
   21282.44,
   7245.742,
   21139.01,
   7120.941,
   6120.16,
   6395.919,
   6573.372,
   5467.873,
   4490.965,
   4970.529,
   3823.398,
   2510.14,
   2800.209,
   3678.758,
   2621.811,
   2215.05,
   1198.566,
   872.6046,
   816.3671,
   2061.551};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_fx1281,Graph_from_VbbHcc_algo_H_dR_Bj1_fy1281,Graph_from_VbbHcc_algo_H_dR_Bj1_fex1281,Graph_from_VbbHcc_algo_H_dR_Bj1_fey1281);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetMinimum(7.504995);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetMaximum(400125.5);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__387 = new TH1D("data_mc_ratio__387","",30,0,6);
   data_mc_ratio__387->SetBinContent(1,0.8267487);
   data_mc_ratio__387->SetBinContent(2,0.249518);
   data_mc_ratio__387->SetBinContent(3,0.2507395);
   data_mc_ratio__387->SetBinContent(4,0.2084628);
   data_mc_ratio__387->SetBinContent(5,0.1958419);
   data_mc_ratio__387->SetBinContent(6,0.1801233);
   data_mc_ratio__387->SetBinContent(7,0.2074046);
   data_mc_ratio__387->SetBinContent(8,0.2173004);
   data_mc_ratio__387->SetBinContent(9,0.1954908);
   data_mc_ratio__387->SetBinContent(10,0.2362155);
   data_mc_ratio__387->SetBinContent(11,0.2266449);
   data_mc_ratio__387->SetBinContent(12,0.248658);
   data_mc_ratio__387->SetBinContent(13,0.234026);
   data_mc_ratio__387->SetBinContent(14,0.2385008);
   data_mc_ratio__387->SetBinContent(15,0.2620696);
   data_mc_ratio__387->SetBinContent(16,0.2489408);
   data_mc_ratio__387->SetBinContent(17,0.2327058);
   data_mc_ratio__387->SetBinContent(18,0.2672992);
   data_mc_ratio__387->SetBinContent(19,0.2608632);
   data_mc_ratio__387->SetBinContent(20,0.251899);
   data_mc_ratio__387->SetBinContent(21,0.2497793);
   data_mc_ratio__387->SetBinContent(22,0.2763597);
   data_mc_ratio__387->SetBinContent(23,0.2431772);
   data_mc_ratio__387->SetBinContent(24,0.224209);
   data_mc_ratio__387->SetBinContent(25,0.2526722);
   data_mc_ratio__387->SetBinContent(26,0.2173716);
   data_mc_ratio__387->SetBinContent(27,0.2978232);
   data_mc_ratio__387->SetBinContent(28,0.3346407);
   data_mc_ratio__387->SetBinContent(29,0.2896133);
   data_mc_ratio__387->SetBinContent(30,0.1443044);
   data_mc_ratio__387->SetBinContent(31,0.1951788);
   data_mc_ratio__387->SetBinError(1,0.1621388);
   data_mc_ratio__387->SetBinError(2,0.001669624);
   data_mc_ratio__387->SetBinError(3,0.001112685);
   data_mc_ratio__387->SetBinError(4,0.0009124607);
   data_mc_ratio__387->SetBinError(5,0.000793898);
   data_mc_ratio__387->SetBinError(6,0.0007265222);
   data_mc_ratio__387->SetBinError(7,0.0008544799);
   data_mc_ratio__387->SetBinError(8,0.0009185982);
   data_mc_ratio__387->SetBinError(9,0.0008592691);
   data_mc_ratio__387->SetBinError(10,0.001066286);
   data_mc_ratio__387->SetBinError(11,0.001061002);
   data_mc_ratio__387->SetBinError(12,0.00119339);
   data_mc_ratio__387->SetBinError(13,0.001151385);
   data_mc_ratio__387->SetBinError(14,0.001210321);
   data_mc_ratio__387->SetBinError(15,0.001373863);
   data_mc_ratio__387->SetBinError(16,0.001352101);
   data_mc_ratio__387->SetBinError(17,0.001352666);
   data_mc_ratio__387->SetBinError(18,0.001676393);
   data_mc_ratio__387->SetBinError(19,0.00177499);
   data_mc_ratio__387->SetBinError(20,0.001878275);
   data_mc_ratio__387->SetBinError(21,0.002073375);
   data_mc_ratio__387->SetBinError(22,0.002585626);
   data_mc_ratio__387->SetBinError(23,0.002538473);
   data_mc_ratio__387->SetBinError(24,0.002681726);
   data_mc_ratio__387->SetBinError(25,0.003428291);
   data_mc_ratio__387->SetBinError(26,0.003467421);
   data_mc_ratio__387->SetBinError(27,0.005524726);
   data_mc_ratio__387->SetBinError(28,0.007713809);
   data_mc_ratio__387->SetBinError(29,0.008792323);
   data_mc_ratio__387->SetBinError(30,0.005776801);
   data_mc_ratio__387->SetBinError(31,0.0911001);
   data_mc_ratio__387->SetMinimum(0.4);
   data_mc_ratio__387->SetMaximum(1.6);
   data_mc_ratio__387->SetEntries(145.3225);
   data_mc_ratio__387->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__387->SetLineColor(ci);
   data_mc_ratio__387->SetLineWidth(2);
   data_mc_ratio__387->SetMarkerStyle(20);
   data_mc_ratio__387->SetMarkerSize(1.2);
   data_mc_ratio__387->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__387->GetXaxis()->SetRange(1,30);
   data_mc_ratio__387->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__387->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__387->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__387->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__387->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__387->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__387->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__387->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__387->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__387->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__387->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__387->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__387->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__387->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__387->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__387->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__387->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1282[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1282[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1282[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1282[30] = {
   0.73484,
   0.06136421,
   0.0355467,
   0.03307502,
   0.03293479,
   0.06593899,
   0.03336628,
   0.0367996,
   0.08334281,
   0.03738355,
   0.1057079,
   0.04149975,
   0.1197462,
   0.04373697,
   0.04407916,
   0.04697048,
   0.05168474,
   0.05748734,
   0.05423989,
   0.06961366,
   0.06580346,
   0.06072318,
   0.07420149,
   0.1179986,
   0.1219548,
   0.1225163,
   0.1228358,
   0.1551589,
   0.2179085,
   0.4767485};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1282,Graph_from_mc_statistical_error_fy1282,Graph_from_mc_statistical_error_fex1282,Graph_from_mc_statistical_error_fey1282);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1282 = new TH1F("Graph_Graph_from_mc_statistical_error1282","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1282->SetMinimum(0.118192);
   Graph_Graph_from_mc_statistical_error1282->SetMaximum(1.881808);
   Graph_Graph_from_mc_statistical_error1282->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1282->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1282->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1282);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
