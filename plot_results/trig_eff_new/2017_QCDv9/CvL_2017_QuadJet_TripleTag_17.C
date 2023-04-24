#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_TripleTag_17()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_TripleTag_17/CvL_2017_QuadJet_TripleTag_17
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_TripleTag_17 = new TCanvas("CvL_2017_QuadJet_TripleTag_17", "CvL_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvL_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_TripleTag_17->Range(-0.2183529,0.01262959,1.171633,0.09530589);
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
   _QuadJet_TripleTag_CvL__181->SetBinContent(1,0.02547535);
   _QuadJet_TripleTag_CvL__181->SetBinContent(2,0.03429681);
   _QuadJet_TripleTag_CvL__181->SetBinContent(3,0.04231425);
   _QuadJet_TripleTag_CvL__181->SetBinContent(4,0.0472325);
   _QuadJet_TripleTag_CvL__181->SetBinContent(5,0.05140362);
   _QuadJet_TripleTag_CvL__181->SetBinContent(6,0.05830838);
   _QuadJet_TripleTag_CvL__181->SetBinContent(7,0.06437351);
   _QuadJet_TripleTag_CvL__181->SetBinContent(8,0.07028336);
   _QuadJet_TripleTag_CvL__181->SetBinContent(9,0.07652766);
   _QuadJet_TripleTag_CvL__181->SetBinContent(10,0.08396743);
   _QuadJet_TripleTag_CvL__181->SetEntries(0.5541829);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.592");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2716");
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
