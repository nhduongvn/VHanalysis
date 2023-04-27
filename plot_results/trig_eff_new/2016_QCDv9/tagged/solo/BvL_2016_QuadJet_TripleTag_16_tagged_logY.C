#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_tagged/BvL_2016_QuadJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:18:38 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_tagged = new TCanvas("BvL_2016_QuadJet_TripleTag_16_tagged", "BvL_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_tagged->Range(-0.2,2.587892,1.133333,4.777548);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetLogy();
   BvL_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_BvL__182 = new TH1D("_QuadJet_TripleTag_tagged_BvL__182","",10,0,1);
   _QuadJet_TripleTag_tagged_BvL__182->SetBinContent(1,19100);
   _QuadJet_TripleTag_tagged_BvL__182->SetBinContent(2,3578);
   _QuadJet_TripleTag_tagged_BvL__182->SetBinContent(3,1986);
   _QuadJet_TripleTag_tagged_BvL__182->SetBinContent(4,2035);
   _QuadJet_TripleTag_tagged_BvL__182->SetBinContent(5,1633);
   _QuadJet_TripleTag_tagged_BvL__182->SetBinContent(6,1514);
   _QuadJet_TripleTag_tagged_BvL__182->SetBinContent(7,1282);
   _QuadJet_TripleTag_tagged_BvL__182->SetBinContent(8,1382);
   _QuadJet_TripleTag_tagged_BvL__182->SetBinContent(9,1895);
   _QuadJet_TripleTag_tagged_BvL__182->SetBinContent(10,11347);
   _QuadJet_TripleTag_tagged_BvL__182->SetEntries(45752);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 45752  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4048");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4024");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_BvL__182->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_BvL__182);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_BvL__182->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_BvL__182->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_tagged_BvL__182->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_BvL__182->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__182->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__182->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__182->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_BvL__182->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__182->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__182->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__182->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__182->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__182->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16_tagged->Modified();
   BvL_2016_QuadJet_TripleTag_16_tagged->cd();
   BvL_2016_QuadJet_TripleTag_16_tagged->SetSelected(BvL_2016_QuadJet_TripleTag_16_tagged);
}
