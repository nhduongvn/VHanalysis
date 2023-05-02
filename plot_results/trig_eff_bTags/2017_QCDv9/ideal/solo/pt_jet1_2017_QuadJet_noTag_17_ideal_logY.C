#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17_ideal/pt_jet1_2017_QuadJet_noTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet1_2017_QuadJet_noTag_17_ideal", "pt_jet1_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17_ideal->Range(-100,-3.748352,566.6667,0.7248713);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetLogy();
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet1__11 = new TH1D("_QuadJet_noTag_ideal_pt_jet1__11","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet1__11->SetBinContent(10,1);
   _QuadJet_noTag_ideal_pt_jet1__11->SetBinContent(11,1);
   _QuadJet_noTag_ideal_pt_jet1__11->SetEntries(2);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  104.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  4.719");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet1__11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet1__11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet1__11->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet1__11->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet1__11->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet1__11->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__11->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1__11->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__11->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet1__11->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__11->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__11->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__11->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1__11->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__11->Draw("HIST");
   pt_jet1_2017_QuadJet_noTag_17_ideal->Modified();
   pt_jet1_2017_QuadJet_noTag_17_ideal->cd();
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetSelected(pt_jet1_2017_QuadJet_noTag_17_ideal);
}
