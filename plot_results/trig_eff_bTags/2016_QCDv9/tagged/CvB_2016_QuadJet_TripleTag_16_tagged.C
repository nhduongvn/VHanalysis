#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_tagged()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_tagged/CvB_2016_QuadJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_tagged = new TCanvas("CvB_2016_QuadJet_TripleTag_16_tagged", "CvB_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_tagged->Range(-0.2183529,0.6773435,1.171633,0.9262176);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetFillStyle(4000);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15709);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetRightMargin(0.1234783);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetBottomMargin(0.12);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvB__205 = new TH1D("_QuadJet_TripleTag_tagged_CvB__205","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB__205->SetBinContent(1,0.8012085);
   _QuadJet_TripleTag_tagged_CvB__205->SetBinContent(2,0.7445055);
   _QuadJet_TripleTag_tagged_CvB__205->SetBinContent(3,0.7259887);
   _QuadJet_TripleTag_tagged_CvB__205->SetBinContent(4,0.7160121);
   _QuadJet_TripleTag_tagged_CvB__205->SetBinContent(5,0.7714286);
   _QuadJet_TripleTag_tagged_CvB__205->SetBinContent(6,0.7548077);
   _QuadJet_TripleTag_tagged_CvB__205->SetBinContent(7,0.777027);
   _QuadJet_TripleTag_tagged_CvB__205->SetBinContent(8,0.8253012);
   _QuadJet_TripleTag_tagged_CvB__205->SetBinContent(9,0.8641115);
   _QuadJet_TripleTag_tagged_CvB__205->SetBinContent(10,0.8920863);
   _QuadJet_TripleTag_tagged_CvB__205->SetEntries(7.872477);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5147");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2923");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvB__205->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvB__205);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_CvB__205->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvB__205->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_tagged_CvB__205->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_tagged_CvB__205->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__205->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__205->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__205->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_CvB__205->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__205->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__205->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__205->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__205->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__205->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_tagged->Modified();
   CvB_2016_QuadJet_TripleTag_16_tagged->cd();
   CvB_2016_QuadJet_TripleTag_16_tagged->SetSelected(CvB_2016_QuadJet_TripleTag_16_tagged);
}
