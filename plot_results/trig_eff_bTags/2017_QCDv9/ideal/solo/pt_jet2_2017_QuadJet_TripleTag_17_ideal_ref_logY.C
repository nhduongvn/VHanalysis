#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref/pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref", "pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->Range(-100,-0.5899016,566.6667,2.298814);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetLogy();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2_ref__15 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2_ref__15","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(5,2);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(6,21);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(7,40);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(8,49);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(9,54);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(10,26);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(11,22);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(12,19);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(13,16);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(14,12);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(15,9);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(16,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(17,2);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(18,5);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(19,3);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(21,3);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(22,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(23,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(24,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(26,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(28,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetBinContent(32,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetEntries(292);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 292    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  97.93");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  40.29");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2_ref__15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__15->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->cd();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17_ideal_ref);
}
