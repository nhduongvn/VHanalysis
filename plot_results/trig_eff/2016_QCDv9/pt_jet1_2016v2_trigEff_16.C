#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016v2_trigEff_16()
{
//=========Macro generated from canvas: pt_jet1_2016v2_trigEff_16/pt_jet1_2016v2_trigEff_16
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016v2_trigEff_16 = new TCanvas("pt_jet1_2016v2_trigEff_16", "pt_jet1_2016v2_trigEff_16",0,0,600,600);
   pt_jet1_2016v2_trigEff_16->SetHighLightColor(2);
   pt_jet1_2016v2_trigEff_16->Range(-109.1764,-0.03614847,585.8166,0.2650888);
   pt_jet1_2016v2_trigEff_16->SetFillColor(0);
   pt_jet1_2016v2_trigEff_16->SetFillStyle(4000);
   pt_jet1_2016v2_trigEff_16->SetBorderMode(0);
   pt_jet1_2016v2_trigEff_16->SetBorderSize(2);
   pt_jet1_2016v2_trigEff_16->SetLeftMargin(0.15709);
   pt_jet1_2016v2_trigEff_16->SetRightMargin(0.1234783);
   pt_jet1_2016v2_trigEff_16->SetBottomMargin(0.12);
   pt_jet1_2016v2_trigEff_16->SetFrameFillStyle(1000);
   pt_jet1_2016v2_trigEff_16->SetFrameBorderMode(0);
   pt_jet1_2016v2_trigEff_16->SetFrameFillStyle(1000);
   pt_jet1_2016v2_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v2_trigEff_pt_jet1__6 = new TH1D("v2_trigEff_pt_jet1__6","",50,0,500);
   v2_trigEff_pt_jet1__6->SetBinContent(5,0.0001913509);
   v2_trigEff_pt_jet1__6->SetBinContent(6,0.0009482344);
   v2_trigEff_pt_jet1__6->SetBinContent(7,0.001878395);
   v2_trigEff_pt_jet1__6->SetBinContent(8,0.00675174);
   v2_trigEff_pt_jet1__6->SetBinContent(9,0.02430443);
   v2_trigEff_pt_jet1__6->SetBinContent(10,0.06776972);
   v2_trigEff_pt_jet1__6->SetBinContent(11,0.1051935);
   v2_trigEff_pt_jet1__6->SetBinContent(12,0.1249509);
   v2_trigEff_pt_jet1__6->SetBinContent(13,0.1366622);
   v2_trigEff_pt_jet1__6->SetBinContent(14,0.1410736);
   v2_trigEff_pt_jet1__6->SetBinContent(15,0.1436952);
   v2_trigEff_pt_jet1__6->SetBinContent(16,0.1424253);
   v2_trigEff_pt_jet1__6->SetBinContent(17,0.1464475);
   v2_trigEff_pt_jet1__6->SetBinContent(18,0.144861);
   v2_trigEff_pt_jet1__6->SetBinContent(19,0.1502234);
   v2_trigEff_pt_jet1__6->SetBinContent(20,0.1560464);
   v2_trigEff_pt_jet1__6->SetBinContent(21,0.1596958);
   v2_trigEff_pt_jet1__6->SetBinContent(22,0.1629159);
   v2_trigEff_pt_jet1__6->SetBinContent(23,0.1623335);
   v2_trigEff_pt_jet1__6->SetBinContent(24,0.1555799);
   v2_trigEff_pt_jet1__6->SetBinContent(25,0.1658839);
   v2_trigEff_pt_jet1__6->SetBinContent(26,0.1529982);
   v2_trigEff_pt_jet1__6->SetBinContent(27,0.1571572);
   v2_trigEff_pt_jet1__6->SetBinContent(28,0.1646989);
   v2_trigEff_pt_jet1__6->SetBinContent(29,0.1704584);
   v2_trigEff_pt_jet1__6->SetBinContent(30,0.1644375);
   v2_trigEff_pt_jet1__6->SetBinContent(31,0.1678387);
   v2_trigEff_pt_jet1__6->SetBinContent(32,0.1586063);
   v2_trigEff_pt_jet1__6->SetBinContent(33,0.1788666);
   v2_trigEff_pt_jet1__6->SetBinContent(34,0.1760563);
   v2_trigEff_pt_jet1__6->SetBinContent(35,0.1570513);
   v2_trigEff_pt_jet1__6->SetBinContent(36,0.1865149);
   v2_trigEff_pt_jet1__6->SetBinContent(37,0.171649);
   v2_trigEff_pt_jet1__6->SetBinContent(38,0.174216);
   v2_trigEff_pt_jet1__6->SetBinContent(39,0.1450382);
   v2_trigEff_pt_jet1__6->SetBinContent(40,0.1686217);
   v2_trigEff_pt_jet1__6->SetBinContent(41,0.1777778);
   v2_trigEff_pt_jet1__6->SetBinContent(42,0.1403509);
   v2_trigEff_pt_jet1__6->SetBinContent(43,0.1894094);
   v2_trigEff_pt_jet1__6->SetBinContent(44,0.1752137);
   v2_trigEff_pt_jet1__6->SetBinContent(45,0.2237762);
   v2_trigEff_pt_jet1__6->SetBinContent(46,0.1641337);
   v2_trigEff_pt_jet1__6->SetBinContent(47,0.1897106);
   v2_trigEff_pt_jet1__6->SetBinContent(48,0.1821192);
   v2_trigEff_pt_jet1__6->SetBinContent(49,0.1805054);
   v2_trigEff_pt_jet1__6->SetBinContent(50,0.1785714);
   v2_trigEff_pt_jet1__6->SetBinContent(51,0.2024793);
   v2_trigEff_pt_jet1__6->SetEntries(6.595609);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v2_trigEff_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  307.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    116");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v2_trigEff_pt_jet1__6->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v2_trigEff_pt_jet1__6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v2_trigEff_pt_jet1__6->SetLineColor(ci);
   v2_trigEff_pt_jet1__6->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   v2_trigEff_pt_jet1__6->GetXaxis()->SetRange(1,500);
   v2_trigEff_pt_jet1__6->GetXaxis()->SetLabelFont(42);
   v2_trigEff_pt_jet1__6->GetXaxis()->SetTitleOffset(1);
   v2_trigEff_pt_jet1__6->GetXaxis()->SetTitleFont(42);
   v2_trigEff_pt_jet1__6->GetYaxis()->SetTitle("Efficiency");
   v2_trigEff_pt_jet1__6->GetYaxis()->SetLabelFont(42);
   v2_trigEff_pt_jet1__6->GetYaxis()->SetTitleFont(42);
   v2_trigEff_pt_jet1__6->GetZaxis()->SetLabelFont(42);
   v2_trigEff_pt_jet1__6->GetZaxis()->SetTitleOffset(1);
   v2_trigEff_pt_jet1__6->GetZaxis()->SetTitleFont(42);
   v2_trigEff_pt_jet1__6->Draw("HIST");
   pt_jet1_2016v2_trigEff_16->Modified();
   pt_jet1_2016v2_trigEff_16->cd();
   pt_jet1_2016v2_trigEff_16->SetSelected(pt_jet1_2016v2_trigEff_16);
}
