#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_TripleTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_TripleTag_17_ideal/pt_jet1_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet1_2017_QuadJet_TripleTag_17_ideal", "pt_jet1_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->Range(-100,-0.5435684,566.6667,1.881815);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetLogy();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1__8 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1__8","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(7,3);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(8,3);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(9,14);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(10,20);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(11,23);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(12,13);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(13,15);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(14,13);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(15,8);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(16,11);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(17,6);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(18,5);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(19,2);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(20,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(21,7);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(22,4);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(23,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(24,3);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(26,2);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(27,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(28,2);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(30,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(31,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(40,2);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(43,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(47,1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetBinContent(49,2);
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetEntries(167);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 167    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  148.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  76.62");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1__8);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet1__8->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__8->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__8->Draw("HIST");
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet1_2017_QuadJet_TripleTag_17_ideal);
}
