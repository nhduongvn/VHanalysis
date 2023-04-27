#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16/BvL_2016_QuadJet_TripleTag_16
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16 = new TCanvas("BvL_2016_QuadJet_TripleTag_16", "BvL_2016_QuadJet_TripleTag_16",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16->Range(-0.2,3.246943,1.133333,5.68131);
   BvL_2016_QuadJet_TripleTag_16->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16->SetLogy();
   BvL_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_BvL__74 = new TH1D("_QuadJet_TripleTag_BvL__74","",10,0,1);
   _QuadJet_TripleTag_BvL__74->SetBinContent(1,144652);
   _QuadJet_TripleTag_BvL__74->SetBinContent(2,17246);
   _QuadJet_TripleTag_BvL__74->SetBinContent(3,9703);
   _QuadJet_TripleTag_BvL__74->SetBinContent(4,7440);
   _QuadJet_TripleTag_BvL__74->SetBinContent(5,6340);
   _QuadJet_TripleTag_BvL__74->SetBinContent(6,6444);
   _QuadJet_TripleTag_BvL__74->SetBinContent(7,6186);
   _QuadJet_TripleTag_BvL__74->SetBinContent(8,7425);
   _QuadJet_TripleTag_BvL__74->SetBinContent(9,9676);
   _QuadJet_TripleTag_BvL__74->SetBinContent(10,60420);
   _QuadJet_TripleTag_BvL__74->SetEntries(275532);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 275532 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3426");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4041");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_BvL__74->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_BvL__74);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_BvL__74->SetLineColor(ci);
   _QuadJet_TripleTag_BvL__74->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_BvL__74->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_BvL__74->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__74->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__74->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__74->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_BvL__74->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__74->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__74->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__74->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__74->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__74->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16->Modified();
   BvL_2016_QuadJet_TripleTag_16->cd();
   BvL_2016_QuadJet_TripleTag_16->SetSelected(BvL_2016_QuadJet_TripleTag_16);
}
