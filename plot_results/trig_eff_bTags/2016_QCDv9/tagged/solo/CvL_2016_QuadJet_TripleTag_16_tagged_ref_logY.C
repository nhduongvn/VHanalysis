#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_tagged_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16_tagged_ref/CvL_2016_QuadJet_TripleTag_16_tagged_ref
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16_tagged_ref = new TCanvas("CvL_2016_QuadJet_TripleTag_16_tagged_ref", "CvL_2016_QuadJet_TripleTag_16_tagged_ref",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16_tagged_ref->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16_tagged_ref->Range(-0.2,1.823561,1.133333,3.50021);
   CvL_2016_QuadJet_TripleTag_16_tagged_ref->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16_tagged_ref->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_tagged_ref->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16_tagged_ref->SetLogy();
   CvL_2016_QuadJet_TripleTag_16_tagged_ref->SetLeftMargin(0.15);
   CvL_2016_QuadJet_TripleTag_16_tagged_ref->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvL_ref__195 = new TH1D("_QuadJet_TripleTag_tagged_CvL_ref__195","",10,0,1);
   _QuadJet_TripleTag_tagged_CvL_ref__195->SetBinContent(1,470);
   _QuadJet_TripleTag_tagged_CvL_ref__195->SetBinContent(2,243);
   _QuadJet_TripleTag_tagged_CvL_ref__195->SetBinContent(3,196);
   _QuadJet_TripleTag_tagged_CvL_ref__195->SetBinContent(4,228);
   _QuadJet_TripleTag_tagged_CvL_ref__195->SetBinContent(5,214);
   _QuadJet_TripleTag_tagged_CvL_ref__195->SetBinContent(6,247);
   _QuadJet_TripleTag_tagged_CvL_ref__195->SetBinContent(7,263);
   _QuadJet_TripleTag_tagged_CvL_ref__195->SetBinContent(8,377);
   _QuadJet_TripleTag_tagged_CvL_ref__195->SetBinContent(9,559);
   _QuadJet_TripleTag_tagged_CvL_ref__195->SetBinContent(10,1135);
   _QuadJet_TripleTag_tagged_CvL_ref__195->SetEntries(3932);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3932   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6217");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3283");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvL_ref__195->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvL_ref__195);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvL_ref__195->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvL_ref__195->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_tagged_CvL_ref__195->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvL_ref__195->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL_ref__195->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL_ref__195->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL_ref__195->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvL_ref__195->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL_ref__195->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL_ref__195->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL_ref__195->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL_ref__195->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL_ref__195->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16_tagged_ref->Modified();
   CvL_2016_QuadJet_TripleTag_16_tagged_ref->cd();
   CvL_2016_QuadJet_TripleTag_16_tagged_ref->SetSelected(CvL_2016_QuadJet_TripleTag_16_tagged_ref);
}
