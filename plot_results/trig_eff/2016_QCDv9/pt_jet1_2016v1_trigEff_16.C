#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016v1_trigEff_16()
{
//=========Macro generated from canvas: pt_jet1_2016v1_trigEff_16/pt_jet1_2016v1_trigEff_16
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016v1_trigEff_16 = new TCanvas("pt_jet1_2016v1_trigEff_16", "pt_jet1_2016v1_trigEff_16",0,0,600,600);
   pt_jet1_2016v1_trigEff_16->SetHighLightColor(2);
   pt_jet1_2016v1_trigEff_16->Range(-109.1764,-0.03539537,585.8166,0.2595661);
   pt_jet1_2016v1_trigEff_16->SetFillColor(0);
   pt_jet1_2016v1_trigEff_16->SetFillStyle(4000);
   pt_jet1_2016v1_trigEff_16->SetBorderMode(0);
   pt_jet1_2016v1_trigEff_16->SetBorderSize(2);
   pt_jet1_2016v1_trigEff_16->SetLeftMargin(0.15709);
   pt_jet1_2016v1_trigEff_16->SetRightMargin(0.1234783);
   pt_jet1_2016v1_trigEff_16->SetBottomMargin(0.12);
   pt_jet1_2016v1_trigEff_16->SetFrameFillStyle(1000);
   pt_jet1_2016v1_trigEff_16->SetFrameBorderMode(0);
   pt_jet1_2016v1_trigEff_16->SetFrameFillStyle(1000);
   pt_jet1_2016v1_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v1_trigEff_pt_jet1__5 = new TH1D("v1_trigEff_pt_jet1__5","",50,0,500);
   v1_trigEff_pt_jet1__5->SetBinContent(5,0.008802143);
   v1_trigEff_pt_jet1__5->SetBinContent(6,0.02488114);
   v1_trigEff_pt_jet1__5->SetBinContent(7,0.0489137);
   v1_trigEff_pt_jet1__5->SetBinContent(8,0.07097732);
   v1_trigEff_pt_jet1__5->SetBinContent(9,0.08577075);
   v1_trigEff_pt_jet1__5->SetBinContent(10,0.09956099);
   v1_trigEff_pt_jet1__5->SetBinContent(11,0.1072018);
   v1_trigEff_pt_jet1__5->SetBinContent(12,0.1160739);
   v1_trigEff_pt_jet1__5->SetBinContent(13,0.1243736);
   v1_trigEff_pt_jet1__5->SetBinContent(14,0.1291644);
   v1_trigEff_pt_jet1__5->SetBinContent(15,0.131716);
   v1_trigEff_pt_jet1__5->SetBinContent(16,0.1308364);
   v1_trigEff_pt_jet1__5->SetBinContent(17,0.1352138);
   v1_trigEff_pt_jet1__5->SetBinContent(18,0.1322973);
   v1_trigEff_pt_jet1__5->SetBinContent(19,0.1381236);
   v1_trigEff_pt_jet1__5->SetBinContent(20,0.143392);
   v1_trigEff_pt_jet1__5->SetBinContent(21,0.1488322);
   v1_trigEff_pt_jet1__5->SetBinContent(22,0.1487025);
   v1_trigEff_pt_jet1__5->SetBinContent(23,0.1514681);
   v1_trigEff_pt_jet1__5->SetBinContent(24,0.1461888);
   v1_trigEff_pt_jet1__5->SetBinContent(25,0.1536727);
   v1_trigEff_pt_jet1__5->SetBinContent(26,0.1410935);
   v1_trigEff_pt_jet1__5->SetBinContent(27,0.1468969);
   v1_trigEff_pt_jet1__5->SetBinContent(28,0.1561393);
   v1_trigEff_pt_jet1__5->SetBinContent(29,0.1578947);
   v1_trigEff_pt_jet1__5->SetBinContent(30,0.1561762);
   v1_trigEff_pt_jet1__5->SetBinContent(31,0.153774);
   v1_trigEff_pt_jet1__5->SetBinContent(32,0.1445658);
   v1_trigEff_pt_jet1__5->SetBinContent(33,0.1664699);
   v1_trigEff_pt_jet1__5->SetBinContent(34,0.1647887);
   v1_trigEff_pt_jet1__5->SetBinContent(35,0.1418269);
   v1_trigEff_pt_jet1__5->SetBinContent(36,0.1681261);
   v1_trigEff_pt_jet1__5->SetBinContent(37,0.1562199);
   v1_trigEff_pt_jet1__5->SetBinContent(38,0.1672474);
   v1_trigEff_pt_jet1__5->SetBinContent(39,0.1374046);
   v1_trigEff_pt_jet1__5->SetBinContent(40,0.1612903);
   v1_trigEff_pt_jet1__5->SetBinContent(41,0.1748148);
   v1_trigEff_pt_jet1__5->SetBinContent(42,0.1280702);
   v1_trigEff_pt_jet1__5->SetBinContent(43,0.1731161);
   v1_trigEff_pt_jet1__5->SetBinContent(44,0.1709402);
   v1_trigEff_pt_jet1__5->SetBinContent(45,0.2191142);
   v1_trigEff_pt_jet1__5->SetBinContent(46,0.1489362);
   v1_trigEff_pt_jet1__5->SetBinContent(47,0.1800643);
   v1_trigEff_pt_jet1__5->SetBinContent(48,0.1788079);
   v1_trigEff_pt_jet1__5->SetBinContent(49,0.1696751);
   v1_trigEff_pt_jet1__5->SetBinContent(50,0.1651786);
   v1_trigEff_pt_jet1__5->SetBinContent(51,0.1878287);
   v1_trigEff_pt_jet1__5->SetEntries(6.404795);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v1_trigEff_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 6      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  299.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  122.4");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v1_trigEff_pt_jet1__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v1_trigEff_pt_jet1__5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v1_trigEff_pt_jet1__5->SetLineColor(ci);
   v1_trigEff_pt_jet1__5->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   v1_trigEff_pt_jet1__5->GetXaxis()->SetRange(1,500);
   v1_trigEff_pt_jet1__5->GetXaxis()->SetLabelFont(42);
   v1_trigEff_pt_jet1__5->GetXaxis()->SetTitleOffset(1);
   v1_trigEff_pt_jet1__5->GetXaxis()->SetTitleFont(42);
   v1_trigEff_pt_jet1__5->GetYaxis()->SetTitle("Efficiency");
   v1_trigEff_pt_jet1__5->GetYaxis()->SetLabelFont(42);
   v1_trigEff_pt_jet1__5->GetYaxis()->SetTitleFont(42);
   v1_trigEff_pt_jet1__5->GetZaxis()->SetLabelFont(42);
   v1_trigEff_pt_jet1__5->GetZaxis()->SetTitleOffset(1);
   v1_trigEff_pt_jet1__5->GetZaxis()->SetTitleFont(42);
   v1_trigEff_pt_jet1__5->Draw("HIST");
   pt_jet1_2016v1_trigEff_16->Modified();
   pt_jet1_2016v1_trigEff_16->cd();
   pt_jet1_2016v1_trigEff_16->SetSelected(pt_jet1_2016v1_trigEff_16);
}
