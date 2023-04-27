#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref/pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref", "pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->Range(-100,-0.6803981,566.6667,3.113283);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetLogy();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2_ref__123 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2_ref__123","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(5,3);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(6,100);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(7,226);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(8,280);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(9,286);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(10,222);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(11,156);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(12,115);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(13,115);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(14,59);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(15,56);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(16,50);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(17,28);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(18,26);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(19,28);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(20,9);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(21,11);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(22,10);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(23,9);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(24,5);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(25,4);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(26,3);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(27,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(28,8);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(31,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(32,2);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(34,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetBinContent(37,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetEntries(1818);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1818   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  101.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  40.77");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2_ref__123);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__123->Draw("HIST");
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->cd();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref);
}
