#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16/CvL_2016_QuadJet_TripleTag_16
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16 = new TCanvas("CvL_2016_QuadJet_TripleTag_16", "CvL_2016_QuadJet_TripleTag_16",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16->Range(-0.2183529,0.0590542,1.171633,0.2421259);
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
   
   TH1D *_QuadJet_TripleTag_CvL__169 = new TH1D("_QuadJet_TripleTag_CvL__169","",10,0,1);
   _QuadJet_TripleTag_CvL__169->SetBinContent(1,0.08749882);
   _QuadJet_TripleTag_CvL__169->SetBinContent(2,0.1177853);
   _QuadJet_TripleTag_CvL__169->SetBinContent(3,0.1426315);
   _QuadJet_TripleTag_CvL__169->SetBinContent(4,0.1589389);
   _QuadJet_TripleTag_CvL__169->SetBinContent(5,0.1711122);
   _QuadJet_TripleTag_CvL__169->SetBinContent(6,0.1797522);
   _QuadJet_TripleTag_CvL__169->SetBinContent(7,0.1911007);
   _QuadJet_TripleTag_CvL__169->SetBinContent(8,0.1985236);
   _QuadJet_TripleTag_CvL__169->SetBinContent(9,0.2058023);
   _QuadJet_TripleTag_CvL__169->SetBinContent(10,0.2170189);
   _QuadJet_TripleTag_CvL__169->SetEntries(1.670164);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5649");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2729");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvL__169->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvL__169);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_CvL__169->SetLineColor(ci);
   _QuadJet_TripleTag_CvL__169->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_CvL__169->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_CvL__169->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__169->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__169->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__169->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_CvL__169->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__169->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__169->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__169->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__169->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__169->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16->Modified();
   CvL_2016_QuadJet_TripleTag_16->cd();
   CvL_2016_QuadJet_TripleTag_16->SetSelected(CvL_2016_QuadJet_TripleTag_16);
}
