#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2018_QuadJet_noTag_18_ideal_logY()
{
//=========Macro generated from canvas: HTmod_2018_QuadJet_noTag_18_ideal/HTmod_2018_QuadJet_noTag_18_ideal
//=========  (Thu Apr 27 10:20:02 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2018_QuadJet_noTag_18_ideal = new TCanvas("HTmod_2018_QuadJet_noTag_18_ideal", "HTmod_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   HTmod_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   HTmod_2018_QuadJet_noTag_18_ideal->Range(-400,-3.748352,2266.667,0.7248713);
   HTmod_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   HTmod_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   HTmod_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   HTmod_2018_QuadJet_noTag_18_ideal->SetLogy();
   HTmod_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15);
   HTmod_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   HTmod_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_HTmod__143 = new TH1D("_QuadJet_noTag_ideal_HTmod__143","",200,0,2000);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(49,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(55,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(62,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(64,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(77,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(82,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(86,1);
   _QuadJet_noTag_ideal_HTmod__143->SetBinContent(106,1);
   _QuadJet_noTag_ideal_HTmod__143->SetEntries(8);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  722.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  174.4");
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
   HTmod_2018_QuadJet_noTag_18_ideal->Modified();
   HTmod_2018_QuadJet_noTag_18_ideal->cd();
   HTmod_2018_QuadJet_noTag_18_ideal->SetSelected(HTmod_2018_QuadJet_noTag_18_ideal);
}
