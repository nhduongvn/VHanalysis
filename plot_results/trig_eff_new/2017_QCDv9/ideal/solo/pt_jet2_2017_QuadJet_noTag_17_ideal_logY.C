#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17_ideal/pt_jet2_2017_QuadJet_noTag_17_ideal
//=========  (Thu Apr 27 10:18:24 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet2_2017_QuadJet_noTag_17_ideal", "pt_jet2_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_noTag_17_ideal->Range(-100,-0.5386298,566.6667,1.837368);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetLogy();
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet2__125 = new TH1D("_QuadJet_noTag_ideal_pt_jet2__125","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(6,9);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(7,19);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(8,21);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(9,18);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(10,19);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(11,12);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(12,7);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(13,9);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(14,5);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(15,3);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(16,3);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(17,3);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(18,2);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(19,4);
   _QuadJet_noTag_ideal_pt_jet2__125->SetBinContent(21,1);
   _QuadJet_noTag_ideal_pt_jet2__125->SetEntries(135);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 135    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  97.78");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  33.51");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet2__125->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet2__125);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet2__125->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet2__125->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet2__125->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet2__125->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__125->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet2__125->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__125->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet2__125->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__125->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__125->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__125->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet2__125->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__125->Draw("HIST");
   pt_jet2_2017_QuadJet_noTag_17_ideal->Modified();
   pt_jet2_2017_QuadJet_noTag_17_ideal->cd();
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetSelected(pt_jet2_2017_QuadJet_noTag_17_ideal);
}
