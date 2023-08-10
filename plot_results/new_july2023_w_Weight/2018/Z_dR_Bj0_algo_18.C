void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Thu Aug 10 12:24:15 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(0,0,1,1);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1159.126,6.314516,1157976);
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
   st->SetMaximum(992440.9);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(0.01);
   st_stack_147->SetMaximum(1042063);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetLabelSize(0.035);
   st_stack_147->GetXaxis()->SetTitleSize(0.035);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Events/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetLabelSize(0.05);
   st_stack_147->GetYaxis()->SetTitleSize(0.057);
   st_stack_147->GetYaxis()->SetTitleOffset(1.2);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetLabelSize(0.035);
   st_stack_147->GetZaxis()->SetTitleSize(0.035);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,125902.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,385339);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,342881.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,267519.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,172036.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,114619.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,78736.59);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,58113.13);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,52344.06);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,36542.66);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,31076.31);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,28425.91);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,24874.81);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,21671.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,20106.38);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,15867.84);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,11308.59);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,12100.39);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,9104.74);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,5748.18);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,4004.601);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,4081.53);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,1701.914);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,1575.583);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,231.6947);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,228.7739);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(27,21.89792);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(28,814.3869);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(29,79.37785);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(30,31.88759);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,146.4248);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,3136.007);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,7844.849);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,8297.778);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,21066.08);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,6428.613);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,5256.028);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,4261.578);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,4249.751);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,3670.341);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,2645.277);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,2498.059);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,2857.606);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,2729.499);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,2642.759);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,2078.85);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1860.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,1478.533);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,1651.158);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1418.847);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1133.868);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,929.9655);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,1834.466);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,651.7247);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,649.7535);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,65.70414);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,74.99406);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(27,14.44484);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(28,525.5266);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(29,38.10969);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(30,31.57951);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,59.2521);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(112239);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,537.3782);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,2721.412);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,2806.506);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,1973.266);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,1275.759);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,860.1586);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,603.2696);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,455.9734);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,355.8457);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,297.599);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,239.8027);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,204.4531);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,176.6795);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,155.869);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,135.6116);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,115.8799);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,104.5576);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,85.82145);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,65.20387);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,45.97844);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,26.31637);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,17.91062);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,8.343383);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,9.618989);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,4.339351);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,3.372574);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.69657);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.70699);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.131805);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.4746199);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,1.376165);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,9.398272);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,20.58669);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,20.83766);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,17.52814);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,14.08869);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,11.58482);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,9.723424);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,8.388879);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,7.423935);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,6.765183);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,5.970917);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,5.556699);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,5.253289);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.882269);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,4.624163);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,4.168509);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,4.00845);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,3.646699);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,3.188916);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,2.588949);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.925852);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.554399);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,1.0334);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,1.28911);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.6855412);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.7026013);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.3072733);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.5182179);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.421118);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.1690908);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.3626454);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(153765);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(1,8868.457);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(2,54828.54);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(3,53421.32);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(4,33270.84);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(5,19756.04);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(6,12706.06);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(7,8978.07);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(8,6748.738);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(9,5372.908);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(10,4439.739);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(11,3738.674);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(12,3209.495);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(13,2802.339);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(14,2435.46);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(15,2180.956);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(16,1929.747);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(17,1680.847);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(18,1414.231);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(19,1107.969);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(20,776.0043);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(21,428.2364);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(22,199.333);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(23,100.0097);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(24,59.44834);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(25,38.67156);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(26,25.04836);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(27,16.05671);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(28,13.05077);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(29,9.768803);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(30,6.401221);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(31,16.21426);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(1,25.42593);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(2,63.17535);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(3,62.21485);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(4,48.97877);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(5,37.702);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(6,30.22524);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(7,25.40036);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(8,22.01608);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(9,19.6461);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(10,17.86327);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(11,16.39208);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(12,15.18974);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(13,14.1947);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(14,13.23808);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(15,12.53393);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(16,11.79557);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(17,11.01091);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(18,10.10806);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(19,8.945368);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(20,7.486242);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(21,5.553886);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(22,3.781647);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(23,2.668344);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(24,2.052486);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(25,1.652439);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(26,1.326708);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(27,1.066029);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(28,0.9512372);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(29,0.8286974);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(30,0.6695588);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(31,1.074984);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetEntries(3228671);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(1,732.4475);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(2,2777.618);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(3,2201.744);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(4,1480.259);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(5,967.6282);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(6,645.7358);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(7,488.23);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(8,357.4746);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(9,274.4984);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(10,254.735);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(11,207.0616);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(12,167.887);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(13,135.3174);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(14,117.4895);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(15,115.0645);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(16,99.33302);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(17,63.67692);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(18,55.71234);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(19,52.75851);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(20,27.86368);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(21,28.03812);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(22,7.052748);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(23,3.769059);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(24,5.171288);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(25,5.045509);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(26,2.342044);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(27,1.0988);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(28,1.384938);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(29,1.04968);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(30,0.5204041);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(31,0.5292756);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(1,14.03294);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(2,37.54834);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(3,37.1329);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(4,30.46825);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(5,25.38522);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(6,21.04929);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(7,18.38175);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(8,16.42446);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(9,12.99286);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(10,16.28637);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(11,12.7183);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(12,10.96812);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(13,8.740232);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(14,8.448046);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(15,10.76252);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(16,8.978153);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(17,4.693742);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(18,4.429744);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(19,5.799599);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(20,3.216466);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(21,3.286779);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(22,1.436642);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(23,1.13008);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(24,1.437523);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(25,1.43201);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(26,0.9494478);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(27,0.3676021);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(28,0.7627915);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(29,0.5728613);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(30,0.5204041);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(31,0.2394779);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetEntries(55877);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(1,256.9573);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(2,785.7197);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(3,696.7013);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(4,442.7059);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(5,316.6463);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(6,238.9636);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(7,149.667);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(8,115.5805);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(9,78.14187);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(10,71.93753);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(11,73.11396);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(12,65.99974);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(13,31.65818);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(14,54.41541);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(15,29.14208);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(16,30.58897);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(17,16.08811);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(18,10.66474);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(19,16.2612);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(20,19.40408);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(21,4.765909);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(22,3.786205);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(23,5.109075);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(24,0.9009338);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(25,2.220312);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(26,0.6068813);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(27,0.4804827);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(28,0.4719909);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(31,0.6603798);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(1,11.23019);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(2,32.88546);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(3,40.89868);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(4,30.40378);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(5,30.31463);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(6,25.81489);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(7,16.51948);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(8,17.80737);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(9,13.26094);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(10,9.043625);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(11,13.63372);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(12,16.30614);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(13,5.162601);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(14,13.01048);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(15,5.470798);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(16,6.457754);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(17,3.903262);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(18,3.187727);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(19,4.398765);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(20,4.911);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(21,1.099337);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(22,2.179497);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(23,2.981155);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(24,0.4289931);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(25,2.08554);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(26,0.3296891);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(27,0.3044968);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(28,0.3900771);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(31,0.3901689);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetEntries(15424);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,2.260213);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,9.492896);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,6.78064);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,4.068384);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,3.164299);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,3.616341);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,1.356128);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,0.9040853);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,0.9040853);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(15,1.356128);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(21,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,1.010798);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,2.07152);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.750754);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.356128);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,1.195992);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,1.27857);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.7829609);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.6392849);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.6392849);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(15,0.7829609);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(21,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(77);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,7.438181);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,27.27333);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,14.52216);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,7.438181);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,6.021385);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(6,4.604589);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,5.312987);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,2.479394);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,2.125195);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,1.770996);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,3.187792);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(12,0.7083982);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,1.062597);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(14,1.770996);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,1.416796);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(19,0.3541991);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,1.623144);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,3.108085);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,2.267981);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,1.623144);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,1.4604);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(6,1.277083);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,1.371807);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.9371228);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.8676071);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.7920133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,1.062597);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(12,0.5009132);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.6134909);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(14,0.7920133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.7083982);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(19,0.3541991);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,12.29423);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,52.25048);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,31.01499);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,13.13247);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,10.05892);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,4.750044);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,5.308873);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,4.750044);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(9,3.352972);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,2.514729);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(11,1.676486);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,1.397072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(14,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(15,2.514729);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(16,1.397072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(18,0.5588287);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(19,0.5588287);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(20,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(21,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,1.853425);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,3.820934);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,2.943813);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,1.915568);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,1.676486);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,1.152055);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,1.217939);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,1.152055);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(9,0.9679197);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(11,0.6844226);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.6247895);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(14,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(15,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(16,0.6247895);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(18,0.3951516);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(19,0.3951516);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(20,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(21,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(1,8.882536);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(2,39.81826);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(3,21.50232);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(4,10.61287);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(5,5.84245);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(6,4.262977);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(7,3.122374);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(8,2.509785);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(9,2.219491);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(10,1.833194);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(11,1.584045);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(12,1.220606);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(13,1.170319);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(14,0.8663101);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(15,0.7840221);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(16,0.6948767);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(17,0.5028713);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(18,0.4388695);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(19,0.340581);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(20,0.2697219);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(21,0.1714334);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(22,0.0754307);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(23,0.03428668);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(24,0.02514357);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(25,0.009143115);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(26,0.004571557);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(28,0.002285779);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(30,0.004571557);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(31,0.006857336);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(1,0.1424904);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(2,0.3016881);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(3,0.221697);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(4,0.155752);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(5,0.1155619);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(6,0.09871283);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(7,0.08448109);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(8,0.07574175);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(9,0.07122686);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(10,0.06473235);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(11,0.06017288);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(12,0.05282078);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(13,0.05172127);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(14,0.04449936);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(15,0.04233321);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(16,0.03985391);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(17,0.03390358);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(18,0.03167268);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(19,0.02790148);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(20,0.02482991);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(21,0.01979542);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(22,0.0131308);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(23,0.008852783);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(24,0.00758107);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(25,0.004571557);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(26,0.003232579);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(28,0.002285779);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(30,0.003232579);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(31,0.003959085);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetEntries(47604);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(1,2.705239);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(2,16.90491);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(3,15.35778);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(4,9.009696);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(5,5.261682);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(6,3.440859);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(7,2.555845);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(8,2.08555);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(9,1.739552);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(10,1.346345);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(11,1.097752);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(12,0.9393939);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(13,0.8306346);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(14,0.7386074);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(15,0.712314);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(16,0.5808466);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(17,0.4828437);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(18,0.3920117);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(19,0.2886306);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(20,0.2163235);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(21,0.1392359);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(22,0.05975788);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(23,0.02928136);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(24,0.02151284);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(25,0.005378209);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(26,0.01015884);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(27,0.004183052);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(28,0.005975788);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(29,0.002390315);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(30,0.004183052);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(31,0.005378209);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(1,0.04020689);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(2,0.1005088);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(3,0.09579917);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(4,0.07337577);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(5,0.05607379);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(6,0.04534517);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(7,0.03908092);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(8,0.0353027);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(9,0.03224158);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(10,0.02836454);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(11,0.02561237);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(12,0.02369308);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(13,0.02227935);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(14,0.02100895);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(15,0.02063162);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(16,0.01863066);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(17,0.01698638);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(18,0.01530549);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(19,0.01313315);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(20,0.01136971);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(21,0.009121645);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(22,0.005975788);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(23,0.004183052);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(24,0.003585473);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(25,0.001792736);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(26,0.002463881);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(27,0.001581045);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(28,0.00188971);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(29,0.001195158);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(30,0.001581045);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(31,0.001792736);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.05255579);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.299568);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.1681785);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.06306695);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.05781137);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.03678905);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.01576674);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.03678905);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(9,0.01576674);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(10,0.01313895);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.01051116);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.01313895);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(13,0.01051116);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(14,0.005255579);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(15,0.007883368);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(16,0.005255579);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(17,0.002627789);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(19,0.005255579);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.002627789);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.01175183);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.02805711);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.02102232);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.01287349);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.01232542);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.009832288);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.006436743);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.009832288);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(9,0.006436743);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(10,0.005875916);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.005255579);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.005875916);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(13,0.005255579);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(14,0.003716255);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(15,0.004551465);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(16,0.003716255);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(17,0.002627789);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(19,0.003716255);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.002627789);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(313);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(1,0.01767975);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(2,0.1141692);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(3,0.07821042);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(4,0.04374989);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(5,0.02577048);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(6,0.02037666);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(7,0.01288524);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(8,0.01078764);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(9,0.009888674);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(10,0.007191763);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(11,0.00659245);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(12,0.007791077);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(13,0.004794509);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(14,0.005393822);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(15,0.005094166);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(16,0.003895538);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(17,0.002397254);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(18,0.001198627);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(19,0.001198627);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(20,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(1,0.002301708);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(2,0.005849067);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(3,0.004841104);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(4,0.003620767);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(5,0.002778903);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(6,0.002471033);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(7,0.001964981);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(8,0.001797941);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(9,0.001721397);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(10,0.001468013);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(11,0.001405515);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(12,0.001527956);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(13,0.001198627);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(14,0.001271336);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(15,0.001235517);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(16,0.001080428);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(17,0.0008475574);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(18,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(19,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(20,0.0004237787);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0__403 = new TH1D("VbbHcc_algo_Z_dR_Bj0__403","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(1,98791);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(2,444898);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(3,421613);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(4,312692);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(5,205420);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(6,137656);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(7,99411);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(8,75357);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(9,60413);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(10,49265);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(11,41256);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(12,35028);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(13,30070);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(14,25924);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(15,22379);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(16,19187);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(17,15957);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(18,13077);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(19,10339);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(20,7419);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(21,4793);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(22,3077);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(23,1936);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(24,1379);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(25,977);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(26,700);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(27,487);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(28,339);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(29,228);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(30,153);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(31,465);
   VbbHcc_algo_Z_dR_Bj0__403->SetEntries(2140715);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0__403->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0__403->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0__403->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0__403->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1293[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1293[30] = {
   136331.6,
   446598.4,
   402096.9,
   304730.5,
   194382.7,
   129091.5,
   88973.51,
   65803.67,
   58435.82,
   41614.15,
   35342.53,
   32078.03,
   28025.17,
   24438.76,
   22573.95,
   18046.07,
   13175.58,
   13668.21,
   10348.48,
   6618.758,
   4493.559,
   4309.748,
   1819.209,
   1650.769,
   281.986,
   260.1588,
   41.23467,
   831.0099,
   91.33052,
   39.29259};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1293[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1293[30] = {
   3136.177,
   7845.291,
   8298.222,
   21066.19,
   6428.861,
   5256.234,
   4261.737,
   4249.885,
   3670.448,
   2645.412,
   2498.189,
   2857.719,
   2729.56,
   2642.843,
   2078.928,
   1860.275,
   1478.593,
   1651.202,
   1418.898,
   1133.911,
   929.9907,
   1834.473,
   651.7388,
   649.7597,
   65.77715,
   75.01582,
   14.49524,
   525.5284,
   38.12533,
   31.59135};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1293,Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1293,Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1293,Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1293);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetMinimum(6.931112);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetMaximum(499887.3);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__404 = new TH1D("data_mc_ratio__404","",30,0,6);
   data_mc_ratio__404->SetBinContent(1,0.7246378);
   data_mc_ratio__404->SetBinContent(2,0.9961926);
   data_mc_ratio__404->SetBinContent(3,1.048536);
   data_mc_ratio__404->SetBinContent(4,1.026126);
   data_mc_ratio__404->SetBinContent(5,1.056782);
   data_mc_ratio__404->SetBinContent(6,1.066345);
   data_mc_ratio__404->SetBinContent(7,1.11731);
   data_mc_ratio__404->SetBinContent(8,1.145179);
   data_mc_ratio__404->SetBinContent(9,1.033835);
   data_mc_ratio__404->SetBinContent(10,1.183852);
   data_mc_ratio__404->SetBinContent(11,1.167319);
   data_mc_ratio__404->SetBinContent(12,1.091962);
   data_mc_ratio__404->SetBinContent(13,1.072964);
   data_mc_ratio__404->SetBinContent(14,1.060774);
   data_mc_ratio__404->SetBinContent(15,0.9913641);
   data_mc_ratio__404->SetBinContent(16,1.063223);
   data_mc_ratio__404->SetBinContent(17,1.211104);
   data_mc_ratio__404->SetBinContent(18,0.9567458);
   data_mc_ratio__404->SetBinContent(19,0.9990839);
   data_mc_ratio__404->SetBinContent(20,1.120905);
   data_mc_ratio__404->SetBinContent(21,1.066638);
   data_mc_ratio__404->SetBinContent(22,0.7139628);
   data_mc_ratio__404->SetBinContent(23,1.064199);
   data_mc_ratio__404->SetBinContent(24,0.8353683);
   data_mc_ratio__404->SetBinContent(25,3.464711);
   data_mc_ratio__404->SetBinContent(26,2.690665);
   data_mc_ratio__404->SetBinContent(27,11.81045);
   data_mc_ratio__404->SetBinContent(28,0.4079374);
   data_mc_ratio__404->SetBinContent(29,2.496427);
   data_mc_ratio__404->SetBinContent(30,3.893864);
   data_mc_ratio__404->SetBinContent(31,2.814478);
   data_mc_ratio__404->SetBinError(1,0.002305485);
   data_mc_ratio__404->SetBinError(2,0.001493527);
   data_mc_ratio__404->SetBinError(3,0.001614828);
   data_mc_ratio__404->SetBinError(4,0.001835027);
   data_mc_ratio__404->SetBinError(5,0.002331653);
   data_mc_ratio__404->SetBinError(6,0.002874088);
   data_mc_ratio__404->SetBinError(7,0.003543696);
   data_mc_ratio__404->SetBinError(8,0.004171686);
   data_mc_ratio__404->SetBinError(9,0.004206163);
   data_mc_ratio__404->SetBinError(10,0.005333695);
   data_mc_ratio__404->SetBinError(11,0.005747063);
   data_mc_ratio__404->SetBinError(12,0.005834451);
   data_mc_ratio__404->SetBinError(13,0.006187546);
   data_mc_ratio__404->SetBinError(14,0.006588278);
   data_mc_ratio__404->SetBinError(15,0.006626937);
   data_mc_ratio__404->SetBinError(16,0.007675753);
   data_mc_ratio__404->SetBinError(17,0.009587508);
   data_mc_ratio__404->SetBinError(18,0.008366475);
   data_mc_ratio__404->SetBinError(19,0.009825681);
   data_mc_ratio__404->SetBinError(20,0.01301356);
   data_mc_ratio__404->SetBinError(21,0.01540683);
   data_mc_ratio__404->SetBinError(22,0.01287099);
   data_mc_ratio__404->SetBinError(23,0.02418634);
   data_mc_ratio__404->SetBinError(24,0.02249551);
   data_mc_ratio__404->SetBinError(25,0.1108459);
   data_mc_ratio__404->SetBinError(26,0.1016976);
   data_mc_ratio__404->SetBinError(27,0.5351826);
   data_mc_ratio__404->SetBinError(28,0.02215612);
   data_mc_ratio__404->SetBinError(29,0.1653299);
   data_mc_ratio__404->SetBinError(30,0.3148003);
   data_mc_ratio__404->SetBinError(31,1.017978);
   data_mc_ratio__404->SetMinimum(0.4);
   data_mc_ratio__404->SetMaximum(1.6);
   data_mc_ratio__404->SetEntries(80.71244);
   data_mc_ratio__404->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__404->SetLineColor(ci);
   data_mc_ratio__404->SetLineWidth(2);
   data_mc_ratio__404->SetMarkerStyle(20);
   data_mc_ratio__404->SetMarkerSize(1.2);
   data_mc_ratio__404->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__404->GetXaxis()->SetRange(1,30);
   data_mc_ratio__404->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__404->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__404->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__404->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__404->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__404->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__404->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__404->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__404->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__404->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__404->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__404->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__404->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__404->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__404->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__404->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__404->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1294[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1294[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1294[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1294[30] = {
   0.02300404,
   0.01756677,
   0.02063737,
   0.06913055,
   0.03307323,
   0.04071713,
   0.04789895,
   0.06458432,
   0.06281161,
   0.06357001,
   0.07068508,
   0.0890865,
   0.09739671,
   0.1081415,
   0.09209413,
   0.1030848,
   0.1122222,
   0.120806,
   0.1371117,
   0.1713178,
   0.2069609,
   0.4256566,
   0.358254,
   0.3936103,
   0.2332639,
   0.2883463,
   0.3515305,
   0.6323973,
   0.4174434,
   0.8040028};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1294,Graph_from_mc_statistical_error_fy1294,Graph_from_mc_statistical_error_fex1294,Graph_from_mc_statistical_error_fey1294);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1294 = new TH1F("Graph_Graph_from_mc_statistical_error1294","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1294->SetMinimum(0.03519659);
   Graph_Graph_from_mc_statistical_error1294->SetMaximum(1.964803);
   Graph_Graph_from_mc_statistical_error1294->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1294->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1294->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1294);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
