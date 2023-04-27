#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17_ideal_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17_ideal/BvL_2017_QuadJet_TripleTag_17_ideal
//=========  (Thu Apr 27 10:18:24 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17_ideal = new TCanvas("BvL_2017_QuadJet_TripleTag_17_ideal", "BvL_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17_ideal->Range(-0.2,2.152938,1.133333,4.352679);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetLogy();
   BvL_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL__146 = new TH1D("_QuadJet_TripleTag_ideal_BvL__146","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(1,7164);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(2,1427);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(3,786);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(4,792);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(5,623);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(6,581);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(7,472);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(8,492);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(9,675);
   _QuadJet_TripleTag_ideal_BvL__146->SetBinContent(10,4952);
   _QuadJet_TripleTag_ideal_BvL__146->SetEntries(17964);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 17964  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4247");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   0.41");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL__146->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL__146);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_BvL__146->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL__146->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL__146->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_BvL__146->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__146->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__146->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__146->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_BvL__146->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__146->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__146->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__146->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__146->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__146->Draw("HIST");
   BvL_2017_QuadJet_TripleTag_17_ideal->Modified();
   BvL_2017_QuadJet_TripleTag_17_ideal->cd();
   BvL_2017_QuadJet_TripleTag_17_ideal->SetSelected(BvL_2017_QuadJet_TripleTag_17_ideal);
}
