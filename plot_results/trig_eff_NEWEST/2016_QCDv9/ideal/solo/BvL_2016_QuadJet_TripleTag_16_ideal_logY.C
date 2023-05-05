#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_ideal/BvL_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_ideal = new TCanvas("BvL_2016_QuadJet_TripleTag_16_ideal", "BvL_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_ideal->Range(-0.2,1.095543,1.133333,3.661941);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   BvL_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL__38 = new TH1D("_QuadJet_TripleTag_ideal_BvL__38","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL__38->SetBinContent(1,594);
   _QuadJet_TripleTag_ideal_BvL__38->SetBinContent(2,45);
   _QuadJet_TripleTag_ideal_BvL__38->SetBinContent(3,90);
   _QuadJet_TripleTag_ideal_BvL__38->SetBinContent(4,275);
   _QuadJet_TripleTag_ideal_BvL__38->SetBinContent(5,213);
   _QuadJet_TripleTag_ideal_BvL__38->SetBinContent(6,196);
   _QuadJet_TripleTag_ideal_BvL__38->SetBinContent(7,186);
   _QuadJet_TripleTag_ideal_BvL__38->SetBinContent(8,206);
   _QuadJet_TripleTag_ideal_BvL__38->SetBinContent(9,221);
   _QuadJet_TripleTag_ideal_BvL__38->SetBinContent(10,1342);
   _QuadJet_TripleTag_ideal_BvL__38->SetEntries(3368);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3368   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6295");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3662");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL__38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL__38);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_BvL__38->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL__38->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL__38->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_BvL__38->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__38->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__38->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__38->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_BvL__38->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__38->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__38->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__38->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__38->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__38->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16_ideal->Modified();
   BvL_2016_QuadJet_TripleTag_16_ideal->cd();
   BvL_2016_QuadJet_TripleTag_16_ideal->SetSelected(BvL_2016_QuadJet_TripleTag_16_ideal);
}
