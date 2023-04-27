#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2016_DoubleJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: HTmod_2016_DoubleJet_DoubleTag_16_ideal/HTmod_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("HTmod_2016_DoubleJet_DoubleTag_16_ideal", "HTmod_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->Range(-400,-0.4329925,2266.667,0.8866327);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetLogy();
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_HTmod__287 = new TH1D("_DoubleJet_DoubleTag_ideal_HTmod__287","",200,0,2000);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(48,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(50,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(52,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(53,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(55,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(57,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(60,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(63,2);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(64,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(65,3);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(69,2);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(71,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(72,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(74,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(76,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(78,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(80,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(81,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(83,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(84,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(89,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(98,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(112,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetBinContent(144,1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetEntries(28);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  723.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  198.6");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_HTmod__287->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_HTmod__287);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_HTmod__287->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_HTmod__287->GetXaxis()->SetTitle("H_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_HTmod__287->GetXaxis()->SetRange(1,200);
   _DoubleJet_DoubleTag_ideal_HTmod__287->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_HTmod__287->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_HTmod__287->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_HTmod__287->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_HTmod__287->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_HTmod__287->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_HTmod__287->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_HTmod__287->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_HTmod__287->Draw("HIST");
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->cd();
   HTmod_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(HTmod_2016_DoubleJet_DoubleTag_16_ideal);
}
