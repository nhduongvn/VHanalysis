#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: HTmod_2018_QuadJet_noTag_18/HTmod_2018_QuadJet_noTag_18
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2018_QuadJet_noTag_18 = new TCanvas("HTmod_2018_QuadJet_noTag_18", "HTmod_2018_QuadJet_noTag_18",0,0,600,600);
   HTmod_2018_QuadJet_noTag_18->SetHighLightColor(2);
   HTmod_2018_QuadJet_noTag_18->Range(-436.7058,-0.1615385,2343.266,1.184615);
   HTmod_2018_QuadJet_noTag_18->SetFillColor(0);
   HTmod_2018_QuadJet_noTag_18->SetFillStyle(4000);
   HTmod_2018_QuadJet_noTag_18->SetBorderMode(0);
   HTmod_2018_QuadJet_noTag_18->SetBorderSize(2);
   HTmod_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   HTmod_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   HTmod_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   HTmod_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   HTmod_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   HTmod_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   HTmod_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_HTmod__142 = new TH1D("_QuadJet_noTag_HTmod__142","",200,0,2000);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_HTmod__142->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_HTmod__142);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_HTmod__142->SetLineColor(ci);
   _QuadJet_noTag_HTmod__142->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_HTmod__142->GetXaxis()->SetRange(1,2000);
   _QuadJet_noTag_HTmod__142->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_HTmod__142->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_HTmod__142->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_HTmod__142->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_HTmod__142->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_HTmod__142->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_HTmod__142->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_HTmod__142->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_HTmod__142->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_HTmod__142->Draw("HIST");
   HTmod_2018_QuadJet_noTag_18->Modified();
   HTmod_2018_QuadJet_noTag_18->cd();
   HTmod_2018_QuadJet_noTag_18->SetSelected(HTmod_2018_QuadJet_noTag_18);
}
