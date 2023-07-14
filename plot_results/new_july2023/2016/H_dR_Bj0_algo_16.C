void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Fri Jul 14 13:38:24 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(0,0,1,1);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-270.7209,6.314516,270460.2);
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
   st->SetMaximum(231797.2);
   
   TH1F *st_stack_137 = new TH1F("st_stack_137","",30,0,6);
   st_stack_137->SetMinimum(0.01);
   st_stack_137->SetMaximum(243387.1);
   st_stack_137->SetDirectory(0);
   st_stack_137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_137->SetLineColor(ci);
   st_stack_137->GetXaxis()->SetRange(1,30);
   st_stack_137->GetXaxis()->SetLabelFont(42);
   st_stack_137->GetXaxis()->SetLabelSize(0.035);
   st_stack_137->GetXaxis()->SetTitleSize(0.035);
   st_stack_137->GetXaxis()->SetTitleFont(42);
   st_stack_137->GetYaxis()->SetTitle("Events/0.2");
   st_stack_137->GetYaxis()->SetLabelFont(42);
   st_stack_137->GetYaxis()->SetLabelSize(0.05);
   st_stack_137->GetYaxis()->SetTitleSize(0.057);
   st_stack_137->GetYaxis()->SetTitleOffset(1.2);
   st_stack_137->GetYaxis()->SetTitleFont(42);
   st_stack_137->GetZaxis()->SetLabelFont(42);
   st_stack_137->GetZaxis()->SetLabelSize(0.035);
   st_stack_137->GetZaxis()->SetTitleSize(0.035);
   st_stack_137->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_137);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,39588.48);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,97017.63);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,71988.02);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,52345.53);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,51253.38);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,20480.44);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,17099.61);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,10929.65);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,7500.021);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,5541.833);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,4298.112);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,7348.999);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,2560.68);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,2056.03);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,3087.127);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,3520.602);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,2176.464);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,650.4068);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,384.072);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1740.409);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,17.06857);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,66.2429);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,43.85572);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(25,21.92786);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,268.7956);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,3.005513);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(28,21.92786);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,2568.593);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,5368.712);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,5275.317);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,5228.936);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,20779.35);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,2727.258);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,2615.378);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,1949.119);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,1160.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,1020.922);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,867.259);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,2216.693);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,671.0776);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,611.4769);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,813.8385);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,897.4962);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,715.1025);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,382.428);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,272.6555);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,1444.034);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,10.38836);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,37.98295);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,31.01068);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(25,21.92786);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,268.7956);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,3.005513);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(28,21.92786);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(15710);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,205.6661);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,585.7177);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,477.8851);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,328.2827);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,220.6903);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,158.0175);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,124.9394);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,100.8014);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,84.73591);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,72.73014);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,50.88879);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,43.98427);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,42.33216);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,31.22498);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,26.7081);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,17.80889);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,13.70411);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,11.84585);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,7.94084);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,5.415576);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,2.989824);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,1.788699);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,2.108205);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,0.5235723);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,0.6290502);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,0.1820859);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,0.3274335);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.1015826);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.4031994);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.3121269);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,0.290695);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,5.868734);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,8.95763);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,7.774921);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,6.355776);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,5.210973);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,4.36916);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,3.926401);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,3.389934);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,3.153419);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,3.051432);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,2.316478);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,2.193848);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,2.240196);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,1.870859);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,1.750745);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,1.455657);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,1.106356);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.149373);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,0.9165295);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,0.8145704);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.5050973);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.4464798);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.5759625);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.1582889);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.2946392);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.0912461);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.1240997);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.07182977);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2767147);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.2719072);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.1189528);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(39281);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(1,1550.478);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(2,5613.337);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(3,5197.132);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(4,3628.189);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(5,2377.843);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(6,1654.655);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(7,1222.838);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(8,972.2327);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(9,778.8073);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(10,610.9543);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(11,489.1851);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(12,404.4831);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(13,349.0006);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(14,309.7704);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(15,267.9447);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(16,220.1559);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(17,178.252);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(18,136.9304);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(19,93.68555);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(20,63.35066);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(21,35.614);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(22,20.26445);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(23,12.81714);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(24,7.49169);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(25,4.809483);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(26,2.82202);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(27,1.676027);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(28,1.548332);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(29,1.094695);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(30,0.4322075);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(31,1.47042);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(1,9.551123);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(2,18.27763);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(3,17.72551);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(4,14.8495);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(5,12.02612);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(6,10.03135);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(7,8.616836);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(8,7.697511);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(9,6.881788);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(10,6.093342);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(11,5.455448);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(12,4.953505);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(13,4.615636);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(14,4.360653);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(15,4.04955);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(16,3.671207);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(17,3.307508);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(18,2.898062);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(19,2.380982);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(20,1.9642);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(21,1.47917);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(22,1.109498);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(23,0.8823862);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(24,0.6643739);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(25,0.5324588);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(26,0.4011457);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(27,0.3212453);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(28,0.307818);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(29,0.2609463);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(30,0.1650096);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(31,0.2928841);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetEntries(446835);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(1,316.0203);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(2,648.2925);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(3,506.0873);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(4,270.7595);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(5,169.8315);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(6,135.7404);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(7,101.328);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(8,73.68942);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(9,44.10168);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(10,57.17895);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(11,30.33927);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(12,35.58547);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(13,29.39463);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(14,19.75812);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(15,11.99551);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(16,17.90692);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(17,5.26101);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(18,4.758388);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(19,7.529194);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(20,1.149658);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(21,0.6588116);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(22,0.5140567);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(24,0.559034);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(25,0.279517);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(27,0.279517);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(1,7.63306);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(2,18.29582);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(3,23.12831);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(4,15.47278);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(5,12.88383);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(6,12.11534);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(7,10.92775);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(8,9.005777);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(9,4.659275);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(10,8.050467);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(11,5.091034);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(12,5.823707);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(13,6.238527);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(14,4.177952);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(15,3.042274);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(16,5.50183);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(17,1.117367);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(18,1.020749);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(19,3.843488);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(20,0.4473441);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(21,0.3271244);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(22,0.3105898);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(24,0.3952968);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(25,0.279517);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(27,0.279517);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetEntries(15848);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(1,176.4158);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(2,415.4724);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(3,233.9985);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(4,162.9234);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(5,77.31828);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(6,82.32735);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(7,53.54779);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(8,23.20213);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(9,22.27685);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(10,17.6055);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(11,18.94413);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(12,15.76574);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(13,15.21793);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(14,18.20353);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(15,6.76419);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(16,9.041613);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(17,3.955348);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(18,2.082117);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(19,0.9315978);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(20,2.573592);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(21,0.1485579);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(22,0.4312031);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(24,0.1485579);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(26,0.07097071);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(1,9.629832);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(2,27.65748);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(3,22.70768);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(4,20.20852);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(5,10.6182);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(6,14.93228);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(7,11.67144);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(8,3.518501);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(9,3.543648);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(10,3.28672);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(11,6.714196);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(12,6.533781);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(13,6.603153);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(14,6.975054);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(15,2.153318);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(16,6.320144);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(17,1.813166);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(18,1.132091);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(19,0.5379897);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(20,1.508305);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(21,0.1485579);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(22,0.3671569);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(24,0.1485579);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(26,0.07097071);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetEntries(9338);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,0.687355);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(2,1.546549);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,0.7732744);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,0.3436775);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,0.6014356);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,0.2577581);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(7,0.1718388);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(8,0.1718388);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(9,0.1718388);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(11,0.08591938);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(14,0.08591938);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,0.2430167);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(2,0.364525);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,0.2577581);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,0.1718388);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.2273213);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.1488167);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(7,0.1215083);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(8,0.1215083);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(9,0.1215083);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(11,0.08591938);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(14,0.08591938);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(57);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,7.072265);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,10.3854);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,5.033414);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,1.656566);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,1.529138);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,0.7645692);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,0.5097128);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,0.2548564);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,0.3185705);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(10,0.3185705);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(11,0.1274282);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(12,0.2548564);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(14,0.2548564);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(15,0.1274282);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(16,0.0637141);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(17,0.1274282);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(18,0.1911423);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(19,0.0637141);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(21,0.0637141);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(25,0.0637141);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,0.6712697);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,0.8134471);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,0.5663033);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,0.3248794);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,0.312134);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,0.2207121);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,0.1802107);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,0.1274282);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.142469);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(10,0.142469);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(11,0.09010534);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(12,0.1274282);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(14,0.1274282);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(15,0.09010534);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(16,0.0637141);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(17,0.09010534);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(18,0.1103561);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(19,0.0637141);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(21,0.0637141);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(25,0.0637141);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(458);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,5.919662);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,9.327952);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,4.663976);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,2.870139);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,0.7175348);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,1.43507);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,0.5381511);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(8,1.076302);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,0.1793837);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,0.3587674);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(12,0.5381511);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(14,0.1793837);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(16,0.1793837);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,1.030481);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,1.293554);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,0.914681);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,0.7175348);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,0.3587674);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,0.5073737);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,0.3107017);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(8,0.4393985);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,0.1793837);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,0.2536869);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(12,0.3107017);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(14,0.1793837);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(16,0.1793837);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(1,2.973959);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(2,4.779577);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(3,2.462207);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(4,1.274554);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(5,0.747628);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(6,0.477268);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(7,0.391746);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(8,0.3227767);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(9,0.2413928);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(10,0.2055287);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(11,0.1503532);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(12,0.1117304);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(13,0.1089716);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(14,0.09655712);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(15,0.08000447);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(16,0.07586631);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(17,0.04965795);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(18,0.04827856);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(19,0.03034652);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(20,0.02482897);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(21,0.009655712);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(22,0.004138162);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(23,0.001379387);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(31,0.001379387);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(1,0.06404875);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(2,0.08119661);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(3,0.0582781);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(4,0.04192975);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(5,0.03211337);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(6,0.02565809);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(7,0.02324585);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(8,0.02110057);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(9,0.01824758);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(10,0.01683757);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(11,0.01440123);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(12,0.01241449);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(13,0.01226026);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(14,0.01154078);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(15,0.0105051);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(16,0.01022981);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(17,0.008276324);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(18,0.008160566);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(19,0.0064699);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(20,0.005852245);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(21,0.003649516);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(22,0.002389169);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(23,0.001379387);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(31,0.001379387);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetEntries(10635);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(1,0.8181356);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(2,1.972119);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(3,1.059101);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(4,0.5632067);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(5,0.3208094);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(6,0.224495);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(7,0.178307);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(8,0.1328351);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(9,0.1099202);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(10,0.08091844);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(11,0.05871958);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(12,0.05370693);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(13,0.04081727);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(14,0.0426075);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(15,0.0426075);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(16,0.02900174);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(17,0.02219886);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(18,0.01288966);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(19,0.01002529);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(20,0.006086786);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(21,0.004296554);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(22,0.001790231);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(23,0.001432185);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(24,0.0007160924);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(25,0.0003580462);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(26,0.0007160924);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(27,0.0003580462);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(28,0.0003580462);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(1,0.01711521);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(2,0.02657272);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(3,0.01947324);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(4,0.01420049);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(5,0.01071749);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(6,0.008965466);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(7,0.007990128);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(8,0.006896457);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(9,0.006273476);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(10,0.005382615);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(11,0.004585229);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(12,0.004385153);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(13,0.003822887);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(14,0.003905823);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(15,0.003905823);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(16,0.003222416);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(17,0.002819259);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(18,0.002148277);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(19,0.001894602);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(20,0.001476262);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(21,0.001240308);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(22,0.0008006157);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(23,0.0007160924);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(24,0.0005063538);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(25,0.0003580462);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(26,0.0005063538);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(27,0.0003580462);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(28,0.0003580462);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.0738452);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.2215356);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.1176053);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.06290517);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.04376012);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.01914505);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.01094003);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.01914505);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(10,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(12,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(18,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.01421152);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.02461507);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.01793464);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.01311663);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.01094003);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.00723615);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.00723615);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.003867885);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(10,0.003867885);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(12,0.003867885);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(13,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.003867885);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(18,0.003867885);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(222);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(1,0.01536243);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(2,0.07967028);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(3,0.05251808);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(4,0.02679494);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(5,0.01750603);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(6,0.008931646);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(7,0.002858127);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(8,0.003929924);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(9,0.001786329);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(10,0.002858127);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(13,0.001786329);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(14,0.001071798);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(16,0.002143595);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(17,0.001071798);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(18,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(19,0.001071798);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(1,0.002342749);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(2,0.005335117);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(3,0.004331618);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(4,0.003094013);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(5,0.002500861);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(6,0.001786329);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(7,0.0010105);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(8,0.001184917);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(9,0.0007988707);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(10,0.0010105);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(13,0.0007988707);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(14,0.0006188026);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(16,0.000875119);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(17,0.0006188026);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(18,0.0005052502);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(19,0.0006188026);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetEntries(620);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj0__273 = new TH1D("VbbHcc_algo_H_dR_Bj0__273","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(1,16607);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(2,28264);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(3,17958);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(4,11612);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(5,7534);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(6,5620);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(7,4088);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(8,3283);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(9,2534);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(10,2077);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(11,1666);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(12,1349);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(13,1087);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(14,930);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(15,693);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(16,534);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(17,403);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(18,284);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(19,179);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(20,128);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(21,79);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(22,49);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(23,22);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(24,17);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(25,9);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(26,8);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(27,5);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(28,7);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(29,2);
   VbbHcc_algo_H_dR_Bj0__273->SetBinContent(31,5);
   VbbHcc_algo_H_dR_Bj0__273->SetEntries(107033);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0__273->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0__273->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0__273->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0__273->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0__273->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0__273->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__273->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__273->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__273->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__273->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__273->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__273->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__273->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0__273->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__273->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__273->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__273->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__273->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__273->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fx1273[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fy1273[30] = {
   41854.62,
   104308.8,
   78417.29,
   56742.48,
   54103.04,
   22514.37,
   18604.07,
   12101.56,
   8430.971,
   6301.274,
   4887.895,
   7849.781,
   2996.78,
   2435.653,
   3400.793,
   3785.865,
   2377.837,
   806.2821,
   494.2643,
   1812.929,
   56.56017,
   89.24724,
   58.78388,
   8.72357,
   27.70998,
   271.8714,
   5.288849,
   23.57813,
   1.497895,
   0.7443344};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fex1273[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fey1273[30] = {
   2568.647,
   5368.854,
   5275.452,
   5229.023,
   20779.36,
   2727.348,
   2615.444,
   1949.161,
   1160.639,
   1020.982,
   867.3202,
   2216.717,
   671.1586,
   611.5494,
   813.859,
   897.5441,
   715.1142,
   382.4438,
   272.6951,
   1444.036,
   10.51162,
   38.00481,
   31.02858,
   0.8029803,
   21.93818,
   268.7959,
   3.038065,
   21.93014,
   0.3803472,
   0.3180593};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_fx1273,Graph_from_VbbHcc_algo_H_dR_Bj0_fy1273,Graph_from_VbbHcc_algo_H_dR_Bj0_fex1273,Graph_from_VbbHcc_algo_H_dR_Bj0_fey1273);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetMinimum(0.3836476);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetMaximum(120645.3);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__274 = new TH1D("data_mc_ratio__274","",30,0,6);
   data_mc_ratio__274->SetBinContent(1,0.3967782);
   data_mc_ratio__274->SetBinContent(2,0.2709648);
   data_mc_ratio__274->SetBinContent(3,0.2290056);
   data_mc_ratio__274->SetBinContent(4,0.2046439);
   data_mc_ratio__274->SetBinContent(5,0.1392528);
   data_mc_ratio__274->SetBinContent(6,0.2496184);
   data_mc_ratio__274->SetBinContent(7,0.2197369);
   data_mc_ratio__274->SetBinContent(8,0.2712874);
   data_mc_ratio__274->SetBinContent(9,0.3005585);
   data_mc_ratio__274->SetBinContent(10,0.3296159);
   data_mc_ratio__274->SetBinContent(11,0.340842);
   data_mc_ratio__274->SetBinContent(12,0.1718519);
   data_mc_ratio__274->SetBinContent(13,0.3627227);
   data_mc_ratio__274->SetBinContent(14,0.3818278);
   data_mc_ratio__274->SetBinContent(15,0.203776);
   data_mc_ratio__274->SetBinContent(16,0.141051);
   data_mc_ratio__274->SetBinContent(17,0.1694818);
   data_mc_ratio__274->SetBinContent(18,0.3522341);
   data_mc_ratio__274->SetBinContent(19,0.3621544);
   data_mc_ratio__274->SetBinContent(20,0.07060397);
   data_mc_ratio__274->SetBinContent(21,1.396743);
   data_mc_ratio__274->SetBinContent(22,0.5490366);
   data_mc_ratio__274->SetBinContent(23,0.3742523);
   data_mc_ratio__274->SetBinContent(24,1.948743);
   data_mc_ratio__274->SetBinContent(25,0.3247927);
   data_mc_ratio__274->SetBinContent(26,0.02942568);
   data_mc_ratio__274->SetBinContent(27,0.9453853);
   data_mc_ratio__274->SetBinContent(28,0.2968852);
   data_mc_ratio__274->SetBinContent(29,1.335207);
   data_mc_ratio__274->SetBinContent(31,2.836889);
   data_mc_ratio__274->SetBinError(1,0.003078947);
   data_mc_ratio__274->SetBinError(2,0.001611744);
   data_mc_ratio__274->SetBinError(3,0.001708902);
   data_mc_ratio__274->SetBinError(4,0.001899089);
   data_mc_ratio__274->SetBinError(5,0.00160432);
   data_mc_ratio__274->SetBinError(6,0.003329725);
   data_mc_ratio__274->SetBinError(7,0.003436746);
   data_mc_ratio__274->SetBinError(8,0.00473472);
   data_mc_ratio__274->SetBinError(9,0.005970707);
   data_mc_ratio__274->SetBinError(10,0.007232524);
   data_mc_ratio__274->SetBinError(11,0.008350561);
   data_mc_ratio__274->SetBinError(12,0.00467895);
   data_mc_ratio__274->SetBinError(13,0.0110017);
   data_mc_ratio__274->SetBinError(14,0.01252063);
   data_mc_ratio__274->SetBinError(15,0.007740811);
   data_mc_ratio__274->SetBinError(16,0.006103873);
   data_mc_ratio__274->SetBinError(17,0.008442488);
   data_mc_ratio__274->SetBinError(18,0.02090125);
   data_mc_ratio__274->SetBinError(19,0.02706869);
   data_mc_ratio__274->SetBinError(20,0.006240568);
   data_mc_ratio__274->SetBinError(21,0.1571458);
   data_mc_ratio__274->SetBinError(22,0.07843379);
   data_mc_ratio__274->SetBinError(23,0.07979086);
   data_mc_ratio__274->SetBinError(24,0.4726397);
   data_mc_ratio__274->SetBinError(25,0.1082642);
   data_mc_ratio__274->SetBinError(26,0.01040355);
   data_mc_ratio__274->SetBinError(27,0.4227892);
   data_mc_ratio__274->SetBinError(28,0.1122121);
   data_mc_ratio__274->SetBinError(29,0.9441343);
   data_mc_ratio__274->SetBinError(31,1.366927);
   data_mc_ratio__274->SetMinimum(0.4);
   data_mc_ratio__274->SetMaximum(1.6);
   data_mc_ratio__274->SetEntries(69.06937);
   data_mc_ratio__274->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__274->SetLineColor(ci);
   data_mc_ratio__274->SetLineWidth(2);
   data_mc_ratio__274->SetMarkerStyle(20);
   data_mc_ratio__274->SetMarkerSize(1.2);
   data_mc_ratio__274->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__274->GetXaxis()->SetRange(1,30);
   data_mc_ratio__274->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__274->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__274->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__274->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__274->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__274->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__274->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__274->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__274->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__274->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__274->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__274->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__274->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__274->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__274->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__274->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__274->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1274[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1274[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1274[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1274[30] = {
   0.06137069,
   0.05147078,
   0.06727409,
   0.09215359,
   0.3840701,
   0.1211381,
   0.1405845,
   0.161067,
   0.1376638,
   0.1620279,
   0.1774425,
   0.2823922,
   0.2239599,
   0.2510824,
   0.2393145,
   0.2370777,
   0.3007415,
   0.47433,
   0.551719,
   0.796521,
   0.1858485,
   0.4258374,
   0.5278416,
   0.09204721,
   0.7917066,
   0.9886878,
   0.5744284,
   0.930105,
   0.2539212,
   0.427307};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1274,Graph_from_mc_statistical_error_fy1274,Graph_from_mc_statistical_error_fex1274,Graph_from_mc_statistical_error_fey1274);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1274 = new TH1F("Graph_Graph_from_mc_statistical_error1274","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1274->SetMinimum(0.010181);
   Graph_Graph_from_mc_statistical_error1274->SetMaximum(2.186425);
   Graph_Graph_from_mc_statistical_error1274->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1274->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1274->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1274);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
