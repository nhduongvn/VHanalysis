void H_dR_both_all_logY()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Tue Aug 22 09:18:19 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(0,0,1,1);
   H_dR_both_all->SetFillColor(0);
   H_dR_both_all->SetFillStyle(4000);
   H_dR_both_all->SetBorderMode(0);
   H_dR_both_all->SetBorderSize(2);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-1.353382,6.525,12.48172);
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
   st->SetMinimum(0.3);
   st->SetMaximum(3.890509e+10);
   
   TH1F *st_stack_216 = new TH1F("st_stack_216","",30,0,6);
   st_stack_216->SetMinimum(0.04575652);
   st_stack_216->SetMaximum(1.253747e+11);
   st_stack_216->SetDirectory(0);
   st_stack_216->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_216->SetLineColor(ci);
   st_stack_216->GetXaxis()->SetRange(1,31);
   st_stack_216->GetXaxis()->SetLabelFont(42);
   st_stack_216->GetXaxis()->SetLabelSize(0.035);
   st_stack_216->GetXaxis()->SetTitleSize(0.035);
   st_stack_216->GetXaxis()->SetTitleFont(42);
   st_stack_216->GetYaxis()->SetTitle("Events/0.2");
   st_stack_216->GetYaxis()->SetLabelFont(42);
   st_stack_216->GetYaxis()->SetLabelSize(0.05);
   st_stack_216->GetYaxis()->SetTitleSize(0.057);
   st_stack_216->GetYaxis()->SetTitleOffset(1.2);
   st_stack_216->GetYaxis()->SetTitleFont(42);
   st_stack_216->GetZaxis()->SetLabelFont(42);
   st_stack_216->GetZaxis()->SetLabelSize(0.035);
   st_stack_216->GetZaxis()->SetTitleSize(0.035);
   st_stack_216->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_216);
   
   
   TH1D *VbbHcc_both_H_dR_all_stack_1 = new TH1D("VbbHcc_both_H_dR_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(2,19.43855);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,53052.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,30046.56);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,22351.65);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,25008.62);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,19326.51);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,23274.58);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,21208.63);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,44388.76);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,25043.62);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,27857.17);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,34135.54);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,43357.16);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,48921.46);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,51808.88);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,27091.54);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,21264.69);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,15032.08);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,8403.05);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,5265.91);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,2861.229);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,2104.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,1369.297);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,483.8053);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,342.8795);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(2,11.49754);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,20762.84);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,2413.915);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,2020.478);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,2981.502);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,2108.065);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,2345.692);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,1934.593);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,16832.61);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,2163.219);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,2167.206);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,2741.756);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,3070.693);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,3296.878);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,3378.862);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,2388.643);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,1994.312);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,1725.846);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,1103.051);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,1206.776);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,526.2589);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,527.198);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,538.0954);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,223.7883);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,264.8881);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(28873);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_2 = new TH1D("VbbHcc_both_H_dR_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,71.20117);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,99.66645);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,106.0553);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,116.8733);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,118.1759);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,130.3318);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,149.3153);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,164.4752);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,188.6053);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,203.147);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,220.1265);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,240.2982);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,283.813);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,267.3596);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,164.4551);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,103.0358);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,68.27063);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,47.26884);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,33.38557);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,18.71134);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,13.30213);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,5.716056);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,3.9885);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,1.49464);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,0.347492);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,0.5345857);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,3.529978);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,4.282908);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,4.383074);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,4.665045);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,4.605185);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,4.84641);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,5.189909);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,5.575813);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,6.279036);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,6.116408);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,6.333142);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,6.490969);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,7.21192);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,6.904997);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,5.444961);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,4.135741);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,3.444913);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,2.823612);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,2.399379);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,1.572808);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,1.420746);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,0.8162457);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,0.7713185);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,0.3816415);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,0.1371492);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,0.3570671);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(36867);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_3 = new TH1D("VbbHcc_both_H_dR_all_stack_3","",30,0,6);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(2,1.761235);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(3,1519.08);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(4,2424.78);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(5,2748.223);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(6,3053.503);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(7,3154.016);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(8,3231.191);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(9,3298.946);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(10,3499.765);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(11,3818.156);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(12,4208.603);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(13,4637.663);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(14,5036.581);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(15,5423.893);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(16,5345.796);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(17,3086.947);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(18,1922.627);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(19,1233.283);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(20,797.7513);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(21,493.1668);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(22,303.142);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(23,171.9242);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(24,94.48923);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(25,43.38098);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(26,18.0775);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(27,7.466569);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(28,2.122885);
   VbbHcc_both_H_dR_all_stack_3->SetBinContent(29,0.06930277);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(2,0.3570479);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(3,10.98103);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(4,13.63164);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(5,14.02474);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(6,15.00157);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(7,15.89108);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(8,15.07285);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(9,15.14987);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(10,16.20381);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(11,16.2778);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(12,17.4895);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(13,18.17777);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(14,19.25802);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(15,19.62167);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(16,19.82716);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(17,14.88954);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(18,12.39119);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(19,9.242805);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(20,7.513855);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(21,5.775276);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(22,5.58447);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(23,3.464601);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(24,2.523395);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(25,1.724368);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(26,1.085708);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(27,0.7636768);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(28,0.3520914);
   VbbHcc_both_H_dR_all_stack_3->SetBinError(29,0.06930277);
   VbbHcc_both_H_dR_all_stack_3->SetEntries(982703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_4 = new TH1D("VbbHcc_both_H_dR_all_stack_4","",30,0,6);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(2,0.02707554);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(3,348.3666);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(4,496.3369);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(5,423.6485);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(6,371.2178);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(7,311.6805);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(8,308.7574);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(9,349.2806);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(10,358.0551);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(11,416.0352);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(12,497.196);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(13,561.8814);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(14,617.6647);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(15,716.3712);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(16,752.8871);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(17,376.2418);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(18,243.9864);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(19,142.6701);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(20,88.24471);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(21,57.58526);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(22,32.26554);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(23,18.24396);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(24,7.876982);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(25,4.663277);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(26,1.863921);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(27,0.5186957);
   VbbHcc_both_H_dR_all_stack_4->SetBinContent(28,0.251612);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(2,0.02707554);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(3,10.41315);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(4,14.76134);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(5,13.74259);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(6,14.41486);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(7,11.53817);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(8,10.50439);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(9,13.36074);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(10,12.42924);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(11,13.58715);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(12,17.31517);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(13,19.78138);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(14,17.26079);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(15,20.02787);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(16,21.72151);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(17,14.68143);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(18,11.9082);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(19,8.116931);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(20,5.043124);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(21,4.751409);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(22,2.840119);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(23,1.944989);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(24,1.412235);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(25,0.9857753);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(26,0.6367945);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(27,0.245581);
   VbbHcc_both_H_dR_all_stack_4->SetBinError(28,0.2004286);
   VbbHcc_both_H_dR_all_stack_4->SetEntries(51772);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_5 = new TH1D("VbbHcc_both_H_dR_all_stack_5","",30,0,6);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(3,35.91907);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(4,37.29425);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(5,41.45914);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(6,26.74647);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(7,40.781);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(8,33.35672);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(9,40.34281);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(10,44.09425);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(11,48.88443);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(12,48.64768);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(13,51.93559);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(14,70.36514);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(15,65.8734);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(16,66.10897);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(17,36.66337);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(18,20.84626);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(19,19.121);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(20,15.93702);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(21,9.573456);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(22,5.329615);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(23,4.440159);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(24,2.354375);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(25,0.3571351);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(26,2.838361);
   VbbHcc_both_H_dR_all_stack_5->SetBinContent(27,0.1627641);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(3,3.439449);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(4,4.55436);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(5,10.79985);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(6,3.557285);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(7,6.439834);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(8,4.324511);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(9,5.284704);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(10,8.810575);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(11,5.606324);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(12,5.387235);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(13,5.30887);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(14,8.567423);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(15,4.850525);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(16,5.880986);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(17,4.022269);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(18,1.913129);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(19,3.545837);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(20,3.80404);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(21,1.851797);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(22,1.643213);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(23,2.220007);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(24,0.9250059);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(25,0.2048747);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(26,2.838361);
   VbbHcc_both_H_dR_all_stack_5->SetBinError(27,0.1627641);
   VbbHcc_both_H_dR_all_stack_5->SetEntries(7913);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_6 = new TH1D("VbbHcc_both_H_dR_all_stack_6","",30,0,6);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(3,0.3049337);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(4,0.6225638);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(5,0.1195687);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(9,0.1243737);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(12,0.2487954);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(13,0.1142782);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(15,0.2531828);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(16,1.038705);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(17,0.3247794);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(19,0.2950387);
   VbbHcc_both_H_dR_all_stack_6->SetBinContent(24,0.232904);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(3,0.3049337);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(4,0.6225638);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(5,0.1195687);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(9,0.1243737);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(12,0.1763999);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(13,0.1142782);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(15,0.1790835);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(16,0.6159422);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(17,0.1913236);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(19,0.2950387);
   VbbHcc_both_H_dR_all_stack_6->SetBinError(24,0.232904);
   VbbHcc_both_H_dR_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_7 = new TH1D("VbbHcc_both_H_dR_all_stack_7","",30,0,6);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(3,0.9730364);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(4,0.8836538);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(5,0.1827233);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(6,0.1584265);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(7,0.177352);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(8,0.1943154);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(10,0.1730083);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(11,0.2720608);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(12,0.1759776);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(13,0.3584957);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(14,0.3449823);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(15,0.2667138);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(16,1.59002);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(17,0.2419888);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(18,0.1772511);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(19,0.2950387);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(22,0.09353649);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(24,0.232904);
   VbbHcc_both_H_dR_all_stack_7->SetBinContent(25,0.0686903);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(3,0.3967266);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(4,0.6405605);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(5,0.1292113);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(6,0.1120588);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(7,0.1254595);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(8,0.137456);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(10,0.1229465);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(11,0.1578516);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(12,0.1251979);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(13,0.1793222);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(14,0.17314);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(15,0.1547797);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(16,0.6559629);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(17,0.1480706);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(18,0.1259673);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(19,0.2950387);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(22,0.09353649);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(24,0.232904);
   VbbHcc_both_H_dR_all_stack_7->SetBinError(25,0.0686903);
   VbbHcc_both_H_dR_all_stack_7->SetEntries(56);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_8 = new TH1D("VbbHcc_both_H_dR_all_stack_8","",30,0,6);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(3,13.38068);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(4,15.82187);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(5,18.16956);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(6,8.19079);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(7,4.599071);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(8,3.769222);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(9,2.747164);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(10,5.106551);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(11,6.120407);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(12,7.998617);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(13,3.784549);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(14,9.489106);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(15,16.51428);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(16,15.82084);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(17,5.088479);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(18,4.075914);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(19,1.659967);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(20,0.922915);
   VbbHcc_both_H_dR_all_stack_8->SetBinContent(23,0.27247);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(3,1.911786);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(4,2.063797);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(5,2.215013);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(6,1.418234);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(7,1.075947);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(8,1.014029);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(9,0.8544257);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(10,1.152439);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(11,1.383487);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(12,1.516422);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(13,0.9926984);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(14,1.627512);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(15,2.084205);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(16,2.057077);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(17,1.142473);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(18,1.073278);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(19,0.5931272);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(20,0.4628565);
   VbbHcc_both_H_dR_all_stack_8->SetBinError(23,0.27247);
   VbbHcc_both_H_dR_all_stack_8->SetEntries(574);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_9 = new TH1D("VbbHcc_both_H_dR_all_stack_9","",30,0,6);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(2,0.00333629);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(3,8.192721);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(4,15.24029);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(5,15.27448);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(6,12.31488);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(7,8.175516);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(8,5.130517);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(9,3.842987);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(10,3.678628);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(11,4.500703);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(12,6.098386);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(13,8.443639);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(14,11.28339);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(15,13.69222);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(16,14.01059);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(17,4.850405);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(18,1.869763);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(19,0.6876852);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(20,0.3230864);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(21,0.1975841);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(22,0.1090911);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(23,0.04578683);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(24,0.05826452);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(25,0.0113106);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(26,0.006346665);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(27,0.005231525);
   VbbHcc_both_H_dR_all_stack_9->SetBinContent(28,0.004411323);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(2,0.00333629);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(3,0.143217);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(4,0.1949143);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(5,0.192649);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(6,0.1694576);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(7,0.1426164);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(8,0.1161222);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(9,0.09213516);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(10,0.09213466);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(11,0.1005411);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(12,0.1185098);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(13,0.1433202);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(14,0.1655526);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(15,0.1881237);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(16,0.186969);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(17,0.1119432);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(18,0.1358779);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(19,0.03900612);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(20,0.02679307);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(21,0.02045348);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(22,0.0152084);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(23,0.009173762);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(24,0.01626797);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(25,0.007819812);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(26,0.003468332);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(27,0.003390635);
   VbbHcc_both_H_dR_all_stack_9->SetBinError(28,0.003237401);
   VbbHcc_both_H_dR_all_stack_9->SetEntries(80589);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_10 = new TH1D("VbbHcc_both_H_dR_all_stack_10","",30,0,6);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(3,2.139913);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(4,4.55986);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(5,5.325377);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(6,5.13465);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(7,3.997941);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(8,3.01103);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(9,2.254439);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(10,2.01496);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(11,2.266923);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(12,2.843783);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(13,3.34726);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(14,3.891099);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(15,4.398022);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(16,4.244517);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(17,1.75492);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(18,0.7646215);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(19,0.3634948);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(20,0.1980924);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(21,0.1142003);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(22,0.05967821);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(23,0.02703987);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(24,0.01621332);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(25,0.007783712);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(26,0.002591068);
   VbbHcc_both_H_dR_all_stack_10->SetBinContent(27,0.001239566);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(3,0.03188102);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(4,0.04597725);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(5,0.04897719);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(6,0.04769786);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(7,0.04185573);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(8,0.03641636);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(9,0.03172071);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(10,0.03008931);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(11,0.03187627);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(12,0.03570794);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(13,0.03865955);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(14,0.04170199);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(15,0.04444839);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(16,0.04365998);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(17,0.02802313);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(18,0.0185433);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(19,0.01280687);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(20,0.009411218);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(21,0.007196285);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(22,0.005179112);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(23,0.003440976);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(24,0.002696265);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(25,0.001884703);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(26,0.001083753);
   VbbHcc_both_H_dR_all_stack_10->SetBinError(27,0.0007331805);
   VbbHcc_both_H_dR_all_stack_10->SetEntries(125673);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_11 = new TH1D("VbbHcc_both_H_dR_all_stack_11","",30,0,6);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(3,0.02293634);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(4,0.04415225);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(5,0.05696941);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(6,0.04240261);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(7,0.035724);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(8,0.02390484);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(9,0.0327772);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(10,0.01866499);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(11,0.02149635);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(12,0.01253353);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(13,0.01804611);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(14,0.01472415);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(15,0.02241381);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(16,0.02054146);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(17,0.01703701);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(18,0.00373985);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(19,0.001589558);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(20,0.00182132);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(21,0.001052596);
   VbbHcc_both_H_dR_all_stack_11->SetBinContent(23,0.001982459);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(3,0.00706175);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(4,0.0095846);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(5,0.01138935);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(6,0.009472872);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(7,0.008565376);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(8,0.006739858);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(9,0.008362533);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(10,0.006241628);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(11,0.006600029);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(12,0.004875011);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(13,0.005941105);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(14,0.005306558);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(15,0.006658057);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(16,0.006315995);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(17,0.00576447);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(18,0.002842977);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(19,0.001589558);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(20,0.00182132);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(21,0.001052596);
   VbbHcc_both_H_dR_all_stack_11->SetBinError(23,0.001982459);
   VbbHcc_both_H_dR_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_12 = new TH1D("VbbHcc_both_H_dR_all_stack_12","",30,0,6);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(3,0.00668263);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(4,0.01277731);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(5,0.01908522);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(6,0.01946513);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(7,0.02193643);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(8,0.01099592);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(9,0.01438931);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(10,0.01067009);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(11,0.01291371);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(12,0.01140395);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(13,0.01237914);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(14,0.01072583);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(15,0.01170037);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(16,0.0138933);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(17,0.004784634);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(18,0.003551915);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(19,0.00162466);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(20,0.001939371);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(21,0.000821266);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(22,0.0005865502);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(23,0.0004192265);
   VbbHcc_both_H_dR_all_stack_12->SetBinContent(24,8.991818e-05);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(3,0.001393345);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(4,0.001946783);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(5,0.002326021);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(6,0.002403321);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(7,0.002524843);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(8,0.001767242);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(9,0.002105269);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(10,0.001681509);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(11,0.001910752);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(12,0.001719328);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(13,0.001910981);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(14,0.001693519);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(15,0.001765678);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(16,0.001922324);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(17,0.001155859);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(18,0.0009745947);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(19,0.0006856131);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(20,0.0007566639);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(21,0.0004471151);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(22,0.0004147559);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(23,0.0003159636);
   VbbHcc_both_H_dR_all_stack_12->SetBinError(24,8.991818e-05);
   VbbHcc_both_H_dR_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_all__593 = new TH1D("VbbHcc_both_H_dR_all__593","",30,0,6);
   VbbHcc_both_H_dR_all__593->SetBinContent(2,15);
   VbbHcc_both_H_dR_all__593->SetBinContent(3,22247);
   VbbHcc_both_H_dR_all__593->SetBinContent(4,25144);
   VbbHcc_both_H_dR_all__593->SetBinContent(5,20625);
   VbbHcc_both_H_dR_all__593->SetBinContent(6,20853);
   VbbHcc_both_H_dR_all__593->SetBinContent(7,20853);
   VbbHcc_both_H_dR_all__593->SetBinContent(8,21576);
   VbbHcc_both_H_dR_all__593->SetBinContent(9,22943);
   VbbHcc_both_H_dR_all__593->SetBinContent(10,24860);
   VbbHcc_both_H_dR_all__593->SetBinContent(11,27245);
   VbbHcc_both_H_dR_all__593->SetBinContent(12,31147);
   VbbHcc_both_H_dR_all__593->SetBinContent(13,34851);
   VbbHcc_both_H_dR_all__593->SetBinContent(14,39881);
   VbbHcc_both_H_dR_all__593->SetBinContent(15,43778);
   VbbHcc_both_H_dR_all__593->SetBinContent(16,45286);
   VbbHcc_both_H_dR_all__593->SetBinContent(17,28031);
   VbbHcc_both_H_dR_all__593->SetBinContent(18,18889);
   VbbHcc_both_H_dR_all__593->SetBinContent(19,13186);
   VbbHcc_both_H_dR_all__593->SetBinContent(20,9160);
   VbbHcc_both_H_dR_all__593->SetBinContent(21,6129);
   VbbHcc_both_H_dR_all__593->SetBinContent(22,3996);
   VbbHcc_both_H_dR_all__593->SetBinContent(23,2488);
   VbbHcc_both_H_dR_all__593->SetBinContent(24,1458);
   VbbHcc_both_H_dR_all__593->SetBinContent(25,785);
   VbbHcc_both_H_dR_all__593->SetBinContent(26,351);
   VbbHcc_both_H_dR_all__593->SetBinContent(27,138);
   VbbHcc_both_H_dR_all__593->SetBinContent(28,33);
   VbbHcc_both_H_dR_all__593->SetBinContent(29,1);
   VbbHcc_both_H_dR_all__593->SetEntries(485978);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all__593->SetLineColor(ci);
   VbbHcc_both_H_dR_all__593->SetLineWidth(2);
   VbbHcc_both_H_dR_all__593->SetMarkerStyle(20);
   VbbHcc_both_H_dR_all__593->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_all__593->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all__593->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all__593->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all__593->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all__593->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all__593->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all__593->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all__593->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all__593->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_all__593->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all__593->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all__593->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_all__593->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_all__593->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all__593->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_all_fx1431[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_all_fy1431[30] = {
   0,
   21.23019,
   55052.49,
   33141.82,
   25710.18,
   28602.83,
   22968.17,
   26990.35,
   25055.53,
   48466.15,
   29528.49,
   32832.15,
   39623.22,
   49347.1,
   55446.57,
   58277.77,
   30768.13,
   23562.08,
   16498.73,
   9353.7,
   5859.935,
   3220.94,
   2312.559,
   1480.274,
   536.283,
   367.1628,
   8.501992,
   2.913494,
   0.06930277,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_all_fex1431[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_all_fey1431[30] = {
   0,
   11.50311,
   20762.84,
   2414.008,
   2020.608,
   2981.581,
   2108.171,
   2345.773,
   1934.713,
   16832.62,
   2163.34,
   2167.362,
   2741.901,
   3070.821,
   3297.009,
   3379.003,
   2388.745,
   1994.391,
   1725.897,
   1103.098,
   1206.803,
   526.3011,
   527.2196,
   538.1047,
   223.7986,
   264.9065,
   0.8299556,
   0.5400439,
   0.06930277,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_all_fx1431,Graph_from_VbbHcc_both_H_dR_all_fy1431,Graph_from_VbbHcc_both_H_dR_all_fex1431,Graph_from_VbbHcc_both_H_dR_all_fey1431);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_all1431 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_all1431","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetMinimum(83.39686);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetMaximum(83396.86);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_all1431->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_all1431);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__594 = new TH1D("data_mc_ratio__594","",30,0,6);
   data_mc_ratio__594->SetBinContent(2,0.7065409);
   data_mc_ratio__594->SetBinContent(3,0.4041053);
   data_mc_ratio__594->SetBinContent(4,0.7586789);
   data_mc_ratio__594->SetBinContent(5,0.8022113);
   data_mc_ratio__594->SetBinContent(6,0.7290538);
   data_mc_ratio__594->SetBinContent(7,0.9079085);
   data_mc_ratio__594->SetBinContent(8,0.7993967);
   data_mc_ratio__594->SetBinContent(9,0.915686);
   data_mc_ratio__594->SetBinContent(10,0.5129353);
   data_mc_ratio__594->SetBinContent(11,0.9226682);
   data_mc_ratio__594->SetBinContent(12,0.9486737);
   data_mc_ratio__594->SetBinContent(13,0.8795599);
   data_mc_ratio__594->SetBinContent(14,0.8081731);
   data_mc_ratio__594->SetBinContent(15,0.789553);
   data_mc_ratio__594->SetBinContent(16,0.7770716);
   data_mc_ratio__594->SetBinContent(17,0.91104);
   data_mc_ratio__594->SetBinContent(18,0.8016694);
   data_mc_ratio__594->SetBinContent(19,0.7992132);
   data_mc_ratio__594->SetBinContent(20,0.9792917);
   data_mc_ratio__594->SetBinContent(21,1.045916);
   data_mc_ratio__594->SetBinContent(22,1.240632);
   data_mc_ratio__594->SetBinContent(23,1.075865);
   data_mc_ratio__594->SetBinContent(24,0.9849528);
   data_mc_ratio__594->SetBinContent(25,1.463779);
   data_mc_ratio__594->SetBinContent(26,0.9559792);
   data_mc_ratio__594->SetBinContent(27,16.23149);
   data_mc_ratio__594->SetBinContent(28,11.32661);
   data_mc_ratio__594->SetBinContent(29,14.42944);
   data_mc_ratio__594->SetBinError(2,0.1824281);
   data_mc_ratio__594->SetBinError(3,0.002709311);
   data_mc_ratio__594->SetBinError(4,0.004784547);
   data_mc_ratio__594->SetBinError(5,0.005585882);
   data_mc_ratio__594->SetBinError(6,0.005048651);
   data_mc_ratio__594->SetBinError(7,0.006287208);
   data_mc_ratio__594->SetBinError(8,0.00544223);
   data_mc_ratio__594->SetBinError(9,0.00604535);
   data_mc_ratio__594->SetBinError(10,0.003253209);
   data_mc_ratio__594->SetBinError(11,0.005589875);
   data_mc_ratio__594->SetBinError(12,0.005375375);
   data_mc_ratio__594->SetBinError(13,0.004711485);
   data_mc_ratio__594->SetBinError(14,0.00404689);
   data_mc_ratio__594->SetBinError(15,0.003773578);
   data_mc_ratio__594->SetBinError(16,0.003651565);
   data_mc_ratio__594->SetBinError(17,0.005441494);
   data_mc_ratio__594->SetBinError(18,0.005832985);
   data_mc_ratio__594->SetBinError(19,0.00695995);
   data_mc_ratio__594->SetBinError(20,0.01023209);
   data_mc_ratio__594->SetBinError(21,0.01335986);
   data_mc_ratio__594->SetBinError(22,0.01962592);
   data_mc_ratio__594->SetBinError(23,0.02156912);
   data_mc_ratio__594->SetBinError(24,0.02579507);
   data_mc_ratio__594->SetBinError(25,0.05224453);
   data_mc_ratio__594->SetBinError(26,0.05102639);
   data_mc_ratio__594->SetBinError(27,1.381716);
   data_mc_ratio__594->SetBinError(28,1.971709);
   data_mc_ratio__594->SetBinError(29,14.42944);
   data_mc_ratio__594->SetMinimum(0.4);
   data_mc_ratio__594->SetMaximum(1.6);
   data_mc_ratio__594->SetEntries(9.485487);
   data_mc_ratio__594->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__594->SetLineColor(ci);
   data_mc_ratio__594->SetLineWidth(2);
   data_mc_ratio__594->SetMarkerStyle(20);
   data_mc_ratio__594->SetMarkerSize(1.2);
   data_mc_ratio__594->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__594->GetXaxis()->SetRange(1,31);
   data_mc_ratio__594->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__594->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__594->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__594->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__594->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__594->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__594->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__594->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__594->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__594->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__594->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__594->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__594->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__594->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__594->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__594->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__594->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1432[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1432[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1432[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1432[30] = {
   0,
   0.541828,
   0.3771463,
   0.07283872,
   0.07859175,
   0.1042408,
   0.09178664,
   0.08691153,
   0.077217,
   0.3473068,
   0.07326279,
   0.0660134,
   0.06919933,
   0.06222901,
   0.05946283,
   0.05798099,
   0.07763697,
   0.08464411,
   0.1046079,
   0.1179318,
   0.2059414,
   0.1633998,
   0.2279811,
   0.363517,
   0.4173144,
   0.7214961,
   0.09761896,
   0.1853595,
   1,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1432,Graph_from_mc_statistical_error_fy1432,Graph_from_mc_statistical_error_fex1432,Graph_from_mc_statistical_error_fey1432);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1432 = new TH1F("Graph_Graph_from_mc_statistical_error1432","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1432->SetMinimum(1.998401e-16);
   Graph_Graph_from_mc_statistical_error1432->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1432->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1432->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1432->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1432->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1432->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1432->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1432->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1432);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->SetSelected(H_dR_both_all);
}
