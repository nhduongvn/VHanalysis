#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016v2_trigEff_16()
{
//=========Macro generated from canvas: pt_jet0_2016v2_trigEff_16/pt_jet0_2016v2_trigEff_16
//=========  (Fri Apr 14 11:35:37 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016v2_trigEff_16 = new TCanvas("pt_jet0_2016v2_trigEff_16", "pt_jet0_2016v2_trigEff_16",0,0,600,600);
   pt_jet0_2016v2_trigEff_16->SetHighLightColor(2);
   pt_jet0_2016v2_trigEff_16->Range(-109.1764,-0.03233849,585.8166,0.2371489);
   pt_jet0_2016v2_trigEff_16->SetFillColor(0);
   pt_jet0_2016v2_trigEff_16->SetFillStyle(4000);
   pt_jet0_2016v2_trigEff_16->SetBorderMode(0);
   pt_jet0_2016v2_trigEff_16->SetBorderSize(2);
   pt_jet0_2016v2_trigEff_16->SetLeftMargin(0.15709);
   pt_jet0_2016v2_trigEff_16->SetRightMargin(0.1234783);
   pt_jet0_2016v2_trigEff_16->SetBottomMargin(0.12);
   pt_jet0_2016v2_trigEff_16->SetFrameFillStyle(1000);
   pt_jet0_2016v2_trigEff_16->SetFrameBorderMode(0);
   pt_jet0_2016v2_trigEff_16->SetFrameFillStyle(1000);
   pt_jet0_2016v2_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v2_trigEff_pt_jet0__2 = new TH1D("v2_trigEff_pt_jet0__2","",50,0,500);
   v2_trigEff_pt_jet0__2->SetBinContent(7,0.0001073566);
   v2_trigEff_pt_jet0__2->SetBinContent(8,0.0004342512);
   v2_trigEff_pt_jet0__2->SetBinContent(9,0.002540934);
   v2_trigEff_pt_jet0__2->SetBinContent(10,0.01272534);
   v2_trigEff_pt_jet0__2->SetBinContent(11,0.03100634);
   v2_trigEff_pt_jet0__2->SetBinContent(12,0.05055743);
   v2_trigEff_pt_jet0__2->SetBinContent(13,0.06619035);
   v2_trigEff_pt_jet0__2->SetBinContent(14,0.07653347);
   v2_trigEff_pt_jet0__2->SetBinContent(15,0.08504002);
   v2_trigEff_pt_jet0__2->SetBinContent(16,0.09371486);
   v2_trigEff_pt_jet0__2->SetBinContent(17,0.09668796);
   v2_trigEff_pt_jet0__2->SetBinContent(18,0.1023304);
   v2_trigEff_pt_jet0__2->SetBinContent(19,0.1079104);
   v2_trigEff_pt_jet0__2->SetBinContent(20,0.1110715);
   v2_trigEff_pt_jet0__2->SetBinContent(21,0.1167183);
   v2_trigEff_pt_jet0__2->SetBinContent(22,0.1194727);
   v2_trigEff_pt_jet0__2->SetBinContent(23,0.1238719);
   v2_trigEff_pt_jet0__2->SetBinContent(24,0.1279178);
   v2_trigEff_pt_jet0__2->SetBinContent(25,0.1326356);
   v2_trigEff_pt_jet0__2->SetBinContent(26,0.1331582);
   v2_trigEff_pt_jet0__2->SetBinContent(27,0.1356743);
   v2_trigEff_pt_jet0__2->SetBinContent(28,0.1407153);
   v2_trigEff_pt_jet0__2->SetBinContent(29,0.1405411);
   v2_trigEff_pt_jet0__2->SetBinContent(30,0.1468217);
   v2_trigEff_pt_jet0__2->SetBinContent(31,0.1473203);
   v2_trigEff_pt_jet0__2->SetBinContent(32,0.1449382);
   v2_trigEff_pt_jet0__2->SetBinContent(33,0.1445384);
   v2_trigEff_pt_jet0__2->SetBinContent(34,0.155914);
   v2_trigEff_pt_jet0__2->SetBinContent(35,0.1574036);
   v2_trigEff_pt_jet0__2->SetBinContent(36,0.164365);
   v2_trigEff_pt_jet0__2->SetBinContent(37,0.1685028);
   v2_trigEff_pt_jet0__2->SetBinContent(38,0.1644699);
   v2_trigEff_pt_jet0__2->SetBinContent(39,0.1674291);
   v2_trigEff_pt_jet0__2->SetBinContent(40,0.1675958);
   v2_trigEff_pt_jet0__2->SetBinContent(41,0.1582478);
   v2_trigEff_pt_jet0__2->SetBinContent(42,0.1750216);
   v2_trigEff_pt_jet0__2->SetBinContent(43,0.1781015);
   v2_trigEff_pt_jet0__2->SetBinContent(44,0.1847599);
   v2_trigEff_pt_jet0__2->SetBinContent(45,0.1766017);
   v2_trigEff_pt_jet0__2->SetBinContent(46,0.1826252);
   v2_trigEff_pt_jet0__2->SetBinContent(47,0.1702586);
   v2_trigEff_pt_jet0__2->SetBinContent(48,0.1827142);
   v2_trigEff_pt_jet0__2->SetBinContent(49,0.1869783);
   v2_trigEff_pt_jet0__2->SetBinContent(50,0.2001907);
   v2_trigEff_pt_jet0__2->SetBinContent(51,0.2026193);
   v2_trigEff_pt_jet0__2->SetEntries(5.532354);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v2_trigEff_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 6      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  330.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  108.1");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v2_trigEff_pt_jet0__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v2_trigEff_pt_jet0__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v2_trigEff_pt_jet0__2->SetLineColor(ci);
   v2_trigEff_pt_jet0__2->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   v2_trigEff_pt_jet0__2->GetXaxis()->SetRange(1,500);
   v2_trigEff_pt_jet0__2->GetXaxis()->SetLabelFont(42);
   v2_trigEff_pt_jet0__2->GetXaxis()->SetTitleOffset(1);
   v2_trigEff_pt_jet0__2->GetXaxis()->SetTitleFont(42);
   v2_trigEff_pt_jet0__2->GetYaxis()->SetTitle("Efficiency");
   v2_trigEff_pt_jet0__2->GetYaxis()->SetLabelFont(42);
   v2_trigEff_pt_jet0__2->GetYaxis()->SetTitleFont(42);
   v2_trigEff_pt_jet0__2->GetZaxis()->SetLabelFont(42);
   v2_trigEff_pt_jet0__2->GetZaxis()->SetTitleOffset(1);
   v2_trigEff_pt_jet0__2->GetZaxis()->SetTitleFont(42);
   v2_trigEff_pt_jet0__2->Draw("HIST");
   pt_jet0_2016v2_trigEff_16->Modified();
   pt_jet0_2016v2_trigEff_16->cd();
   pt_jet0_2016v2_trigEff_16->SetSelected(pt_jet0_2016v2_trigEff_16);
}
