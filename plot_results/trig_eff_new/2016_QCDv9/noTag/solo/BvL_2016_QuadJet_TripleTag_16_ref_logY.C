#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_ref/BvL_2016_QuadJet_TripleTag_16_ref
//=========  (Wed Apr 26 16:41:41 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_ref = new TCanvas("BvL_2016_QuadJet_TripleTag_16_ref", "BvL_2016_QuadJet_TripleTag_16_ref",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_ref->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_ref->Range(-0.2,3.919473,1.133333,6.731605);
   BvL_2016_QuadJet_TripleTag_16_ref->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_ref->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ref->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_ref->SetLogy();
   BvL_2016_QuadJet_TripleTag_16_ref->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16_ref->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_BvL_ref__75 = new TH1D("_QuadJet_TripleTag_BvL_ref__75","",10,0,1);
   _QuadJet_TripleTag_BvL_ref__75->SetBinContent(1,1488821);
   _QuadJet_TripleTag_BvL_ref__75->SetBinContent(2,108565);
   _QuadJet_TripleTag_BvL_ref__75->SetBinContent(3,55751);
   _QuadJet_TripleTag_BvL_ref__75->SetBinContent(4,40446);
   _QuadJet_TripleTag_BvL_ref__75->SetBinContent(5,33570);
   _QuadJet_TripleTag_BvL_ref__75->SetBinContent(6,32129);
   _QuadJet_TripleTag_BvL_ref__75->SetBinContent(7,31748);
   _QuadJet_TripleTag_BvL_ref__75->SetBinContent(8,36691);
   _QuadJet_TripleTag_BvL_ref__75->SetBinContent(9,48019);
   _QuadJet_TripleTag_BvL_ref__75->SetBinContent(10,290220);
   _QuadJet_TripleTag_BvL_ref__75->SetEntries(2165960);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2165960");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2214");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3536");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_BvL_ref__75->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_BvL_ref__75);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_BvL_ref__75->SetLineColor(ci);
   _QuadJet_TripleTag_BvL_ref__75->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_BvL_ref__75->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_BvL_ref__75->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL_ref__75->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL_ref__75->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL_ref__75->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_BvL_ref__75->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL_ref__75->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL_ref__75->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL_ref__75->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL_ref__75->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL_ref__75->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16_ref->Modified();
   BvL_2016_QuadJet_TripleTag_16_ref->cd();
   BvL_2016_QuadJet_TripleTag_16_ref->SetSelected(BvL_2016_QuadJet_TripleTag_16_ref);
}
