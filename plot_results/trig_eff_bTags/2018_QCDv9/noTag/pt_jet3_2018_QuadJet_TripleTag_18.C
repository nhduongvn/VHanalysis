#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18/pt_jet3_2018_QuadJet_TripleTag_18
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18 = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18", "pt_jet3_2018_QuadJet_TripleTag_18",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18->Range(-109.1764,-0.04038462,585.8166,0.2961538);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFillStyle(4000);
   pt_jet3_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15709);
   pt_jet3_2018_QuadJet_TripleTag_18->SetRightMargin(0.1234783);
   pt_jet3_2018_QuadJet_TripleTag_18->SetBottomMargin(0.12);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet3__19 = new TH1D("_QuadJet_TripleTag_pt_jet3__19","",50,0,500);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(5,0.0204864);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(6,0.04228638);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(7,0.07450297);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(8,0.1011397);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(9,0.1174049);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(10,0.1269183);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(11,0.1366166);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(12,0.1444851);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(13,0.1533583);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(14,0.1485986);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(15,0.1434311);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(16,0.1522533);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(17,0.1391753);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(18,0.1381579);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(19,0.1487759);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(20,0.1828571);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(21,0.203252);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(22,0.1295337);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(23,0.0952381);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(24,0.1595745);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(25,0.1428571);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(26,0.1521739);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(27,0.1153846);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(28,0.1428571);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(29,0.0952381);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(30,0.05882353);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(31,0.1875);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(32,0.125);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(33,0.25);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(34,0.1428571);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(35,0.25);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(36,0.1428571);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(40,0.1666667);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(51,0.25);
   _QuadJet_TripleTag_pt_jet3__19->SetEntries(4.530262);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  222.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  92.31");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet3__19->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet3__19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_pt_jet3__19->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet3__19->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet3__19->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_pt_jet3__19->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__19->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__19->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__19->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_pt_jet3__19->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__19->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__19->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__19->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__19->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__19->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18->cd();
   pt_jet3_2018_QuadJet_TripleTag_18->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18);
}
