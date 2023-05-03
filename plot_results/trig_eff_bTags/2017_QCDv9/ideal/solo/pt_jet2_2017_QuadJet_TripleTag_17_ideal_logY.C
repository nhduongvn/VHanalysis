#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17_ideal/pt_jet2_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17_ideal", "pt_jet2_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->Range(-100,-0.5614961,566.6667,2.043165);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetLogy();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2__14 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2__14","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(6,5);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(7,22);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(8,26);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(9,32);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(10,17);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(11,15);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(12,13);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(13,11);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(14,9);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(15,1);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(16,1);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(17,1);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(18,5);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(19,3);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(21,3);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(22,1);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(28,1);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetBinContent(32,1);
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetEntries(167);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 167    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  101.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  39.42");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2__14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2__14);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet2__14->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2__14->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2__14->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet2__14->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__14->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__14->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__14->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet2__14->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__14->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__14->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__14->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__14->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__14->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17_ideal);
}
