#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_2b2c_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18_2b2c/BvL_2018_QuadJet_TripleTag_18_2b2c
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18_2b2c = new TCanvas("BvL_2018_QuadJet_TripleTag_18_2b2c", "BvL_2018_QuadJet_TripleTag_18_2b2c",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18_2b2c->Range(-0.2,2.640426,1.133333,4.824544);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetLogy();
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetLeftMargin(0.15);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_BvL__74 = new TH1D("_QuadJet_TripleTag_2b2c_BvL__74","",10,0,1);
   _QuadJet_TripleTag_2b2c_BvL__74->SetBinContent(1,21310);
   _QuadJet_TripleTag_2b2c_BvL__74->SetBinContent(2,4059);
   _QuadJet_TripleTag_2b2c_BvL__74->SetBinContent(3,2376);
   _QuadJet_TripleTag_2b2c_BvL__74->SetBinContent(4,2329);
   _QuadJet_TripleTag_2b2c_BvL__74->SetBinContent(5,1843);
   _QuadJet_TripleTag_2b2c_BvL__74->SetBinContent(6,1683);
   _QuadJet_TripleTag_2b2c_BvL__74->SetBinContent(7,1445);
   _QuadJet_TripleTag_2b2c_BvL__74->SetBinContent(8,1471);
   _QuadJet_TripleTag_2b2c_BvL__74->SetBinContent(9,1992);
   _QuadJet_TripleTag_2b2c_BvL__74->SetBinContent(10,13720);
   _QuadJet_TripleTag_2b2c_BvL__74->SetEntries(52228);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 52228  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4142");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4065");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_BvL__74->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_BvL__74);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_BvL__74->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_BvL__74->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_2b2c_BvL__74->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_2b2c_BvL__74->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL__74->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_BvL__74->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL__74->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_BvL__74->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL__74->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL__74->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL__74->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_BvL__74->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL__74->Draw("HIST");
   BvL_2018_QuadJet_TripleTag_18_2b2c->Modified();
   BvL_2018_QuadJet_TripleTag_18_2b2c->cd();
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetSelected(BvL_2018_QuadJet_TripleTag_18_2b2c);
}
