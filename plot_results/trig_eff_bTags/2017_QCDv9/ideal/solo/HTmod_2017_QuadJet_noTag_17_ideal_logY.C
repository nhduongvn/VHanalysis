#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: HTmod_2017_QuadJet_noTag_17_ideal/HTmod_2017_QuadJet_noTag_17_ideal
//=========  (Thu Apr 27 10:19:54 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2017_QuadJet_noTag_17_ideal = new TCanvas("HTmod_2017_QuadJet_noTag_17_ideal", "HTmod_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   HTmod_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   HTmod_2017_QuadJet_noTag_17_ideal->Range(-400,-0.4109811,2266.667,0.68853);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   HTmod_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   HTmod_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   HTmod_2017_QuadJet_noTag_17_ideal->SetLogy();
   HTmod_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_HTmod__143 = new TH1D("_QuadJet_noTag_ideal_HTmod__143","",200,0,2000);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(48,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(50,2);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(54,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(56,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(59,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(72,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(83,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(95,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(129,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(135,1);
   _QuadJet_noTag_ideal_HTmod__143->SetEntries(11);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 11     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  750.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  303.5");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_HTmod__143->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_HTmod__143);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_HTmod__143->SetLineColor(ci);
   _QuadJet_noTag_ideal_HTmod__143->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_ideal_HTmod__143->GetXaxis()->SetRange(1,200);
   _QuadJet_noTag_ideal_HTmod__143->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__143->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HTmod__143->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__143->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_HTmod__143->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__143->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__143->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__143->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HTmod__143->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__143->Draw("HIST");
   HTmod_2017_QuadJet_noTag_17_ideal->Modified();
   HTmod_2017_QuadJet_noTag_17_ideal->cd();
   HTmod_2017_QuadJet_noTag_17_ideal->SetSelected(HTmod_2017_QuadJet_noTag_17_ideal);
}
