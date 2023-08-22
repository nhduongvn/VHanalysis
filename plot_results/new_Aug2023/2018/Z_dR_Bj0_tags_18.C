void Z_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_18/Z_dR_Bj0_tags_18
//=========  (Tue Aug 22 09:20:39 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_18 = new TCanvas("Z_dR_Bj0_tags_18", "Z_dR_Bj0_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_18->SetHighLightColor(2);
   Z_dR_Bj0_tags_18->Range(0,0,1,1);
   Z_dR_Bj0_tags_18->SetFillColor(0);
   Z_dR_Bj0_tags_18->SetFillStyle(4000);
   Z_dR_Bj0_tags_18->SetBorderMode(0);
   Z_dR_Bj0_tags_18->SetBorderSize(2);
   Z_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-109.7942,6.314516,109694.4);
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
   st->SetMaximum(94013.33);
   
   TH1F *st_stack_51 = new TH1F("st_stack_51","",30,0,6);
   st_stack_51->SetMinimum(0.01);
   st_stack_51->SetMaximum(98714);
   st_stack_51->SetDirectory(0);
   st_stack_51->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_51->SetLineColor(ci);
   st_stack_51->GetXaxis()->SetRange(1,30);
   st_stack_51->GetXaxis()->SetLabelFont(42);
   st_stack_51->GetXaxis()->SetLabelSize(0.035);
   st_stack_51->GetXaxis()->SetTitleSize(0.035);
   st_stack_51->GetXaxis()->SetTitleFont(42);
   st_stack_51->GetYaxis()->SetTitle("Events/0.2");
   st_stack_51->GetYaxis()->SetLabelFont(42);
   st_stack_51->GetYaxis()->SetLabelSize(0.05);
   st_stack_51->GetYaxis()->SetTitleSize(0.057);
   st_stack_51->GetYaxis()->SetTitleOffset(1.2);
   st_stack_51->GetYaxis()->SetTitleFont(42);
   st_stack_51->GetZaxis()->SetLabelFont(42);
   st_stack_51->GetZaxis()->SetLabelSize(0.035);
   st_stack_51->GetZaxis()->SetTitleSize(0.035);
   st_stack_51->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_51);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,5623.238);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,28793.63);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,31263.82);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,20658.2);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,20868.86);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,15866.43);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,13128.04);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,7616.448);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,8431.94);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,9658.773);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,9166.122);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,5890.423);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,6926.1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,5291.015);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,4598.089);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,3549.207);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,3125.089);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,2088.937);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,3080.868);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,2107.476);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,1501.211);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,1303.644);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,963.2888);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,333.7626);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,312.2178);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,547.2914);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,521.0581);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,867.0075);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,42.0728);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(30,43.70963);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,33.74645);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,500.2951);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,2162.673);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,3369.366);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,1930.287);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,2060.608);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,1759.516);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,2287.363);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,1100.944);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,1222.605);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,1427.506);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,1377.326);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,1022.523);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,1205.684);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,950.2836);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,867.6668);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,775.875);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,767.5896);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,427.328);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,847.8113);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,660.0713);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,540.3528);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,536.4008);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,389.4254);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,88.15314);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,82.04134);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,374.7615);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,374.6139);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,526.7996);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,33.85479);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(30,34.89387);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,33.31014);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(9459);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,29.47636);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,127.1544);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,170.6952);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,147.4009);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,120.0503);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,100.5274);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,85.44118);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,63.69709);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,60.73515);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,56.71607);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,46.53954);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,46.33473);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,35.35351);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,31.14076);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,30.11867);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,27.73615);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,18.49164);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,16.62113);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,15.83125);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,12.82861);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,9.44203);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,6.343222);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,5.768112);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,5.631445);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,2.739295);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,1.484165);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,2.637382);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,1.888692);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.8575557);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,0.3723161);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,0.2581194);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,2.248403);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,4.501271);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,5.331052);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,4.953848);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,4.440522);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,4.071579);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,3.76953);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,3.137171);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,3.180232);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,3.072934);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,2.69038);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,2.807011);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,2.421166);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,2.191989);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,2.253326);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,2.099289);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,1.620839);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,1.71395);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,1.663619);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,1.482528);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,1.212096);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.967959);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.9523136);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,1.04694);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.6285114);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.3783439);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.7087379);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.5832566);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.3225758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,0.2787971);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,0.1154345);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(14001);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(1,384.2138);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(2,2262.617);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(3,3131.084);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(4,3010.661);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(5,2508.766);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(6,2024.046);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(7,1654.025);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(8,1406.14);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(9,1217.228);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(10,1064.612);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(11,967.4055);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(12,885.9269);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(13,807.9615);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(14,697.0361);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(15,603.544);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(16,517.2163);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(17,424.1666);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(18,355.3424);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(19,287.0346);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(20,224.1363);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(21,179.4566);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(22,136.9415);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(23,107.4246);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(24,81.00626);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(25,56.68605);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(26,43.52765);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(27,27.83392);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(28,18.29368);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(29,12.80393);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(30,8.432076);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(31,16.10673);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(1,5.097943);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(2,12.35893);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(3,14.57465);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(4,14.30717);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(5,13.06857);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(6,11.73304);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(7,10.61168);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(8,9.776352);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(9,9.094289);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(10,8.512638);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(11,8.114269);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(12,7.780685);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(13,7.434152);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(14,6.887952);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(15,6.415556);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(16,5.943818);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(17,5.3828);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(18,4.920074);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(19,4.422276);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(20,3.89576);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(21,3.494707);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(22,3.035383);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(23,2.693922);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(24,2.33476);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(25,1.945994);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(26,1.712322);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(27,1.368295);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(28,1.097465);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(29,0.924571);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(30,0.7459577);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(31,1.040065);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetEntries(383722);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(1,105.5956);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(2,447.007);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(3,505.381);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(4,373.7593);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(5,293.9965);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(6,223.8142);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(7,167.2703);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(8,128.207);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(9,141.6786);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(10,133.4532);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(11,116.5478);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(12,101.6705);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(13,88.99773);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(14,89.69745);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(15,67.5465);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(16,61.29403);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(17,47.84936);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(18,39.75477);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(19,31.60323);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(20,29.92369);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(21,22.50717);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(22,18.11792);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(23,8.111818);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(24,12.82234);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(25,9.799194);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(26,3.70904);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(27,4.445092);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(28,2.71178);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(29,1.081886);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(30,0.7522529);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(31,1.57974);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(1,4.239791);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(2,14.31846);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(3,16.31568);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(4,12.70449);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(5,12.30255);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(6,10.65081);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(7,8.959026);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(8,8.038814);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(9,9.423368);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(10,8.494309);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(11,8.958899);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(12,9.413805);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(13,7.468586);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(14,8.51372);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(15,4.357641);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(16,5.637653);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(17,3.661842);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(18,3.455523);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(19,3.126193);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(20,2.998494);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(21,2.650963);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(22,2.24771);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(23,1.220421);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(24,1.867465);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(25,1.561167);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(26,0.889553);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(27,0.8335338);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(28,0.8137409);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(29,0.3499144);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(30,0.2907041);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(31,0.6143136);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetEntries(17726);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(1,20.45548);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(2,47.81947);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(3,56.21343);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(4,37.12279);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(5,26.8633);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(6,18.81552);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(7,11.76105);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(8,11.26789);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(9,11.20992);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(10,9.785001);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(11,5.22431);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(12,10.96987);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(13,7.889256);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(14,4.688257);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(15,10.95341);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(16,2.37224);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(17,4.915257);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(18,3.149931);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(19,3.379773);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(20,3.429856);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(21,2.939965);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(22,3.217357);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(23,0.06701058);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(24,0.4501767);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(25,0.8628538);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(26,1.576648);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(27,0.3438132);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(28,2.743612);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(29,0.3201433);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(30,0.0009253193);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(31,0.2531327);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(1,4.551402);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(2,4.297306);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(3,12.4228);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(4,6.080809);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(5,4.706588);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(6,3.496761);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(7,2.182643);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(8,2.564113);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(9,2.618341);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(10,2.482494);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(11,0.9869553);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(12,3.864539);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(13,2.478119);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(14,0.9004265);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(15,3.268201);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(16,0.6066358);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(17,1.015768);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(18,0.8262292);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(19,0.9715197);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(20,2.192537);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(21,2.180753);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(22,2.17569);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(23,0.0500749);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(24,0.2257833);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(25,0.5131701);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(26,0.6835132);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(27,0.188265);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(28,2.1765);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(29,0.1858644);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(30,0.0009253193);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(31,0.1789919);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetEntries(2023);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(1,0.5709342);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(3,0.5709342);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(1,0.5709342);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(3,0.5709342);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(1,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(2,2.833593);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(3,2.479394);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(4,1.062597);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(5,1.062597);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(8,0.7083982);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(9,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(22,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(1,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(2,1.001826);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(3,0.9371228);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(4,0.6134909);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(5,0.6134909);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(8,0.5009132);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(9,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(10,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(11,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(12,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(13,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(22,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(24,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,2.794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,9.500088);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,8.382431);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,9.500088);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,4.47063);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,2.794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,3.632387);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,2.235315);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,3.073558);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,2.235315);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,2.514729);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,2.794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,2.514729);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,3.073558);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,1.676486);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,1.117657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(18,0.5588287);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(19,0.5588287);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(25,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,0.8835858);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,1.629252);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,1.530415);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,1.629252);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,1.117657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,0.8835858);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,1.007443);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.7903031);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.9267126);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.7903031);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.8382431);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.8835858);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.8382431);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.9267126);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.6844226);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.5588287);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(18,0.3951516);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(19,0.3951516);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(20,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(25,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(1,1.661859);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(2,8.527663);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(3,9.945632);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(4,7.600312);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(5,5.496046);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(6,4.191515);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(7,3.099679);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(8,2.844445);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(9,2.498461);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(10,2.501297);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(11,2.413383);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(12,2.541);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(13,2.05889);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(14,1.664695);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(15,1.242141);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(16,1.083328);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(17,0.7883906);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(18,0.5274843);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(19,0.3771797);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(20,0.2892656);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(21,0.2098594);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(22,0.178664);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(23,0.1247812);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(24,0.1134375);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(25,0.1162734);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(26,0.07373437);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(27,0.03403125);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(28,0.02835937);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(29,0.01134375);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(30,0.005671875);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(31,0.008507812);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(1,0.06865077);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(2,0.1555118);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(3,0.167944);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(4,0.1468128);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(5,0.1248457);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(6,0.1090269);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(7,0.09375765);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(8,0.08981463);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(9,0.08417528);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(10,0.08422304);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(11,0.08272969);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(12,0.08488885);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(13,0.07641259);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(14,0.06870932);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(15,0.05935177);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(16,0.05542788);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(17,0.04728452);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(18,0.03867703);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(19,0.03270562);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(20,0.02864156);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(21,0.02439565);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(22,0.02250955);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(23,0.01881148);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(24,0.01793604);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(25,0.01815886);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(26,0.0144605);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(27,0.009823975);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(28,0.008968021);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(29,0.005671875);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(30,0.004010621);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(31,0.004911987);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetEntries(21953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(1,0.6391304);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(2,3.537841);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(3,4.679651);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(4,3.911846);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(5,2.914265);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(6,2.060913);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(7,1.573788);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(8,1.321388);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(9,1.124134);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(10,1.151);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(11,1.017377);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(12,0.9388995);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(13,0.8307281);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(14,0.6822576);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(15,0.5670161);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(16,0.4574307);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(17,0.3619854);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(18,0.2941131);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(19,0.2064448);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(20,0.1718016);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(21,0.1307955);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(22,0.1088784);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(23,0.09685936);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(24,0.06080223);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(25,0.04029915);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(26,0.02828011);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(27,0.02474509);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(28,0.007777029);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(29,0.006363024);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(30,0.0007070027);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(31,0.002828011);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(1,0.02125716);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(2,0.05001263);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(3,0.05751978);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(4,0.05258978);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(5,0.04539155);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(6,0.0381716);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(7,0.03335674);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(8,0.03056509);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(9,0.02819159);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(10,0.02852648);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(11,0.02681955);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(12,0.0257644);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(13,0.02423483);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(14,0.02196265);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(15,0.02002204);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(16,0.01798346);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(17,0.01599764);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(18,0.01442008);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(19,0.01208127);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(20,0.01102108);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(21,0.009616276);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(22,0.008773672);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(23,0.008275254);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(24,0.006556473);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(25,0.005337753);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(26,0.004471477);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(27,0.004182684);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(28,0.002344863);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(29,0.002121008);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(30,0.0007070027);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(31,0.001414005);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(1,0.01593033);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(2,0.04323948);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(3,0.03413643);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(4,0.02503338);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(5,0.006827286);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(6,0.009103048);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(7,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(9,0.006827286);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(10,0.006827286);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(12,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(15,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(17,0.006827286);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(18,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(1,0.0060211);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(2,0.009919816);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(3,0.008813988);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(4,0.007547848);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(5,0.003941735);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(6,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(7,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(8,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(9,0.003941735);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(10,0.003941735);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(12,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(15,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(16,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(17,0.003941735);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(18,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(1,0.002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(2,0.02547083);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(3,0.01857872);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(4,0.009589018);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(5,0.006292793);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(6,0.002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(7,0.002397254);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(8,0.003296225);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(9,0.002696911);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(10,0.002097598);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(11,0.001797941);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(12,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(13,0.001797941);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(15,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(16,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(17,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(20,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(23,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(24,0.0008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(25,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(1,0.000947598);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(2,0.002762699);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(3,0.0023595);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(4,0.001695115);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(5,0.0013732);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(6,0.000947598);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(7,0.0008475574);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(8,0.0009938492);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(9,0.0008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(10,0.0007928174);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(11,0.0007340063);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(12,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(13,0.0007340063);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(15,0.0004237787);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(16,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(17,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(20,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(23,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(24,0.0005190208);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(25,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__139 = new TH1D("VbbHcc_tags_Z_dR_Bj0__139","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(1,9210);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(2,42021);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(3,42306);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(4,33874);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(5,27071);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(6,21576);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(7,17742);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(8,14756);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(9,12966);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(10,11598);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(11,10511);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(12,9840);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(13,8779);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(14,7864);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(15,6906);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(16,5909);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(17,4829);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(18,4058);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(19,3420);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(20,2712);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(21,2310);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(22,1852);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(23,1529);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(24,1162);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(25,919);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(26,693);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(27,453);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(28,245);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(29,191);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(30,98);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(31,174);
   VbbHcc_tags_Z_dR_Bj0__139->SetEntries(307603);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0__139->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0__139->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0__139->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0__139->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1101[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1101[30] = {
   6169.019,
   31702.7,
   35153.31,
   24249.25,
   23832.5,
   18242.69,
   15055.2,
   9232.877,
   9869.851,
   10929.59,
   10308.14,
   6941.958,
   7872.063,
   6119,
   5313.74,
   4160.487,
   3621.67,
   2505.191,
   3419.86,
   2378.536,
   1715.898,
   1468.906,
   1085.162,
   434.2021,
   382.7415,
   597.6909,
   556.3773,
   892.6814,
   57.15401,
   53.27358};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1101[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1101[30] = {
   500.366,
   2162.766,
   3369.465,
   1930.399,
   2060.697,
   1759.595,
   2287.41,
   1101.024,
   1222.682,
   1427.563,
   1377.383,
   1022.607,
   1205.735,
   950.3501,
   867.7108,
   775.9215,
   767.6196,
   427.3747,
   847.8309,
   660.095,
   540.3763,
   536.4195,
   389.4379,
   88.21104,
   82.08375,
   374.7673,
   374.6181,
   526.8061,
   33.87127,
   34.90416};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1101,Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1101,Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1101,Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1101);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetMinimum(16.53247);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetMaximum(42373.21);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__140 = new TH1D("data_mc_ratio__140","",30,0,6);
   data_mc_ratio__140->SetBinContent(1,1.492944);
   data_mc_ratio__140->SetBinContent(2,1.325471);
   data_mc_ratio__140->SetBinContent(3,1.203471);
   data_mc_ratio__140->SetBinContent(4,1.396909);
   data_mc_ratio__140->SetBinContent(5,1.135886);
   data_mc_ratio__140->SetBinContent(6,1.18272);
   data_mc_ratio__140->SetBinContent(7,1.178463);
   data_mc_ratio__140->SetBinContent(8,1.598202);
   data_mc_ratio__140->SetBinContent(9,1.313698);
   data_mc_ratio__140->SetBinContent(10,1.061156);
   data_mc_ratio__140->SetBinContent(11,1.019679);
   data_mc_ratio__140->SetBinContent(12,1.417468);
   data_mc_ratio__140->SetBinContent(13,1.11521);
   data_mc_ratio__140->SetBinContent(14,1.285177);
   data_mc_ratio__140->SetBinContent(15,1.29965);
   data_mc_ratio__140->SetBinContent(16,1.420266);
   data_mc_ratio__140->SetBinContent(17,1.333363);
   data_mc_ratio__140->SetBinContent(18,1.619836);
   data_mc_ratio__140->SetBinContent(19,1.000041);
   data_mc_ratio__140->SetBinContent(20,1.140197);
   data_mc_ratio__140->SetBinContent(21,1.346234);
   data_mc_ratio__140->SetBinContent(22,1.260802);
   data_mc_ratio__140->SetBinContent(23,1.409007);
   data_mc_ratio__140->SetBinContent(24,2.676173);
   data_mc_ratio__140->SetBinContent(25,2.401099);
   data_mc_ratio__140->SetBinContent(26,1.159462);
   data_mc_ratio__140->SetBinContent(27,0.8141956);
   data_mc_ratio__140->SetBinContent(28,0.274454);
   data_mc_ratio__140->SetBinContent(29,3.341847);
   data_mc_ratio__140->SetBinContent(30,1.839561);
   data_mc_ratio__140->SetBinContent(31,3.34902);
   data_mc_ratio__140->SetBinError(1,0.01555657);
   data_mc_ratio__140->SetBinError(2,0.006466019);
   data_mc_ratio__140->SetBinError(3,0.005851063);
   data_mc_ratio__140->SetBinError(4,0.00758988);
   data_mc_ratio__140->SetBinError(5,0.006903711);
   data_mc_ratio__140->SetBinError(6,0.008051868);
   data_mc_ratio__140->SetBinError(7,0.008847381);
   data_mc_ratio__140->SetBinError(8,0.01315671);
   data_mc_ratio__140->SetBinError(9,0.01153699);
   data_mc_ratio__140->SetBinError(10,0.009853435);
   data_mc_ratio__140->SetBinError(11,0.009945844);
   data_mc_ratio__140->SetBinError(12,0.01428945);
   data_mc_ratio__140->SetBinError(13,0.01190238);
   data_mc_ratio__140->SetBinError(14,0.01449243);
   data_mc_ratio__140->SetBinError(15,0.01563914);
   data_mc_ratio__140->SetBinError(16,0.01847621);
   data_mc_ratio__140->SetBinError(17,0.01918756);
   data_mc_ratio__140->SetBinError(18,0.02542817);
   data_mc_ratio__140->SetBinError(19,0.01710034);
   data_mc_ratio__140->SetBinError(20,0.0218945);
   data_mc_ratio__140->SetBinError(21,0.0280101);
   data_mc_ratio__140->SetBinError(22,0.02929722);
   data_mc_ratio__140->SetBinError(23,0.03603374);
   data_mc_ratio__140->SetBinError(24,0.0785075);
   data_mc_ratio__140->SetBinError(25,0.07920494);
   data_mc_ratio__140->SetBinError(26,0.04404433);
   data_mc_ratio__140->SetBinError(27,0.03825425);
   data_mc_ratio__140->SetBinError(28,0.01753422);
   data_mc_ratio__140->SetBinError(29,0.2418076);
   data_mc_ratio__140->SetBinError(30,0.1858237);
   data_mc_ratio__140->SetBinError(31,2.163554);
   data_mc_ratio__140->SetMinimum(0.4);
   data_mc_ratio__140->SetMaximum(1.6);
   data_mc_ratio__140->SetEntries(213.0619);
   data_mc_ratio__140->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__140->SetLineColor(ci);
   data_mc_ratio__140->SetLineWidth(2);
   data_mc_ratio__140->SetMarkerStyle(20);
   data_mc_ratio__140->SetMarkerSize(1.2);
   data_mc_ratio__140->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__140->GetXaxis()->SetRange(1,30);
   data_mc_ratio__140->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__140->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__140->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__140->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__140->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__140->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__140->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__140->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__140->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__140->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__140->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__140->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__140->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__140->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__140->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__140->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__140->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1102[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1102[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1102[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1102[30] = {
   0.0811095,
   0.06822025,
   0.09585058,
   0.07960654,
   0.08646585,
   0.09645483,
   0.1519348,
   0.1192504,
   0.1238805,
   0.1306145,
   0.1336208,
   0.1473082,
   0.1531664,
   0.1553114,
   0.1632957,
   0.1864977,
   0.2119518,
   0.1705956,
   0.2479139,
   0.2775216,
   0.3149234,
   0.3651829,
   0.3588754,
   0.2031566,
   0.2144627,
   0.6270253,
   0.6733166,
   0.590139,
   0.5926315,
   0.6551871};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1102,Graph_from_mc_statistical_error_fy1102,Graph_from_mc_statistical_error_fex1102,Graph_from_mc_statistical_error_fey1102);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1102 = new TH1F("Graph_Graph_from_mc_statistical_error1102","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1102->SetMinimum(0.1920201);
   Graph_Graph_from_mc_statistical_error1102->SetMaximum(1.80798);
   Graph_Graph_from_mc_statistical_error1102->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1102->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1102->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1102);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->SetSelected(Z_dR_Bj0_tags_18);
}
