#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16/BvL_2016_QuadJet_TripleTag_16
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16 = new TCanvas("BvL_2016_QuadJet_TripleTag_16", "BvL_2016_QuadJet_TripleTag_16",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16->Range(-0.2,3.24591,1.133333,5.680065);
   BvL_2016_QuadJet_TripleTag_16->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16->SetLogy();
   BvL_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_BvL__146 = new TH1D("_QuadJet_TripleTag_BvL__146","",10,0,1);
   _QuadJet_TripleTag_BvL__146->SetBinContent(1,144245);
   _QuadJet_TripleTag_BvL__146->SetBinContent(2,17193);
   _QuadJet_TripleTag_BvL__146->SetBinContent(3,9680);
   _QuadJet_TripleTag_BvL__146->SetBinContent(4,7423);
   _QuadJet_TripleTag_BvL__146->SetBinContent(5,6324);
   _QuadJet_TripleTag_BvL__146->SetBinContent(6,6428);
   _QuadJet_TripleTag_BvL__146->SetBinContent(7,6171);
   _QuadJet_TripleTag_BvL__146->SetBinContent(8,7400);
   _QuadJet_TripleTag_BvL__146->SetBinContent(9,9644);
   _QuadJet_TripleTag_BvL__146->SetBinContent(10,60288);
   _QuadJet_TripleTag_BvL__146->SetEntries(274796);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 274796 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3427");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4042");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_BvL__146->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_BvL__146);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_BvL__146->SetLineColor(ci);
   _QuadJet_TripleTag_BvL__146->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_BvL__146->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_BvL__146->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__146->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__146->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__146->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_BvL__146->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__146->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__146->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__146->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__146->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__146->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16->Modified();
   BvL_2016_QuadJet_TripleTag_16->cd();
   BvL_2016_QuadJet_TripleTag_16->SetSelected(BvL_2016_QuadJet_TripleTag_16);
}
