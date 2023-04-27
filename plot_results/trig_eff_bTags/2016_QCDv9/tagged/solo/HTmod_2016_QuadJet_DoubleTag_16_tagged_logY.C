#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2016_QuadJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: HTmod_2016_QuadJet_DoubleTag_16_tagged/HTmod_2016_QuadJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("HTmod_2016_QuadJet_DoubleTag_16_tagged", "HTmod_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->Range(-400,-0.4109811,2266.667,0.68853);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetLogy();
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_HTmod__173 = new TH1D("_QuadJet_DoubleTag_tagged_HTmod__173","",200,0,2000);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(35,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(42,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(43,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(46,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(47,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(48,2);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(49,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(51,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(54,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(55,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(56,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(57,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(59,2);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(61,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(62,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(65,2);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(76,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(82,2);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(84,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(93,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetBinContent(180,1);
   _QuadJet_DoubleTag_tagged_HTmod__173->SetEntries(25);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 25     ");
   ptstats_LaTex = ptstats->AddText("Mean  =    635");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    277");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_HTmod__173->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_HTmod__173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_HTmod__173->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_HTmod__173->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_HTmod__173->GetXaxis()->SetRange(1,200);
   _QuadJet_DoubleTag_tagged_HTmod__173->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_HTmod__173->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_HTmod__173->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_HTmod__173->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_HTmod__173->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_HTmod__173->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_HTmod__173->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_HTmod__173->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_HTmod__173->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_HTmod__173->Draw("HIST");
   HTmod_2016_QuadJet_DoubleTag_16_tagged->Modified();
   HTmod_2016_QuadJet_DoubleTag_16_tagged->cd();
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetSelected(HTmod_2016_QuadJet_DoubleTag_16_tagged);
}
