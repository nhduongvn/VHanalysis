#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2018_QuadJet_noTag_18_tagged_logY()
{
//=========Macro generated from canvas: HTmod_2018_QuadJet_noTag_18_tagged/HTmod_2018_QuadJet_noTag_18_tagged
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2018_QuadJet_noTag_18_tagged = new TCanvas("HTmod_2018_QuadJet_noTag_18_tagged", "HTmod_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   HTmod_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   HTmod_2018_QuadJet_noTag_18_tagged->Range(-400,-3.748352,2266.667,0.7248713);
   HTmod_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   HTmod_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   HTmod_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   HTmod_2018_QuadJet_noTag_18_tagged->SetLogy();
   HTmod_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15);
   HTmod_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   HTmod_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_HTmod__89 = new TH1D("_QuadJet_noTag_tagged_HTmod__89","",200,0,2000);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(49,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(55,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(62,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(64,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(77,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(82,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(86,1);
   _QuadJet_noTag_tagged_HTmod__89->SetBinContent(106,1);
   _QuadJet_noTag_tagged_HTmod__89->SetEntries(8);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  722.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  174.4");
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
   HTmod_2018_QuadJet_noTag_18_tagged->Modified();
   HTmod_2018_QuadJet_noTag_18_tagged->cd();
   HTmod_2018_QuadJet_noTag_18_tagged->SetSelected(HTmod_2018_QuadJet_noTag_18_tagged);
}
