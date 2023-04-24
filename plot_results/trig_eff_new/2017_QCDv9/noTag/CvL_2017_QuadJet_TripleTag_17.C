#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_TripleTag_17()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_TripleTag_17/CvL_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_TripleTag_17 = new TCanvas("CvL_2017_QuadJet_TripleTag_17", "CvL_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvL_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_TripleTag_17->Range(-0.2183529,0.01291153,1.171633,0.09526593);
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
   
   TH1D *_QuadJet_TripleTag_CvL__181 = new TH1D("_QuadJet_TripleTag_CvL__181","",10,0,1);
   _QuadJet_TripleTag_CvL__181->SetBinContent(1,0.02570727);
   _QuadJet_TripleTag_CvL__181->SetBinContent(2,0.0345656);
   _QuadJet_TripleTag_CvL__181->SetBinContent(3,0.04257179);
   _QuadJet_TripleTag_CvL__181->SetBinContent(4,0.04754203);
   _QuadJet_TripleTag_CvL__181->SetBinContent(5,0.05166828);
   _QuadJet_TripleTag_CvL__181->SetBinContent(6,0.05936287);
   _QuadJet_TripleTag_CvL__181->SetBinContent(7,0.06434964);
   _QuadJet_TripleTag_CvL__181->SetBinContent(8,0.07050038);
   _QuadJet_TripleTag_CvL__181->SetBinContent(9,0.0768621);
   _QuadJet_TripleTag_CvL__181->SetBinContent(10,0.08397161);
   _QuadJet_TripleTag_CvL__181->SetEntries(0.5571016);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5914");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2715");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvL__181->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvL__181);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_CvL__181->SetLineColor(ci);
   _QuadJet_TripleTag_CvL__181->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_CvL__181->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_CvL__181->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__181->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__181->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__181->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_CvL__181->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__181->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__181->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__181->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__181->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__181->Draw("HIST");
   CvL_2017_QuadJet_TripleTag_17->Modified();
   CvL_2017_QuadJet_TripleTag_17->cd();
   CvL_2017_QuadJet_TripleTag_17->SetSelected(CvL_2017_QuadJet_TripleTag_17);
}
