#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2016_QuadJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: HTmod_2016_QuadJet_DoubleTag_16_ideal/HTmod_2016_QuadJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("HTmod_2016_QuadJet_DoubleTag_16_ideal", "HTmod_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->Range(-400,-0.4109811,2266.667,0.68853);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetLogy();
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_HTmod__281 = new TH1D("_QuadJet_DoubleTag_ideal_HTmod__281","",200,0,2000);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(35,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(42,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(43,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(46,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(47,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(48,2);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(49,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(51,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(54,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(55,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(56,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(57,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(59,2);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(61,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(62,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(65,2);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(76,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(82,2);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(84,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(93,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetBinContent(180,1);
   _QuadJet_DoubleTag_ideal_HTmod__281->SetEntries(25);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 25     ");
   ptstats_LaTex = ptstats->AddText("Mean  =    635");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    277");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_HTmod__281->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_HTmod__281);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_ideal_HTmod__281->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_HTmod__281->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_DoubleTag_ideal_HTmod__281->GetXaxis()->SetRange(1,200);
   _QuadJet_DoubleTag_ideal_HTmod__281->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_HTmod__281->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_HTmod__281->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_HTmod__281->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_ideal_HTmod__281->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_HTmod__281->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_HTmod__281->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_HTmod__281->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_HTmod__281->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_HTmod__281->Draw("HIST");
   HTmod_2016_QuadJet_DoubleTag_16_ideal->Modified();
   HTmod_2016_QuadJet_DoubleTag_16_ideal->cd();
   HTmod_2016_QuadJet_DoubleTag_16_ideal->SetSelected(HTmod_2016_QuadJet_DoubleTag_16_ideal);
}
