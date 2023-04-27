#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18/BvL_2018_QuadJet_TripleTag_18
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18 = new TCanvas("BvL_2018_QuadJet_TripleTag_18", "BvL_2018_QuadJet_TripleTag_18",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18->Range(-0.2,3.185819,1.133333,5.518093);
   BvL_2018_QuadJet_TripleTag_18->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18->SetLogy();
   BvL_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   BvL_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_BvL__38 = new TH1D("_QuadJet_TripleTag_BvL__38","",10,0,1);
   _QuadJet_TripleTag_BvL__38->SetBinContent(1,101699);
   _QuadJet_TripleTag_BvL__38->SetBinContent(2,12967);
   _QuadJet_TripleTag_BvL__38->SetBinContent(3,7943);
   _QuadJet_TripleTag_BvL__38->SetBinContent(4,6218);
   _QuadJet_TripleTag_BvL__38->SetBinContent(5,5411);
   _QuadJet_TripleTag_BvL__38->SetBinContent(6,5249);
   _QuadJet_TripleTag_BvL__38->SetBinContent(7,5368);
   _QuadJet_TripleTag_BvL__38->SetBinContent(8,6157);
   _QuadJet_TripleTag_BvL__38->SetBinContent(9,8117);
   _QuadJet_TripleTag_BvL__38->SetBinContent(10,56427);
   _QuadJet_TripleTag_BvL__38->SetEntries(215556);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 215556 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3907");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4179");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_BvL__38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_BvL__38);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_BvL__38->SetLineColor(ci);
   _QuadJet_TripleTag_BvL__38->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_BvL__38->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_BvL__38->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__38->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__38->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__38->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_BvL__38->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__38->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__38->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__38->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__38->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__38->Draw("HIST");
   BvL_2018_QuadJet_TripleTag_18->Modified();
   BvL_2018_QuadJet_TripleTag_18->cd();
   BvL_2018_QuadJet_TripleTag_18->SetSelected(BvL_2018_QuadJet_TripleTag_18);
}
