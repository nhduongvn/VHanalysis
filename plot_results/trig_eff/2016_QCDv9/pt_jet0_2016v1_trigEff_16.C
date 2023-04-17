#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016v1_trigEff_16()
{
//=========Macro generated from canvas: pt_jet0_2016v1_trigEff_16/pt_jet0_2016v1_trigEff_16
//=========  (Fri Apr 14 11:35:37 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016v1_trigEff_16 = new TCanvas("pt_jet0_2016v1_trigEff_16", "pt_jet0_2016v1_trigEff_16",0,0,600,600);
   pt_jet0_2016v1_trigEff_16->SetHighLightColor(2);
   pt_jet0_2016v1_trigEff_16->Range(-109.1764,-0.03126054,585.8166,0.229244);
   pt_jet0_2016v1_trigEff_16->SetFillColor(0);
   pt_jet0_2016v1_trigEff_16->SetFillStyle(4000);
   pt_jet0_2016v1_trigEff_16->SetBorderMode(0);
   pt_jet0_2016v1_trigEff_16->SetBorderSize(2);
   pt_jet0_2016v1_trigEff_16->SetLeftMargin(0.15709);
   pt_jet0_2016v1_trigEff_16->SetRightMargin(0.1234783);
   pt_jet0_2016v1_trigEff_16->SetBottomMargin(0.12);
   pt_jet0_2016v1_trigEff_16->SetFrameFillStyle(1000);
   pt_jet0_2016v1_trigEff_16->SetFrameBorderMode(0);
   pt_jet0_2016v1_trigEff_16->SetFrameFillStyle(1000);
   pt_jet0_2016v1_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v1_trigEff_pt_jet0__1 = new TH1D("v1_trigEff_pt_jet0__1","",50,0,500);
   v1_trigEff_pt_jet0__1->SetBinContent(5,0.01190476);
   v1_trigEff_pt_jet0__1->SetBinContent(6,0.01053131);
   v1_trigEff_pt_jet0__1->SetBinContent(7,0.02640973);
   v1_trigEff_pt_jet0__1->SetBinContent(8,0.04336078);
   v1_trigEff_pt_jet0__1->SetBinContent(9,0.05873965);
   v1_trigEff_pt_jet0__1->SetBinContent(10,0.06953148);
   v1_trigEff_pt_jet0__1->SetBinContent(11,0.07675798);
   v1_trigEff_pt_jet0__1->SetBinContent(12,0.08591451);
   v1_trigEff_pt_jet0__1->SetBinContent(13,0.09337118);
   v1_trigEff_pt_jet0__1->SetBinContent(14,0.09822261);
   v1_trigEff_pt_jet0__1->SetBinContent(15,0.1032923);
   v1_trigEff_pt_jet0__1->SetBinContent(16,0.1056182);
   v1_trigEff_pt_jet0__1->SetBinContent(17,0.1061416);
   v1_trigEff_pt_jet0__1->SetBinContent(18,0.1104597);
   v1_trigEff_pt_jet0__1->SetBinContent(19,0.1118895);
   v1_trigEff_pt_jet0__1->SetBinContent(20,0.1144079);
   v1_trigEff_pt_jet0__1->SetBinContent(21,0.1178358);
   v1_trigEff_pt_jet0__1->SetBinContent(22,0.1204322);
   v1_trigEff_pt_jet0__1->SetBinContent(23,0.1230645);
   v1_trigEff_pt_jet0__1->SetBinContent(24,0.1260591);
   v1_trigEff_pt_jet0__1->SetBinContent(25,0.1289632);
   v1_trigEff_pt_jet0__1->SetBinContent(26,0.1290391);
   v1_trigEff_pt_jet0__1->SetBinContent(27,0.1298354);
   v1_trigEff_pt_jet0__1->SetBinContent(28,0.1354769);
   v1_trigEff_pt_jet0__1->SetBinContent(29,0.1337522);
   v1_trigEff_pt_jet0__1->SetBinContent(30,0.1404883);
   v1_trigEff_pt_jet0__1->SetBinContent(31,0.1416053);
   v1_trigEff_pt_jet0__1->SetBinContent(32,0.1409653);
   v1_trigEff_pt_jet0__1->SetBinContent(33,0.1402287);
   v1_trigEff_pt_jet0__1->SetBinContent(34,0.1485663);
   v1_trigEff_pt_jet0__1->SetBinContent(35,0.1501452);
   v1_trigEff_pt_jet0__1->SetBinContent(36,0.1550826);
   v1_trigEff_pt_jet0__1->SetBinContent(37,0.1607411);
   v1_trigEff_pt_jet0__1->SetBinContent(38,0.1535817);
   v1_trigEff_pt_jet0__1->SetBinContent(39,0.1564501);
   v1_trigEff_pt_jet0__1->SetBinContent(40,0.1585366);
   v1_trigEff_pt_jet0__1->SetBinContent(41,0.1491713);
   v1_trigEff_pt_jet0__1->SetBinContent(42,0.1663786);
   v1_trigEff_pt_jet0__1->SetBinContent(43,0.1630639);
   v1_trigEff_pt_jet0__1->SetBinContent(44,0.1769311);
   v1_trigEff_pt_jet0__1->SetBinContent(45,0.1643454);
   v1_trigEff_pt_jet0__1->SetBinContent(46,0.1712112);
   v1_trigEff_pt_jet0__1->SetBinContent(47,0.1566092);
   v1_trigEff_pt_jet0__1->SetBinContent(48,0.176649);
   v1_trigEff_pt_jet0__1->SetBinContent(49,0.1769616);
   v1_trigEff_pt_jet0__1->SetBinContent(50,0.1935176);
   v1_trigEff_pt_jet0__1->SetBinContent(51,0.1926489);
   v1_trigEff_pt_jet0__1->SetEntries(5.712241);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v1_trigEff_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 6      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  313.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  119.6");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v1_trigEff_pt_jet0__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v1_trigEff_pt_jet0__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v1_trigEff_pt_jet0__1->SetLineColor(ci);
   v1_trigEff_pt_jet0__1->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   v1_trigEff_pt_jet0__1->GetXaxis()->SetRange(1,500);
   v1_trigEff_pt_jet0__1->GetXaxis()->SetLabelFont(42);
   v1_trigEff_pt_jet0__1->GetXaxis()->SetTitleOffset(1);
   v1_trigEff_pt_jet0__1->GetXaxis()->SetTitleFont(42);
   v1_trigEff_pt_jet0__1->GetYaxis()->SetTitle("Efficiency");
   v1_trigEff_pt_jet0__1->GetYaxis()->SetLabelFont(42);
   v1_trigEff_pt_jet0__1->GetYaxis()->SetTitleFont(42);
   v1_trigEff_pt_jet0__1->GetZaxis()->SetLabelFont(42);
   v1_trigEff_pt_jet0__1->GetZaxis()->SetTitleOffset(1);
   v1_trigEff_pt_jet0__1->GetZaxis()->SetTitleFont(42);
   v1_trigEff_pt_jet0__1->Draw("HIST");
   pt_jet0_2016v1_trigEff_16->Modified();
   pt_jet0_2016v1_trigEff_16->cd();
   pt_jet0_2016v1_trigEff_16->SetSelected(pt_jet0_2016v1_trigEff_16);
}
