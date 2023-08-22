void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Tue Aug 22 09:18:46 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(0,0,1,1);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetFillStyle(4000);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetFrameFillStyle(1000);
   Sphericity_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.877882,1.052419,12.66713);
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
   st->SetMaximum(3.68892e+10);
   
   TH1F *st_stack_251 = new TH1F("st_stack_251","",25,0,1);
   st_stack_251->SetMinimum(0.001372976);
   st_stack_251->SetMaximum(1.296058e+11);
   st_stack_251->SetDirectory(0);
   st_stack_251->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_251->SetLineColor(ci);
   st_stack_251->GetXaxis()->SetRange(1,25);
   st_stack_251->GetXaxis()->SetLabelFont(42);
   st_stack_251->GetXaxis()->SetLabelSize(0.035);
   st_stack_251->GetXaxis()->SetTitleSize(0.035);
   st_stack_251->GetXaxis()->SetTitleFont(42);
   st_stack_251->GetYaxis()->SetTitle("Events/0.04");
   st_stack_251->GetYaxis()->SetLabelFont(42);
   st_stack_251->GetYaxis()->SetLabelSize(0.05);
   st_stack_251->GetYaxis()->SetTitleSize(0.057);
   st_stack_251->GetYaxis()->SetTitleOffset(1.2);
   st_stack_251->GetYaxis()->SetTitleFont(42);
   st_stack_251->GetZaxis()->SetLabelFont(42);
   st_stack_251->GetZaxis()->SetLabelSize(0.035);
   st_stack_251->GetZaxis()->SetTitleSize(0.035);
   st_stack_251->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_251);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,34089.48);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,36002.29);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,26213.64);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,25189.81);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,18971.81);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,16766.18);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,13880.1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,7081.47);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,8976.512);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,6915.214);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,6058.082);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,6112.892);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,4239.811);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,2635.889);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,2247.989);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1764.208);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1486.774);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,1029.054);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,755.7818);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,648.359);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,751.2654);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,50.20174);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,2584.216);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2677.41);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2257.139);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,2579.253);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,2863.832);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,2088.568);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1864.545);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,1020.807);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,1563.323);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,1230.544);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,1630.16);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,2334.25);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,1062.122);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,603.653);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,643.8276);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,444.3484);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,456.4276);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,469.2568);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,341.303);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,532.9071);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,689.4139);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,35.0447);
   VbbHcc_both_Sphericity_stack_1->SetEntries(9895);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,232.9288);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,228.2363);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,167.6642);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,129.3166);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,99.17386);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,82.20035);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,68.70759);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,60.14712);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,48.58603);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,43.64303);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,32.25937);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,32.60109);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,27.0765);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,19.96121);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,17.58544);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,11.16394);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,9.451909);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,8.924802);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,4.059296);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.9707151);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.8938945);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.001627622);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.02576598);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(25,0.06807733);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,7.059758);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,6.645757);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,5.729485);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,5.107554);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,4.396642);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,4.179093);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,3.791681);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,3.550696);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,3.186832);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.845557);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,2.639265);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,2.559223);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,2.381415);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.946515);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.942368);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.472601);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,1.417802);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,1.333242);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.8475967);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.4226395);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.468664);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.07261863);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.02576598);
   VbbHcc_both_Sphericity_stack_2->SetBinError(25,0.06807733);
   VbbHcc_both_Sphericity_stack_2->SetEntries(14948);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,4586.819);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,5013.683);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,3745.266);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,2825.91);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,2198.635);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,1756.7);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,1452.05);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,1214.637);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,1031.558);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,852.6511);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,741.1541);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,631.2009);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,536.0099);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,446.7583);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,368.5991);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,298.6107);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,229.7355);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,162.4917);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,96.99814);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,46.25181);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,16.80112);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,6.907867);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,1.457457);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,0.2055626);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,20.49697);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,20.4933);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,17.84256);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,15.18127);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,14.04937);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,12.11743);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,10.87366);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,10.15906);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,9.24238);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,8.312495);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,8.372768);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,7.177193);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,7.016433);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,5.939148);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,5.356837);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,5.963042);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,4.279995);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,3.886637);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,2.775992);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.938679);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,1.146487);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.7175261);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.330432);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.1040635);
   VbbHcc_both_Sphericity_stack_3->SetEntries(416844);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,620.6923);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,637.0665);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,482.0439);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,356.1593);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,298.6391);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,206.6391);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,189.9978);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,151.2831);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,125.753);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,108.3225);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,92.23466);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,60.89278);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,64.56645);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,54.5938);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,44.05853);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,39.60279);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,29.90202);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,16.5584);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,7.91177);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,6.843549);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,2.402873);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,18.36701);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,20.14127);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,21.51195);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,15.33083);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,17.31568);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,8.854597);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,10.64779);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,8.266327);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,9.97292);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,8.988319);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,7.317646);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,3.93076);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,6.271716);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,5.545376);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,7.087546);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,3.352875);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,3.500103);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,2.377684);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.531636);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,1.644723);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,1.024374);
   VbbHcc_both_Sphericity_stack_4->SetEntries(18425);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,53.18189);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,66.05757);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,50.96265);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,27.41851);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,25.4942);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,27.05459);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,21.82974);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,16.5738);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,9.93193);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,6.81248);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,11.69272);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,7.938125);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,4.293487);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,3.139858);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,5.995555);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,2.58666);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,4.602925);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,4.466804);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.4570818);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,0.1223852);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(22,0.1857799);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,5.312375);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,11.23498);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,6.946198);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,3.553635);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,4.483907);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,4.998383);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,5.090811);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,3.167189);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,2.952926);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,1.067678);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,2.830981);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,2.473969);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.9173795);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.7680788);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,2.659735);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,0.6590436);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,2.199891);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,2.700456);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.3263108);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,0.1223852);
   VbbHcc_both_Sphericity_stack_5->SetBinError(22,0.1857799);
   VbbHcc_both_Sphericity_stack_5->SetEntries(2210);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_6 = new TH1D("VbbHcc_both_Sphericity_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(2,0.4278565);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(5,0.6225638);
   VbbHcc_both_Sphericity_stack_6->SetBinError(2,0.4278565);
   VbbHcc_both_Sphericity_stack_6->SetBinError(5,0.6225638);
   VbbHcc_both_Sphericity_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,3.390964);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,0.9373281);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,1.32836);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.9073219);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,1.770987);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,1.205602);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.6888413);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,0.3690103);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,1.435927);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,0.4425544);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.3443727);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(16,0.3429098);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(18,0.4655805);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,1.173679);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.6627946);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,0.7805829);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.6415734);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.8917723);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.6995609);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.4871083);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,0.3690103);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,1.073163);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.3570941);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.3443727);
   VbbHcc_both_Sphericity_stack_7->SetBinError(16,0.3429098);
   VbbHcc_both_Sphericity_stack_7->SetBinError(18,0.4655805);
   VbbHcc_both_Sphericity_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,11.73581);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,11.68707);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,8.030527);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,8.043885);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,6.907504);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,3.100456);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,4.085834);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,3.7158);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,2.117733);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,2.797992);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,1.613282);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,0.8492597);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,0.6152127);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,0.6060478);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,0.2587137);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,1.32577);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.3188761);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(19,0.3700786);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.370387);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.916566);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.892373);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,1.623664);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.551728);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,1.431781);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,1.011307);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,1.15824);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,1.059353);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.811144);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.9463632);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.7299699);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.5027807);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.4431308);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.3807772);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.2587137);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.6181865);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.3188761);
   VbbHcc_both_Sphericity_stack_8->SetBinError(19,0.3700786);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.370387);
   VbbHcc_both_Sphericity_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,10.44155);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,10.6115);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,7.972064);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,6.76387);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,5.460937);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,4.516145);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,3.743657);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,3.200601);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,2.702784);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,2.190807);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.861328);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.39774);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,1.347593);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,1.016994);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.8713142);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.7825329);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.4572166);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.3908702);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1491159);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.06442281);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.0307419);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.002822058);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.1945868);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1919117);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.2082727);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.1565439);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.1408203);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.1225403);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.1163324);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.1108593);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.09957457);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.08439899);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.07823592);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.06857704);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.06760511);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.05917284);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.0532863);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.06828948);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.04259701);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.03636997);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.02162904);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01391793);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.009906053);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.002822058);
   VbbHcc_both_Sphericity_stack_9->SetEntries(22331);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,3.445943);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,3.73198);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,2.756454);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,2.150841);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.87453);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.493531);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,1.247359);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,1.100301);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.9322393);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.8103753);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.6967349);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.5969254);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.505268);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.4421769);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.3577916);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.305394);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.2125311);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.1558425);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.09433985);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.04595033);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.008785699);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.003290287);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.0005004825);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.04405363);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.04551812);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.03921471);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.034657);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.03238374);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.02892198);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.02640094);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.02477793);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.02288242);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.02129872);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.01975979);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.01827581);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01686578);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01577425);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01414435);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.01301698);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.01094339);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.009290046);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.007165916);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.004993075);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.002159055);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.001349477);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0005004825);
   VbbHcc_both_Sphericity_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.03271253);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.0277766);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.01103771);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.02887563);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.01566976);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.01732371);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.01378266);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.004474608);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.008436625);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.01003552);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.007023324);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.004400037);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(16,0.001589558);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(17,0.004895125);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(18,0.002241271);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.008547376);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.008184266);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.005044775);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.008396482);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.005982134);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.006631322);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.005664388);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.00316472);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.004386299);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.00511271);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.004057405);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.003119572);
   VbbHcc_both_Sphericity_stack_11->SetBinError(16,0.001589558);
   VbbHcc_both_Sphericity_stack_11->SetBinError(17,0.003671149);
   VbbHcc_both_Sphericity_stack_11->SetBinError(18,0.002241271);
   VbbHcc_both_Sphericity_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.02101403);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.01470698);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.01004087);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.01106858);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.009469086);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.006709469);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.005565867);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.004149317);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.003736128);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.003396114);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.002472884);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.001857426);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.001254394);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.002538565);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.002328992);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0005809083);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.001311534);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(22,0.0004012604);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.002662794);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.002170931);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.001743217);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.001874159);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.001760723);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.001483759);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.001379602);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.001161713);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.00110368);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.001052077);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.0009411517);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0007293802);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.000637769);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.0008553405);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0009958601);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0004108203);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.0006397848);
   VbbHcc_both_Sphericity_stack_12->SetBinError(22,0.0004012604);
   VbbHcc_both_Sphericity_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity__689 = new TH1D("VbbHcc_both_Sphericity__689","",25,0,1);
   VbbHcc_both_Sphericity__689->SetBinContent(1,55312);
   VbbHcc_both_Sphericity__689->SetBinContent(2,56899);
   VbbHcc_both_Sphericity__689->SetBinContent(3,42268);
   VbbHcc_both_Sphericity__689->SetBinContent(4,32057);
   VbbHcc_both_Sphericity__689->SetBinContent(5,25048);
   VbbHcc_both_Sphericity__689->SetBinContent(6,19859);
   VbbHcc_both_Sphericity__689->SetBinContent(7,16307);
   VbbHcc_both_Sphericity__689->SetBinContent(8,13411);
   VbbHcc_both_Sphericity__689->SetBinContent(9,11020);
   VbbHcc_both_Sphericity__689->SetBinContent(10,9380);
   VbbHcc_both_Sphericity__689->SetBinContent(11,7976);
   VbbHcc_both_Sphericity__689->SetBinContent(12,6749);
   VbbHcc_both_Sphericity__689->SetBinContent(13,5825);
   VbbHcc_both_Sphericity__689->SetBinContent(14,4643);
   VbbHcc_both_Sphericity__689->SetBinContent(15,3957);
   VbbHcc_both_Sphericity__689->SetBinContent(16,2967);
   VbbHcc_both_Sphericity__689->SetBinContent(17,2437);
   VbbHcc_both_Sphericity__689->SetBinContent(18,1739);
   VbbHcc_both_Sphericity__689->SetBinContent(19,945);
   VbbHcc_both_Sphericity__689->SetBinContent(20,391);
   VbbHcc_both_Sphericity__689->SetBinContent(21,163);
   VbbHcc_both_Sphericity__689->SetBinContent(22,49);
   VbbHcc_both_Sphericity__689->SetBinContent(23,16);
   VbbHcc_both_Sphericity__689->SetBinContent(24,3);
   VbbHcc_both_Sphericity__689->SetBinContent(25,1);
   VbbHcc_both_Sphericity__689->SetEntries(319446);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity__689->SetLineColor(ci);
   VbbHcc_both_Sphericity__689->SetLineWidth(2);
   VbbHcc_both_Sphericity__689->SetMarkerStyle(20);
   VbbHcc_both_Sphericity__689->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity__689->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity__689->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__689->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__689->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__689->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__689->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__689->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__689->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__689->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__689->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__689->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__689->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__689->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__689->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__689->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_fx1501[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_both_Sphericity_fy1501[25] = {
   39612.17,
   41974.77,
   30679.68,
   28545.62,
   21609.55,
   18849.68,
   15622.99,
   8532.825,
   10198.11,
   7932.825,
   6941.04,
   6848.37,
   4874.67,
   3162.758,
   2685.717,
   2118.931,
   1761.461,
   1222.51,
   865.8217,
   703.0282,
   771.4028,
   57.30353,
   1.483724,
   0.2055626,
   0.06807733};
   Double_t Graph_from_VbbHcc_both_Sphericity_fex1501[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_both_Sphericity_fey1501[25] = {
   2584.379,
   2677.596,
   2257.33,
   2579.351,
   2863.926,
   2088.633,
   1864.618,
   1020.902,
   1563.388,
   1230.609,
   1630.203,
   2334.267,
   1062.167,
   603.7115,
   643.8973,
   444.4045,
   456.4687,
   469.2889,
   341.3191,
   532.9134,
   689.4158,
   35.05261,
   0.3314354,
   0.1040635,
   0.06807733};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_fx1501,Graph_from_VbbHcc_both_Sphericity_fy1501,Graph_from_VbbHcc_both_Sphericity_fex1501,Graph_from_VbbHcc_both_Sphericity_fey1501);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity1501 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity1501","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetMinimum(0.0204232);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetMaximum(49117.6);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity1501);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_both_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__690 = new TH1D("data_mc_ratio__690","",25,0,1);
   data_mc_ratio__690->SetBinContent(1,1.396339);
   data_mc_ratio__690->SetBinContent(2,1.355553);
   data_mc_ratio__690->SetBinContent(3,1.37772);
   data_mc_ratio__690->SetBinContent(4,1.123009);
   data_mc_ratio__690->SetBinContent(5,1.159117);
   data_mc_ratio__690->SetBinContent(6,1.053546);
   data_mc_ratio__690->SetBinContent(7,1.043782);
   data_mc_ratio__690->SetBinContent(8,1.571695);
   data_mc_ratio__690->SetBinContent(9,1.080593);
   data_mc_ratio__690->SetBinContent(10,1.182429);
   data_mc_ratio__690->SetBinContent(11,1.149107);
   data_mc_ratio__690->SetBinContent(12,0.9854899);
   data_mc_ratio__690->SetBinContent(13,1.194953);
   data_mc_ratio__690->SetBinContent(14,1.468022);
   data_mc_ratio__690->SetBinContent(15,1.473349);
   data_mc_ratio__690->SetBinContent(16,1.400234);
   data_mc_ratio__690->SetBinContent(17,1.383511);
   data_mc_ratio__690->SetBinContent(18,1.422484);
   data_mc_ratio__690->SetBinContent(19,1.091449);
   data_mc_ratio__690->SetBinContent(20,0.5561654);
   data_mc_ratio__690->SetBinContent(21,0.2113034);
   data_mc_ratio__690->SetBinContent(22,0.8550956);
   data_mc_ratio__690->SetBinContent(23,10.78368);
   data_mc_ratio__690->SetBinContent(24,14.59409);
   data_mc_ratio__690->SetBinContent(25,14.68918);
   data_mc_ratio__690->SetBinError(1,0.005937191);
   data_mc_ratio__690->SetBinError(2,0.005682822);
   data_mc_ratio__690->SetBinError(3,0.006701238);
   data_mc_ratio__690->SetBinError(4,0.00627223);
   data_mc_ratio__690->SetBinError(5,0.007323874);
   data_mc_ratio__690->SetBinError(6,0.007476093);
   data_mc_ratio__690->SetBinError(7,0.008173779);
   data_mc_ratio__690->SetBinError(8,0.01357181);
   data_mc_ratio__690->SetBinError(9,0.01029369);
   data_mc_ratio__690->SetBinError(10,0.01220882);
   data_mc_ratio__690->SetBinError(11,0.01286673);
   data_mc_ratio__690->SetBinError(12,0.01199589);
   data_mc_ratio__690->SetBinError(13,0.01565679);
   data_mc_ratio__690->SetBinError(14,0.02154435);
   data_mc_ratio__690->SetBinError(15,0.02342193);
   data_mc_ratio__690->SetBinError(16,0.02570644);
   data_mc_ratio__690->SetBinError(17,0.02802559);
   data_mc_ratio__690->SetBinError(18,0.03411124);
   data_mc_ratio__690->SetBinError(19,0.03550483);
   data_mc_ratio__690->SetBinError(20,0.02812649);
   data_mc_ratio__690->SetBinError(21,0.01655056);
   data_mc_ratio__690->SetBinError(22,0.1221565);
   data_mc_ratio__690->SetBinError(23,2.69592);
   data_mc_ratio__690->SetBinError(24,8.425904);
   data_mc_ratio__690->SetBinError(25,14.68918);
   data_mc_ratio__690->SetMinimum(0.4);
   data_mc_ratio__690->SetMaximum(1.6);
   data_mc_ratio__690->SetEntries(7.523217);
   data_mc_ratio__690->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__690->SetLineColor(ci);
   data_mc_ratio__690->SetLineWidth(2);
   data_mc_ratio__690->SetMarkerStyle(20);
   data_mc_ratio__690->SetMarkerSize(1.2);
   data_mc_ratio__690->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__690->GetXaxis()->SetRange(1,25);
   data_mc_ratio__690->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__690->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__690->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__690->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__690->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__690->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__690->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__690->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__690->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__690->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__690->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__690->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__690->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__690->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__690->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__690->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__690->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1502[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1502[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1502[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1502[25] = {
   0.06524204,
   0.06379062,
   0.07357737,
   0.0903589,
   0.1325306,
   0.1108047,
   0.1193509,
   0.1196441,
   0.1533018,
   0.1551287,
   0.2348644,
   0.34085,
   0.2178952,
   0.1908813,
   0.2397487,
   0.2097305,
   0.2591421,
   0.3838733,
   0.3942141,
   0.7580257,
   0.893717,
   0.6117008,
   0.2233808,
   0.5062374,
   1};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1502,Graph_from_mc_statistical_error_fy1502,Graph_from_mc_statistical_error_fex1502,Graph_from_mc_statistical_error_fey1502);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1502 = new TH1F("Graph_Graph_from_mc_statistical_error1502","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1502->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1502->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1502->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1502->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1502->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1502);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
