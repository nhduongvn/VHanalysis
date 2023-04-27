#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_TripleTag_17()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_TripleTag_17/CvL_2017_QuadJet_TripleTag_17
//=========  (Thu Apr 27 10:19:52 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_TripleTag_17 = new TCanvas("CvL_2017_QuadJet_TripleTag_17", "CvL_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvL_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_TripleTag_17->Range(-0.2183529,0.0125445,1.171633,0.09497869);
   CvL_2017_QuadJet_TripleTag_17->SetFillColor(0);
   CvL_2017_QuadJet_TripleTag_17->SetFillStyle(4000);
   CvL_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   CvL_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15709);
   CvL_2017_QuadJet_TripleTag_17->SetRightMargin(0.1234783);
   CvL_2017_QuadJet_TripleTag_17->SetBottomMargin(0.12);
   CvL_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvL__43 = new TH1D("_QuadJet_TripleTag_CvL__43","",10,0,1);
   _QuadJet_TripleTag_CvL__43->SetBinContent(1,0.02535265);
   _QuadJet_TripleTag_CvL__43->SetBinContent(2,0.03420541);
   _QuadJet_TripleTag_CvL__43->SetBinContent(3,0.04211282);
   _QuadJet_TripleTag_CvL__43->SetBinContent(4,0.04702372);
   _QuadJet_TripleTag_CvL__43->SetBinContent(5,0.05105273);
   _QuadJet_TripleTag_CvL__43->SetBinContent(6,0.05838854);
   _QuadJet_TripleTag_CvL__43->SetBinContent(7,0.06404991);
   _QuadJet_TripleTag_CvL__43->SetBinContent(8,0.07007683);
   _QuadJet_TripleTag_CvL__43->SetBinContent(9,0.07632986);
   _QuadJet_TripleTag_CvL__43->SetBinContent(10,0.08367343);
   _QuadJet_TripleTag_CvL__43->SetEntries(0.5522659);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5922");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2715");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvL__43->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvL__43);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_CvL__43->SetLineColor(ci);
   _QuadJet_TripleTag_CvL__43->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_CvL__43->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_CvL__43->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__43->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__43->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__43->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_CvL__43->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__43->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__43->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__43->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__43->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__43->Draw("HIST");
   CvL_2017_QuadJet_TripleTag_17->Modified();
   CvL_2017_QuadJet_TripleTag_17->cd();
   CvL_2017_QuadJet_TripleTag_17->SetSelected(CvL_2017_QuadJet_TripleTag_17);
}
