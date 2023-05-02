#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2018_QuadJet_noTag_18_ideal()
{
//=========Macro generated from canvas: HTmod_2018_QuadJet_noTag_18_ideal/HTmod_2018_QuadJet_noTag_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2018_QuadJet_noTag_18_ideal = new TCanvas("HTmod_2018_QuadJet_noTag_18_ideal", "HTmod_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   HTmod_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   HTmod_2018_QuadJet_noTag_18_ideal->Range(-436.7058,-0.04038462,2343.266,0.2961538);
   HTmod_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   HTmod_2018_QuadJet_noTag_18_ideal->SetFillStyle(4000);
   HTmod_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   HTmod_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   HTmod_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15709);
   HTmod_2018_QuadJet_noTag_18_ideal->SetRightMargin(0.1234783);
   HTmod_2018_QuadJet_noTag_18_ideal->SetBottomMargin(0.12);
   HTmod_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   HTmod_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   HTmod_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   HTmod_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_HTmod__94 = new TH1D("_QuadJet_noTag_ideal_HTmod__94","",200,0,2000);
   _QuadJet_noTag_ideal_HTmod__94->SetBinContent(49,0.02173913);
   _QuadJet_noTag_ideal_HTmod__94->SetBinContent(55,0.01960784);
   _QuadJet_noTag_ideal_HTmod__94->SetBinContent(62,0.02631579);
   _QuadJet_noTag_ideal_HTmod__94->SetBinContent(64,0.025);
   _QuadJet_noTag_ideal_HTmod__94->SetBinContent(77,0.04761905);
   _QuadJet_noTag_ideal_HTmod__94->SetBinContent(82,0.0625);
   _QuadJet_noTag_ideal_HTmod__94->SetBinContent(86,0.05882353);
   _QuadJet_noTag_ideal_HTmod__94->SetBinContent(106,0.25);
   _QuadJet_noTag_ideal_HTmod__94->SetEntries(0.5116053);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  888.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  184.9");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_HTmod__94->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_HTmod__94);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_HTmod__94->SetLineColor(ci);
   _QuadJet_noTag_ideal_HTmod__94->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_ideal_HTmod__94->GetXaxis()->SetRange(1,2000);
   _QuadJet_noTag_ideal_HTmod__94->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__94->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HTmod__94->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__94->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_HTmod__94->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__94->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__94->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__94->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HTmod__94->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__94->Draw("HIST");
   HTmod_2018_QuadJet_noTag_18_ideal->Modified();
   HTmod_2018_QuadJet_noTag_18_ideal->cd();
   HTmod_2018_QuadJet_noTag_18_ideal->SetSelected(HTmod_2018_QuadJet_noTag_18_ideal);
}
