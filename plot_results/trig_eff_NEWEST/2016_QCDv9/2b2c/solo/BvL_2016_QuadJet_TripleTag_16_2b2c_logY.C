#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_2b2c_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_2b2c/BvL_2016_QuadJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_2b2c = new TCanvas("BvL_2016_QuadJet_TripleTag_16_2b2c", "BvL_2016_QuadJet_TripleTag_16_2b2c",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_2b2c->Range(-0.2,2.635688,1.133333,4.815788);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetLogy();
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_BvL__146 = new TH1D("_QuadJet_TripleTag_2b2c_BvL__146","",10,0,1);
   _QuadJet_TripleTag_2b2c_BvL__146->SetBinContent(1,20904);
   _QuadJet_TripleTag_2b2c_BvL__146->SetBinContent(2,3952);
   _QuadJet_TripleTag_2b2c_BvL__146->SetBinContent(3,2190);
   _QuadJet_TripleTag_2b2c_BvL__146->SetBinContent(4,2257);
   _QuadJet_TripleTag_2b2c_BvL__146->SetBinContent(5,1796);
   _QuadJet_TripleTag_2b2c_BvL__146->SetBinContent(6,1656);
   _QuadJet_TripleTag_2b2c_BvL__146->SetBinContent(7,1428);
   _QuadJet_TripleTag_2b2c_BvL__146->SetBinContent(8,1527);
   _QuadJet_TripleTag_2b2c_BvL__146->SetBinContent(9,2101);
   _QuadJet_TripleTag_2b2c_BvL__146->SetBinContent(10,12469);
   _QuadJet_TripleTag_2b2c_BvL__146->SetEntries(50280);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_2b2c_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 50280  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4055");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4023");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_BvL__146->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_BvL__146);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_BvL__146->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_BvL__146->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_2b2c_BvL__146->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_2b2c_BvL__146->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL__146->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_BvL__146->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL__146->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_BvL__146->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL__146->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL__146->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL__146->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_BvL__146->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL__146->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16_2b2c->Modified();
   BvL_2016_QuadJet_TripleTag_16_2b2c->cd();
   BvL_2016_QuadJet_TripleTag_16_2b2c->SetSelected(BvL_2016_QuadJet_TripleTag_16_2b2c);
}
