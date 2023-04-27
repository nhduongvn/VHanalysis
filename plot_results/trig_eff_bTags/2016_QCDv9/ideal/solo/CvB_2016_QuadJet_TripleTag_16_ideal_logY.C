#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_ideal/CvB_2016_QuadJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_ideal = new TCanvas("CvB_2016_QuadJet_TripleTag_16_ideal", "CvB_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_ideal->Range(-0.2,1.546371,1.133333,3.603141);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   CvB_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB__314 = new TH1D("_QuadJet_TripleTag_ideal_CvB__314","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(1,1318);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(2,269);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(3,254);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(4,234);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(5,216);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(6,157);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(7,113);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(8,136);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(9,248);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(10,123);
   _QuadJet_TripleTag_ideal_CvB__314->SetEntries(3068);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3068   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2924");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3087");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB__314->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB__314);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvB__314->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB__314->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB__314->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvB__314->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__314->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__314->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__314->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvB__314->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__314->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__314->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__314->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__314->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__314->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_ideal->Modified();
   CvB_2016_QuadJet_TripleTag_16_ideal->cd();
   CvB_2016_QuadJet_TripleTag_16_ideal->SetSelected(CvB_2016_QuadJet_TripleTag_16_ideal);
}
