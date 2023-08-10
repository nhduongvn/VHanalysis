void H_dR_Bj1_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_16/H_dR_Bj1_tags_16
//=========  (Thu Aug 10 12:20:12 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_16 = new TCanvas("H_dR_Bj1_tags_16", "H_dR_Bj1_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_16->SetHighLightColor(2);
   H_dR_Bj1_tags_16->Range(0,0,1,1);
   H_dR_Bj1_tags_16->SetFillColor(0);
   H_dR_Bj1_tags_16->SetFillStyle(4000);
   H_dR_Bj1_tags_16->SetBorderMode(0);
   H_dR_Bj1_tags_16->SetBorderSize(2);
   H_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.851817,6.314516,11.73216);
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
   st->SetMaximum(5.607203e+09);
   
   TH1F *st_stack_45 = new TH1F("st_stack_45","",30,0,6);
   st_stack_45->SetMinimum(0.001454678);
   st_stack_45->SetMaximum(1.878272e+10);
   st_stack_45->SetDirectory(0);
   st_stack_45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_45->SetLineColor(ci);
   st_stack_45->GetXaxis()->SetRange(1,30);
   st_stack_45->GetXaxis()->SetLabelFont(42);
   st_stack_45->GetXaxis()->SetLabelSize(0.035);
   st_stack_45->GetXaxis()->SetTitleSize(0.035);
   st_stack_45->GetXaxis()->SetTitleFont(42);
   st_stack_45->GetYaxis()->SetTitle("Events/0.2");
   st_stack_45->GetYaxis()->SetLabelFont(42);
   st_stack_45->GetYaxis()->SetLabelSize(0.05);
   st_stack_45->GetYaxis()->SetTitleSize(0.057);
   st_stack_45->GetYaxis()->SetTitleOffset(1.2);
   st_stack_45->GetYaxis()->SetTitleFont(42);
   st_stack_45->GetZaxis()->SetLabelFont(42);
   st_stack_45->GetZaxis()->SetLabelSize(0.035);
   st_stack_45->GetZaxis()->SetTitleSize(0.035);
   st_stack_45->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_45);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,6228.608);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,22563.21);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,18055.96);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,18122.27);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,15235.41);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,8310.689);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,10051.67);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,7837.215);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,7716.065);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,8966.157);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,7820.042);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,8972.604);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,7622.411);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,5986.473);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,3007.887);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,3080.607);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,2419.711);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,1787.505);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,1483.598);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,2448.708);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,984.7231);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,969.2751);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,700.5119);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,507.0676);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,1201.605);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,157.0446);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,604.5898);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,58.75231);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,35.01209);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(30,4.424981);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(31,53.75242);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,913.6874);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,2644.347);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,2143.036);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,2236.653);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,2116.715);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,1074.418);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,1340.63);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,1732.404);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,1769.869);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,2593.004);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,1770.804);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,2238.121);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,1769.931);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,1663.431);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,625.0275);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,676.3531);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,616.1888);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,548.2481);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,401.3731);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,1448.462);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,389.67);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,390.1178);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,382.3131);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,277.1466);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,538.9755);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,49.68266);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,380.6048);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,27.11657);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,14.20039);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(30,3.812731);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(31,33.09697);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(9435);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,28.6846);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,82.19893);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,87.79249);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,75.59066);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,70.15791);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,54.91214);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,45.74586);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,35.76867);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,35.50406);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,29.90705);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,28.16084);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,24.72636);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,23.13637);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,21.49342);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,18.15605);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,14.27517);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,8.776836);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,9.447413);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,8.099355);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,7.434388);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,7.843263);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,6.760415);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,3.838633);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,3.40535);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,3.071876);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,1.200041);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,0.7446951);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,0.9148774);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,0.3936361);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(30,0.3667711);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,0.2332494);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,2.220831);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,3.545872);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,3.686427);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,3.321425);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,3.345801);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,2.932858);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,2.675487);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,2.32313);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,2.366836);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,2.154416);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,2.192031);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,1.981421);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,1.915406);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,1.898544);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,1.706229);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,1.463472);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,1.033732);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,1.224759);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.9861623);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,1.082636);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,1.197805);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,1.094905);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.7706835);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.6736286);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.7473013);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.4191317);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.1866479);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.398744);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.1396914);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(30,0.2773024);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.10459);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(9214);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(1,398.0458);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(2,1445.22);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(3,1782.346);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(4,1641.531);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(5,1334.842);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(6,1056.671);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(7,844.0212);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(8,701.7521);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(9,619.0105);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(10,543.2011);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(11,495.9576);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(12,447.1571);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(13,400.9862);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(14,357.2225);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(15,319.593);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(16,280.2759);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(17,221.0523);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(18,183.218);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(19,154.1921);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(20,120.9246);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(21,95.95292);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(22,81.93336);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(23,60.98908);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(24,43.99112);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(25,35.82974);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(26,25.82107);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(27,17.78642);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(28,12.13263);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(29,8.174004);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(30,5.440922);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(31,10.29105);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(1,5.058325);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(2,9.630049);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(3,10.72287);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(4,10.30464);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(5,9.295591);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(6,8.274232);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(7,7.373568);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(8,6.73383);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(9,6.316494);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(10,5.922595);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(11,5.657891);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(12,5.38395);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(13,5.090745);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(14,4.803338);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(15,4.543396);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(16,4.2563);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(17,3.760561);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(18,3.433363);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(19,3.14478);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(20,2.781885);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(21,2.472306);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(22,2.290856);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(23,1.973592);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(24,1.670588);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(25,1.513867);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(26,1.281047);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(27,1.062045);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(28,0.8785864);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(29,0.7296054);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(30,0.5883037);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(31,0.8011233);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetEntries(221451);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(1,73.86445);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(2,240.4628);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(3,281.7849);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(4,232.4967);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(5,177.8319);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(6,152.2667);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(7,107.4165);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(8,101.2492);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(9,86.54701);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(10,73.21001);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(11,67.87241);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(12,66.92438);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(13,58.59697);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(14,61.3845);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(15,39.25039);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(16,44.02866);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(17,32.7233);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(18,28.38004);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(19,22.0788);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(20,18.09137);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(21,11.64235);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(22,5.941201);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(23,7.819848);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(24,7.597803);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(25,3.893761);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(26,4.183554);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(27,2.185163);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(28,1.526106);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(29,0.3677651);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(30,0.5806694);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(31,1.630626);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(1,4.257213);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(2,9.287171);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(3,13.72839);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(4,12.1726);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(5,11.991);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(6,10.36856);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(7,7.147245);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(8,8.436895);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(9,7.230368);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(10,6.671081);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(11,5.326277);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(12,6.623505);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(13,5.626271);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(14,6.139153);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(15,4.191742);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(16,5.384336);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(17,5.191715);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(18,4.018079);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(19,3.819686);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(20,2.958471);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(21,2.704441);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(22,0.848788);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(23,1.171767);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(24,2.548257);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(25,0.7582956);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(26,0.8413745);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(27,0.5748226);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(28,0.3340742);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(29,0.1649569);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(30,0.3176528);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(31,0.5918439);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetEntries(14977);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(1,12.94816);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(2,28.27317);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(3,21.24577);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(4,17.21946);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(5,16.57997);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(6,16.8018);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(7,8.1458);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(8,8.524119);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(9,9.115369);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(10,5.304615);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(11,5.692245);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(12,10.53346);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(13,5.544375);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(14,3.967689);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(15,3.12816);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(16,2.811981);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(17,2.716205);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(18,2.020222);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(19,1.952824);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(20,1.119462);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(21,0.9816601);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(22,0.8505806);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(23,0.901568);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(24,0.3154541);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(25,1.465027);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(26,0.1512935);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(27,0.217075);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(28,0.3156624);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(29,0.1203682);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(30,0.2689261);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(1,1.07476);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(2,6.35904);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(3,2.826509);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(4,2.598768);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(5,2.737927);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(6,6.361606);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(7,1.423991);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(8,1.955692);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(9,2.212069);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(10,1.552111);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(11,1.247311);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(12,2.486548);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(13,1.599783);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(14,1.173134);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(15,1.122131);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(16,0.502321);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(17,0.6763151);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(18,0.4444808);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(19,1.071355);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(20,0.3208385);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(21,0.3177004);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(22,0.2885621);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(23,0.2805511);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(24,0.1497533);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(25,1.087205);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(26,0.1069806);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(27,0.1082328);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(28,0.1833994);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(29,0.08774744);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(30,0.1725371);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetEntries(3105);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(2,0.2687386);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(3,0.2687386);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(6,0.2687386);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(9,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(17,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(2,0.1900269);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(3,0.1900269);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(5,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(6,0.1900269);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(9,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(11,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(15,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(17,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(1,0.4359249);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(2,1.089812);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(3,0.5449062);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(4,0.7628687);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(5,0.2179625);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(6,0.6538874);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(7,0.1089812);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(8,0.1089812);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(11,0.2179625);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(12,0.1089812);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(14,0.1089812);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(15,0.2179625);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(16,0.3269437);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(17,0.2179625);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(30,0.1089812);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(1,0.2179625);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(2,0.3446289);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(3,0.2436895);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(4,0.2883373);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(5,0.1541227);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(6,0.2669484);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(7,0.1089812);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(8,0.1089812);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(11,0.1541227);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(12,0.1089812);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(14,0.1089812);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(15,0.1541227);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(16,0.188761);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(17,0.1541227);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(30,0.1089812);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(1,0.4864143);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(2,7.053007);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(3,3.648107);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(4,3.161693);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(5,4.377729);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(6,3.161693);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(7,2.675279);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(8,2.188864);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(9,1.70245);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(10,1.945657);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(11,1.70245);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(12,1.945657);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(13,0.9728286);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(14,1.216036);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(15,1.216036);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(16,1.216036);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(17,1.459243);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(18,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(19,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(21,0.4864143);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(23,0.4864143);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(1,0.3439469);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(2,1.309711);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(3,0.9419372);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(4,0.8768959);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(5,1.031841);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(6,0.8768959);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(7,0.8066269);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(8,0.7296215);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(9,0.6434656);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(10,0.6878937);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(11,0.6434656);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(12,0.6878937);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(13,0.4864143);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(14,0.5438277);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(15,0.5438277);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(16,0.5438277);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(17,0.5957334);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(18,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(19,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(20,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(21,0.3439469);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(23,0.3439469);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(27,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(1,1.175517);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(2,4.60919);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(3,5.899763);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(4,4.951587);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(5,3.832905);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(6,2.671251);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(7,2.09181);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(8,1.764661);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(9,1.594156);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(10,1.642674);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(11,1.57059);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(12,1.4791);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(13,1.348795);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(14,1.118682);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(15,0.8705478);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(16,0.6418211);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(17,0.4713157);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(18,0.3396245);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(19,0.2619961);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(20,0.2010023);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(21,0.1400085);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(22,0.12476);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(23,0.1067391);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(24,0.06792491);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(25,0.06653868);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(26,0.04851779);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(27,0.02495201);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(28,0.01108978);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(29,0.006931113);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(30,0.002772445);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(31,0.001386223);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(1,0.04036741);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(2,0.07993349);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(3,0.09043443);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(4,0.08284927);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(5,0.07289211);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(6,0.06085186);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(7,0.05384899);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(8,0.04945921);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(9,0.0470091);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(10,0.04771909);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(11,0.04666034);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(12,0.04528091);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(13,0.04324037);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(14,0.03937946);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(15,0.03473864);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(16,0.02982795);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(17,0.02556068);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(18,0.02169782);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(19,0.01905741);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(20,0.01669233);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(21,0.01393136);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(22,0.01315086);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(23,0.01216405);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(24,0.009703558);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(25,0.009604032);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(26,0.008201003);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(27,0.005881244);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(28,0.00392083);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(29,0.003099688);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(30,0.001960415);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(31,0.001386223);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetEntries(28234);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(1,0.5308243);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(2,2.094585);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(3,2.661659);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(4,2.290548);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(5,1.721321);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(6,1.240385);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(7,0.9808944);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(8,0.8025174);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(9,0.7214042);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(10,0.6880258);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(11,0.6492638);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(12,0.5936331);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(13,0.5304654);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(14,0.4568894);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(15,0.3603432);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(16,0.279589);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(17,0.2386735);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(18,0.1686866);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(19,0.1295656);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(20,0.1051599);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(21,0.08793236);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(22,0.06496227);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(23,0.06280883);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(24,0.03983874);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(25,0.02548244);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(26,0.02691807);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(27,0.01076723);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(28,0.007895967);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(29,0.002153446);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(30,0.0003589076);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(31,0.00143563);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(1,0.01380279);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(2,0.02741828);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(3,0.03090776);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(4,0.0286722);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(5,0.02485548);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(6,0.02109937);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(7,0.01876301);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(8,0.01697143);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(9,0.01609091);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(10,0.01571425);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(11,0.01526518);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(12,0.01459656);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(13,0.01379812);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(14,0.01280551);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(15,0.01137233);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(16,0.01001732);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(17,0.009255363);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(18,0.007780931);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(19,0.006819244);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(20,0.006143508);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(21,0.005617792);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(22,0.004828608);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(23,0.004747901);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(24,0.003781326);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(25,0.003024209);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(26,0.003108231);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(27,0.001965818);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(28,0.001683426);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(29,0.0008791405);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(30,0.0003589076);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(31,0.0007178152);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.01094003);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(14,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.006115663);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.006115663);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.006115663);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.004737172);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(14,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(16,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(23,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(1,0.001071798);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(2,0.00857438);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(3,0.008217114);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(4,0.003929924);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(5,0.005358988);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(6,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(7,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(8,0.002858127);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(9,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(10,0.001786329);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(13,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(14,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(15,0.001071798);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(16,0.001071798);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(17,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(22,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(24,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(1,0.0006188026);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(2,0.001750238);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(3,0.001713387);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(4,0.001184917);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(5,0.001383685);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(6,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(7,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(8,0.0010105);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(9,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(10,0.0007988707);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(13,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(14,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(15,0.0006188026);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(16,0.0006188026);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(17,0.0005052502);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(22,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(24,0.0005052502);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1__122 = new TH1D("VbbHcc_tags_H_dR_Bj1__122","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(1,4621);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(2,12461);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(3,12283);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(4,9953);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(5,8079);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(6,6833);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(7,5439);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(8,4801);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(9,4132);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(10,3767);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(11,3477);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(12,3146);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(13,2928);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(14,2623);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(15,2246);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(16,1927);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(17,1633);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(18,1416);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(19,1146);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(20,848);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(21,829);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(22,639);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(23,523);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(24,428);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(25,278);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(26,213);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(27,175);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(28,116);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(29,80);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(30,51);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(31,94);
   VbbHcc_tags_H_dR_Bj1__122->SetEntries(97214);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1__122->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1__122->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1__122->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1__122->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__122->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fx1089[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fy1089[30] = {
   6744.783,
   24374.51,
   20242.17,
   20100.29,
   16845.12,
   9599.348,
   11062.86,
   8689.382,
   8470.401,
   9622.058,
   8422,
   9526.074,
   8113.537,
   6433.448,
   3390.817,
   3424.467,
   2687.502,
   2011.325,
   1670.556,
   2596.827,
   1101.858,
   1064.951,
   774.7197,
   562.4858,
   1245.958,
   188.4759,
   625.8021,
   73.66057,
   44.07695,
   11.19438};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fex1089[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fey1089[30] = {
   913.7148,
   2644.391,
   2143.112,
   2236.714,
   2116.774,
   1074.523,
   1340.673,
   1732.441,
   1769.899,
   2593.021,
   1770.823,
   2238.14,
   1769.949,
   1663.451,
   625.0617,
   676.3899,
   616.2237,
   548.2752,
   401.4063,
   1448.468,
   389.6894,
   390.1271,
   382.321,
   277.1643,
   538.9798,
   49.70818,
   380.6069,
   27.13641,
   14.22104,
   3.88619};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_fx1089,Graph_from_VbbHcc_tags_H_dR_Bj1_fy1089,Graph_from_VbbHcc_tags_H_dR_Bj1_fex1089,Graph_from_VbbHcc_tags_H_dR_Bj1_fey1089);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetMinimum(6.577373);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetMaximum(29720.06);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__123 = new TH1D("data_mc_ratio__123","",30,0,6);
   data_mc_ratio__123->SetBinContent(1,0.6851221);
   data_mc_ratio__123->SetBinContent(2,0.5112309);
   data_mc_ratio__123->SetBinContent(3,0.6068025);
   data_mc_ratio__123->SetBinContent(4,0.4951669);
   data_mc_ratio__123->SetBinContent(5,0.4796047);
   data_mc_ratio__123->SetBinContent(6,0.7118192);
   data_mc_ratio__123->SetBinContent(7,0.491645);
   data_mc_ratio__123->SetBinContent(8,0.5525134);
   data_mc_ratio__123->SetBinContent(9,0.4878163);
   data_mc_ratio__123->SetBinContent(10,0.3914963);
   data_mc_ratio__123->SetBinContent(11,0.4128473);
   data_mc_ratio__123->SetBinContent(12,0.3302515);
   data_mc_ratio__123->SetBinContent(13,0.3608784);
   data_mc_ratio__123->SetBinContent(14,0.4077129);
   data_mc_ratio__123->SetBinContent(15,0.6623772);
   data_mc_ratio__123->SetBinContent(16,0.5627153);
   data_mc_ratio__123->SetBinContent(17,0.6076275);
   data_mc_ratio__123->SetBinContent(18,0.7040136);
   data_mc_ratio__123->SetBinContent(19,0.6859991);
   data_mc_ratio__123->SetBinContent(20,0.3265523);
   data_mc_ratio__123->SetBinContent(21,0.7523656);
   data_mc_ratio__123->SetBinContent(22,0.6000277);
   data_mc_ratio__123->SetBinContent(23,0.6750829);
   data_mc_ratio__123->SetBinContent(24,0.7609082);
   data_mc_ratio__123->SetBinContent(25,0.2231215);
   data_mc_ratio__123->SetBinContent(26,1.130118);
   data_mc_ratio__123->SetBinContent(27,0.2796411);
   data_mc_ratio__123->SetBinContent(28,1.574791);
   data_mc_ratio__123->SetBinContent(29,1.815008);
   data_mc_ratio__123->SetBinContent(30,4.555857);
   data_mc_ratio__123->SetBinContent(31,1.426184);
   data_mc_ratio__123->SetBinError(1,0.01007859);
   data_mc_ratio__123->SetBinError(2,0.004579738);
   data_mc_ratio__123->SetBinError(3,0.005475139);
   data_mc_ratio__123->SetBinError(4,0.004963346);
   data_mc_ratio__123->SetBinError(5,0.005335863);
   data_mc_ratio__123->SetBinError(6,0.008611206);
   data_mc_ratio__123->SetBinError(7,0.006666411);
   data_mc_ratio__123->SetBinError(8,0.007974013);
   data_mc_ratio__123->SetBinError(9,0.007588854);
   data_mc_ratio__123->SetBinError(10,0.006378666);
   data_mc_ratio__123->SetBinError(11,0.007001436);
   data_mc_ratio__123->SetBinError(12,0.005887967);
   data_mc_ratio__123->SetBinError(13,0.006669224);
   data_mc_ratio__123->SetBinError(14,0.007960775);
   data_mc_ratio__123->SetBinError(15,0.01397657);
   data_mc_ratio__123->SetBinError(16,0.01281881);
   data_mc_ratio__123->SetBinError(17,0.01503642);
   data_mc_ratio__123->SetBinError(18,0.01870895);
   data_mc_ratio__123->SetBinError(19,0.02026428);
   data_mc_ratio__123->SetBinError(20,0.01121385);
   data_mc_ratio__123->SetBinError(21,0.02613074);
   data_mc_ratio__123->SetBinError(22,0.02373673);
   data_mc_ratio__123->SetBinError(23,0.02951931);
   data_mc_ratio__123->SetBinError(24,0.03677988);
   data_mc_ratio__123->SetBinError(25,0.01338194);
   data_mc_ratio__123->SetBinError(26,0.07743439);
   data_mc_ratio__123->SetBinError(27,0.02113888);
   data_mc_ratio__123->SetBinError(28,0.1462157);
   data_mc_ratio__123->SetBinError(29,0.202924);
   data_mc_ratio__123->SetBinError(30,0.6379475);
   data_mc_ratio__123->SetBinError(31,0.7314341);
   data_mc_ratio__123->SetMinimum(0.4);
   data_mc_ratio__123->SetMaximum(1.6);
   data_mc_ratio__123->SetEntries(118.539);
   data_mc_ratio__123->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__123->SetLineColor(ci);
   data_mc_ratio__123->SetLineWidth(2);
   data_mc_ratio__123->SetMarkerStyle(20);
   data_mc_ratio__123->SetMarkerSize(1.2);
   data_mc_ratio__123->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__123->GetXaxis()->SetRange(1,30);
   data_mc_ratio__123->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__123->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__123->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__123->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__123->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__123->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__123->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__123->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__123->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__123->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__123->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__123->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__123->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__123->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__123->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__123->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__123->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1090[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1090[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1090[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1090[30] = {
   0.1354699,
   0.1084901,
   0.1058736,
   0.1112777,
   0.1256609,
   0.1119371,
   0.1211868,
   0.1993745,
   0.208951,
   0.2694872,
   0.2102616,
   0.2349488,
   0.2181477,
   0.2585629,
   0.1843395,
   0.1975168,
   0.2292924,
   0.272594,
   0.240283,
   0.5577838,
   0.3536657,
   0.3663335,
   0.4934959,
   0.4927489,
   0.4325827,
   0.2637375,
   0.6081904,
   0.368398,
   0.3226412,
   0.3471553};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1090,Graph_from_mc_statistical_error_fy1090,Graph_from_mc_statistical_error_fex1090,Graph_from_mc_statistical_error_fey1090);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1090 = new TH1F("Graph_Graph_from_mc_statistical_error1090","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1090->SetMinimum(0.2701715);
   Graph_Graph_from_mc_statistical_error1090->SetMaximum(1.729829);
   Graph_Graph_from_mc_statistical_error1090->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1090->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1090->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1090->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1090);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_16->cd();
   H_dR_Bj1_tags_16->Modified();
   H_dR_Bj1_tags_16->cd();
   H_dR_Bj1_tags_16->SetSelected(H_dR_Bj1_tags_16);
}
