#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17_ideal/pt_jet1_2017_QuadJet_noTag_17_ideal
//=========  (Tue Apr 25 23:02:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet1_2017_QuadJet_noTag_17_ideal", "pt_jet1_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17_ideal->Range(-100,-0.5386298,566.6667,1.837368);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetLogy();
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet1__119 = new TH1D("_QuadJet_noTag_ideal_pt_jet1__119","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(7,2);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(8,6);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(9,12);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(10,15);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(11,21);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(12,12);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(13,18);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(14,8);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(15,4);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(16,5);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(17,5);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(18,5);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(19,7);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(20,6);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(21,5);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(22,1);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(23,4);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(24,2);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(25,1);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(26,1);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(28,1);
   _QuadJet_noTag_ideal_pt_jet1__119->SetBinContent(29,2);
   _QuadJet_noTag_ideal_pt_jet1__119->SetEntries(143);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 143    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  135.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  48.74");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet1__119->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet1__119);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet1__119->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet1__119->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet1__119->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet1__119->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__119->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1__119->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__119->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet1__119->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__119->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__119->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__119->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1__119->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__119->Draw("HIST");
   pt_jet1_2017_QuadJet_noTag_17_ideal->Modified();
   pt_jet1_2017_QuadJet_noTag_17_ideal->cd();
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetSelected(pt_jet1_2017_QuadJet_noTag_17_ideal);
}
