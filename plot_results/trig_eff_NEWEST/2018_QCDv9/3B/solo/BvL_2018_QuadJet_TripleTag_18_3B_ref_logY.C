#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_3B_ref_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18_3B_ref/BvL_2018_QuadJet_TripleTag_18_3B_ref
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18_3B_ref = new TCanvas("BvL_2018_QuadJet_TripleTag_18_3B_ref", "BvL_2018_QuadJet_TripleTag_18_3B_ref",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18_3B_ref->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18_3B_ref->Range(-0.2,2.839216,1.133333,5.082266);
   BvL_2018_QuadJet_TripleTag_18_3B_ref->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18_3B_ref->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_3B_ref->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18_3B_ref->SetLogy();
   BvL_2018_QuadJet_TripleTag_18_3B_ref->SetLeftMargin(0.15);
   BvL_2018_QuadJet_TripleTag_18_3B_ref->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_BvL_ref__48 = new TH1D("_QuadJet_TripleTag_3B_BvL_ref__48","",10,0,1);
   _QuadJet_TripleTag_3B_BvL_ref__48->SetBinContent(1,35015);
   _QuadJet_TripleTag_3B_BvL_ref__48->SetBinContent(2,2315);
   _QuadJet_TripleTag_3B_BvL_ref__48->SetBinContent(3,3107);
   _QuadJet_TripleTag_3B_BvL_ref__48->SetBinContent(4,8451);
   _QuadJet_TripleTag_3B_BvL_ref__48->SetBinContent(5,6429);
   _QuadJet_TripleTag_3B_BvL_ref__48->SetBinContent(6,5462);
   _QuadJet_TripleTag_3B_BvL_ref__48->SetBinContent(7,5022);
   _QuadJet_TripleTag_3B_BvL_ref__48->SetBinContent(8,5264);
   _QuadJet_TripleTag_3B_BvL_ref__48->SetBinContent(9,6260);
   _QuadJet_TripleTag_3B_BvL_ref__48->SetBinContent(10,38055);
   _QuadJet_TripleTag_3B_BvL_ref__48->SetEntries(115380);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_3B_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 115380 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.525");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4042");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_BvL_ref__48->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_BvL_ref__48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_BvL_ref__48->SetLineColor(ci);
   _QuadJet_TripleTag_3B_BvL_ref__48->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_3B_BvL_ref__48->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_3B_BvL_ref__48->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_BvL_ref__48->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_BvL_ref__48->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_BvL_ref__48->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_BvL_ref__48->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_BvL_ref__48->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_BvL_ref__48->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_BvL_ref__48->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_BvL_ref__48->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_BvL_ref__48->Draw("HIST");
   BvL_2018_QuadJet_TripleTag_18_3B_ref->Modified();
   BvL_2018_QuadJet_TripleTag_18_3B_ref->cd();
   BvL_2018_QuadJet_TripleTag_18_3B_ref->SetSelected(BvL_2018_QuadJet_TripleTag_18_3B_ref);
}
