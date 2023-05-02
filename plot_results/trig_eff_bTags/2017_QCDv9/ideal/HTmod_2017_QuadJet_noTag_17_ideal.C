#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: HTmod_2017_QuadJet_noTag_17_ideal/HTmod_2017_QuadJet_noTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2017_QuadJet_noTag_17_ideal = new TCanvas("HTmod_2017_QuadJet_noTag_17_ideal", "HTmod_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   HTmod_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   HTmod_2017_QuadJet_noTag_17_ideal->Range(-436.7058,-0.02692308,2343.266,0.1974359);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFillStyle(4000);
   HTmod_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   HTmod_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   HTmod_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15709);
   HTmod_2017_QuadJet_noTag_17_ideal->SetRightMargin(0.1234783);
   HTmod_2017_QuadJet_noTag_17_ideal->SetBottomMargin(0.12);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   HTmod_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_HTmod__34 = new TH1D("_QuadJet_noTag_ideal_HTmod__34","",200,0,2000);
   _QuadJet_noTag_ideal_HTmod__34->SetBinContent(50,0.1666667);
   _QuadJet_noTag_ideal_HTmod__34->SetEntries(0.1666667);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    495");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_HTmod__34->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_HTmod__34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_HTmod__34->SetLineColor(ci);
   _QuadJet_noTag_ideal_HTmod__34->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_ideal_HTmod__34->GetXaxis()->SetRange(1,2000);
   _QuadJet_noTag_ideal_HTmod__34->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__34->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HTmod__34->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__34->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_HTmod__34->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__34->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__34->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__34->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HTmod__34->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__34->Draw("HIST");
   HTmod_2017_QuadJet_noTag_17_ideal->Modified();
   HTmod_2017_QuadJet_noTag_17_ideal->cd();
   HTmod_2017_QuadJet_noTag_17_ideal->SetSelected(HTmod_2017_QuadJet_noTag_17_ideal);
}
