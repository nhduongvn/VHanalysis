#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_DoubleTag_16/CvL_2016_QuadJet_DoubleTag_16
//=========  (Tue Apr 25 23:03:07 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_DoubleTag_16 = new TCanvas("CvL_2016_QuadJet_DoubleTag_16", "CvL_2016_QuadJet_DoubleTag_16",0,0,600,600);
   CvL_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   CvL_2016_QuadJet_DoubleTag_16->Range(-0.2183529,0.008335823,1.171633,0.02236561);
   CvL_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   CvL_2016_QuadJet_DoubleTag_16->SetFillStyle(4000);
   CvL_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   CvL_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15709);
   CvL_2016_QuadJet_DoubleTag_16->SetRightMargin(0.1234783);
   CvL_2016_QuadJet_DoubleTag_16->SetBottomMargin(0.12);
   CvL_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_CvL__88 = new TH1D("_QuadJet_DoubleTag_CvL__88","",10,0,1);
   _QuadJet_DoubleTag_CvL__88->SetBinContent(1,0.01051569);
   _QuadJet_DoubleTag_CvL__88->SetBinContent(2,0.01195884);
   _QuadJet_DoubleTag_CvL__88->SetBinContent(3,0.01321765);
   _QuadJet_DoubleTag_CvL__88->SetBinContent(4,0.0143717);
   _QuadJet_DoubleTag_CvL__88->SetBinContent(5,0.01535513);
   _QuadJet_DoubleTag_CvL__88->SetBinContent(6,0.01652444);
   _QuadJet_DoubleTag_CvL__88->SetBinContent(7,0.01790414);
   _QuadJet_DoubleTag_CvL__88->SetBinContent(8,0.01853419);
   _QuadJet_DoubleTag_CvL__88->SetBinContent(9,0.02004924);
   _QuadJet_DoubleTag_CvL__88->SetBinContent(10,0.02044153);
   _QuadJet_DoubleTag_CvL__88->SetEntries(0.1588725);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.558");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2799");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_CvL__88->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_CvL__88);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_CvL__88->SetLineColor(ci);
   _QuadJet_DoubleTag_CvL__88->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_DoubleTag_CvL__88->GetXaxis()->SetRange(1,100);
   _QuadJet_DoubleTag_CvL__88->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL__88->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvL__88->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL__88->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_CvL__88->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL__88->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL__88->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL__88->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvL__88->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL__88->Draw("HIST");
   CvL_2016_QuadJet_DoubleTag_16->Modified();
   CvL_2016_QuadJet_DoubleTag_16->cd();
   CvL_2016_QuadJet_DoubleTag_16->SetSelected(CvL_2016_QuadJet_DoubleTag_16);
}
