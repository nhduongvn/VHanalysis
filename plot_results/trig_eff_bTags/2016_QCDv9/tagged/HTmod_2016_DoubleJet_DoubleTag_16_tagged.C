#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2016_DoubleJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: HTmod_2016_DoubleJet_DoubleTag_16_tagged/HTmod_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("HTmod_2016_DoubleJet_DoubleTag_16_tagged", "HTmod_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->Range(-436.7058,-0.1615385,2343.266,1.184615);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetFillStyle(4000);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_HTmod__178 = new TH1D("_DoubleJet_DoubleTag_tagged_HTmod__178","",200,0,2000);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(48,0.04545455);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(50,0.05);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(52,0.05882353);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(53,0.05263158);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(55,0.04761905);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(57,0.07142857);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(60,0.04347826);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(63,0.1333333);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(64,0.05555556);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(65,0.125);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(69,0.2222222);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(71,0.05555556);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(72,0.07692308);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(74,0.05555556);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(76,0.07692308);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(78,0.09090909);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(80,0.1111111);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(81,0.07692308);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(83,0.07692308);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(84,0.08333333);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(89,0.2);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(98,0.5);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(112,0.3333333);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetBinContent(144,1);
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetEntries(3.643037);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  978.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  321.6");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_HTmod__178->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_HTmod__178);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_HTmod__178->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_HTmod__178->GetXaxis()->SetTitle("H_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_HTmod__178->GetXaxis()->SetRange(1,2000);
   _DoubleJet_DoubleTag_tagged_HTmod__178->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_HTmod__178->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_HTmod__178->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_HTmod__178->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_HTmod__178->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_HTmod__178->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_HTmod__178->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_HTmod__178->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_HTmod__178->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_HTmod__178->Draw("HIST");
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->cd();
   HTmod_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(HTmod_2016_DoubleJet_DoubleTag_16_tagged);
}
