#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2018_QuadJet_noTag_18_tagged()
{
//=========Macro generated from canvas: HTmod_2018_QuadJet_noTag_18_tagged/HTmod_2018_QuadJet_noTag_18_tagged
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2018_QuadJet_noTag_18_tagged = new TCanvas("HTmod_2018_QuadJet_noTag_18_tagged", "HTmod_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   HTmod_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   HTmod_2018_QuadJet_noTag_18_tagged->Range(-436.7058,-0.04038462,2343.266,0.2961538);
   HTmod_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   HTmod_2018_QuadJet_noTag_18_tagged->SetFillStyle(4000);
   HTmod_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   HTmod_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   HTmod_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15709);
   HTmod_2018_QuadJet_noTag_18_tagged->SetRightMargin(0.1234783);
   HTmod_2018_QuadJet_noTag_18_tagged->SetBottomMargin(0.12);
   HTmod_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   HTmod_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   HTmod_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   HTmod_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_HTmod__88 = new TH1D("_QuadJet_noTag_tagged_HTmod__88","",200,0,2000);
   _QuadJet_noTag_tagged_HTmod__88->SetBinContent(49,0.02);
   _QuadJet_noTag_tagged_HTmod__88->SetBinContent(55,0.01851852);
   _QuadJet_noTag_tagged_HTmod__88->SetBinContent(62,0.02631579);
   _QuadJet_noTag_tagged_HTmod__88->SetBinContent(64,0.025);
   _QuadJet_noTag_tagged_HTmod__88->SetBinContent(77,0.04347826);
   _QuadJet_noTag_tagged_HTmod__88->SetBinContent(82,0.05882353);
   _QuadJet_noTag_tagged_HTmod__88->SetBinContent(86,0.05882353);
   _QuadJet_noTag_tagged_HTmod__88->SetBinContent(106,0.25);
   _QuadJet_noTag_tagged_HTmod__88->SetEntries(0.5009596);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  892.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  184.1");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_HTmod__88->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_HTmod__88);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_HTmod__88->SetLineColor(ci);
   _QuadJet_noTag_tagged_HTmod__88->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_tagged_HTmod__88->GetXaxis()->SetRange(1,2000);
   _QuadJet_noTag_tagged_HTmod__88->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HTmod__88->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HTmod__88->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HTmod__88->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_HTmod__88->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HTmod__88->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HTmod__88->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HTmod__88->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HTmod__88->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HTmod__88->Draw("HIST");
   HTmod_2018_QuadJet_noTag_18_tagged->Modified();
   HTmod_2018_QuadJet_noTag_18_tagged->cd();
   HTmod_2018_QuadJet_noTag_18_tagged->SetSelected(HTmod_2018_QuadJet_noTag_18_tagged);
}
