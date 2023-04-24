#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: HTmod_2017_QuadJet_noTag_17/HTmod_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2017_QuadJet_noTag_17 = new TCanvas("HTmod_2017_QuadJet_noTag_17", "HTmod_2017_QuadJet_noTag_17",0,0,600,600);
   HTmod_2017_QuadJet_noTag_17->SetHighLightColor(2);
   HTmod_2017_QuadJet_noTag_17->Range(-400,-0.4706213,2266.667,1.225291);
   HTmod_2017_QuadJet_noTag_17->SetFillColor(0);
   HTmod_2017_QuadJet_noTag_17->SetBorderMode(0);
   HTmod_2017_QuadJet_noTag_17->SetBorderSize(2);
   HTmod_2017_QuadJet_noTag_17->SetLogy();
   HTmod_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   HTmod_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   HTmod_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_HTmod__353 = new TH1D("_QuadJet_noTag_tagged_HTmod__353","",200,0,2000);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(39,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(40,3);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(41,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(42,2);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(43,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(44,3);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(45,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(46,3);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(47,4);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(48,3);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(50,5);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(51,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(52,4);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(53,4);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(54,5);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(55,6);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(56,3);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(57,4);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(58,4);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(59,6);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(60,2);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(61,5);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(62,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(63,2);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(64,2);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(65,5);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(68,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(69,2);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(70,2);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(71,2);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(72,2);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(73,3);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(75,3);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(76,2);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(78,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(80,2);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(82,2);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(83,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(84,3);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(85,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(86,2);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(87,3);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(89,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(91,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(92,4);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(95,3);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(97,3);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(99,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(106,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(110,1);
   _QuadJet_noTag_tagged_HTmod__353->SetBinContent(129,1);
   _QuadJet_noTag_tagged_HTmod__353->SetEntries(129);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 129    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  645.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  175.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_HTmod__353->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_HTmod__353);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_HTmod__353->SetLineColor(ci);
   _QuadJet_noTag_tagged_HTmod__353->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_tagged_HTmod__353->GetXaxis()->SetRange(1,200);
   _QuadJet_noTag_tagged_HTmod__353->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HTmod__353->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HTmod__353->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HTmod__353->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_HTmod__353->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HTmod__353->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HTmod__353->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HTmod__353->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HTmod__353->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HTmod__353->Draw("HIST");
   HTmod_2017_QuadJet_noTag_17->Modified();
   HTmod_2017_QuadJet_noTag_17->cd();
   HTmod_2017_QuadJet_noTag_17->SetSelected(HTmod_2017_QuadJet_noTag_17);
}
