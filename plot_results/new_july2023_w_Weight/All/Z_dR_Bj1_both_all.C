void Z_dR_Bj1_both_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_all/Z_dR_Bj1_both_all
//=========  (Thu Aug 10 12:25:06 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_all = new TCanvas("Z_dR_Bj1_both_all", "Z_dR_Bj1_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_all->SetHighLightColor(2);
   Z_dR_Bj1_both_all->Range(0,0,1,1);
   Z_dR_Bj1_both_all->SetFillColor(0);
   Z_dR_Bj1_both_all->SetFillStyle(4000);
   Z_dR_Bj1_both_all->SetBorderMode(0);
   Z_dR_Bj1_both_all->SetBorderSize(2);
   Z_dR_Bj1_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-283.228,6.314516,283244.7);
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
   st->SetMinimum(0.3);
   st->SetMaximum(242754.2);
   
   TH1F *st_stack_248 = new TH1F("st_stack_248","",30,0,6);
   st_stack_248->SetMinimum(0.3);
   st_stack_248->SetMaximum(254891.9);
   st_stack_248->SetDirectory(0);
   st_stack_248->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_248->SetLineColor(ci);
   st_stack_248->GetXaxis()->SetRange(1,30);
   st_stack_248->GetXaxis()->SetLabelFont(42);
   st_stack_248->GetXaxis()->SetLabelSize(0.035);
   st_stack_248->GetXaxis()->SetTitleSize(0.035);
   st_stack_248->GetXaxis()->SetTitleFont(42);
   st_stack_248->GetYaxis()->SetTitle("Events/0.2");
   st_stack_248->GetYaxis()->SetLabelFont(42);
   st_stack_248->GetYaxis()->SetLabelSize(0.05);
   st_stack_248->GetYaxis()->SetTitleSize(0.057);
   st_stack_248->GetYaxis()->SetTitleOffset(1.2);
   st_stack_248->GetYaxis()->SetTitleFont(42);
   st_stack_248->GetZaxis()->SetLabelFont(42);
   st_stack_248->GetZaxis()->SetLabelSize(0.035);
   st_stack_248->GetZaxis()->SetTitleSize(0.035);
   st_stack_248->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_248);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(1,20634.99);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(2,94400.11);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(3,98480.31);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(4,63763.26);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(5,39459.02);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(6,39476.66);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(7,29632.39);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(8,27413.79);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(9,36686.76);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(10,21443.44);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(11,22707.97);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(12,17394.72);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(13,16598.43);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(14,14120.23);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(15,13428.17);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(16,9048.941);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(17,7266.791);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(18,6884.335);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(19,3883.656);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(20,5463.595);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(21,4400.699);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(22,4454.895);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(23,3362.473);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(24,1438.549);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(25,1481.04);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(26,1163.112);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(27,504.6026);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(28,735.4443);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(29,140.2243);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(30,121.0874);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(31,147.4493);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(1,1483.259);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(2,4511.306);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(3,15444.29);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(4,3663.012);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(5,2452.314);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(6,3855.357);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(7,2864.014);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(8,2596.477);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(9,14940.32);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(10,2692.038);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(11,2915.285);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(12,2245.502);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(13,2165.684);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(14,1628.185);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(15,1623.154);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(16,1278.125);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(17,1035.228);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(18,1150.612);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(19,582.6467);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(20,1599.108);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(21,903.743);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(22,971.3844);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(23,769.3142);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(24,311.5799);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(25,541.075);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(26,395.1579);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(27,102.7203);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(28,383.2849);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(29,45.89426);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(30,48.31696);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(31,58.21246);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetEntries(30761);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(1,104.4085);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(2,390.852);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(3,429.6223);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(4,369.633);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(5,311.1781);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(6,248.866);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(7,196.9026);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(8,169.2005);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(9,144.8175);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(10,123.1091);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(11,103.3118);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(12,95.48241);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(13,82.66267);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(14,75.5142);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(15,63.5133);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(16,56.93824);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(17,49.33594);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(18,40.88645);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(19,35.77055);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(20,29.25524);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(21,25.13461);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(22,21.03064);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(23,17.42577);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(24,13.86263);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(25,10.13898);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(26,6.581804);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(27,3.979389);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(28,3.449628);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(29,1.422865);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(30,0.9732961);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(31,1.119208);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(1,4.303069);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(2,7.964834);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(3,8.222701);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(4,7.645534);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(5,7.029913);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(6,6.357799);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(7,5.599161);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(8,5.233261);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(9,4.831411);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(10,4.466685);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(11,4.083857);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(12,3.886706);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(13,3.632571);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(14,3.477217);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(15,3.178068);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(16,3.070367);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(17,2.757849);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(18,2.569076);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(19,2.403027);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(20,2.176443);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(21,2.095283);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(22,1.924636);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(23,1.650258);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(24,1.499483);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(25,1.3456);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(26,1.079288);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(27,0.7445945);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(28,0.7701184);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(29,0.4357526);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(30,0.4073396);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(31,0.3411466);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetEntries(36922);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(1,1522.058);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(2,7038.119);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(3,8862.23);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(4,7894.765);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(5,6407.589);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(6,5023.48);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(7,3958.552);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(8,3212.468);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(9,2675.797);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(10,2269.045);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(11,1991.726);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(12,1791.094);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(13,1593.299);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(14,1414.585);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(15,1244.516);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(16,1110.122);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(17,918.9734);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(18,786.5322);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(19,670.4497);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(20,573.2163);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(21,459.5395);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(22,369.8396);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(23,288.3419);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(24,223.5513);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(25,162.2059);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(26,117.07);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(27,76.26837);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(28,43.29967);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(29,28.81856);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(30,15.21052);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(31,25.17225);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(1,10.15394);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(2,21.81386);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(3,24.52034);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(4,23.13133);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(5,20.82859);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(6,18.43554);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(7,16.35859);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(8,14.72939);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(9,13.45137);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(10,12.38483);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(11,11.60638);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(12,11.01895);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(13,10.39601);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(14,9.789791);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(15,9.189345);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(16,8.678372);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(17,7.886297);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(18,7.297379);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(19,6.739064);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(20,6.235732);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(21,5.572709);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(22,5.002507);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(23,4.415727);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(24,3.883635);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(25,3.3126);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(26,2.814522);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(27,2.265585);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(28,1.700289);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(29,1.388003);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(30,1.010533);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(31,1.301282);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetEntries(956114);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(1,336.1785);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(2,1196.114);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(3,1284.374);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(4,965.3042);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(5,662.7289);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(6,539.6022);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(7,382.3919);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(8,330.8614);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(9,311.9356);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(10,257.0217);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(11,235.7264);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(12,205.6631);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(13,174.3991);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(14,167.7308);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(15,136.0202);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(16,123.2683);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(17,111.7607);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(18,94.04428);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(19,77.05541);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(20,80.79195);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(21,54.19793);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(22,46.15217);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(23,37.45211);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(24,22.40347);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(25,23.25927);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(26,15.11969);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(27,10.59286);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(28,6.5389);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(29,5.192586);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(30,1.137631);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(31,2.832812);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(1,7.060881);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(2,21.75564);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(3,23.88645);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(4,23.67506);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(5,19.40286);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(6,18.81269);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(7,12.89814);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(8,11.89179);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(9,14.36417);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(10,12.43775);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(11,12.36926);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(12,11.00468);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(13,7.404768);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(14,9.411798);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(15,6.938179);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(16,9.452295);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(17,8.125872);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(18,7.470663);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(19,6.281013);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(20,8.561859);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(21,3.803885);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(22,4.894148);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(23,4.715813);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(24,2.283482);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(25,3.197465);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(26,1.877784);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(27,1.416926);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(28,0.985042);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(29,1.221523);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(30,0.4378046);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(31,0.8430369);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetEntries(52923);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(1,61.13851);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(2,150.2893);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(3,115.0483);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(4,86.60169);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(5,85.62597);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(6,47.68502);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(7,32.25693);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(8,32.44176);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(9,27.33834);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(10,22.83693);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(11,26.24702);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(12,17.92955);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(13,12.46041);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(14,17.21252);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(15,6.989705);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(16,12.79955);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(17,8.551502);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(18,6.543598);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(19,9.66142);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(20,4.482259);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(21,3.858482);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(22,11.76523);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(23,2.712436);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(24,1.68088);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(25,1.707919);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(26,1.551683);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(27,1.142789);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(28,0.7033701);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(29,1.677203);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(30,0.09609274);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(31,0.001207297);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(1,4.177867);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(2,10.0073);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(3,7.61098);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(4,12.43647);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(5,10.51589);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(6,4.686755);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(7,3.761133);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(8,4.299543);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(9,4.259058);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(10,3.472404);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(11,6.583504);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(12,3.240665);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(13,1.709925);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(14,3.648891);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(15,0.9747265);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(16,2.888771);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(17,1.619792);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(18,1.328872);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(19,2.552254);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(20,0.8792479);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(21,0.7709811);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(22,6.817538);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(23,0.5762437);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(24,0.5991409);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(25,0.419721);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(26,0.5189933);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(27,0.4816154);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(28,0.3186701);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(29,0.6864924);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(30,0.08527317);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(31,0.001207297);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetEntries(8398);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(3,1.172824);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(4,1.351393);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(5,0.2687386);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(6,0.7207813);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(10,0.4520427);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(17,0.1343693);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(3,0.6669298);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(4,0.6627884);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(5,0.1900269);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(6,0.4903599);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(7,0.1343693);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(10,0.4520427);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(12,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(17,0.1343693);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(21,0.1343693);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(1,0.5449062);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(2,1.623081);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(3,1.122048);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(4,1.845523);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(5,0.8718499);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(6,0.5610239);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(7,0.2179625);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(8,0.3269437);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(9,0.2179625);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(10,0.6700051);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(11,0.4242871);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(12,0.4242871);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(14,0.1089812);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(15,0.2179625);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(16,0.1089812);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(19,0.1089812);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(24,0.1089812);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(1,0.2436895);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(2,0.4918747);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(3,0.6576009);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(4,0.697364);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(5,0.3082455);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(6,0.4649941);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(7,0.1541227);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(8,0.188761);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(9,0.1541227);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(10,0.4775944);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(11,0.3336086);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(12,0.3336086);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(14,0.1089812);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(15,0.1541227);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(16,0.1089812);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(19,0.1089812);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(24,0.1089812);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(1,6.811831);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(2,27.52423);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(3,25.75622);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(4,19.88282);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(5,14.21461);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(6,6.429947);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(7,6.962587);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(8,6.005929);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(9,6.532417);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(10,6.003644);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(11,3.754668);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(12,3.615991);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(13,3.09337);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(14,2.389937);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(15,2.596937);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(16,2.653181);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(17,2.126693);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(18,1.851145);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(19,1.841127);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(20,1.06528);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(21,0.5226215);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(22,0.8120543);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(24,0.4864143);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(25,0.7658287);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(1,1.338209);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(2,2.677671);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(3,2.593669);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(4,2.28479);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(5,1.920252);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(6,1.288396);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(7,1.342446);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(8,1.254806);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(9,1.308713);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(10,1.253598);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(11,1.004648);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(12,0.9683129);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(13,0.8946551);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(14,0.798065);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(15,0.822882);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(16,0.8402407);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(17,0.7535324);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(18,0.7005069);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(19,0.696948);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(20,0.5332834);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(21,0.370435);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(22,0.4693271);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(24,0.3439469);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(25,0.4431386);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(1,5.817551);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(2,25.82465);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(3,27.02491);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(4,19.15433);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(5,12.8709);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(6,8.889782);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(7,7.110555);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(8,5.548154);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(9,5.008933);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(10,4.986371);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(11,4.437148);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(12,4.234254);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(13,3.68756);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(14,3.315047);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(15,2.818675);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(16,2.19239);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(17,1.692041);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(18,1.250312);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(19,0.9731512);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(20,0.7469526);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(21,0.6927454);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(22,0.5673511);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(23,0.4913446);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(24,0.4073769);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(25,0.3040378);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(26,0.1978619);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(27,0.136188);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(28,0.06725238);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(29,0.0223127);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(31,0.006725143);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(1,0.1044938);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(2,0.2197706);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(3,0.2235089);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(4,0.187369);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(5,0.1540887);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(6,0.1279122);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(7,0.1145614);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(8,0.1014206);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(9,0.09650904);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(10,0.09636667);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(11,0.09087262);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(12,0.08886306);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(13,0.08271525);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(14,0.07853887);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(15,0.07234082);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(16,0.06389896);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(17,0.05598882);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(18,0.04792632);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(19,0.04259312);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(20,0.03742307);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(21,0.03555194);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(22,0.0322983);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(23,0.02990269);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(24,0.02804705);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(25,0.02376697);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(26,0.01938074);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(27,0.01585044);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(28,0.01129726);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(29,0.006613274);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(30,0.002285779);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(31,0.003441894);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetEntries(84809);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(1,2.262608);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(2,10.42666);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(3,12.61792);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(4,9.731);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(5,6.527125);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(6,4.54031);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(7,3.277969);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(8,2.641311);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(9,2.277702);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(10,1.959372);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(11,1.88665);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(12,1.690439);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(13,1.466785);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(14,1.35976);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(15,1.122386);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(16,0.87815);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(17,0.8081725);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(18,0.6119608);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(19,0.5735417);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(20,0.4733778);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(21,0.3992838);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(22,0.3238178);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(23,0.2716777);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(24,0.2236538);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(25,0.1372109);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(26,0.1289783);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(27,0.05488438);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(28,0.01920953);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(29,0.01097688);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(30,0.001372109);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(31,0.001372109);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(1,0.03295643);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(2,0.07074701);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(3,0.07782683);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(4,0.06834618);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(5,0.0559753);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(6,0.04668509);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(7,0.03966778);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(8,0.03560781);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(9,0.03306617);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(10,0.0306686);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(11,0.03009409);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(12,0.02848625);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(13,0.02653498);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(14,0.02554858);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(15,0.02321168);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(16,0.02053146);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(17,0.01969643);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(18,0.01713947);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(19,0.01659274);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(20,0.01507438);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(21,0.01384447);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(22,0.01246769);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(23,0.0114199);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(24,0.01036152);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(25,0.008115772);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(26,0.007868533);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(27,0.005132865);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(28,0.003036644);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(29,0.002295487);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(30,0.0008115772);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(31,0.0008115772);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetEntries(150219);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(1,0.04449714);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(2,0.1093086);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(3,0.08155429);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(4,0.05481512);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(5,0.02178735);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(6,0.0224094);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(7,0.01809414);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(8,0.0147192);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(9,0.005788292);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(10,0.005788292);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(11,0.007883368);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(12,0.004740753);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(14,0.00589551);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(15,0.004315259);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(17,0.002627789);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(18,0.004315259);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(20,0.004208041);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(26,0.004315259);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(27,0.002627789);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(1,0.01022574);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(2,0.01592046);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(3,0.01333042);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(4,0.0112957);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(5,0.006800841);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(6,0.007290089);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(7,0.006570232);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(8,0.0060847);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(9,0.003449589);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(10,0.003449589);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(11,0.004551465);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(12,0.002737075);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(13,0.002234813);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(14,0.003531947);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(15,0.003158712);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(17,0.002627789);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(18,0.003158712);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(20,0.003066345);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(26,0.003158712);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(27,0.002627789);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(1,0.009244933);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(2,0.04696472);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(3,0.04726376);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(4,0.02974068);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(5,0.01596517);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(6,0.007148008);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(7,0.006294419);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(8,0.007965866);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(9,0.006800672);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(10,0.004265369);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(11,0.004979901);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(12,0.004230927);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(13,0.002294265);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(14,0.001337349);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(15,0.003019735);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(16,0.002236319);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(17,0.001129743);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(18,0.001106576);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(19,0.002835296);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(20,0.002063155);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(21,0.001487345);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(23,0.001371791);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(27,0.0005648715);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(1,0.001644882);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(2,0.003641081);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(3,0.003643896);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(4,0.002935897);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(5,0.002155777);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(6,0.001385103);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(7,0.001310387);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(8,0.001483353);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(9,0.001444943);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(10,0.001088824);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(11,0.00120034);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(12,0.001084753);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(13,0.0007826379);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(14,0.0006201436);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(15,0.0009627758);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(16,0.0008086784);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(17,0.0005843612);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(18,0.0005590015);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(19,0.0009554226);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(20,0.0007872166);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(21,0.0006243665);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(23,0.000627238);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(27,0.0004132058);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all__681 = new TH1D("VbbHcc_both_Z_dR_Bj1_all__681","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(1,20931);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(2,77347);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(3,72145);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(4,54489);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(5,43474);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(6,33915);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(7,27432);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(8,22868);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(9,19330);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(10,16641);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(11,14821);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(12,13371);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(13,12036);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(14,10645);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(15,9509);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(16,8460);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(17,7132);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(18,6136);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(19,5210);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(20,4408);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(21,3662);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(22,3029);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(23,2554);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(24,2034);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(25,1514);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(26,1117);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(27,789);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(28,490);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(29,268);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(30,144);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(31,231);
   VbbHcc_both_Z_dR_Bj1_all__681->SetEntries(496161);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all__681->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all__681->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1_all__681->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1_all__681->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fx1495[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fy1495[30] = {
   22674.27,
   103241.3,
   109239.4,
   73131.61,
   46960.93,
   45357.46,
   34220.22,
   31173.31,
   39860.7,
   24129.53,
   25075.81,
   19515.17,
   18469.51,
   15802.45,
   14885.97,
   10357.9,
   8360.177,
   7816.06,
   4680.095,
   6153.633,
   4945.18,
   4905.386,
   3709.449,
   1701.277,
   1679.562,
   1303.767,
   596.7803,
   789.5225,
   177.3691,
   138.5086};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fex1495[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fey1495[30] = {
   1483.323,
   4511.43,
   15444.34,
   3663.191,
   2452.513,
   3855.455,
   2864.098,
   2596.556,
   14940.34,
   2692.101,
   2915.345,
   2245.562,
   2165.725,
   1628.25,
   1623.198,
   1278.197,
   1035.295,
   1150.663,
   582.7305,
   1599.145,
   903.7711,
   971.4356,
   769.3434,
   311.6169,
   541.0966,
   395.1742,
   102.7589,
   383.2908,
   45.93868,
   48.3313};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fx1495,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fy1495,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fex1495,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fey1495);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetMinimum(81.15956);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetMaximum(137143.1);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__682 = new TH1D("data_mc_ratio__682","",30,0,6);
   data_mc_ratio__682->SetBinContent(1,0.923117);
   data_mc_ratio__682->SetBinContent(2,0.7491863);
   data_mc_ratio__682->SetBinContent(3,0.6604302);
   data_mc_ratio__682->SetBinContent(4,0.7450813);
   data_mc_ratio__682->SetBinContent(5,0.9257482);
   data_mc_ratio__682->SetBinContent(6,0.7477271);
   data_mc_ratio__682->SetBinContent(7,0.8016313);
   data_mc_ratio__682->SetBinContent(8,0.7335763);
   data_mc_ratio__682->SetBinContent(9,0.4849388);
   data_mc_ratio__682->SetBinContent(10,0.6896529);
   data_mc_ratio__682->SetBinContent(11,0.5910478);
   data_mc_ratio__682->SetBinContent(12,0.6851591);
   data_mc_ratio__682->SetBinContent(13,0.6516687);
   data_mc_ratio__682->SetBinContent(14,0.6736298);
   data_mc_ratio__682->SetBinContent(15,0.6387895);
   data_mc_ratio__682->SetBinContent(16,0.8167675);
   data_mc_ratio__682->SetBinContent(17,0.853092);
   data_mc_ratio__682->SetBinContent(18,0.7850503);
   data_mc_ratio__682->SetBinContent(19,1.113225);
   data_mc_ratio__682->SetBinContent(20,0.7163248);
   data_mc_ratio__682->SetBinContent(21,0.7405191);
   data_mc_ratio__682->SetBinContent(22,0.6174845);
   data_mc_ratio__682->SetBinContent(23,0.688512);
   data_mc_ratio__682->SetBinContent(24,1.195572);
   data_mc_ratio__682->SetBinContent(25,0.9014255);
   data_mc_ratio__682->SetBinContent(26,0.8567484);
   data_mc_ratio__682->SetBinContent(27,1.322095);
   data_mc_ratio__682->SetBinContent(28,0.6206283);
   data_mc_ratio__682->SetBinContent(29,1.510973);
   data_mc_ratio__682->SetBinContent(30,1.039647);
   data_mc_ratio__682->SetBinContent(31,1.308168);
   data_mc_ratio__682->SetBinError(1,0.006380603);
   data_mc_ratio__682->SetBinError(2,0.002693817);
   data_mc_ratio__682->SetBinError(3,0.002458803);
   data_mc_ratio__682->SetBinError(4,0.0031919);
   data_mc_ratio__682->SetBinError(5,0.00443995);
   data_mc_ratio__682->SetBinError(6,0.004060198);
   data_mc_ratio__682->SetBinError(7,0.004840007);
   data_mc_ratio__682->SetBinError(8,0.004850999);
   data_mc_ratio__682->SetBinError(9,0.003487956);
   data_mc_ratio__682->SetBinError(10,0.005346146);
   data_mc_ratio__682->SetBinError(11,0.00485494);
   data_mc_ratio__682->SetBinError(12,0.005925289);
   data_mc_ratio__682->SetBinError(13,0.005939991);
   data_mc_ratio__682->SetBinError(14,0.006529027);
   data_mc_ratio__682->SetBinError(15,0.00655074);
   data_mc_ratio__682->SetBinError(16,0.008880006);
   data_mc_ratio__682->SetBinError(17,0.0101016);
   data_mc_ratio__682->SetBinError(18,0.01002201);
   data_mc_ratio__682->SetBinError(19,0.01542284);
   data_mc_ratio__682->SetBinError(20,0.0107892);
   data_mc_ratio__682->SetBinError(21,0.01223706);
   data_mc_ratio__682->SetBinError(22,0.01121958);
   data_mc_ratio__682->SetBinError(23,0.01362389);
   data_mc_ratio__682->SetBinError(24,0.02650943);
   data_mc_ratio__682->SetBinError(25,0.02316685);
   data_mc_ratio__682->SetBinError(26,0.02563461);
   data_mc_ratio__682->SetBinError(27,0.04706781);
   data_mc_ratio__682->SetBinError(28,0.02803713);
   data_mc_ratio__682->SetBinError(29,0.09229739);
   data_mc_ratio__682->SetBinError(30,0.08663723);
   data_mc_ratio__682->SetBinError(31,0.4399142);
   data_mc_ratio__682->SetMinimum(0.4);
   data_mc_ratio__682->SetMaximum(1.6);
   data_mc_ratio__682->SetEntries(675.9482);
   data_mc_ratio__682->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__682->SetLineColor(ci);
   data_mc_ratio__682->SetLineWidth(2);
   data_mc_ratio__682->SetMarkerStyle(20);
   data_mc_ratio__682->SetMarkerSize(1.2);
   data_mc_ratio__682->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__682->GetXaxis()->SetRange(1,30);
   data_mc_ratio__682->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__682->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__682->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__682->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__682->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__682->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__682->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__682->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__682->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__682->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__682->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__682->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__682->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__682->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__682->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__682->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__682->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1496[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1496[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1496[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1496[30] = {
   0.06541879,
   0.0436979,
   0.1413806,
   0.05009039,
   0.05222453,
   0.08500156,
   0.08369607,
   0.0832942,
   0.3748138,
   0.1115687,
   0.1162613,
   0.1150675,
   0.1172595,
   0.1030378,
   0.1090422,
   0.123403,
   0.1238365,
   0.1472178,
   0.1245125,
   0.25987,
   0.182758,
   0.1980345,
   0.207401,
   0.1831665,
   0.3221653,
   0.3031019,
   0.1721888,
   0.4854717,
   0.2590005,
   0.3489408};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1496,Graph_from_mc_statistical_error_fy1496,Graph_from_mc_statistical_error_fex1496,Graph_from_mc_statistical_error_fey1496);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1496 = new TH1F("Graph_Graph_from_mc_statistical_error1496","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1496->SetMinimum(0.417434);
   Graph_Graph_from_mc_statistical_error1496->SetMaximum(1.582566);
   Graph_Graph_from_mc_statistical_error1496->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1496->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1496->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1496);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_all->cd();
   Z_dR_Bj1_both_all->Modified();
   Z_dR_Bj1_both_all->cd();
   Z_dR_Bj1_both_all->SetSelected(Z_dR_Bj1_both_all);
}
