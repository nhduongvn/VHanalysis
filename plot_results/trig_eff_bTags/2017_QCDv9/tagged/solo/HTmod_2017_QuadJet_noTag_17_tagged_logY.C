#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2017_QuadJet_noTag_17_tagged_logY()
{
//=========Macro generated from canvas: HTmod_2017_QuadJet_noTag_17_tagged/HTmod_2017_QuadJet_noTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2017_QuadJet_noTag_17_tagged = new TCanvas("HTmod_2017_QuadJet_noTag_17_tagged", "HTmod_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   HTmod_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   HTmod_2017_QuadJet_noTag_17_tagged->Range(-400,-0.4109811,2266.667,0.68853);
   HTmod_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   HTmod_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   HTmod_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   HTmod_2017_QuadJet_noTag_17_tagged->SetLogy();
   HTmod_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15);
   HTmod_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   HTmod_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_HTmod__89 = new TH1D("_QuadJet_noTag_tagged_HTmod__89","",200,0,2000);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(39,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(48,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(50,2);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(54,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(56,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(59,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(72,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(83,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(95,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(129,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(135,1);
   _QuadJet_noTag_tagged_HTmod__89->SetEntries(12);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  720.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  307.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_HTmod__89->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_HTmod__89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_HTmod__89->SetLineColor(ci);
   _QuadJet_noTag_tagged_HTmod__89->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_tagged_HTmod__89->GetXaxis()->SetRange(1,200);
   _QuadJet_noTag_tagged_HTmod__89->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HTmod__89->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HTmod__89->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HTmod__89->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_HTmod__89->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HTmod__89->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HTmod__89->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HTmod__89->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HTmod__89->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HTmod__89->Draw("HIST");
   HTmod_2017_QuadJet_noTag_17_tagged->Modified();
   HTmod_2017_QuadJet_noTag_17_tagged->cd();
   HTmod_2017_QuadJet_noTag_17_tagged->SetSelected(HTmod_2017_QuadJet_noTag_17_tagged);
}
