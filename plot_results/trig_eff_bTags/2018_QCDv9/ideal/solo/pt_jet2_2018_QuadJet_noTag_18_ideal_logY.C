#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_noTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_noTag_18_ideal/pt_jet2_2018_QuadJet_noTag_18_ideal
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_noTag_18_ideal = new TCanvas("pt_jet2_2018_QuadJet_noTag_18_ideal", "pt_jet2_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_noTag_18_ideal->Range(-100,-0.4109811,566.6667,0.68853);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetLogy();
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet2__41 = new TH1D("_QuadJet_noTag_ideal_pt_jet2__41","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet2__41->SetBinContent(7,2);
   _QuadJet_noTag_ideal_pt_jet2__41->SetBinContent(8,1);
   _QuadJet_noTag_ideal_pt_jet2__41->SetBinContent(10,1);
   _QuadJet_noTag_ideal_pt_jet2__41->SetBinContent(12,2);
   _QuadJet_noTag_ideal_pt_jet2__41->SetBinContent(13,1);
   _QuadJet_noTag_ideal_pt_jet2__41->SetBinContent(15,1);
   _QuadJet_noTag_ideal_pt_jet2__41->SetEntries(8);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  100.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  29.07");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet2__41->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet2__41);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet2__41->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet2__41->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet2__41->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet2__41->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__41->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet2__41->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__41->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet2__41->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__41->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__41->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__41->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet2__41->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__41->Draw("HIST");
   pt_jet2_2018_QuadJet_noTag_18_ideal->Modified();
   pt_jet2_2018_QuadJet_noTag_18_ideal->cd();
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetSelected(pt_jet2_2018_QuadJet_noTag_18_ideal);
}
