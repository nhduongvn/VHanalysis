#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: HTmod_2017_QuadJet_noTag_17_ideal/HTmod_2017_QuadJet_noTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2017_QuadJet_noTag_17_ideal = new TCanvas("HTmod_2017_QuadJet_noTag_17_ideal", "HTmod_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   HTmod_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   HTmod_2017_QuadJet_noTag_17_ideal->Range(-400,-3.447322,2266.667,1.025901);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   HTmod_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   HTmod_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   HTmod_2017_QuadJet_noTag_17_ideal->SetLogy();
   HTmod_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_HTmod__35 = new TH1D("_QuadJet_noTag_ideal_HTmod__35","",200,0,2000);
   _QuadJet_noTag_ideal_HTmod__35->SetBinContent(50,2);
   _QuadJet_noTag_ideal_HTmod__35->SetEntries(2);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  495.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  3.488");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_HTmod__35->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_HTmod__35);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_HTmod__35->SetLineColor(ci);
   _QuadJet_noTag_ideal_HTmod__35->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_ideal_HTmod__35->GetXaxis()->SetRange(1,200);
   _QuadJet_noTag_ideal_HTmod__35->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__35->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HTmod__35->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__35->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_HTmod__35->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__35->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__35->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__35->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HTmod__35->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__35->Draw("HIST");
   HTmod_2017_QuadJet_noTag_17_ideal->Modified();
   HTmod_2017_QuadJet_noTag_17_ideal->cd();
   HTmod_2017_QuadJet_noTag_17_ideal->SetSelected(HTmod_2017_QuadJet_noTag_17_ideal);
}
