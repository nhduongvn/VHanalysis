#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_3B_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_3B/BvL_2016_QuadJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_3B = new TCanvas("BvL_2016_QuadJet_TripleTag_16_3B", "BvL_2016_QuadJet_TripleTag_16_3B",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_3B->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_3B->Range(-0.2,2.432112,1.133333,4.652757);
   BvL_2016_QuadJet_TripleTag_16_3B->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_3B->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_3B->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_3B->SetLogy();
   BvL_2016_QuadJet_TripleTag_16_3B->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_BvL__92 = new TH1D("_QuadJet_TripleTag_3B_BvL__92","",10,0,1);
   _QuadJet_TripleTag_3B_BvL__92->SetBinContent(1,12699);
   _QuadJet_TripleTag_3B_BvL__92->SetBinContent(2,902);
   _QuadJet_TripleTag_3B_BvL__92->SetBinContent(3,1128);
   _QuadJet_TripleTag_3B_BvL__92->SetBinContent(4,2866);
   _QuadJet_TripleTag_3B_BvL__92->SetBinContent(5,2181);
   _QuadJet_TripleTag_3B_BvL__92->SetBinContent(6,2112);
   _QuadJet_TripleTag_3B_BvL__92->SetBinContent(7,1943);
   _QuadJet_TripleTag_3B_BvL__92->SetBinContent(8,2037);
   _QuadJet_TripleTag_3B_BvL__92->SetBinContent(9,2420);
   _QuadJet_TripleTag_3B_BvL__92->SetBinContent(10,14228);
   _QuadJet_TripleTag_3B_BvL__92->SetEntries(42516);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 42516  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5322");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4034");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_BvL__92->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_BvL__92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_BvL__92->SetLineColor(ci);
   _QuadJet_TripleTag_3B_BvL__92->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_3B_BvL__92->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_3B_BvL__92->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_BvL__92->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_BvL__92->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_BvL__92->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_BvL__92->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_BvL__92->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_BvL__92->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_BvL__92->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_BvL__92->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_BvL__92->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16_3B->Modified();
   BvL_2016_QuadJet_TripleTag_16_3B->cd();
   BvL_2016_QuadJet_TripleTag_16_3B->SetSelected(BvL_2016_QuadJet_TripleTag_16_3B);
}
