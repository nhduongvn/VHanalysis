#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2016_QuadJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: HTmod_2016_QuadJet_DoubleTag_16_tagged/HTmod_2016_QuadJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("HTmod_2016_QuadJet_DoubleTag_16_tagged", "HTmod_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->Range(-436.7058,-0.1615385,2343.266,1.184615);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetFillStyle(4000);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_HTmod__172 = new TH1D("_QuadJet_DoubleTag_tagged_HTmod__172","",200,0,2000);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(35,0.2);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(42,0.06666667);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(43,0.03703704);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(46,0.03333333);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(47,0.04761905);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(48,0.09090909);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(49,0.04166667);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(51,0.05263158);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(54,0.03846154);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(55,0.04761905);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(56,0.07692308);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(57,0.07142857);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(59,0.1333333);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(61,0.0625);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(62,0.07142857);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(65,0.08333333);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(76,0.07692308);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(82,0.1818182);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(84,0.08333333);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(93,0.07692308);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetBinContent(180,1);
   _QuadJet_DoubleTag_tagged_HTmod__172->SetEntries(2.573889);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  =   1059");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  601.4");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_HTmod__172->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_HTmod__172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_tagged_HTmod__172->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_HTmod__172->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_HTmod__172->GetXaxis()->SetRange(1,2000);
   _QuadJet_DoubleTag_tagged_HTmod__172->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_HTmod__172->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_HTmod__172->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_HTmod__172->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_tagged_HTmod__172->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_HTmod__172->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_HTmod__172->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_HTmod__172->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_HTmod__172->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_HTmod__172->Draw("HIST");
   HTmod_2016_QuadJet_DoubleTag_16_tagged->Modified();
   HTmod_2016_QuadJet_DoubleTag_16_tagged->cd();
   HTmod_2016_QuadJet_DoubleTag_16_tagged->SetSelected(HTmod_2016_QuadJet_DoubleTag_16_tagged);
}
