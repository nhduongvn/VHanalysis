#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18/pt_jet3_2018_QuadJet_TripleTag_18
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18 = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18", "pt_jet3_2018_QuadJet_TripleTag_18",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18->Range(-100,-2.748352,566.6667,1.724871);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet3__92 = new TH1D("_QuadJet_TripleTag_pt_jet3__92","",50,0,500);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet3__92->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet3__92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet3__92->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet3__92->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet3__92->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet3__92->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__92->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__92->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__92->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet3__92->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__92->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__92->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__92->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__92->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__92->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18->cd();
   pt_jet3_2018_QuadJet_TripleTag_18->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18);
}
