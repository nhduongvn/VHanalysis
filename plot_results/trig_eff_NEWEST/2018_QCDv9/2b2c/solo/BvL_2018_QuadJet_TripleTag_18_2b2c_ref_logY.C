#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_2b2c_ref_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18_2b2c_ref/BvL_2018_QuadJet_TripleTag_18_2b2c_ref
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18_2b2c_ref = new TCanvas("BvL_2018_QuadJet_TripleTag_18_2b2c_ref", "BvL_2018_QuadJet_TripleTag_18_2b2c_ref",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18_2b2c_ref->Range(-0.2,3.15439,1.133333,5.390831);
   BvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetLogy();
   BvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetLeftMargin(0.15);
   BvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_BvL_ref__75 = new TH1D("_QuadJet_TripleTag_2b2c_BvL_ref__75","",10,0,1);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->SetBinContent(1,77560);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->SetBinContent(2,12221);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->SetBinContent(3,6536);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->SetBinContent(4,7438);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->SetBinContent(5,5771);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->SetBinContent(6,5180);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->SetBinContent(7,4776);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->SetBinContent(8,5096);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->SetBinContent(9,6718);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->SetBinContent(10,45480);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->SetEntries(176776);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 176776 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4025");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4086");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_BvL_ref__75->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_BvL_ref__75);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_BvL_ref__75->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_2b2c_BvL_ref__75->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_BvL_ref__75->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL_ref__75->Draw("HIST");
   BvL_2018_QuadJet_TripleTag_18_2b2c_ref->Modified();
   BvL_2018_QuadJet_TripleTag_18_2b2c_ref->cd();
   BvL_2018_QuadJet_TripleTag_18_2b2c_ref->SetSelected(BvL_2018_QuadJet_TripleTag_18_2b2c_ref);
}
