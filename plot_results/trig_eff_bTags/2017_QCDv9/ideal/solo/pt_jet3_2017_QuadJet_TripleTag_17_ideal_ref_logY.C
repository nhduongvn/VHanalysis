#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref/pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref", "pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->Range(-100,-0.267609,566.6667,2.408481);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetLogy();
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3_ref__21 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3_ref__21","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(5,25);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(6,73);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(7,55);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(8,51);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(9,32);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(10,14);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(11,13);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(12,15);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(13,4);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(14,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(15,4);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(16,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(21,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetEntries(292);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 292    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  74.37");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  25.05");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3_ref__21);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->cd();
   pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17_ideal_ref);
}
