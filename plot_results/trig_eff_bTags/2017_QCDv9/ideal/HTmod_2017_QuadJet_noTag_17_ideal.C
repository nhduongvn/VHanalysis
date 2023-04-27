#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: HTmod_2017_QuadJet_noTag_17_ideal/HTmod_2017_QuadJet_noTag_17_ideal
//=========  (Thu Apr 27 10:19:54 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2017_QuadJet_noTag_17_ideal = new TCanvas("HTmod_2017_QuadJet_noTag_17_ideal", "HTmod_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   HTmod_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   HTmod_2017_QuadJet_noTag_17_ideal->Range(-436.7058,-0.1615385,2343.266,1.184615);
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
   
   TH1D *_QuadJet_noTag_ideal_HTmod__142 = new TH1D("_QuadJet_noTag_ideal_HTmod__142","",200,0,2000);
   _QuadJet_noTag_ideal_HTmod__142->SetBinContent(48,0.04545455);
   _QuadJet_noTag_ideal_HTmod__142->SetBinContent(50,0.06451613);
   _QuadJet_noTag_ideal_HTmod__142->SetBinContent(54,0.03333333);
   _QuadJet_noTag_ideal_HTmod__142->SetBinContent(56,0.04166667);
   _QuadJet_noTag_ideal_HTmod__142->SetBinContent(59,0.04347826);
   _QuadJet_noTag_ideal_HTmod__142->SetBinContent(72,0.05);
   _QuadJet_noTag_ideal_HTmod__142->SetBinContent(83,0.09090909);
   _QuadJet_noTag_ideal_HTmod__142->SetBinContent(95,0.1666667);
   _QuadJet_noTag_ideal_HTmod__142->SetBinContent(129,0.5);
   _QuadJet_noTag_ideal_HTmod__142->SetBinContent(135,1);
   _QuadJet_noTag_ideal_HTmod__142->SetEntries(2.036025);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  =   1167");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  282.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_HTmod__142->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_HTmod__142);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_HTmod__142->SetLineColor(ci);
   _QuadJet_noTag_ideal_HTmod__142->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_ideal_HTmod__142->GetXaxis()->SetRange(1,2000);
   _QuadJet_noTag_ideal_HTmod__142->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__142->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HTmod__142->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__142->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_HTmod__142->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__142->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__142->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HTmod__142->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HTmod__142->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HTmod__142->Draw("HIST");
   HTmod_2017_QuadJet_noTag_17_ideal->Modified();
   HTmod_2017_QuadJet_noTag_17_ideal->cd();
   HTmod_2017_QuadJet_noTag_17_ideal->SetSelected(HTmod_2017_QuadJet_noTag_17_ideal);
}
