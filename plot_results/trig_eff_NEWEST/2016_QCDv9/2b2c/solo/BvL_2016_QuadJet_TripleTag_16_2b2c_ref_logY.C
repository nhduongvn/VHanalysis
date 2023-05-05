#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_2b2c_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_2b2c_ref/BvL_2016_QuadJet_TripleTag_16_2b2c_ref
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_2b2c_ref = new TCanvas("BvL_2016_QuadJet_TripleTag_16_2b2c_ref", "BvL_2016_QuadJet_TripleTag_16_2b2c_ref",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_2b2c_ref->Range(-0.2,3.041325,1.133333,5.227595);
   BvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetLogy();
   BvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_BvL_ref__147 = new TH1D("_QuadJet_TripleTag_2b2c_BvL_ref__147","",10,0,1);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->SetBinContent(1,53879);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->SetBinContent(2,9246);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->SetBinContent(3,4928);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->SetBinContent(4,5827);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->SetBinContent(5,4505);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->SetBinContent(6,4103);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->SetBinContent(7,3639);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->SetBinContent(8,4085);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->SetBinContent(9,5392);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->SetBinContent(10,31284);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->SetEntries(126888);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_2b2c_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 126888 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4047");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4027");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_BvL_ref__147->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_BvL_ref__147);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_BvL_ref__147->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_2b2c_BvL_ref__147->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_BvL_ref__147->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL_ref__147->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16_2b2c_ref->Modified();
   BvL_2016_QuadJet_TripleTag_16_2b2c_ref->cd();
   BvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetSelected(BvL_2016_QuadJet_TripleTag_16_2b2c_ref);
}
