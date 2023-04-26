#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_tagged()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17_tagged/pt_jet2_2017_QuadJet_TripleTag_17_tagged
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17_tagged = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17_tagged", "pt_jet2_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->Range(-109.1764,-0.1076923,585.8166,0.7897436);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFillStyle(4000);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15709);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetRightMargin(0.1234783);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetBottomMargin(0.12);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2__67 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2__67","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(5,0.02115159);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(6,0.05896176);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(7,0.1218651);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(8,0.1638455);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(9,0.2036986);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(10,0.23042);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(11,0.1964462);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(12,0.2125436);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(13,0.2251356);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(14,0.2206452);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(15,0.2589286);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(16,0.2278481);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(17,0.25);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(18,0.2165899);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(19,0.2974359);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(20,0.2758621);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(21,0.3);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(22,0.2027027);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(23,0.1290323);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(24,0.1621622);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(25,0.3333333);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(26,0.2608696);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(27,0.2941176);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(28,0.2380952);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(29,0.125);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(30,0.4285714);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(31,0.125);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(32,0.1428571);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(33,0.6666667);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(35,0.5);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(39,0.5);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetBinContent(44,0.5);
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetEntries(8.089786);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  239.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  102.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet2__67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_pt_jet2__67->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__67->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__67->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->cd();
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17_tagged);
}
