#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16/CvL_2016_QuadJet_TripleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16 = new TCanvas("CvL_2016_QuadJet_TripleTag_16", "CvL_2016_QuadJet_TripleTag_16",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16->Range(-0.2183529,0.3214856,1.171633,0.5064827);
   CvL_2016_QuadJet_TripleTag_16->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16->SetFillStyle(4000);
   CvL_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15709);
   CvL_2016_QuadJet_TripleTag_16->SetRightMargin(0.1234783);
   CvL_2016_QuadJet_TripleTag_16->SetBottomMargin(0.12);
   CvL_2016_QuadJet_TripleTag_16->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvL__385 = new TH1D("_QuadJet_TripleTag_tagged_CvL__385","",10,0,1);
   _QuadJet_TripleTag_tagged_CvL__385->SetBinContent(1,0.4811117);
   _QuadJet_TripleTag_tagged_CvL__385->SetBinContent(2,0.3502294);
   _QuadJet_TripleTag_tagged_CvL__385->SetBinContent(3,0.369281);
   _QuadJet_TripleTag_tagged_CvL__385->SetBinContent(4,0.3793712);
   _QuadJet_TripleTag_tagged_CvL__385->SetBinContent(5,0.3863965);
   _QuadJet_TripleTag_tagged_CvL__385->SetBinContent(6,0.3876707);
   _QuadJet_TripleTag_tagged_CvL__385->SetBinContent(7,0.3877367);
   _QuadJet_TripleTag_tagged_CvL__385->SetBinContent(8,0.4099483);
   _QuadJet_TripleTag_tagged_CvL__385->SetBinContent(9,0.4077867);
   _QuadJet_TripleTag_tagged_CvL__385->SetBinContent(10,0.4359282);
   _QuadJet_TripleTag_tagged_CvL__385->SetEntries(3.99546);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5028");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2945");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvL__385->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvL__385);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_CvL__385->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvL__385->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_tagged_CvL__385->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_tagged_CvL__385->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__385->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__385->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__385->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_CvL__385->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__385->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__385->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__385->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__385->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__385->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16->Modified();
   CvL_2016_QuadJet_TripleTag_16->cd();
   CvL_2016_QuadJet_TripleTag_16->SetSelected(CvL_2016_QuadJet_TripleTag_16);
}
